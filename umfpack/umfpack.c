#include <stdlib.h>
#include <stdio.h>
#include "umfpack.h"

int    *Ap; 
int    *Ai;
double *Ax; 
double *b; 
double *x; 

/* Generates a sparse matrix problem: 
   A is n x n tridiagonal matrix
   A(i,i-1) = -1;
   A(i,i) = 3; 
   A(i,i+1) = -1; 
*/
void generate_sparse_matrix_problem(int n){
  int i;  /* row index */ 
  int nz; /* nonzero index */
  int nnz = 2 + 3*(n-2) + 2; /* number of nonzeros*/
  int *Ti; /* row indices */ 
  int *Tj; /* col indices */ 
  double *Tx; /* values */ 

  /* Allocate memory for triplet form */
  Ti = malloc(sizeof(int)*nnz);
  Tj = malloc(sizeof(int)*nnz);
  Tx = malloc(sizeof(double)*nnz);

  /* Allocate memory for compressed sparse column form */
  Ap = malloc(sizeof(int)*(n+1));
  Ai = malloc(sizeof(int)*nnz);
  Ax = malloc(sizeof(double)*nnz);

  /* Allocate memory for rhs and solution vector */
  x = malloc(sizeof(double)*n);
  b = malloc(sizeof(double)*n);

  /* Construct the matrix A*/
  nz = 0;
  for (i = 0; i < n; i++){
    if (i > 0){
      Ti[nz] = i;
      Tj[nz] = i-1;
      Tx[nz] = -1;
      nz++;
    }

    Ti[nz] = i;
    Tj[nz] = i;
    Tx[nz] = 3;
    nz++;

    if (i < n-1){
      Ti[nz] = i;
      Tj[nz] = i+1;
      Tx[nz] = -1;
      nz++;
    }
    b[i] = 0;
  }
  b[0] = 21; b[1] = 1; b[2] = 17;
  /* Convert Triplet to Compressed Sparse Column format */
  (void) umfpack_di_triplet_to_col(n,n,nnz,Ti,Tj,Tx,Ap,Ai,Ax,NULL);

  /* free triplet format */ 
  free(Ti); free(Tj); free(Tx);
}


int main (void)
{
    double *null = (double *) NULL ;
    int i, n;
    void *Symbolic, *Numeric ;
    n = 500000;
    generate_sparse_matrix_problem(n);
    (void) umfpack_di_symbolic (n, n, Ap, Ai, Ax, &Symbolic, null, null);
    (void) umfpack_di_numeric (Ap, Ai, Ax, Symbolic, &Numeric, null, null);
    umfpack_di_free_symbolic (&Symbolic);
    (void) umfpack_di_solve (UMFPACK_A, Ap, Ai, Ax, x, b, Numeric, null, null);
    umfpack_di_free_numeric (&Numeric);
    for (i = 0 ; i < 10 ; i++) printf ("x [%d] = %g\n", i, x [i]);
    free(b); free(x); free(Ax); free(Ai); free(Ap);
    return (0);
}
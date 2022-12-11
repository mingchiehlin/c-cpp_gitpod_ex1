#include <iostream>
using namespace std;
class Node{
    public:
        int data;
        Node *left;
        Node *right;
        Node(int d){
            data = d;
            left = NULL;
            right = NULL;
        }
};
void print(Node* node,int c){
	if(node == NULL){
		return;
	}else{
		printf("%d(%d) ", node->data, c);
		print(node->left, c+1);
		print(node->right, c+1);
	}
}
int main(){
    Node* root,*temp;
    int   c=1;
    root = new Node(1);
    /* following is the tree after above statement
     1
    / \
    NULL NULL
    */
    printf("root = %d \n",root->data);
    /* 2 and 3 become left and right children of 1
       1
      / \
     2   3
    / \ / \
    NULL NULL NULL NULL
    */
    temp = new Node(2);
    root->left = temp;
    temp = new Node(3);
    root->right = temp;
    printf("root->left->data  = %d \n",root->left->data);
    printf("root->right->data = %d \n",root->right->data);
    /* 4 becomes left child of 2
         1
       /   \
      2     3
     / \    / \
    4 NULL NULL NULL
    /   \
    NULL NULL
    */
    temp = new Node(4);
    root->left->left = temp;
    printf("root->left->left->data = %d \n",root->left->left->data);
    print(root,c);
    printf("\n");
    return 0;
}

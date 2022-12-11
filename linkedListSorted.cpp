#include <iostream>
#include <cstddef>
using namespace std;
class Node{
    public:
        int data;
        Node *next;
        Node(int d){
            data = d;
            next = NULL;
        }
};
class Unsorted_ll{ // unsorted link list
    public:
          Node* append(Node* node, int data) {
            return NULL;
        };
        void del_node(int data){
          //Write your code here
        };
        void print(Node* node){
          //Write your code here
        }
}; //End of BST
int main() {
  Unsorted_ll ull;
      Node* root = NULL;
      int t;
      int data;
      #if 0 // for unsorted linked list
          input 3 2 1 3
          output 2 1 3
          // for delete function
          input 4 2 1 4 3
                4
          output 2 1 3
      #endif
      #if 0 // for sorted linked list
      input 4 2 1 4 3
      output  1 2 3 4
      #endif

 

      cin >> t;
      while(t-- > 0){
          Node* node;
          cin >> data;
          node=new Node(data);
          ull.append(node, data);
      }
      ull.del_node(4);
      ull.print(root);
      return 0;
}

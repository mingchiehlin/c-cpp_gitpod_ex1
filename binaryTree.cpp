#if 0
## 7
#  3 5 2 1 4 6 7
#           3
#       2        5
#     1       4      6
#                       7
#
## res 3

 

#   9   20  50  35 44  9 15 62  11 13
#                20
#           9       35    50
#              15     44     62
#           11
#              13
## res:    4

 

#    13
##   25  39   12  19  9  23  55  31  60  35  41  70  90
#                      25
#               12               39
#            9       19     31        55
#                        23     35           60
#                                   41            70
#                                                     90
## res 5
#endif
#include <iostream>
#include <cstddef>
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
class BST{ // Binary Search Tree
    public:
          Node* insert(Node* root, int data) {
            return NULL;
        }
        int getHeight(Node* root){
          //Write your code here
          return 1;
        }
}; //End of BST
int main() {
    BST myTree;
    Node* root = NULL;
    int t;
    int data;

 

    cin >> t;

 

    while(t-- > 0){
        cin >> data;
        root = myTree.insert(root, data);
    }
    int height = myTree.getHeight(root);
    //cout << height;
    return 0;
}


/* Structure of a Binary Search Tree node
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};
*/

class Solution {
  public:
    Node* findLCA(Node* root, Node* n1, Node* n2) {
        // code here
        if(root==nullptr)
            return root;
        
        int curr=root->data;
        
        if(curr<n1->data && curr<n2->data)
                return findLCA(root->right ,n1,n2);
        else if(curr>n1->data && curr>n2->data)
                return findLCA(root->left, n1,n2);
        
        return root;
    }
};

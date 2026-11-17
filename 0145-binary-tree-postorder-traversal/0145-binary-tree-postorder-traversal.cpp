/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int> postorderTraversal(TreeNode* root) {
        //2 Stack
        // vector<int> ans;
        // if(root == nullptr) return ans;
        // stack<TreeNode*> st1;
        // stack<TreeNode*> st2;
        // st1.push(root);
        // while(!st1.empty()){
        //     TreeNode* node = st1.top();
        //     st1.pop();
        //     st2.push(node);
        //     if(node->left != nullptr){
        //         st1.push(node->left);
        //     }
        //     if(node->right != nullptr){
        //         st1.push(node->right);
        //     }
        // }
        // while(!st2.empty()){
        //     ans.push_back(st2.top()->val);
        //     st2.pop();
        // }
        // return ans;

        //1Stack
        vector<int> ans;
        stack<TreeNode*> st;
        TreeNode* curr = root;
        TreeNode* lastVisited = nullptr;
        while(curr != nullptr || !st.empty()){
            if(curr != nullptr){
                st.push(curr);
                curr = curr->left;
            }
            else{
                TreeNode* temp = st.top();
                if(temp->right != nullptr && lastVisited != temp->right){
                    curr = temp->right;
                }
                else{
                    ans.push_back(temp->val);
                    lastVisited = temp;
                    st.pop();
                }
            }
        }
        return ans;
    }
};
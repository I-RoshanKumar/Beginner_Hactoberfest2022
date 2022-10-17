/************************************************************

    Following is the TreeNode class structure

    template <typename T>
    class TreeNode {
       public:
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T data) {
            this->data = data;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/
void solve(int level, TreeNode<int>*root, vector<int>&res){
    if(!root)return;
    if(level == res.size()){
        res.push_back(root->data);
    }
    solve(level+1,root->left,res);
    solve(level+1,root->right,res);
}
vector<int> getLeftView(TreeNode<int> *root)
{
    vector<int> res;
    solve(0,root,res);
    return res;
}
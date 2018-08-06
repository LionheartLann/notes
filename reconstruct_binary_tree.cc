
using std::cout;
using std::endl;
struct BinaryTreeNode{
    int value;
    BinaryTreeNode* left;
    BinaryTreeNode* right;
};

void reconstruct_binary_tree(int* preorder, int* inorder, int length){
    BinaryTreeNode root = new BinaryTreeNode();
    int value;
    value = get_current_root(preorder);
    index = get_index(inorder, length, value);
    root->value = value;
    //root->left = get_left();
    //root->right = get_right();

}

int get_current_root(int* preorder){
    if(preorder!=NULL)
        return preorder[0];
    return -1;
}

/*get root node index in inorder
 */
int get_index(int* inorder, int length, int root){
    for(int i=0; i<=length-1;i++){
        if(inorder[i]==root)
            return i;
    }
    return -1;

}

int main(){
    //int* preorder, inorder;
    int preorder[8] = {1,2,4,7,3,5,6,8};
    int inorder[8] = {4,2,7,1,5,3,8,6};
    int length = 8;
}

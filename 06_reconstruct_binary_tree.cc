#include <iostream>
//#include <stdexcept>
using std::cout;
using std::endl;
using std::begin;
using std::end;
//using std::exception;

struct BinaryTreeNode{
    int value;
    BinaryTreeNode* left;
    BinaryTreeNode* right;
};


BinaryTreeNode* ConstructCore(int *startPreorder, int *endPreorder, int *startInorder, int *endInorder){
    // get root node value
    int rootValue = startPreorder[0];
    cout<<"root value:"<<rootValue<<endl;

    BinaryTreeNode *root = new BinaryTreeNode();
    root->value = rootValue;
    root->left = root->right = nullptr;
    // when scans to the last node of left tree, return the node
    if(startInorder == endInorder){
        //cout<<"startPreorder == endInorder: "<<(startPreorder == endInorder)<<endl;
        //cout<<"startPreorder:"<<startPreorder<<"\tendInorder:"<<endInorder<<endl;
        //cout<<"*startPreorder==*startInorder: "<<(*startPreorder==*startInorder)<<endl;
        if(startInorder == endInorder && *startPreorder==*startInorder){
            return root;
        }else{
            throw std::runtime_error("Invalid Input!");
        }
    }

    // locate root node in inorder
    int *rootInorder = startInorder;
    while(rootInorder<=endInorder && *rootInorder !=rootValue)
        ++rootInorder;

    if(rootInorder == endInorder && *rootInorder != rootValue)
        throw std::runtime_error("Invalid Input.");
    int leftLength = rootInorder - startInorder;
    int *leftPreoderEnd = startPreorder + leftLength;
    if(leftLength>0){
        //build left tree
        root->left = ConstructCore(startPreorder+1, leftPreoderEnd, startInorder, rootInorder-1);
    }
        //build right tree
    if(leftLength<endPreorder-startPreorder){
        root->right = ConstructCore(leftPreoderEnd+1, endPreorder, rootInorder+1, endInorder);
    }
    return root;
}

BinaryTreeNode* Construct(int *preorder, int *inorder, int length){
    if(preorder == nullptr || inorder == nullptr || length <=0)
        return nullptr;
    return ConstructCore(preorder, preorder+length-1, inorder, inorder+length-1);
    //return ConstructCore(begin(preorder), end(preorder), begin(inorder), end(inorder));// end() points to one after last element, should not use in here
}



int main(){
    int preorder[] = {1,2,4,7,3,5,6,8};
    int inorder[] = {4,2,7,1,5,3,8,6};
    cout<<*begin(preorder)<<endl;
    //cout<<*end(preorder)<<endl;
    auto length = sizeof(preorder)/sizeof(*preorder);
    //auto length = std::size(preorder); // C++17
    cout<<"size of input array:"<<length<<endl;
    Construct(preorder, inorder, length);
    return 0;
}

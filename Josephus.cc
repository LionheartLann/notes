#include <iostream>
using std::cin;
using std::cout;
using std::endl;

struct LinkedList{
    int val;
    LinkedList *next;
};

int main(){
    int N=0;
    cout<<"please input N"<<endl;
    cin>>N;
    // how to judge N is instance of int?
    try{
        if(!(N-0))
            throw std::runtime_error("N must be positive");
    }catch(std::exception){
        throw std::runtime_error("N must be an int");
    }
    // input N and construct LinkedList
    //cout<<"input N val"<<endl;
    LinkedList *p = nullptr;
    LinkedList *head=nullptr;// new LinkedList;
    for(int i=0; i<=N-1; i++){
        if(i==0){
            head= new LinkedList;
            head->val=i;
            head->next = nullptr;
            p = head;
        }else if(i==N-1){
            LinkedList *node= new LinkedList;
            //LinkedList node;// how to declare a node?
            node->val=i;
            node->next = nullptr;
            p->next = node;
            p = node;
            p->next = head;// point to head to circle
        }else{
            LinkedList *node= new LinkedList;
            //LinkedList node;// how to declare a node?
            node->val=i;
            node->next = nullptr;
            p->next = node;
            p = node;
        }
    }
    cout<<"print circular single linked list"<<endl;
    for(int i=0; i<=N-1; i++){
        cout<<p->val<<endl;
        p = p->next;
    }
}

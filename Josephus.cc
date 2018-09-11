#include <iostream>
#include <typeinfo>
using std::cin;
using std::cout;
using std::endl;

struct LinkedList{
    int val;
    LinkedList *next;
};

int main(){
    int N=0, S=0, M=0;
    cout<<"please input N, S, M"<<endl;
    cin>>N>>S>>M;

    // how to judge N is instance of int?
    cout<<typeid(N).name()<<endl;
    cout<<(typeid(N)==typeid(1))<<endl;
    if(N<0 || S<0 || M<0){
        throw std::runtime_error("N&&S&&M must be positive");
    }
    if(S>=N || M>N){
        throw std::runtime_error("S&&M must be within range");
    }
    //try{
    //    if(N<0){
    //        cout<<"N must be positive"<<endl;
    //        throw std::exception();//runtime_error("N must be positive");
    //    }
    //}catch(std::exception){
    //    throw std::runtime_error("N must be an positive int");
    //}
    
    // input N and construct LinkedList
    //cout<<"input N val"<<endl;
    LinkedList *p = nullptr;
    LinkedList *head=nullptr;// new LinkedList;
    for(int i=1; i<=N; i++){
        if(i==1){
            head= new LinkedList;
            head->val=i;
            head->next = nullptr;
            p = head;
        }else if(i==N){
            LinkedList *node= new LinkedList;
            //LinkedList node;// how to declare a node?
            node->val=i;
            node->next = nullptr;
            p->next = node;
            p = node;
            p->next = head;// point to head to circle
            p = p->next;
        }else{
            LinkedList *node= new LinkedList;
            //LinkedList node;// how to declare a node?
            node->val=i;
            node->next = nullptr;
            p->next = node;
            p = p->next;
        }
    }
    cout<<"print circular single linked list"<<endl;
    for(int i=1; i<=N; i++){
        cout<<p->val<<endl;
        p = p->next;
    }
    // locate S, set p to S
    for(int i=1; i<=N; i++){
        if(p->val==S){
            break;
        }
        p = p->next;
    }
    cout<<"start from:\t"<<p->val<<endl;
    // delete M
    int i=1;
    while(p->next!=p){// delete until one left
        i++;
        p = p->next;
        if(i==M-1){
            cout<<"delete:\t"<<p->next->val<<endl;
            p->next = p->next->next;
            i = 1;
            p=p->next;
            continue;
        }
    }
    cout<<"suvivor:\t"<<p->val<<endl;


}

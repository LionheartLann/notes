#include <iostream>

using std::cin;
using std::cout;
using std::endl;

struct ListNode{
    int val;
    ListNode* next;
};

ListNode* get_kth(ListNode* head, unsigned int k){
    if(head==nullptr || k <=0){
        cout<<"NULL"<<endl;
        return NULL;
    }
    ListNode* p = head;
    for(int i=1; i<=k-1; i++){
        if(head->next){
            head = head->next;
        }else{
            cout<<"NULL"<<endl;
            return NULL;
        }
    }
    while(head->next){
        p = p->next;
        head = head->next;
    }
    cout<<"kth in reverse:"<<p->val<<endl;
    return p;

}

int main(){
    // create
    int N=0, k=0;
    cout<<"please input N,k"<<endl;
    cin>>N>>k;
    
    ListNode *head = new ListNode;
    ListNode* h = head;
    head->val = 1;
    head->next = nullptr;
    for(int i=2; i<=N; i++){
        ListNode *node = new ListNode;
        node->val = i;
        node->next = nullptr;
        head->next = node;
        head = node;
    }

    // print 
    ListNode* p = h;
    while(p->next){
        cout<<p->val<<endl;
        p = p->next;
    }
    cout<<p->val<<endl;

    get_kth(h, k);

    return 0;

}

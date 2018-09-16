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

ListNode* reverse_LinkedList(ListNode* head){
    if(head == nullptr || head->next == nullptr){
        return head;
    }
    ListNode* p1=head, *p2=head->next;
    head = p2;
    p1->next=NULL;// very important!!! point last element of linked list to NULL
    while(head->next){
        head=head->next;
        p2->next=p1;
        p1=p2;
        p2=head;
    }
    p2->next=p1;
    return p2;

}

ListNode* print_LinkedList(ListNode* head){
    // print 
    if(head == nullptr){
        return head;
    }
    ListNode* p = head;
    while(p->next){
        cout<<p->val<<endl;
        p = p->next;
    }
    cout<<p->val<<endl;
    return head;
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
    head->next=NULL;
    head = h;
    cout<<"original linked list:"<<endl;
    print_LinkedList(head);
    // get kth in reverse order
    get_kth(head, k);
    // reverse list
    head=reverse_LinkedList(head);
    cout<<"reversed linked list:"<<endl;
    print_LinkedList(head);

    return 0;

}

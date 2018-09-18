#include <iostream>

using std::cin;
using std::cout;
using std::endl;

struct ListNode{
    int val;
    ListNode* next;
};

//iteration
ListNode* iter_merge(ListNode* l1, ListNode* l2){
    if(l1==nullptr)
        return l2;
    if(l2==nullptr)
        return l1;
    ListNode* l3=nullptr;
    if(l1->val<l2->val){
        l3=l1;
        l3->next=iter_merge(l1->next,l2);
    }else{
        l3=l2;
        l3->next=iter_merge(l1,l2->next);
    }
    return l3;
}

// non iteration
ListNode* merge(ListNode* l1, ListNode* l2){
    if(l1==nullptr)
        return l2;
    if(l2==nullptr)
        return l1;
    ListNode* l3=nullptr;
    ListNode* p=l3;
    while(l1&&l2){
        cout<<"=====debug====="<<endl;
        if(l1->val<=l2->val){
        cout<<"=====if====="<<endl;
            p->next=l1;
            l1=l1->next;
        }else{
        cout<<"=====else====="<<endl;
            p->next=l2;
            l2=l2->next;
        }
        p=p->next;
    }
    if(l1==nullptr){
        p->next=l2;
    }
    if(l2==nullptr){
        p->next=l1;
    }
    return l3->next;
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

ListNode* create_linkedlist_from_cin(){
    int i=0;
    ListNode* h = nullptr;
    ListNode* p = h;
    while(cin>>i){
        ListNode* node = new ListNode;
        node->val = i;
        p->next = node;
    }
    return h;
}
int main(){
    //cout<<"input l1"<<endl;
    //ListNode* l1=create_linkedlist_from_cin();
    ListNode *head = new ListNode;
    ListNode* l1 = head;
    head->val = 1;
    head->next = nullptr;
    for(int i=3; i<=10; i++){
        ListNode *node = new ListNode;
        node->val = i;
        node->next = nullptr;
        head->next = node;
        head = node;
        i++;//1 3 5 7
    }
    print_LinkedList(l1);

    ListNode *head2 = new ListNode;
    ListNode* l2 = head2;
    head2->val = 2;
    head2->next = nullptr;
    for(int i=4; i<=20; i++){
        ListNode *node = new ListNode;
        node->val = i;
        node->next = nullptr;
        head2->next = node;
        head2 = node;
        i++;// 2 4 6
    }

    //cout<<"input l2"<<endl;
    //ListNode* l2=create_linkedlist_from_cin();
    print_LinkedList(l2);
    cout<<"print l3"<<endl;
    ListNode* l3=iter_merge(l1,l2);
    print_LinkedList(l3);
}

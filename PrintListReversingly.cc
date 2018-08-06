#include <iostream>
#include <stack>
using std::stack;
using std::cout;
using std::endl;
struct ListNode{
    int value;
    ListNode* next;
};
void PrintListReversingly(ListNode* Head){
    ListNode* p = Head;
    stack<ListNode*> nodes;
    while(p!=NULL){
        nodes.push(p);
        p = p->next;
    }
    while(!nodes.empty()){
        p = nodes.top();
        cout<<p->value<<endl;
        nodes.pop();
    }
}
int main(){
    int i = 0;
    ListNode* Head = NULL;
    ListNode* p = new ListNode();
    //p->value = i;
    //p->next = NULL;
    Head = p;
    while(i<=10){
        ListNode* p1 = new ListNode();
        if(p == NULL)
            p = p1;
        p1->value = i;
        p1->next = NULL;
        p->next = p1;
        p = p->next;
        i++;
        //cout<<i<<endl;
    }
    PrintListReversingly(Head);
    return 0;
    
}

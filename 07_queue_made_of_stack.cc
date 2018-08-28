#include <iostream>
#include <stack>
using std::cout;
using std::endl;
using std::stack;

template <typename T> class CQueue{
    public:
        CQueue(void);
        ~CQueue(void);

        void appendTail(const T& node);
        T deleteHead();

    private:
        stack<T> stack1;
        stack<T> stack2;

};

template<typename T> void CQueue<T>::appendTail(const T& node){
    if(stack2.size()==0)
        stack2.push(node);
    // check stack1, should be empty
    if(stack1.size() != 0)
        throw std::runtime_error("stack 1 ought to be null!");
    // move stack2 to stack1, revise order
    T tmp = new CQueue();
    while(stack2.size()>0){
        tmp = stack2.pop();
        stack1.push(tmp);
    }
    // push new node to the bottom of stack2
    stack2.push(node);
    // move back nodes from stack1 to stack2
    while(stack1.size()>0){
        tmp = stack1.pop();
        stack2.push(tmp);
    }
}

template<typename T> T CQueue<T>::deleteHead(){
    return stack2.pop();
}

int main(){
    const CQueue<T> new_node = new CQueue();
    appendTail(new_node);
}

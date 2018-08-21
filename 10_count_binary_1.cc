#include <iostream>
//#include <ctime>
#include <stack>
#include <vector>
using std::cin;
using std::cout;
using std::endl;
using std::stack;
using std::vector;
/*
 * step 1: decimal to binary
 * step 2: count 1
 * notice: signed int,
 * notice: store binary number using stack
 */ 

vector<int> int_to_binary(int t){
    vector<int> binary_number;
    int schema=2;
    std::stack<int> binary_number_stack;
    int mod = 0, remain = 0;
    while(mod !=0){
        mod = t/schema;
        remain = t%schema;
        binary_number_stack.push(remain);
        t = mod;
    }
    while(!binary_number_stack.empty()){
        //int i = binary_number_stack.pop();
        //cout<<i<<endl;
        // how to pop a element from stack and push_back to a vector???
        binary_number.push_back(binary_number_stack.pop());
    }
    return binary_number;
}

int main(){
    int target = 9, count=0;
    vector<int> binary_number=int_to_binary(target);
    for(auto &r:binary_number){
        if(r==1)
            count +=1;
    }
    cout<<"number:"<<target<<"\tcount:"<<count<<endl;
    return count;
}



#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int fibonacci(int n){
    if(n==0)
        return 0;
    if(n==1 || n==2)
        return 1;
    return fibonacci(n-1)+fibonacci(n-2);
}

int main(){
    int n = 0, val=0;
    cin>>n;
    if(n<0)
        return -1;
    val = fibonacci(n);
    cout<<val<<endl;
    return val;
}


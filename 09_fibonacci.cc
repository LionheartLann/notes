#include <iostream>
using std::cin;
using std::cout;
using std::endl;

// bad o(2^n)
int fibonacci(int n){
    if(n==0)
        return 0;
    if(n==1 || n==2)
        return 1;
    return fibonacci(n-1)+fibonacci(n-2);
}

int f(int n){

    if(n==0)
        return 0;
    if(n==1 || n==2)
        return 1;
    int p1 = 1;
    int p2 = 1;
    int target = 0;
    for(int i=3; i<=n; i++){
        target = p1 + p2;
        p1 = p2;
        p2 = target;
    }
    return target;

}

int main(){
    int n = 0, val=0;
    cin>>n;
    if(n<0)
        return -1;
    val = f(n);
    cout<<val<<endl;
    return val;
}


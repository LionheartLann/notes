#include <iostream>
#include <ctime>
using std::cin;
using std::cout;
using std::endl;

// bad o(2^n)
long fibonacci(long n){
    if(n==0)
        return 0;
    if(n==1 || n==2)
        return 1;
    return fibonacci(n-1)+fibonacci(n-2);
}

long f(long n){

    if(n==0)
        return 0;
    if(n==1 || n==2)
        return 1;
    long p1 = 1;
    long p2 = 1;
    long target = 0;
    for(long i=3; i<=n; i++){
        target = p1 + p2;
        p1 = p2;
        p2 = target;
    }
    return target;

}

int main(){
    std::time_t start = std::time(nullptr);
    long n = 50, val=0;
    //cin>>n;
    if(n<0)
        return -1;
    val = f(n);
    cout<<val<<endl;
    std::time_t end = std::time(nullptr);
    cout<<"Time:\t"<<end-start<<endl;
    return val;
}


#include <iostream>
#include <ctime>
using std::cin;
using std::cout;
using std::endl;

long fibonacci(long n){
    if(n==0)
        return 0;
    if(n==1 || n==2)
        return 1;
    return fibonacci(n-1)+fibonacci(n-2);
}

int main(){
    std::time_t start = std::time(nullptr);
    long n = 50, val=0;
    //cin>>n;
    if(n<0)
        return -1;
    val = fibonacci(n);
    cout<<val<<endl;
    std::time_t end = std::time(nullptr);
    cout<<"Time:\t"<<end-start<<endl;
    return val;
}


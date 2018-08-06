#include <iostream>
using std::cout;
using std::cin;
using std::cerr;
using std::clog;
using std::endl;
/*
 * useing namespace::name;
 * learnt << and >> operator
 * endl is a manipulate
 * return value 0 is regard as success
 */
int main(){
    cout<<"Hola! input two numbers:"<<endl;
    int v1=0, v2=0, sum=0, a=0, b=0, value=0;
    cin>>v1>>v2;
    cout<<"v1:"<<v1<<endl;
    cout<<"v2:"<<v2<<endl;
    //if(v1<v2){
    //    int tmp = v1;
    //    v1 = v2;
    //    v2 = tmp;
    //}
    //while(v1>v2){
    //    cout<<v2<<endl;
    //    v2++;
    //}
    a = v1++;
    b = ++v2;
    cout<<"a:"<<a<<endl;
    cout<<"b:"<<b<<endl;
    cout<<"v1:"<<v1<<endl;
    cout<<"v2:"<<v2<<endl;
    for(int i=0; i<=10;i++){
        cout<<"i:"<<i<<endl;
    }
    while(cin>>value)
        sum += value;
    cout<<sum<<endl;
    return 0;
}



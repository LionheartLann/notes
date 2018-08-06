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
    cout<<"Hola! input two numbers:";
    cout<<endl;
    int v1=0, v2=0, sum=0;
    cin>>v1>>v2;
    clog<<"add:"<<v1+v2;
    cout<<endl;
    clog<<"multiplication:"<<v1*v2;
    cout<<endl;
    //cout<<"/*";
    //cout<<endl;
    //cout<<"*/";
    //cout<<endl;
    //cout<</*"*/"/*"/*"*/;
    //cout<<endl;
    cout<<"v1"<<endl;
    //while(v1<=10){
    //    sum += v1;
    //    ++v1;
    //    cout<<v1<<endl;
    //} 
    //cout<<"sum:"<<sum<<endl;
    cout<<"v2"<<endl;
    if(v1<v2){
        int tmp = v1;
        v1 = v2;
        v2 = tmp;
    }
    while(v1>v2){
        cout<<v2<<endl;
        v2++;
    }
    return 0;
}

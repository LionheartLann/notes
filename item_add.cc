#include <iostream>
#include <string>
#include "GCC_4_7_0/1/Sales_item.h"
using std::cin;
using std::cout;
using std::cerr;
using std::endl;
using std::string;

int main(){
    Sales_item total;
    cout<<"input books:"<<endl;
    if(cin>>total){
        Sales_item book;
        while(cin>>book){
            if(book.isbn()==total.isbn()){
                total+=book;
            }else{
                cout<<total<<endl;
                total=book;
            }
        }
    cout<<"total sum:"<<total<<endl;
    }
    else{
        cerr<<"no input?"<<endl;
        return -1;
    }
    /*
     * below are test codes for other purpose
     */
    //test whether i would be convert to bool
    int i=42;
    if(i)
        cout<<"i is :"<<i<<endl;//output 42
    //unsigned char c = -2;
    //cout<<"c is :"<<c<<endl;
    //i = c;
    //cout<<"i=c,i is :"<<i<<endl;//output 254, 原码10000010, 反码11111101, 补码11111110
    // -2 原码10000010  反码 补码
    //
    unsigned u =10,u2=42;
    int i1=42;
    i = 10;
    cout<<"u-u2"
        ":"<<u-u2<<endl;//2^32 - 32
    cout<<"i-u2:"<<i-u2<<endl;
    int a;
    float b;
    char c;
    double d;
    long long v;

    cout<<"uninitialized a, b, c:"<<a<<b<<c<<endl;
    //cout<<"cin test"<<endl;
    //cin>>int e;// error
    
    //why error?
    //int f{3};
    int g(3.14);// only warnings
    int h = {3.14};
    int j = 3.14;
    int _(0);
    cout<<"_ is:"<<_<<endl;
    double salary =99.99, wage=999.9999;

    string empty;
    cout<<"empty string:"<<empty<<endl;

    //test in scope
    for(int i=0;i<10;i++)
        cout<<i<<endl;

    //test references
    int k=0, &r1=k;
    double l = 9.99, &r2=d;
    r2=3.14;
    r2=r1;
    i=r2;
    r1=d;

    // test const pointer/ const reference
    int m =-1, &r3=m;
    //int  *const p2 = &i2;
    const int i2=-1, &r=0;
    return 0;
}


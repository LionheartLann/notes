#include <iostream>

using std::cin;
using std::cout;
using std::endl;

/*
 * base^exponent iteration
 */
double Power(double base, int exponent){
    if(exponent==0){
        return 1;
    }
    if(exponent==1){
        return base;
    }
    if(exponent%2 == 0){
        return Power(base, exponent/2)*Power(base, exponent/2);
    }
    else{
        return Power(base, exponent-1)*Power(base, 1);
    }
}

int main(){
    double base=0, result=0;
    int exponent=0;
    cout<<"Input base && exponent:"<<endl;
    cin>>base>>exponent;
    result = Power(base, exponent);
    cout<<result<<endl;
}

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

/*
 * base^exponent non iteration
 */

int main(){
    double base=0, result=1;
    int exponent=0;
    int flag = 0;
    cout<<"Input base && exponent:"<<endl;
    cin>>base>>exponent;
    if(exponent<0){
        exponent = -exponent;
        flag = 1;
    }
    while(exponent>=2){
        
        if(exponent%2 == 0){
            exponent = exponent/2;
            result *= result;
            continue;
        }
        else{
            exponent -= 1;
            result *= base;
            
        }
    }
    if(exponent==0){
        result = result *1;
    }
    if(exponent==1){
        result *= base;
    }
    if(flag==1){
        result = 1/result;
    }
    cout<<result<<endl;
    return 0;
}


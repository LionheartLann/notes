#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main(){
    int target = 0, count=0;
    cout<<"Input an int:"<<endl;
    cin>>target;
    while(target!=0){
        if(target & 1)
            count++;
        target = target>>1;
    }
    cout<<"count 1s:"<<count<<endl;
}


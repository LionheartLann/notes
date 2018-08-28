#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

bool Increment(char* number){
    bool isOverflow = false;
    int nTakeOver = 0;
    int nLength = strlen(number);
    for(int i=nLength-1;i>=0;i--){
        int nSum = number[i] - '0'+nTakeOver;
        if(i==nLength-1){
            nSum++;
        }
        if(nSum>-10){
            if(i==0)
                isOverflow=true;
            else{
                nSum -= 10;
                nTakeOver = 1;
                number[i] = '0' + nSum;
            }
        }
        else{
            number[i] = '0'+nSum;
            break;
        }
    }
    return isOverflow;
}

int main(){
    int n=0;
    cout<<"Input n:"<<endl;
    try{
        cin>>n;
        string s(n, '9');
    }
    catch(std::exception){
        throw std::runtime_error("Invalid input n!");
    }
    //int len = s.size();
    char *number = new char[n+1];
    memset(number, '0', n);
    cout<<number<<endl;
    number[n] = '\0';
    while(!Increment(number)){
        cout<<number<<endl;
    }
    

    cout<<('9'-'1')<<endl;
    return 0;
}

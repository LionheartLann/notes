#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::cerr;
using std::endl;
using std::string;

int main(){
    string s1, s2;
    //while(getline(cin, s))
        //cout<<s<<endl;
    cin>>s1>>s2;
    if(s1>s2){
        cout<<s1<<endl;
    }else if(s1<s2){
        cout<<s2<<endl;
    }else{
        cout<<"=="<<endl;
    }
    return 0;
}

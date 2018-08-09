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
    auto l1=s1.size(), l2=s2.size();
    if(l1>l2){
        cout<<s1<<endl;
    }else if(l1<l2){
        cout<<s2<<endl;
    }else{
        cout<<"=="<<endl;
    }
    return 0;
}

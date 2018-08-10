#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::cerr;
using std::endl;
using std::string;

int main(){
    //string s1, s2;
    //cin>>s1>>s2;
    //auto l1=s1.size(), l2=s2.size();
    //if(l1>l2){
    //    cout<<s1<<endl;
    //}else if(l1<l2){
    //    cout<<s2<<endl;
    //}else{
    //    cout<<"=="<<endl;
    //}

    //string s, big_string;
    //while(cin>>s)
        //big_string+=s;
        //big_string+=' ';
    const string big_string(10,'d');
    cout<<big_string<<endl;
    for (auto &c:big_string){
        //c = toupper(c);
        //c = 'X';// cannot be ""
        cout<<c<<endl;
    }
    cout<<big_string<<endl;
    string b;
    cout<<b.empty()<<endl;
    cout<<b[0]<<endl;
    //string d(b[0]);
    return 0;
}

#include <iostream>
#include <string>
#include <vector>
using std::cin;
using std::cout;
using std::cerr;
using std::endl;
using std::string;
using std::vector;

int main(){
    vector<string> svec;
    string word;
    while(getline(cin,word))
        svec.push_back(word);
    //while(cin>>word)
    //    svec.push_back(word);
        
    //cout<<v8<<endl;
    //for (auto &r:svec)
        //cout<<r<<endl;

    // begin end
    auto b = svec.begin();
    auto e = svec.end();
    cout<<*b<<endl;
    b++;
    cout<<*b<<endl;
    ++b;
    cout<<*b<<endl;

    //text input test
    cout<<"size of vector is:"<<svec.size()<<endl;
    for(auto it=svec.cbegin(); it!=svec.cend() && !it->empty(); it++)
        cout<<(*it)<<endl;

    return 0;
}


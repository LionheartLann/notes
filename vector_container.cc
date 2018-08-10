#include <iostream>
#include <string>
#include <vector>
using std::cin;
using std::cout;
using std::cerr;
using std::endl;
//using std::uppercase;
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
    cout<<"=======original text======="<<endl;
    for(auto it=svec.cbegin(); it!=svec.cend(); it++)
        cout<<(*it)<<endl;

    cout<<"=======uppercase text======="<<endl;
    for(auto it=svec.begin(); it!=svec.end() && !it->empty(); it++){
        for(auto &i:(*it)){
            (i) = toupper(i);
            //cout<<i<<endl;
        }
        cout<<(*it)<<endl;
    }
    return 0;
}


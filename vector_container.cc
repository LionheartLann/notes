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

int string_vector(){

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

vector<int> create_int_vector(){
    // E3.23 doule the int vector
    cout<<"=======double the int vector======="<<endl;
    vector<int> ivec;
    for(int i=0; i<=10; i++){
        ivec.push_back(i);
    }
    for(auto it=ivec.begin(); it!=ivec.end();it++){
        (*it)=(*it)*2;
    }

    for(auto it=ivec.cbegin(); it!=ivec.cend();it++){
        cout<<*it<<endl;
    }
    return ivec;
}

int binary_search(vector<int> ivec){
    // binary search by vector
    auto left = ivec.cbegin();
    auto right = ivec.cend();
    //decltype(ivec.cbegin()) target;
    int target;
    cout<<"please input a target:"<<endl;
    cin>>target;
    while(left<=right){
        auto mid = left + (right-left)/2;
        if(*mid<target){
            left = mid + 1;
        }else if(*mid>target){
            right = mid -1;
        }else{
            cout<<"========Found Target======="<<endl;
            cout<<*mid<<endl;
            return *mid;
        }
    }
    cout<<"not found:"<<target<<endl;
    return -1;
}



int main(){
    vector<int> ivec;
    ivec = create_int_vector();
    binary_search(ivec);
    return 0;
}

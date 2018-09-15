#include <iostream>
#include <vector>
using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main(){
    vector<int> a;
    int i=0;
    cout<<"input int vector"<<endl;
    while(cin>>i){
        a.push_back(i);
    }
    for(auto &r:a){
        cout<<r<<endl;
    }
    // 1234567 -> 1357246
    //vector<int>* p1, p2; 

    unsigned int len=1;
    cout<<"a.size() is :"<<a.size()<<endl;
    if(a.size()<=len){
        return 0;
    }
    int p1=0, p2=a.size()-1;
    int t=0;
    while(p1<=p2){
        cout<<"p1:\t"<<p1<<"\tp2:\t"<<p2<<endl;
        if((a[p1]&1)==1){//odd
            p1++;
        }else{// p1 is even
            // p2 look for an odd 
            if((a[p2]&1)==1){
                //swap p1 p2
                t = a[p1];
                a[p1] = a[p2];
                a[p2] = t;
                p2--;
            }else{// p2 is even
                p2--;
            }
        }
    }
    for(auto &r:a){
        cout<<r<<endl;
    }
    return 0;
}

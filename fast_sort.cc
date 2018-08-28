#include <iostream>
#include <vector>
using std::cin;
using std::cout;
using std::endl;
using std::vector;

vector<int> get_input(){
    vector<int> input;
    int t=0;
    while(cin>>t)
        input.push_back(t);

    for(auto &r:input)
        cout<<r<<"\t";
    cout<<endl;
    return input;
}

int get_target(){
    int target = 0;
    cout<<"input a target: "<<endl;
    cin>>target;
    return target;
}

//vector<int> quick_sort(vector<int> input){ // pass value is not good
vector<int> quick_sort(vector<int> *input){
   return *input; 
}

int main(){
    vector<int> input = get_input();
    vector<int> *p = &input;
    //int target = get_target();
    quick_sort(p);
    

    return 0;
}

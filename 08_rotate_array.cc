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
vector<int> rotate_array(vector<int> *input){
   return *input; 
}

int main(){
    vector<int> input = get_input();
    //vector<int> *p = &input;
    //int target = get_target();
    int len = input.size();
    if(input.empty() || len == 0)
        throw std::runtime_error("input invalid");
    int start = 0;
    int end = len -1;
    int mid;
        cout<<"start:\t"<<start<<endl;
        cout<<"end:\t"<<end<<endl;
    while(start<=end) {
        mid = (start + end)/2;
        cout<<"mid:\t"<<mid<<endl;
        if(0<=mid-1<=len-1 && input[mid]<input[mid-1]){
            cout<<"return "<<mid<<"\t"<<input[mid]<<endl;
            return input[mid];
        }
        
        if(input[mid] > input[end])
            start = mid + 1;
        else if(input[mid] < input[start])
            end = mid - 1;
        else{
            cout<<"return start\t"<<input[start]<<endl;
            return input[start];
        }
        cout<<"start:\t"<<start<<endl;
        cout<<"end:\t"<<end<<endl;
    }
    

    return -1;
}

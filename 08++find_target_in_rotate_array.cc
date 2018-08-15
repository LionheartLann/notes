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

int main(){
    vector<int> input = get_input();

    //int target = get_target();
    int target =4;

    int len = input.size();
    if(input.empty() || len == 0)
        throw std::runtime_error("input invalid");
    int start = 0;
    int end = len -1;
    int mid = 0;
    while(start<=end) {

        cout<<"======="<<endl;
    cout<<endl;
    for(int i=start; i<=end; i++)
        cout<<input[i]<<"\t";
    cout<<endl;
        cout<<"start:\t"<<start<<endl;
        cout<<"end:\t"<<end<<endl;
        mid = (start + end)/2;
        cout<<"mid:\t"<<mid<<endl;

        if(input[mid]==target){
            cout<<"return "<<mid<<"\t"<<input[mid]<<endl;
            return input[mid];
        }

        // 7 8 9 1 2 3 4 5 6 后半段递增
        // target in latter
        if(input[mid]<input[end] && input[mid]<target && target<=input[end]){
            //cout<<"input[mid]<target<=input[end]"<<(input[mid]<target<=input[end])<<endl;
            //cout<<"input[mid]<target"<<(input[mid]<target)<<endl;
            //cout<<"target<=input[end]"<<(target<=input[end])<<endl;

            cout<<"the latter array increasing, target in the latter"<<endl;
            start = mid + 1;
            continue;
        }
        // target in former
        //else if(input[mid]<input[end] && input[start]<=target <input[mid]){
        else if(input[mid]<input[end]){// && input[start]<=target <input[mid]){
            cout<<"the latter array increasing, target in the former"<<endl;
            end = mid - 1;
            continue;
        }
        // 5 6 7 8 9 1 2 3 4  前半段递增
        // target in former
        if(input[start]<input[mid] && input[start]<=target && target<input[mid]){
            cout<<"the formmer array increasing, target in the former"<<endl;
            end = mid - 1;
            continue;
        }
        // target in latter
        //else if(input[start]<input[mid] && input[mid]<target <= input[end]){
        else if(input[start]<input[mid]){// && input[mid]<target <= input[end]){
            cout<<"the formmer array increasing, target in the latter"<<endl;
            start = mid + 1;
            continue;
        }
    }
    

    return 0;
}

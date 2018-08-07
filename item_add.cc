#include <iostream>
#include "GCC_4_7_0/1/Sales_item.h"
using std::cin;
using std::cout;
using std::cerr;
using std::endl;

int main(){
    Sales_item total;
    cout<<"input books:"<<endl;
    if(cin>>total){
        Sales_item book;
        while(cin>>book){
            if(book.isbn()==total.isbn()){
                total+=book;
            }else{
                cout<<total<<endl;
                total=book;
            }
        }
    cout<<"total sum:"<<total<<endl;
    }
    else{
        cerr<<"no input?"<<endl;
        return -1;
    }
    return 0;
}


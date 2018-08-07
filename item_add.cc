#include <iostream>
#include "GCC_4_7_0/1/Sales_item.h"
using std::cin;
using std::cout;
using std::cerr;
using std::endl;

int main(){
    Sales_item book;
    Sales_item books;
    cout<<"input books:"<<endl;
    while(cin>>book)
        books+=book;
    cout<<"total sum:"<<books<<endl;
    return 0;
}


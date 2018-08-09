#include <iostream>
#include <string>
// Note: should not use "using" in head file! To  avoid collision
//using std::cin;
//using std::cout;
//using std::cerr;
//using std::endl;
//using std::string;

struct Sale_data{
    std::string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
};


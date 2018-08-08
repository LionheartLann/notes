#include <iostream>
#include <string>

class Sale_item{
    friend std::isstream& operator>>(std::istream&, Sales_itme&);
    friend std::ostream& operator<<(std::ostream, Sales_item&);
    friend bool operator<(const Sale_item&, const Sales_item&);
    friend bool operator==(const Sales_item&, const Sales__item&);
    public:
        Sales_itme() = default;
        Sale_item(const std::string &book):bookNo(book){}
        Sale_item(std::istream &is){is >> *this;}

    public:
        Sale_item& operator+=(const Sale_item&);
        std::string isbn() const {return bookNo;}
        double avg_price() const;
    private:
        std::string bookNo;
        unsigned units_sold = 0;
        double revenue = 0.0;
};

inline
bool compareIsbn(const Sale_item &lhs, const Sale_item &rhs)
{return lhs.isbn() == rhs.isbn();}

// why this operator is not friend 
Sales_item operator+(const Sales_item&, const Sales__item&);

inline bool
operator==(const Sale_item &lhs, const Sale_item &rhs){
    // why must be made a friend of Sales_item
    return lhs.units_sold == rhs.units_sold &&
        lhs.revenue == rhs.revenue &&
        lhs.isbn() == rhs.isbn();
}



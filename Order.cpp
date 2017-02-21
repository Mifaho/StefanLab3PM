
#include "Order.h"

Order::Order() : name(""), price(0) {

}

Order::Order(std::string name, double price) : name(name), price(price) {

}

Order::Order(const Order& rhs) : name(rhs.name), price(rhs.price) {

}

Order::Order(Order&& rhs) : name(""), price(0) {
    swap(rhs);
}

Order & Order::operator=(const Order& rhs) {
    Order temp(rhs);
    swap(temp);
    return *this;
}

Order & Order::operator=(Order&& rhs) {
    swap(rhs);
    return *this;
}

bool Order::operator>(const Order &rhs) const {
    return this->price > rhs.price;
}

bool Order::operator<(const Order &rhs) const {
    return this->price < rhs.price;
}

bool operator== (const Order &lhs, const Order &rhs){
    return (lhs.name == rhs.name &&
            lhs.price == rhs.price);
}

bool operator!=(const Order &lhs, const Order &rhs) {
    return !(lhs == rhs);
}

std::ostream& operator<<(std::ostream& output, const Order& order) {
    output << order.name;
}

void Order::swap(Order& temp) {
    //std::swap(this->name, temp.name);
    if (*this != temp) {
        std::string stringtemp = this->name;
        this->name = temp.name;
        temp.name = stringtemp;

        double doubletemp = this->price;
        this->price = temp.price;
        temp.price = doubletemp;
    }
    //std::swap(this->price, temp.price);
}


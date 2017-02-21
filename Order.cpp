
#include "Order.h"

Order::Order():name(""), price(0){
    
}

Order::Order(std::string name, double price):name(name), price(price) {
    
}

Order::Order(const Order& rhs):name(rhs.name), price(rhs.price){
    
}

Order::Order(Order&& rhs):name(""), price(0){
    swap(rhs);
}

Order & Order::operator=(const Order& rhs) {
    Order temp(rhs);
    swap(temp);
    return *this;
}

Order & Order::operator=(Order&& rhs){
    swap(rhs);
    return *this;
}


bool Order::operator> (const Order &rhs) const{
    return this->price > rhs.price;
}

bool Order::operator< (const Order &rhs) const{
    return this->price < rhs.price;
}

void Order::swap(Order& temp){
    std::swap(this->name, temp.name);
    std::swap(this->price, temp.price);
}


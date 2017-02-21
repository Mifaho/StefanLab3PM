/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   order.h
 * Author: stefa_000
 *
 * Created on den 20 februari 2017, 15:58
 */

#ifndef ORDER_H
#define ORDER_H
#include <string>
#include <algorithm>


class Order {
public:
    std::string name;
    double price;
    Order();
    Order(std::string name, double price);
    Order(const Order& rhs);
    Order(Order&& rhs);
    Order & operator=(const Order& rhs);
    Order & operator=(Order&& rhs);
    bool operator> (const Order &rhs) const;
    bool operator< (const Order &rhs) const;
private:
    void swap(Order& temp);
};


#endif /* ORDER_H */


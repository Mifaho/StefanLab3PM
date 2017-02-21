/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: stefa_000
 *
 * Created on den 13 februari 2017, 16:59
 */

#include <cstdlib>
#include "p_queue.h"
#include "Order.h"

using namespace std;

/*
 * 
 */


int main(int argc, char** argv) {
    p_queue<Order> queue;
    Order order1("test1", 1);
    Order order2("test2", 3);
    Order order3("test3", 2);
    queue.push(order1);
    queue.push(order2);
    queue.push(order3);
    return 0;
}


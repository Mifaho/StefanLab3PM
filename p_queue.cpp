/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   p_queue.cpp
 * Author: stefa_000
 * 
 * Created on den 20 februari 2017, 13:47
 */

#include "p_queue.h"
#include "Order.h"
#include <iostream>

/*
template<typename T>
p_queue<T>::p_queue() {
}


template <typename T>
p_queue<T>::~p_queue() {
}

template <typename T>
T p_queue<T>::pop(){
    
}*/

template <typename T>
void p_queue<T>::push(T e) {
    queue.push_back(e);
    size_t count = 0;
    T* start = &(*(queue.begin()));
    T* iter = &(*(queue.end())) - 1;
    if (queue.size() > 1) {
        while (iter != start && *(iter - 1) > *iter) {
            std::swap(*(iter - 1), *iter);
            iter--;
            count++;
        }
    }
}

template class p_queue<Order>;



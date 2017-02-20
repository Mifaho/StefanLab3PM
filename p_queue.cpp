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

template<class T>


p_queue<T>::p_queue() {
}

template <class T>
p_queue<T>::p_queue(const p_queue& orig) {
}

template <class T>
p_queue<T>::~p_queue() {
}

template <class T>
T p_queue<T>::pop(){
    
}

template <class T>
void p_queue<T>::push(T e, size_t priority){
    std::vector<int>::iterator iter1;
    queue.push_back(std::make_pair(e, priority));
    std::pair<T, size_t>* iter = queue.end();
    while(iter != queue.begin() && (iter - 1)->second > iter->second){
        std::swap(*(iter - 1), *iter);
        iter--;
    }
}


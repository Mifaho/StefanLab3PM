/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   p_queue.h
 * Author: stefa_000
 *
 * Created on den 20 februari 2017, 13:47
 */

#ifndef P_QUEUE_H
#define P_QUEUE_H

template <class T>

class p_queue {
public:
    p_queue();
    p_queue(const p_queue& orig);
    virtual ~p_queue();
    T pop();
    void push(T e);
private:

};

#endif /* P_QUEUE_H */


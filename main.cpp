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

using namespace std;

/*
 * 
 */
using namespace std;

int main(int argc, char** argv) {
    p_queue<int> queue();
    int number = 1;
    queue.push(number, 1);
    return 0;
}


#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#define LIMIT 100

/*global variable*/
extern int top;
int stack[LIMIT];
extern int element;

/*stack activities functions*/
void push();
void pop();
void display();

#endif

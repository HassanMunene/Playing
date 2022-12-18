#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#define LIMIT 100 /*specifying the maximum limit of the queue*/

/*Global declaration of variables*/
int queue[LIMIT];
int front; /*from where the elements of the queue will be deleted from. if elements are
	     inserted the front index increases*/
int rear; /*from where the elements are inserted into the queue*/

/*functions declarations*/
void insert();
void delet();
void display();
#endif

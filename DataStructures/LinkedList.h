//
//  LinkedList.h
//  C_ServerLib
//
//  Created by Rohan Hangal on 7/10/23.
//

#ifndef LinkedList_h
#define LinkedList_h

#include <stdio.h>
#include <stdlib.h>

#include "Node.h"



struct LinkedList_int
{
    struct Node_int *head;
    int length;
    
    void (*insert)(int index, int data, struct LinkedList_int *linked_list);
    void(*remove)(int index, struct LinkedList_int *linked_list);
    int(*retrieve)(int index, struct LinkedList_int *linked_list);
};



struct LinkedList_int linked_list_int_constructor(void);

#endif /* LinkedList_h */

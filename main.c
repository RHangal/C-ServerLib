//
//  main.c
//  C_ServerLib
//
//  Created by Rohan Hangal on 7/10/23.
//

#include "DataStructures/LinkedList.h"


int main(void) {
    // insert code here...
    struct LinkedList_int list = linked_list_int_constructor();
    
    for (int i = 0; i < 10; i++)
    {
        list.insert(i, i, &list);
    }
    
    
    list.remove(3, &list);
    list.remove(7, &list);
    list.insert(0, 99, &list);
    
    for (int i = 0; i < 9; i++)
    {
        printf("%d\n", list.retrieve(i, &list));
    }
    
    printf("%d\n", list.retrieve(0, &list));
    
}

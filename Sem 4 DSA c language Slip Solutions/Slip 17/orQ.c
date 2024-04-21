#include<stdio.h>
#include "btree.h"

int main()
{
    init();
    struct node *root=NULL;
    
    root=create(root);
    leveldisp(root);
    
    
    return 0;
}
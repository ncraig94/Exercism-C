#ifndef RAINDROPS_H
#define RAINDROPS_H

#include <string.h>
#include <stdio.h>

typedef struct node
{
    char *drop;
    struct node *next;
} node;

void convert(char result[], int drops);

#endif

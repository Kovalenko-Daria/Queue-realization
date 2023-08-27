#ifndef QUEUE_H
#define QUEUE_H

#include <stdlib.h>

struct queue {
    int end;
    int* data;
};

struct queue* init(int num);
void push(struct queue* queue, int num);
void copy_data(const int* data1, int* data2, int n);
int pop(struct queue* queue);
void destroy(struct queue* queue);

#endif
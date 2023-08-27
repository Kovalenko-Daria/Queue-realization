#include "queue.h"

struct queue* init(int num) {
    struct queue* new_queue = malloc(sizeof(struct queue));
    new_queue->end = 1;
    new_queue->data = malloc(sizeof(int));
    new_queue->data[0] = num;
    return new_queue;
}

void push(struct queue* queue, int num) {
    int* new_data = malloc(queue->end * sizeof(int));
    copy_data(queue->data, new_data, queue->end);
    new_data[queue->end] = num;
    free(queue->data);
    queue->data = new_data;
    queue->end++;
}

void copy_data(const int* data1, int* data2, int n) {
    for (int i = 0; i < n; i++) {
        data2[i] = data1[i];
    }
}

int pop(struct queue* queue) {
    int ans = 0;
    if (queue->end) {
        ans = queue->data[0];
        int* new_data = malloc((queue->end - 1) * sizeof(int));
        copy_data(&queue->data[1], new_data, queue->end - 1);
        free(queue->data);
        queue->data = new_data;
        queue->end--;
    }
    return ans;
}

void destroy(struct queue* queue) {
    free(queue->data);
    free(queue);
}

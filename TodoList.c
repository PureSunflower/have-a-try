#include <stdio.h>

#define MAX_NUM 100;
#define MAX_LEN 128;
typedef struct TodoItem {
    char content[100];
    int done;
} Todo;

Todo todos[MAX_NUM];
int todo_cnt = 0;


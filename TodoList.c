#include <stdio.h>
#include <string.h>

#define MAX_NUM 100;
#define MAX_LEN 128;
typedef struct TodoItem {
    char content[100];
    int done;
} Todo;

Todo todos[MAX_NUM];
int todo_cnt = 0;

void show_menu() {
    printf ("===========TODO LIST==========\n");
    printf ("1. Add a new todo\n");
    printf ("2. Show all todos\n");
    printf ("3. Mark a todo as done\n");
    printf ("4. Delete a todo\n");
    printf ("0. Exit\n");
    printf ("===============================\n");
    printf ("Please choose an option: ");
}

void add_todo (char *s) {
    if (todo_cnt > MAX_NUM){
        printf ("The memory if full!\n");
        return;
    }
    
    strcp (todos[todo_cnt].content,s);
    todos[todo_cnt].done = 0;
    todo_cnt++;
    printf ("ADD finished!");
}

int main () {
    int op;
    char buf[MAX_LEN];
    while (1) {
        show_menu();
        scanf ("%d", &op);
        
    }
}



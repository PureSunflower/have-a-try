#include <stdio.h>
#include <string.h>

#define MAX_NUM 100
#define MAX_LEN 128 
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
    if (todo_cnt >= MAX_NUM){
        printf ("The memory is full!\n");
        return;
    }
    
    strcpy (todos[todo_cnt].content,s);
    todos[todo_cnt].done = 0;
    todo_cnt++;
    printf ("ADD finished!");
}

void show_todo (Todo todos[], int n) {
    for (int i = 0;i < n;i++){
        printf ("%d. %s\n", i+1, todos[i].content);
    }
}

int main () {
    int op;
    char buf[MAX_LEN];
    while (1) {
        show_menu();
        scanf ("%d", &op);
        getchar();
        if (op == 0){
            break;
        }
        else if (op == 1) {
            printf ("Please input your task:");
            fgets(buf,MAX_LEN,stdin);
            buf[strcspn(buf,"\n")] = 0;
            add_todo(buf);
        }
        else if (op == 2) {
            show_todo (todos, todo_cnt);
        }
        else {
            printf ("Please reinput!\n");
        }
    }
    return 0;
}



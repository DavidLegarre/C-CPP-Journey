#include "todo.h"
#include <stdio.h>

void addTask(struct Task tasks[], int *taskCount){
    if (*taskCount < 100) {
        printf("Enter task name: ");
        scanf("%s", tasks[*taskCount].name);
        (*taskCount)++;
    } else {
        print("Task list is full.\n");
    }
}
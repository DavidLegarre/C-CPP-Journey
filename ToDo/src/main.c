#include <stdio.h>
#include "todo/todo.h"

int main()
{
    struct Task tasks[100];
    int taskCount = 0;

    int choice;
    while (1)
    {
        printf("To-Do List Manager\n");
        printf("1. Add a Task\n");
        printf("2. View Tasks\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            addTask(tasks, &taskCount);
            break;
        case 2:
            viewTasks(tasks, taskCount);
            break;
        case 3:
            return 0;
        default:
            printf("Invalid choice. Please try again.\n");
        }
    }
    return 0;
}
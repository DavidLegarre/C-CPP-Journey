#ifndef TODO_H
#define TODO_H

struct Task
{
    char name[100];
    // Add other fields like description, due date, and priority here
};

void addTask(struct Task tasks[], int *taskCount);
// void viewTasks(const struct Task tasks[], int taskCount);

#endif
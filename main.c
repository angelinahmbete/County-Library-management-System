/*
A County Library Management System
Created by Anglina
on Jan, 2022
C89 Compiler
MIT License
*/
#include <stdio.h>
#include <stdlib.h>

int menu()
{
    int action;
    printf("select an action:\n");
    printf("1.Add a new patron \n");
    printf("2. View patrons\n");
    printf("3. View books\n");
    printf("4. Add New Books.\n");
    printf("Your actions: ");
    scanf ("%d",&action);
    if(action<1 || action > 4) {
        printf ("invalid action. Try again\n");
    }

    return action;
}
void execute_action (int action) {
    switch (action) {
case 1:
    printf("adding a new patron\n");
    break;
case 2:
    printf("Here is a list of patrons\n");
    break;
case 3:
    printf("Here is a list of all books");
    break;
case 4:
    printf("adding a new book\n");
    break;
default:
    printf("Invalid action.\n");
    }
}

int main ()
{
    printf("COUNTY LIBRARY SYSTEM!\n");
    printf("Welcome Miss. Angelinah!\n");
    execute_action (menu());
    return 0;
}


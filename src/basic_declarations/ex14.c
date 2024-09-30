//Write a C program that accepts an employee's ID, total worked hours in a month and the amount he received per hour. 
//Print the ID and salary (with two decimal places) of the employee for a particular month.

#include <stdio.h>

int main(){
    char employeeID[10];
    int workedHours;
    float salaryPerHours;

    printf("employeeID?: ");
    scanf("%s", &employeeID);
    printf("workedHours?: ");
    scanf("%d", &workedHours);
    printf("salaryPerHours? ");
    scanf("%f", &salaryPerHours);
    printf("the salary of employeeID %s is %.2f", employeeID, workedHours * salaryPerHours);
    return 0;
}
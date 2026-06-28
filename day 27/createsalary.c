#include <stdio.h>

struct Salary {
    int empId;
    char name[50];
    float basic, hra, da, deduction;
    float gross, net;
};

int main() {
    struct Salary emp;

    printf("===== Salary Management System =====\n");

    printf("Enter Employee ID: ");
    scanf("%d", &emp.empId);

    printf("Enter Employee Name: ");
    scanf(" %[^\n]", emp.name);

    printf("Enter Basic Salary: ");
    scanf("%f", &emp.basic);

    // Calculate HRA, DA and Deduction
    emp.hra = emp.basic * 0.20;       // 20% HRA
    emp.da = emp.basic * 0.10;        // 10% DA

    printf("Enter Deduction: ");
    scanf("%f", &emp.deduction);

    // Calculate Gross and Net Salary
    emp.gross = emp.basic + emp.hra + emp.da;
    emp.net = emp.gross - emp.deduction;

    // Display Salary Details
    printf("\n===== Salary Details =====\n");
    printf("Employee ID   : %d\n", emp.empId);
    printf("Employee Name : %s\n", emp.name);
    printf("Basic Salary  : %.2f\n", emp.basic);
    printf("HRA           : %.2f\n", emp.hra);
    printf("DA            : %.2f\n", emp.da);
    printf("Gross Salary  : %.2f\n", emp.gross);
    printf("Deduction     : %.2f\n", emp.deduction);
    printf("Net Salary    : %.2f\n", emp.net);

    return 0;
}
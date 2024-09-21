#include<stdio.h>

void main(){
    float basic_salary;
    printf("Enter the basic salary range to calculate the gross salary: ");
    scanf("%f", &basic_salary);
    if ((basic_salary>=1) && (basic_salary<=4000)){
        float hra=10.5, da=50;
        float hra_amount, da_amount;
        hra_amount = (hra/100) * basic_salary;
        da_amount = (da/100) * basic_salary;
        float gross_salary_employee = basic_salary + hra_amount + da_amount;
        printf("Gross salary of an employee with basic salary of %f is %f", basic_salary, gross_salary_employee);
    }    
    else if((basic_salary>=4001) && (basic_salary<=8000)){
        float hra=25, da=60;
        float hra_amount, da_amount;
        hra_amount = (hra/100) * basic_salary;
        da_amount = (da/100) * basic_salary;
        float gross_salary_employee = basic_salary + hra_amount + da_amount;
        printf("Gross salary of an employee with basic salary of %f is %f", basic_salary, gross_salary_employee);
    }    
    else if((basic_salary>=8001) && (basic_salary<=12000)){
        float hra=30.5, da=70;
        float hra_amount, da_amount;
        hra_amount = (hra/100) * basic_salary;
        da_amount = (da/100) * basic_salary;
        float gross_salary_employee = basic_salary + hra_amount + da_amount;
        printf("Gross salary of an employee with basic salary of %f is %f", basic_salary, gross_salary_employee);
    }
    else if(basic_salary > 12000){
        float hra=40, da=80;
        float hra_amount, da_amount;
        hra_amount = (hra/100) * basic_salary;
        da_amount = (da/100) * basic_salary;
        float gross_salary_employee = basic_salary + hra_amount + da_amount;
        printf("Gross salary of an employee with basic salary of %f is %f", basic_salary, gross_salary_employee);
    }  
    else{
        printf("Invalid Input");
    }
}
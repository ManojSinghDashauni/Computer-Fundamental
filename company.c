//A company decides to give bonus to all its employees on Diwali.A 5% bonus on salary is given to the male workers and 10% bonus on salary to the female workers. WAP to enter the salary and sex of the employee.If the salary of the employee gets an extra 2% bonus on salary. Calculate the bonus that has to be given to the employee and display the salary that the employee will get. 
#include <stdio.h>

int main()
{
    float salary,bonus,amt_to_be_paid;
    char sex;
    printf("\nEnter the sex of employee(m & f): ");
    scanf("%c",&sex);
    printf("\nEnter the salary of employee : ");
    scanf("%f",&salary);
    
    if(sex=='m'){
        bonus=0.05*salary;
    }
    else{
        bonus=0.05*salary;
    }

    if(salary< 10000){
        bonus+=0.20*salary;
    }
    amt_to_be_paid = salary + bonus;
    printf("\nSalary = %f",salary);
    printf("\nBonus = %f",bonus);
    printf("\nAmount to be paid = %f",amt_to_be_paid);
    return 0;
}

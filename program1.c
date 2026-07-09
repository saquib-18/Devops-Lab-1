#include<stdio.h>
int main()
{
float basic;
printf("Enter the basic salary: ");
scanf("%.2f",basic);

float HRA,DA,TAX,total,net;
HRA=basic*0.20;
DA=basic*0.10;

total=basic+HRA+DA;
TAX=0.05*total;

net=total-TAX;
printf("The net Salary is: %.2f",net);
return 0;
}

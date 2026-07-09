#include <stdio.h>
int main()
{
    //Calculation of Gross Salary
    double basicpay,allow;
    float hra,da;
    printf("Enter Your Basic Pay: ");
    scanf("%lf",&basicpay);
    printf("Enter Your HRA and DA Rate (In Point): ");
    scanf("%f %f",&hra,&da);
    printf("Enter a Allowance: ");
    scanf("%lf",&allow);
    printf("Your Gross Salary is RS %.2lf",(basicpay+(hra*basicpay)+(da*basicpay)+allow));
    return 0;
}
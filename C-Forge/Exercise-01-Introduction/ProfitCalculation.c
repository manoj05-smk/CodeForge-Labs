#include <stdio.h>
int main()
{
    //Profit & Loss Calculation
    int quantity;
    double buy,sold;
    printf("Enter the NO.Of Pens: ");
    scanf("%d",&quantity);
    printf("Enter a (one pen) Price You Bought: ");
    scanf("%lf",&buy);
    printf("Enter a (One Price) You Sold: ");
    scanf("%lf",&sold);
    double amt=(sold*quantity) - (buy*quantity);
    if(amt>=0)
    {
        printf("Profit: %.2lf",amt);
    }
    else
    {
        printf("Loss: %.2lf",amt);
    }
    return 0;
}
#include <stdio.h>
int main()
{
    //character into Integer (ASCII)
    char temp;
    printf("Enter a Character: ");
    scanf("%c",&temp);
    printf("ASCII value for %c is %d",temp,(int)temp);
    return 0;
}
#include <stdio.h>
#include <math.h>
int main()
{
    //Distance Between two Locations
    int x1,y1,x2,y2;
    printf("Enter a Coordinates of First Point (x1,y1): ");
    scanf("%d %d",&x1,&y1);
    printf("Enter a Coordinates of Second Point (x2,y2): ");
    scanf("%d %d",&x2,&y2);
    double dist= sqrt (pow ((x2-x1),2) + pow ((y2-y1),2));
    printf("Distance Between Two Coordinates is %f",dist);
    return 0;
}
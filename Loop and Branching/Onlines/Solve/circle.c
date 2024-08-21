#include<stdio.h>
int main()


{
int r,x1,x2,y1,y2,num,rad;


printf("Enter the coordinates of the circle center:\n");

scanf("%d %d",&x1,&y1);

printf("Enter the radius of the circle:\n");

scanf("%d",&r);


printf("Enter the coordinates of the point:\n");

scanf("%d %d",&x2,&y2);

num=((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));

rad=r*r;

if(rad==num)
{
printf("On the circle");
}

else if(rad>num)
{
printf("Inside the circle");
}

else
{
printf("Outside the circle");

}

return 0;
}

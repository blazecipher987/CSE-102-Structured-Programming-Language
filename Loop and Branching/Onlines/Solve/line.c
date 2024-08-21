
#include<stdio.h>
int main()

{
  int a1,b1,c1,a2,b2,c2,num,value;
  float x,y;
     printf("Enter the first 3 integers:\n");
  scanf("%d %d %d",&a1,&b1,&c1);

  printf("enter the next 3 integers:\n");
  scanf("%d %d %d",&a2,&b2,&c2);

  if((a1/a2)==(b1/b2) && (b1/b2)==(c1/c2))

  {
  printf("Does not intersect");
  }


  else
  {
  x=((1.0*(b1*c2)-(b2*c1))/((a1*b2)-(a2*b1)));

  y=((1.0*(c1*a2)-(c2*a1))/((a1*b2)-(b1*a2)));

  printf("Intersection point: %.3f %.3f",x,y);
}

    return 0;
}

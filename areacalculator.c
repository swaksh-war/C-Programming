#include <stdio.h>
#include <math.h>
                                                   /* this is coded by swaksh-war*/
int main()
{
    float radius,area,side,height,width,a,b,n,s,r1,h1,r2,h2;
    char c;
    printf("\n enter the object type here(0=circle 1=square 2=rectangle 3=triangle 4=cone 5=cylindrical : ");
    scanf("%c",&c);
    switch(c)
    {
       case '0':
       printf("\n enter the radius of the circle here: ");
       scanf("%f",&radius);
       area=3.14*radius*radius;
       break;

       case '1':
       printf("\n enter the side of the square: ");
       scanf("%f",&side);
       area=side*side;
       break;


       case '2':
       printf("\n enter the height and width of the rectangle: ");
       scanf("%f %f",&height,&width);
       area=height*width;
       break;

       case '3':
       printf("\n enter the sides of the triangle : ");
       scanf("%f %f %f",&a,&b,&n);
       s=a+b+n/2;
       area=sqrt(s*(s-a)*(s-b)*(s-n));
       break;

       case '4':
       printf("\n enter the height and the radius of the cone:  ");
       scanf("%f %f",&h1,&r1);
       area=0.33*3.14*r1*r1*h1;
       break;

       case '5':
       printf("\n enter the height and the radius of the cylinder: ");
       scanf("%f %f",&h2,&r2);
       area=3.14*r2*r2*h2;
       break;
    }
    printf("\n area of the given object is: %f",area);
    return 0;
}
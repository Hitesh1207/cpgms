#include<stdio.h>
#include<math.h>
void main()
{
float a,b,c,area,s;
printf("Enter the sides of a triangle \n");
scanf("%f %f %f",&a,&b,&c);
s=(a+b+c)/2;
area = sqrt (s*(s-a)*(s-b)*(s-c));
printf("The area is : %f\n sq.units",area);
printf("The perimeter is ; %f \n",s);
}

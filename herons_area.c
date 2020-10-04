#include <stdio.h>
#include <stdbool.h>
#include <math.h>
//heron's_area.c
float a; //side 1
float b; //side 2
float c; //side 3
float d;
float area;
int main(){
printf("enter the  3 sides of your triangle:\n");
scanf("%f %f %f",&a,&b,&c);
d=(a+b+c)/2;
area=sqrt(d*(d-a)*(d-b)*(d-c));
printf("the area of the triangle is %4.2f",area);
return 0;
}

#include <stdio.h>
#include <stdbool.h>
#include <math.h>
//triangle_solver.c
float a; //side 1
float b; //side 2
float c; //side 3
int angle1; //angle 1
int angle2; //angle 2
int angle3; //angle 3
bool sine_true;
bool angle_true;
int main(){
printf("enter the  3 sides of your triangle:\n");
scanf("%f %f %f",&a,&b,&c);
printf("enter 3 angles:\n");
scanf("%d %d %d",&angle1,&angle2,&angle3);
if(sin(a)/angle1==sin(b)/angle2||sin(b)/angle2==sin(c)/angle3){
sine_true=true;
}else{
sine_true=false;
}
if(angle1+angle2+angle3!=180){
angle_true=false;
}else{
angle_true=false;
}

if(sine_true||angle_true==true){
printf(" triangle \n");
}else{
printf("not a triangle \n");
}

return 0;
}
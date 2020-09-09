#include<stdio.h>
float volume(float r){
float v;
v=(4/3)*r*r*r*3.14;
return v;}

void main(){
 float x;
 printf("enter the radius of the circle");
 scanf("%f",&x);
 prinf("the volume=%f",volume(x));}

#include<stdio.h>
struct comp{
    float real;
    float imag;
};
struct comp comp1,comp2;
//function to add 2 complex and return new complex//
struct comp sum_complex(struct comp comp1,struct comp comp2){
    struct comp temp;
    temp.real = comp1.real + comp2.real;
    temp.imag = comp1.imag + comp2.imag;
    return temp;
}
struct comp sum_complex1(struct comp comp1,int x){
    struct comp temp;
    temp.real = comp1.real + x;
    temp.imag = comp1.imag ;
    return temp;}
struct comp compaire(struct comp comp1,struct comp comp2){
int x,y;
x=sqrt(comp1.real*comp1.real+comp1.imag*comp1.imag);
y=sqrt(comp2.real*comp2.real+comp2.imag*comp2.imag);
if(x==y)
    printf("they are equal/n");
else if(x>y)
    printf("The first is greater :%.1f + %.1fi\n",comp1.real,comp1.imag);
else
    printf("The second is greater :%.1f + %.1fi\n",comp2.real,comp2.imag);
}

struct comp result1;
struct comp result;
struct comp g_l;
int main(){
    int x,n;

    printf("to add 2 complex (1)----to add a real and a complex(0)");
    scanf("%d",&x);

if(x==1){
   printf("Enter Complex Number 1: ");
    scanf("%f%f",&comp1.real, &comp1.imag);
   printf("Enter Complex Number 2: ");
    scanf("%f%f",&comp2.real,&comp2.imag);
    result = sum_complex(comp1,comp2); //why isn't it comp result= comp sum_complex(comp1,comp2);//
     g_l= compaire(comp1,comp2);
   printf("The sum is %.1f + %.1fi\n\n", result.real,result.imag);}
   else{
     printf("Enter Complex Number 1: ");
    scanf("%f%f",&comp1.real, &comp1.imag);
   printf("Enter real Number:");
   scanf("%d",&n);
   result1 = sum_complex1(comp1,n);
   printf("The sum is %.1f + %.1fi\n\n", result1.real,result1.imag);}

    return 0;
}





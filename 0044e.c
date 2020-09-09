#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct cpx
{
    float rl;
    float cx;

};
struct cpx c1,c2,c3,*c4;


struct cpx add(struct cpx c1,struct cpx c2)
{
    c3.rl=c1.rl+c2.rl;
    c3.cx=c1.cx+c2.cx;
    return c3;


};


void printer()
{
    if(c1.cx >0)
        printf("\n \nFirst complex number equals: %.2f + %.2fi",c1.rl,c1.cx);
    else  printf("\n \nFirst complex number equals: %.2f - %.2fi",c1.rl,fabs(c1.cx));

    if(c2.cx >0)
        printf("\n\nSecond complex number equals: %.2f + %.2fi",c2.rl,c2.cx);
    else  printf("\n\nSecond complex number equals: %.2f - %.2fi",c2.rl,fabs(c2.cx));


    if(c3.cx >0)
        printf("\n\nResult equals: %.2f + %.2fi",c3.rl,c3.cx);
    else  printf("\n\nResult  equals: %.2f - %.2fi",c3.rl,fabs(c3.cx));


};
void reader()
{
    printf("Enter first complex numbers:   eg. $+$i ");
    scanf("%f%f",&c1.rl,&c1.cx);
    printf("Enter second complex numbers   eg. $+$i ");
    scanf("%f%f",&c2.rl,&c2.cx);
}
void addRTC(struct cpx *c4)
{
    float r;
    printf("\nEnter a real number to add to Complex Number(The sum of the two you entered\n) Calling it by reference: ");
    scanf("%f",&r);
    (*c4).rl=r+(*c4).rl;
}
int compare(struct cpx c1,struct cpx c2)
{
    if((sqrt(pow((c1.cx),2)+pow((c1.rl),2))) > (sqrt(pow((c2.cx),2)+pow((c2.rl),2))) )
    {
        return 1;
    }
    else if ((sqrt(pow((c1.cx),2)+pow((c1.rl),2))) < (sqrt(pow((c2.cx),2)+pow((c2.rl),2))))
    {
        return -1;
    }
    else return 0;
}

int main()
{
//    struct cpx result;


    reader();
    add(c1,c2);
    addRTC(&c3);
    printer();
    printf("\n \nCompare Yielded %d",compare(c1,c2));



    return 0;
}

#include <stdio.h>
int Factorial(int y)
{
    int i,mult;
    i=y;
    mult=1;
    if (y>1){
        for(i;i>=1;i--){
            mult=i*(i-1)*mult;}
        return mult;   }}
int main()
{
    int x;
    printf("Enter a positive integer: ");
    scanf("%d", &x);
    printf("Factorial of %d = %d", x,Factorial(x));
    return 0;
}

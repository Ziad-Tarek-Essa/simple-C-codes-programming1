#include <stdio.h>
#include <stdlib.h>
struct Student_t
{
    int id;
    float gpa;
    char name [20] ;
};
struct Student_t c[10];
struct Student_t *p;
int n,i,j;
void reader()
{
    printf("Enter number of members: ");
    scanf("%d",&n);
    printf("\nWell,Enter Students' ID,GPA and Name respectively:   ");
    for(i=0; i<n; i++)
    {
        scanf("%d%f%s",&(*(c+i)).id,&(*(c+i)).gpa,(*(c+i)).name);
    }
};
void add()
{
    for(i=0; i<n; i++)
    {
        if( ((*(c+i)).gpa) < 2.0 )
        {
            (c+i)-> gpa += 0.2;
        }
    }
};
void printer()
{
    for(i=0; i<n; i++)
        printf("\nStudent #%d Have the ID: %d , The Name : %s And a GPA of %.3f",i+1,(c+i)->id,(c+i)->name,(c+i)->gpa);
};
//void maxGpa()
//{
//    for(i=0; i<n; i++)
//    {
//        for(j=i+1; j<n; j++)
//        {
//            if((c+j)-> gpa < (c+i)-> gpa && (c)->gpa <(c+i)->gpa)// &&(c+i)->gpa <(c)->gpa) {
//                p=c+i;
//            else if ((c+j)-> gpa > (c+i)-> gpa && (c)->gpa < (c+j)->gpa )//&&(c)->gpa > (c)->gpa)
//                p=c+j;
//            else p=c;
//        }
//    }
//
//
//
//    printf("\n\nStudent who has a max GPA has id of %d , his Name is: %s,his GPA is %.3f\n",(p)->id,(p)->name,(p)->gpa);
//};
void maxGpa(){
p=c;
for(i=1; i<n; i++){
if((c+i)->gpa > p->gpa)
    p=(c+i);
}
printf("\n\nStudent who has a max GPA has id of %d , his Name is: %s,his GPA is %.3f\n",(p)->id,(p)->name,(p)->gpa);
}
int main()
{
    reader();
    add();
    printer();
    maxGpa();
    return 0;
}

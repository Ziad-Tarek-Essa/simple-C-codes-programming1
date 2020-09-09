#include<stdio.h>
#include<math.h>
struct student_t{
char student_name[30];
float gpa;
int id;
};
struct student_t stud[100];
struct student_t max;
int n;
 void info(){
     int i;
printf("enter  the no. of students:");
    scanf("%d",&n);
for(i=0;i<n;i++){
printf("\nEnter your name:");
scanf("%s",stud[i].student_name);
printf("\nEnter your ID:");
scanf("%d",&stud[i].id);
printf("\nEnter your gpa:");
scanf("%.3f",&stud[i].gpa);
}}

void add(){
    int i;
for(i=0;i<n;i++){
    if(stud[i].gpa<2)
      stud[i].gpa+=0.2;
}}

 void display(){
     int i;
     for(i=0;i<n;i++){
printf("\nStudent name:%s",stud[i].student_name);
printf("\nStudent ID:%d",stud[i].id);
printf("\nStudent GPA:%.3f",stud[i].gpa);
}}
/*void maxGpa(){
    int t;
    for(t=0;t<n/2;t++){
for(i=0; i<n; i++){
if((stud[t].gpa > stud[i].gpa)
   max.student_name=stud[t].student_name;
   max.gpa=stud[t].gpa;
   max.id=stud[t].id;
}}
printf("\n\nStudent who has a max GPA has id of %d , his Name is: %s,his GPA is %.3f\n",max.id,max.student_name,max.gpa);
}*/

int main()
{
    info();
    add();
    display();
    //maxgpa();
    return 0;
}




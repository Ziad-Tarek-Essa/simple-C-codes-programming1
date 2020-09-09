
void max_min(int*a,int n,int*min,int*max){
int i;
for(i=0;i<n;i++){
    if(*min > *(a+i))
        *min=*(a+i);
    if(*max < *(a+i))
         *max=*(a+i);
}}
int main(){
    int x;
    printf("enter the no. of elemants:\n");
    scanf("%d",&x);

     int a[x],i;
     printf("enter the no.:\n");
     for(i=0;i<x;i++){
     scanf("%d",&a[i]);}

int max=*a,min=*a;
max_min(a,x,&min,&max);
printf("max %d min %d",max,min);
    return 0;
}

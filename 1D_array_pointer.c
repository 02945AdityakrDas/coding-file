#include<stdio.h>
int main(){
int a[5];
int *p;
p = a;
for(int i = 0;i<5;i++){
    scanf("%d",(p+i));
}
for(int i = 0;i<5;i++){
    printf("%d ",a[i]);
}
printf("\n");
for (int i = 0; i < 5; i++)
{
    printf("%d ", *(a+i));
}
printf("\n");
for (int i = 0; i < 5; i++)
{
    printf("%d ", *(p+i));
}
printf("\n");
for (int i = 0; i < 5; i++)
{
    printf("%d ", i[a]);
}
printf("\n");
for (int i = 0; i < 5; i++)
{
    printf("%d ", i[p]);
}
return 0;
}
#include<stdio.h>
int main(){
int arr[2][2]={2,6,8,9};
int brr[2][2]={1,5,4,6};
int res[2][2];
for(int i=0;i<2;i++){
    for(int j=0;j<2;j++){
         res[i][j]=arr[i][j]+brr[i][j];
    }
}

for (int i = 0; i < 2; i++)
{
    for (int j = 0; j < 2; j++)
    {
        printf("%d ",res[i][j]);
    }
    printf("\n");
}
return 0;
}
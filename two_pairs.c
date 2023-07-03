#include<stdio.h>
int main(){
int arr[8]={1,2,3,4,5,6,7,8};
int totalpairs=0;
int x;
printf("Enter the x: ");
scanf("%d",&x);
for(int i = 0;i<8;i++){
    for(int j=i+1;j<8;j++){
        if(arr[i]+arr[j]==x){
            totalpairs++;
            printf("(%d,%d) ",arr[i],arr[j]);
        }
    }
}
printf("The total pairs found : %d",totalpairs);
return 0;
}
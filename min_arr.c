#include<stdio.h>
int main(){
int arr[5] = {5,9,7,6,1};
int max = arr[0];
for(int i = 1;i<5;i++){
    if(max<arr[i])
    max = arr[i];
}
printf("%d",max);
return 0;
}
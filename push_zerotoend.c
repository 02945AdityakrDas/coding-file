#include<stdio.h>
#include<stdbool.h>
int main(){
int a[9] = {5,0,2,0,0,4,1,3,0};
int n = 9;
for(int i=0;i<n-1;i++){
    bool flag = true;
    for(int j=0;j<n-1-i;j++){
        if(a[j]==0){
            int temp = a[j+1];
            a[j+1] = a[j];
            a[j] = temp;
            flag = false;
        }
    }
    if (flag == true)
        break;
}
printf("\n Answer: ");
for(int i=0;i<n;i++){
    printf("%d ",a[i]);
}
return 0;
}
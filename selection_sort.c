#include<stdio.h>
#include<limits.h>
int main(){
    int arr[5] = {500, 4, 9, 2, 1};
    int n = 5;
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    //selection sort
    for(int i=0;i<n-1;i++){
        int min = INT_MAX;
        int mindx = -1;
        for(int j=i;j<n;j++){
            if(min>arr[j]){
                min = arr[j];
                mindx = j;
            }
        }
        int temp = arr[mindx];
        arr[mindx] = arr[i];
        arr[i] = temp;
    }
    printf("\nSorted array: ");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }

return 0;
}
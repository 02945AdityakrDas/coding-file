#include<stdio.h>
#include<string.h>
int main(){
    char str[400];
    puts("Enter the string: ");
    scanf("%[^\n]s",str);
    int size = 0;
    int k = 0;
    while(str[k]!='\0'){
        size++;
        k++;
    }
    for(int i=0,j=size-1;i<=j;i++,j--){
         char temp = str[i];
         str[i] = str[j];
         str[j] = temp; 
    }
    puts("The reverse string is: ");
    puts(str);
    char rev_str[size];
    for(int i=0;i<size;i++){
        rev_str[i] = str[i];
    }
    if(str[size] == rev_str[size]){
        printf("The text is Palindrome.");
    }

return 0;
}
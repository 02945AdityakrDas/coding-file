#include<stdio.h>
#include<string.h>
int main(){
    char str[40];
    scanf("%s",str);// Only the first word will be considered.
    //scanf("%[^\n]s",str);
    //gets(str);
    printf("Your input was: %s",str);

return 0;
}
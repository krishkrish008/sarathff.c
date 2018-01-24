#include <stdio.h>
#include <string.h>
int main()
{
    int i, length;
    int flag = 0;
    char stri1[20];
    printf("Enter a string:");
    scanf("%s", stri1);
    
    length = strlen(stri1);
    
    for(i=0;i < length ;i++){
        if(stri1[i] != stri1[length-i-1]){
            flag = 1;
            break;
   }
}
    
    if (flag) {
        printf("%sIt is not a palindrome", stri1);
    }    
    else {
        printf("%sIt is a palindrome", stri1);
    }
    return 0;
}

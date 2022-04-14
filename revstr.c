#include<stdio.h>
#include<string.h>


char revstr(char *str1 )

{
    int i,len,temp;
    len=strlen(str1);
    for(i=0;i<len/2;i++){
        temp=str[i];
        str[i]=str[len-i-1];
        str[len-i-1]=temp;
    }
    return str[i];
}
int main(){
    int str1[40];
    print("Enter the reverse string");
    scanf("%s",str1);
    revstr(str1);
    printf("%s",str);
}
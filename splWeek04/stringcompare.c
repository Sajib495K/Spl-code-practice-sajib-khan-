#include<stdio.h>
int main(){

char s[]="My name is Sajib Khan";
char sa[]="My name is Sajib Kha";

int d=strcmp(s,sa);

if(d==0)
{
    printf("string are equal");
}

else{printf("string are not equal");
            }
















return 0;
}
#include<stdio.h>
#include<string.h>
int main(){
char s[100];

gets(s);
int l=strlen(s);
printf("Lenth=%d\n",l);
char rev[l];

for(int i=0;i<l;i++)
{
    rev[i]=s[l-1-i];

}
rev[l]='\0';
int d=strcmp(s,rev);
if(d==0)
{
    printf("palindrome!\n");
}
else
{
    printf(" not palindrome\n");
}



















return 0;
}

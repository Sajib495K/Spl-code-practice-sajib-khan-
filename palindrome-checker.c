#include<stdio.h>
int main(){
char s[1000];
char rev[1000];

gets(s);
int l=0;
for(int i=0;s[i]!=0;i++)
{
    l++;
}

for(int j=0;j<l;j++)
{
    rev[j]=s[l-1-j];
}
rev[l]='\0';

int d=strcmp(s,rev);
if(d==0)
{
    printf("palindrome!");

}
else

{
    printf("not palindrome!\n");
}







return 0;
}
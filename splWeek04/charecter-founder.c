#include<stdio.h>
#include<string.h>

int main(){
char s[100];

printf("enter s[]:\n");
gets(s);
int c=0;
char k='A';


for(int i=0;s[i]!='\0';i++)
{
  if(s[i]==k)
  {c++;
  printf("Found at index=%d\n",i);
  break;}


}
if(c==0)
{printf("not found\n");}






return 0;
}

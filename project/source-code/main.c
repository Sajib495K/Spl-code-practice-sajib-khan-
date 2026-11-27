
#include<stdio.h>
#include<ctype.h>
int main(){


 char s[]="SAJIB KHAN";
 printf("Upper=%s\n",s);


for(int i=0;s[i]!=0;i++)
{
     s[i]=tolower(s[i]);
     //if(s[i]>='A'&&s[i]<='Z')
    // s[i]=s[i+32];
}

printf("Lower:%s",s);














return 0;
}

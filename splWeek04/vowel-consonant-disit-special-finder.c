#include<stdio.h>
int main(){
int vc=0,cc=0,dc=0,sc=0;
char s[100];
printf("Enter s[]?\n");
gets(s);

int l=strlen(s);

for(int i=0;s[i]!='\0';i++)
{
     if((s[i]>='A'&&s[i]<='Z')||(s[i]>='a'&&s[i]<='z'))
     {
         if((s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')||(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'))
         {
             vc++;
         }
         else
         {
             cc++;
         }

     }
 else if(s[i]>='0'&&s[i]<='9')
  {
      dc++;
  }

else
sc++;

}

printf("VOwel ache=%d ta\n",vc);
printf("consonent ache=%d ta\n",cc);
printf("disit ache=%d ta\n",dc);
printf("special character ache=%d ta",sc);









return 0;
}

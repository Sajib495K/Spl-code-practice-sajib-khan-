#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){

char password[100];
gets(password);

//step 1=finding lenth
int l=strlen(password);
//printf("Lenth of password:%d",l);

//step 2=upper,lower,disit,symbol ache kina check kora

int hasupper=0,haslower=0,hasdisit=0,hassymbol=0;
for(int i=0;i<l;i++)
{
    unsigned char c=(unsigned char)password[i];
    if(c>='A'&&c<='Z')
    {
        hasupper=1;
    }
     else if(c>='a'&&c<='z')
    {
        haslower=1;
    }
    else if(c>='0'&&c<='9')
    {
        hasdisit=1;
    }

    else
    {
        hassymbol=1;
    }

}

//step 3=lenth review
int score=0;

if(l>=8) score++;
if(l>=12)score++;
score=score+hasupper+haslower+hasdisit+hassymbol;

//step 4

if(l<8)printf("tip:use at least 8 charecter\n");
if(!hasupper)printf("Add an uppercase letter\n");
if(!haslower)printf("Add a Lowercase letter\n");
if(!hasdisit)printf("Add a disit\n");
if(!hassymbol)printf("Add a symbol like(!,@,#,$,%,&,*)\n");

//step 5:scorewise review
if(score<=2)printf("Normal password\n");
if(score>2&&score<=4)printf("Average password\n");

if(score>4)printf("Strong password\n");

//step 6:many times checker
for(int i=2;i<l;i++)
{
    if(password[i]==password[i-1]&&
       password[i]==password[i-2]
      )
    {
        score--;
        printf("'%c' has  three times in a row\n",password[i]);
        break;
    }
}


char lower[100];
for(int i=0;i<l;i++)
{
    lower[i]=tolower((unsigned char)password[i]);
}
char common[6][20]={"password","123456","admin","password123","12345678","sajib123"};

for(int w=0;w<6;w++)
{
    if(strcmp(lower,common[w])==0)
        {score-=2;
     printf("this is one of the most common password\n");
         break;
        }
}





return 0;
}

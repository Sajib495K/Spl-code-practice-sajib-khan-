#include<stdio.h>
int main(){

int m=0;
char s[3][10]={"Sajib","Kamal","jamaal"};
for(int i=0;i<3;i++)
{

printf("%s\n",s[i]);
 if(strlen(s[i])>m)
 {
     m=i;
 }


}
printf("Maximum string:%s",s[m]);





























return 0;
}

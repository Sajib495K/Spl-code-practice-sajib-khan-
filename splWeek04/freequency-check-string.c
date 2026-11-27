#include<stdio.h>
int main(){

char s[]="Sajib khan";
int freq[256]={0};
int l=strlen(s);

for(int i=0;i<l;i++)
{
freq[(unsigned char)s[i]]++;

}
for(int i=0;i<256;i++)
{
if(freq[i]>0&&freq[i]!=' ')
   {
   printf("%c  ache %d ta\n",i,freq[i]);

   }
}













return 0;
}
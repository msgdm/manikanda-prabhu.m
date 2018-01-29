#include<stdio.h>
int main()
{
char a;
printf("enter the alphabet\n");
scanf("%c",&a);
if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u')
printf("vowel\n",a);
else
printf("consonant\n",a);
return 0;
}

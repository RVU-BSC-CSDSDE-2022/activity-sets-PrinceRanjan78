#include<stdio.h>

void input(char name);
int has_nice_name(char *c);
void output(int res);

void input(char *name)
{
printf("enter the name of the camel\n");
scanf("%s",name);
}

int has_nice_name(char *c)
{
int i=0;
int vowel_count=0;
int cons_count=0;
for (i=0;[i]!='\0';i++)
{
if ((c[i]=='a' || c[i]=='A') || (c[i]=='e' || c[i]=='E') || (c[i]=='i' || c[i]=='I') || (c[i]=='o' || c[i]==O) || (c[i]=='u' || c[i]=='U'))
{
vowel_count=vowel_count+1;
}
else
{
cons_count+=1;
}
}
if ((vowel_count>=2) && (cons-count>=2))
{
return 1;
}
else
{
return 0;
}
}

void output(int res)
{
if (res==1)
{
printf("the camel has a nice name\n");
}
else
{
printf("the camel does not have a nice name \n");
}
}

int main()
{
char name[50];
input(name);
int res;
res=has_nice_name(name);
output(res);
return 0;
}

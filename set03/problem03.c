#include<stdio.h>

int input_number();
int is_prime(int n);
void output(int n, int result);

int main()
{
int n;
n=input_number();
int result;
result=is_prime (n);
output(n,result);
return;
}

int input_number()
{
int n;
printf("enter the number\n");
scanf("%d",&n);
return n;
}

int is_prime(int n)
{
int i,result=1;
for(i=2;i*i<=n;i++)
{
if (n%i==0)
{
result=0;
}
}
return result;
}

void output(int n, int result)
{
if (result==1)
{
printf("%d is a prime number\n",n);
}
else
{
printf("%d is not a prime number number\n",n);
}
}

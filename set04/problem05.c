#include<stdio.h>

int input_size();
void input_array(int n, int a[n]);
int find_largest_index(int n, int a[n]);
void output(int index);

int main()
{
int n, index;
n=input_size();
int array[n];
input_array(n,array);

index=find_largest_index(n,array);
output(index);
return 0;
}

int input_size()
{
int n;
printf("enter the size of the array\n");
scanf("%d",&n);
return n;
}

void input_array(int n,int a[n])
{
int i;
for (i=0;i<n;i++)
{
printf("enter the number\n");
scan("%d",&a[i]);
}
}

int find_largest_index(int n, int a[n])
{
int largest;
largest=a[0];
int index=0;
int i;
for (i=1;i<n;i++)
{
if (a[i]>largest)
{
largest=a[i];
index=i;
}
}
return index;
}

void output(int index)
{
printf("the index of the largest number  is the array is %d\n",index);
}
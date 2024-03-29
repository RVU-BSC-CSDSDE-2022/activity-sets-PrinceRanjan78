
#include<stdio.h>
#include<math.h>

struct _camel
{
float radius,height,length,weight;
};

typedef struct _camel Camel;

void input(int n, Camel c[n], float *truck_weight);
void find_camel_weight(int n, Camel c[n]);
float compute_total_weight(int n, Camel c[n], float truck_weight);
void output(float total_weight);

int main()
{
int n;
float truck_weight, total_weight;
printf("enter the number of camels\n");
scanf("%d",&n);
Camel c[n];
input(n,c,&truck_weight);
find_camel_weight(n,c);
total_weight=compute_total_weight(n,c,truck_weight);
output(total_weight);
return 0;
}

void input(int n, Camel c[n], float *truck_weight)
{
int i;
for (i=0;i<n;i++)
{
printf("enter the stomach radius of camel %d\n",i+1);
scanf("%f",&c[i].radius);
printf("enter the height of camel %d\n",i+1);
scanf("%f",&c[i].height);
printf("enter the length of camel%d\n",i+1);
scanf("%f",&c[i].length);
}
printf("Enter the Weight of the Truck\n");
scanf("%f",truck_weight);
}

void find_camel_weight(int n,Camel c[n])
{
int i;
float sqrt_hl[n];
float pi=3.1412;
for (i=0;i<n;i++)
{
sqrt_hl[i]=sqrt(c[i].height*c[i].length);
c[i].weight=pi*
(c[i].radius*c[i].radius*c[i].radius)*sqrt_hl[i];
}
}

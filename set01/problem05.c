#include<stdio.h>
int input();
int compare(int a, int b, int c);

void output(int a, int b, int c, int largest);

int input()
{
  int n;
  printf("Enter a number\n");
  scanf("%d", &n);
  return n;
  
}
int compare(int a, int b,int c)
{
  if(a>b&&a>c){
    return a;
  }
  else if (b>a &&b>c){
    return b;
  }
  else if (c>a&&c>b){
    return c;
  }
  else  
  {
    largest=c;
  }
  void output(int a, int b, int c, int largest){
    printf("the largest of %d,%d and %d is %d\n",a,b,c,largest);
  }
int main(){
  int a,b,c,largest;
  a= input();
  b=input();
  c= input();
  largest = compare(a,b,c);
  output(a,b,c,largest);
  return 0;
}
}
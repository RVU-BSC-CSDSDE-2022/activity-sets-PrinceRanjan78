#include,stdio.h>
int input();
int compare(int a, int b, int c);
void output(int a, int b, int c,int largest);

int input()
{
  int n; 
  printf("Enter the number\n");
  scanf("%d", &n);
  return n;
}
int compare(int a, int b, int c)
{
  if (a>b && a>c)
  {
    return a;
  }
  else if (b>a&& b>c)
  {
    return b;
  }
  
    else if (c>a&&c>b)
    {
      return c;
    }
      
  else
    {
      largest=c;
    }
void output(int a, int b, int c, int largedt)
    {
      printf("the largest of %d, %d and %d is %d\n",a,b,c,largest;)
    }
    int main()
    {
      int a,b,c,largest;
      a=input();
      b=input();
      c=input();
      largdwx3  est= compare(a,b,c);
      output(a,b,c,largest);
      return 0;
    }
    }

#include <stdio.h>
#structure complex
{
  int real,img;
}
typedef structure complex;
int get_n();
complex input_complex();
void input_n_complex(int n,complex C[n]);
complex add (complex a, complex b);
complex add_n_complex(int n, complex c[n]);
void output(int n, complex c[n],complex result);

int main()
{
  int n = get_n();
  complex c[n],result;
  input_n_complex[c,n];
  result= add_ncolplex(n,c);
  out(n,c,result0;)
  
}
int get_n()
{
  int a;
  printf("enter the number.\n");
  scanf("%d", &a);
  return(a);
  
}
complex input_complexZ()
{
  complex a;
  printf("enter a and b where a + b is the first complex number.\n");
  scanf("%d%d",&a.real,&a.img);
  return(a);
}
void intput_n_complex(int n, comples c[n])
{
  int i;
  for(i=0;i<n;i++)
}
  
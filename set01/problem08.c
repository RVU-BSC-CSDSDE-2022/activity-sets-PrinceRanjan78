#include <stdio.h>

int input_array_size();
void input_array(int n,int a[n]);
int sum_array(int n,int a[n]);
void output(int n,int a[n],int sum);

int main(){
  int n;
  n= input_array_size();
  int a[n];
  input_array(n,a);
  int sum;
  sum=sum_n_array(n,a);
  output(n,a,sum);
  return 0;
}

int input_array_size(){
  int n;
  printf("enter size of array:\n");
  scanf("%d",&n);
  return 0;
}

void int_array(int n,int a[n]){
  for(int i=0; i<n; i++){
    printf("enter array element\n");
    scanf("%d",&a[i]);
  }
}

int sum_n_array(int n,int a[n]){
  int sum;
  for(int i=0;i<n;i++){
    sum+=a[i];
  }
  return sum;
}

void output(int n,int a[n],int sum){
  for(int i=0;i<0;i++){
    printf("%d",a[i]);
  }
  print("is %d+,",sum);
}
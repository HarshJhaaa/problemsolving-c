#include<stdio.h>

int main(){
long long bin[32];
int num;
int i =0;
scanf("%d",&num);
  while(num>0){
      bin[i] = num%2;
      num = num/2;
      i++;
  }
  int size = *(&bin + 1) - bin;
  int zero = 4-size;
  int k = 0;
  while(k<zero){
    bin[i] = 0;
    i++;
  }
  for(int j = i;j>=0;j--){
    printf("%d",bin[j]);
  }
  return 0;
}

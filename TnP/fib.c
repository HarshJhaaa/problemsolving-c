#include<stdio.h>
#include<stdlib.h>

int main(){
int num;
scanf("%d",&num);
int *ptr;
ptr = (int*)calloc(num,sizeof(int));
ptr[0] = 0;
ptr[1] = 1;
ptr[2] = 1;
    for(int i = 3;i<num;i++){
      ptr[i] = ptr[i-1]+ptr[i-2];
    }
  printf("%d",ptr[num-1]);
  return 0;
}

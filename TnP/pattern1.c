#include <stdio.h>
int main(){
  int space = 5;
  int l = 1;
  int u = 8;
  for(int j = 0;j<space;j++){
  for(int i = 0;i<j;i++){
    printf(" ");
  }
  printf("*");
  int k;
    for(k = 1;k<u;k++){
      printf(" ");
    }
    if(u>0){
    printf("*");
  }

  printf("\n");
  u = u-2;
}
for(int i = 4;i>1;i--){
    for(int j  = 0;j<i-1;j++){
      printf(" ");
    }
    printf("*");
    int k ;

    for(int i = 0;i<l;i++){
      printf(" ");
    }
    printf("*");
    l = l+2;
    printf("\n");
}

  return 0;
}

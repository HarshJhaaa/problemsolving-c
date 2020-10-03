#include <stdio.h>
int main(){
  int space = 5;
  int l = 1;
  int u = 8;
  int h = 1;
  for(int j = 0;j<space;j++){
  for(int i = 0;i<j;i++){
    printf(" ");
  }
  printf("%d",h);
  int k;
    for(k = 1;k<u;k++){
      printf(" ");
    }
    if(u>0){
    printf("%d",h);
  }

  printf("\n");
  u = u-2;
  h =h+1;
}
h = 4;
for(int i = 4;i>0;i--){
    for(int j  = 0;j<i-1;j++){
      printf(" ");
    }
    printf("%d",h);
    int k ;

    for(int i = 0;i<l;i++){
      printf(" ");
    }
    printf("%d",h);
    l = l+2;
    h = h-1;
    printf("\n");
}

  return 0;
}

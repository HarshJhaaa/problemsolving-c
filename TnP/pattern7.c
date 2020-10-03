#include <stdio.h>

int main(){
  int N;
  scanf("%d",&N);
  int h = 1;
  for(int j = 1;j<=N;j++){
    if(j==2){
      h =h+N;
    }else if(j == N){
      h = N+1;
    }
  for(int i = 0;i<N;i++){
    printf("%d",h);
    h = h+1;
    if(i+1!=N){
      printf("*");
    }

  }
  printf("\n");
}

  return 0;
}

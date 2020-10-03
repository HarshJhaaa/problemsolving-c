#include <stdio.h>


int main(){
  int N;
  int u;
  scanf("%d",&N);
  int k = 1;
  printf("%d\n",k);
  for(int i = 2 ;i<=N;i++){
    if(i%2==0){
      printf("%d",k=k+i);
      u = k;
      for(int j = 1;j<i;j++){
        u = u-1;
        printf("*%d",u);
      }
      printf("\n");
    }else{
      for(int l = 0;l<i;l++){
        k = k+1;
        printf("%d*",k);
      }
      printf("\n");
    }
  }


  return 0;
}

#include <stdio.h>
int main(){
int N;
int S = 1;
printf("ENTER THE VALUE OF N \n");
scanf("%d",&N);
    for(int i = 1;i<=N;i++){
      for(int j = 0;j<i;j++){
      printf("%d",S);
      if(j+1!=i){
      printf("*");
    }
      S= S+1;
    }
    printf("\n");
  }

    int o = S-N;
    int h = o;
    for(int j = N;j>=1;j--){
      for(int u = 0;u<j;u++){
        printf("%d",o);
        if(u+1!=j){
        printf("*");
      }
        o = o+1;
      }
      o = h-(j-1);
      h = o;
      printf("\n");
    }

    return 0;
}

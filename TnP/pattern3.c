#include <stdio.h>
int main(){
int N;
int S;
printf("ENTER THE VALUE OF N AND S \n");
scanf("%d",&N);
scanf("%d",&S);
    for(int i = 1;i<=N;i++){
      for(int j = 0;j<i;j++){
      printf("%d",S);
    }
    printf("\n");
    S= S+1;
    }
    S = S-1;
    for(int i = N;i>=1;i--){
      for(int j = 0;j<i;j++){
        printf("%d",S);
      }
      printf("\n");
      S = S-1;
    }

    return 0;
}

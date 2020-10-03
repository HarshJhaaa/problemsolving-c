#include <stdio.h>

int main(){
  int n;
  int k = 1;
scanf("%d",&n);
for(int j = 1;j<=n;j++){
  if(j%2 != 0){
    for(int i = 1;i<=n;i++){
      printf("%d",j);
      if(i == n){
        printf("%d",j+1);
      }
    }
    printf("\n");
  }else{
    printf("%d",j+1);
    for(int i = 1;i<=n;i++){
      printf("%d",j);
    }
    printf("\n");
  }

}


  return 0;
}

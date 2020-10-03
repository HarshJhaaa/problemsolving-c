#include <stdio.h>

int main(){
  int n;
  int c;
  scanf("%d",&n);
  int M  = 1;
  int g = n;
  int r = 12;
for(int k = 1;k<=n;k++){
      for(int i = 1;i<=g;i++){
        printf("%d",M);
        M=M+1;
        printf("*");
      }
      c  = M;
      M = M+r;
      for(int j = 1;j<=g;j++){
        printf("%d",M);
        M=M+1;
        if(j != g){
          printf("*");
        }
      }

      printf("\n");
    for (int space = 0;space<k;space ++) {
      /* code */
      printf(" ");
    }

    M = c;
    g = g-1;
    r = r/2;


}
  return 0;
}

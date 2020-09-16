#include<stdio.h>
#include<stdlib.h>

int main(){
int num;
scanf("%d",&num);
int *ptr;
ptr = (int*)calloc(num,sizeof(int));
int *ptr2;
ptr2 = (int*)calloc(num,sizeof(int));
int gap = 0;
int c = 0;
ptr[0] = 0;
ptr[1] = 1;
ptr[2] = 1;
    for(int i = 3;;i++){
      gap = 0;
      ptr[i] = ptr[i-1]+ptr[i-2];
      if (ptr[i]-ptr[i-1]>1){
        for(int j=ptr[i-1]+1;j<ptr[i];j++){
          if(c == num){
            break;
          }
          printf("%d\n",j);
          c++;

        }
        if(c == num){
          break;
        }
      }
    }
  return 0;
}

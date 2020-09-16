#include<stdio.h>
#include<stdlib.h>

int main(){

int num;
scanf("%d",&num);
int sum = 0;
int m = 0;
while(num>0)
{
  m=num%10;
  sum=sum+m;
  num=num/10;
}
if(num%sum == 0){
  printf("Harshad Number");
}else{
  printf("Not Harshad Number");
}
return 0;

}

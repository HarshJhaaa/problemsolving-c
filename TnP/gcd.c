#include<stdio.h>
#include<stdlib.h>
int gcd(int a, int b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}
int findGCD(int arr[], int n)
{
    int result = arr[0];
    for (int i = 1; i < n; i++)
    {
        result = gcd(arr[i], result);

        if(result == 1)
        {
           return 1;
        }
    }
    return result;
}
int main(){
  int num;
  int *ptr;
  scanf("%d\n",&num);
  ptr = (int *)malloc(num* sizeof(int));

  for(int i = 0;i<num;i++){
    scanf("%d",&ptr[i]);
  }
    printf("%d\n",findGCD(ptr,num));
}

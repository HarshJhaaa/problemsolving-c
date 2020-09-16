#include <stdio.h>
#include<math.h>
#include<stdlib.h>
main ()
{
  int rangenumber, c = 0, num = 2, i;
  scanf ("%d", &rangenumber);
  int *ptr;
  ptr = (int*)calloc(rangenumber,sizeof(int));
  int k = 0;
  while (c != rangenumber){
      int count = 0;
          for (i = 2; i <= sqrt(num); i++)
           {
             if (num % i == 0){
                 count++;
                 break;
               }
           }
          if (count == 0){
             ptr[k]=num;
             c++;
             k++;
           }
        num = num + 1;
    }
    int sum  = 0;
   for(int j = 0;j<rangenumber;j++){
     if(rangenumber%ptr[j] == 0){
      sum+=ptr[j];
     }
   }
   printf("%d\n",sum );

return 0;
}

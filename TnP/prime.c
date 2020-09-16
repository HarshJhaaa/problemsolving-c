#include <stdio.h>
#include<math.h>
#include<stdlib.h>
int
main ()
{
  int rangenumber, c = 0, num = 2, i;
  printf ("Enter Nth Number\n");
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
   printf("%d ",ptr[rangenumber-1] );

return 0;
}

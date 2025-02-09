#include <stdio.h>
int main()
     {
     int n, i, k, oct=0,dec;

     printf("\n\nConvert Decimal to Octal:\n ");
     printf("\n");

     printf("Enter a number to convert : ");
     scanf("%d",&n);

     dec=n;
     i=1;

      for(k=n;k>0;k=k/8)
       {
        oct=oct+(k % 8)*i;
        i=i*10;
        n=n/8;
       }
     
     printf("\nThe Octal of %d is %d.\n\n",dec,oct);
}


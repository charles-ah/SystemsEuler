#include <stdio.h>
#include <stdlib.h>


int main()
{
  int a=1;
  int b=2;
  
  int n=0;
  int sum =0;
  while (n<4000000)
    {
      //      printf("%d %d \n",a,b);
      n = a+b;
      a=b;
      b=n;
      if(n%2==0)
	{
	  sum+=n;
	}
      //         printf("%d \n",n);
    }
  sum+=2;
  printf("%d \n",sum);
  
  return 0;
}


#include<time.h>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>


int main()
{
srand(time(NULL));
int x[10000];
float n=0,w; int i;  float x1,a;
for(i=0;i<10000;i++)
{

 
     do { a=a+(rand()%10000)/10000;
		    	
                 
		
                 x1 = 2.0 * a - 1.0;
                 
                 w = x1 * x1 ;
         } while ( w >=1 );

         w = sqrt( (-2.0 * log( w ) ) / w );
         n = x1 * w;
        

            x[i]=n;
}
for(i=0;i<1000;i++)
printf("%f\n",x[i]);
return 0;
}


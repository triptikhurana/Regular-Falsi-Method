#include<stdio.h>
#include<math.h>
#define f(x) x*x*x-x-1
void main()
{
	 double a, b, x2, f0, f1, fx, e;
	 int step = 1,i=0,n=0;
	 while (i<=n)
	 {
	 printf("Guess value of a:");
	 scanf("%lf", &a);
	 printf("Guess value of b:");
	 scanf("%lf", &b);
	 printf("Enter  e:");
	 scanf("%lf", &e);
	 f0 = f(a);
	 f1 = f(b);
	 if((f0<0.0&&f1<0.0)||(f0>0.0&&f1>0.0))
	 {
		  printf("The guess values is incorrect!(%lf,%lf)\n Enter new guesses.\n",f0,f1);
		  i++;
		  n=i;
	 }
	 else
	 {
	  break;
	 }
     }
     printf("\nStep\t\t   a\t\t  f(a)\t\t  b\t\t  f(b)\t\t  x2\t\t  f(x2)\n");
	 do
	 {
		  x2 = a-f0*(b-a/f1-f0);
		  fx = f(x2);
		
		  printf("%d\t\t%lf\t%lf\t%lf\t%lf\t%lf\t%lf\n",step,a,f0,b,f1,x2,fx);
		
		  if(f0 *fx < 0)
		  {
			   b= x2;
			   f1 = fx;
		  }
		  else
		  {
			   a= x2;
			   f0 = fx;
		  }
		  step++;
	 }while(fabs(fx)>e);
	 printf("\nRoot is: %lf", x2);
}

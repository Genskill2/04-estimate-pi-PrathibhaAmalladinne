#include <assert.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>


float wallis_pi(int n){
  int i;
  float x,y,z,pi;
  if(n==0) return 0;
    for(i=1;i<=n;i++)
    {
      x=4*i*i;
      y= x-1;
      float(z)= (x)/(y);
        if(i==1){
           pi=z;}
        else
           {pi=pi*z;} 
  }
   pi*=2;
  return pi;
 }
  


int main(void) {
  float pi;
  for (int i=0; i<5; i++) {
    pi = wallis_pi(i);
    if (!(fabs(pi - M_PI) > 0.15)) {
      printf("Estimate with just %d iterations is %f which is too accurate.\n", i, pi);
      abort();
    }
  }

  for (int i=500; i<3000; i++) {
    pi = wallis_pi(i);
    if (!(fabs(pi - M_PI) < 0.01)) {
      printf("Estimate with even %d iterations is %f which is not accurate enough.\n", i, pi);
      abort();
    }
  }
}

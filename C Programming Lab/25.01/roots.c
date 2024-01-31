#include <math.h>
#include <stdio.h>

int main() {
  float a,b,c,d,r1,r2,rp,ip;
  printf("Input values for a, b and c=> ");
  scanf("%f %f %f", &a, &b, &c);
  d=b*b-4*a*c;
  if (d>0) {
    r1=(-b+sqrt(d))/(2*a);
    r2=(-b-sqrt(d))/(2*a);
    printf("The Roots are real & unequal.\nRoots are %0.2f and %0.2f", r1, r2);
  }
  else if (d==0) {
    r1=r2=-b/(2*a);
    printf("The Roots are real & equal.\nRoots are %0.2f %0.2f", r1, r2);
  }
  else {
    rp=-b/(2*a);
    ip=sqrt(-d)/(2*a);
    printf("The Roots are imaginary\n");
    printf("Root1=%0.2f+i%0.2f\n",rp,ip);
    printf("Root2=%0.2f-i%0.2f\n",rp,ip);
  }
  return 0;
}

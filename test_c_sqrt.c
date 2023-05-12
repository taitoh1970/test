#include<stdio.h>
#include<math.h>

int main (int argc, char **argv){
  double d;

  for (d = 1.0; d < 10.1; d += 1.0){
    fprintf (stdout, "The square root of %.0f is %.5f\n", d, sqrt(d));
  }

  return 0;
}

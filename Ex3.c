#include<stdio.h>
#include<math.h>
# define PI 3.14

int main(){
  float r, S, C;
  printf("Enter circle radius: ");
  scanf("%f", &r);

  C = 2 * PI * r;
  S = PI * pow(r, 2);

  printf("C = %.2f dvcv\n", C);
  printf("S = %.2f dvdt", S);
  return 0;
}
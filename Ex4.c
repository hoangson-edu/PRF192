#include<stdio.h>
#include<math.h>

#ifndef PI
#define PI 3.14159265358979323846
#endif

int main(){
  float R, h, SDAY, SXQ, V;

  printf("Nhap ban kinh: ");
  scanf("%f", &R);
  printf("Nhap chieu cao: ");
  scanf("%f", &h);

  SDAY = PI * R * R;
  SXQ = 2 * PI * R * h;
  V = SDAY * h;

  printf("Dien tich day: %.2f\n", SXQ);
  printf("Dien tich xung quanh: %.2f\n", SXQ);
  printf("The tich: %.2f", V);
  return 0;

}
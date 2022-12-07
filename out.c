#include <stdio.h>
#include <math.h>
int main(void){
float a;
float b;
float c;
float d;
float number;
a = 1;
b = 4;
c = a+b;
printf("%.2f\n", (float)(c));
d = c*b;
printf("%.2f\n", (float)(d));
if(0 == scanf("%f", &number)) {
number = 0;
scanf("%*s");
}
printf("%f", fabsf(number));
return 0;
}

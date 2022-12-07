#include <stdio.h>
#include <math.h>
int main(void){
float a;
float b;
float c;
float d;
float e;
float f;
float g;
a = 1;
b = 4;
if(a<b){
printf("a is smaller than b\n");
}
c = 5;
d = 4;
if(c<d){
printf("c is smaller than d\n");
}
e = 0;
f = 1;
while(e<5){
e = f;
g = f+1;
f = g;
printf("%.2f\n", (float)(e));
}
return 0;
}

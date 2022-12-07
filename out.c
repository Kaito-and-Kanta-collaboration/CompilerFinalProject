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
printf("do while loop\n");
e = f;
g = f+e;
f = g;
}
return 0;
}

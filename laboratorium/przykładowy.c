#include <stdio.h>

float main() {
float a;
scanf("%f",&a);
printf("%f\n",a);

float b;
scanf("%f",&b);
printf("%f\n",b);

float c;
scanf("%f",&c);
printf("%f\n",c);

float wynik = (a*b) - (b/c);
printf("%f\n",wynik);






return 0;
int a,b,c;

if ((a>b) && (b>c) && (a>c)) {
  printf("%d, %d, %d\n" ,c,b,a);

} else if(b>a && a>c) {
  printf("%d, %d, %d\n" ,b,c,a);
} else if(b>c && b>a) {
  printf("%d, %d, %d\n" ,a,b,c);
} else if(a>b && b>c) {
  printf("%d, %d, %d\n" ,a,b,c);
} else if(b>a && a>c) {
  printf("%d, %d, %d\n" ,a,b,c);


 } else {

 }
 return 0;
 }

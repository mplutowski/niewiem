#include <stdio.h>

int main() {
int counter;
scanf("%f",&counter);
printf("%f\n",counter);

if (counter%2==0 && counter%3==0 && counter%5==0) {
printf("Dzieli się przez 2,3 i 5")
} else if (x%2==0 && x%3==0) {
printf("Dzieli się przez 2 i 3")
} else if (x%2==0 && x%5==0) {
  printf("Dzieli się przez 2 i 5")
} else if (x%3==0 && x%5==0) {
  printf("Dzieli się przez 3 i 5")
} else if (x%2==0) {
  printf("Dzieli się przez 2")
} else if (x%3==0) {
  printf("Dzieli sie przez 3")
} else if (x%5==0) {
  printf("Dzieli się przez 5")

}

return 0;
}

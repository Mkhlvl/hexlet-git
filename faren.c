#include <stdio.h>

float main() {
float fahr, celcius;
float lower, upper, step;

lower = 0;
upper = 300;
step = 20;

fahr = lower;

while (fahr <= upper) {
celcius = 5 * (fahr - 32 ) / 9;
printf("%3.2f : %6.2f\n", fahr, celcius);
fahr = fahr + step;

}}

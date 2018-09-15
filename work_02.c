#include <stdio.h>

unsigned int x = 3211233211;

int increment(int amount, int value){
  char *valuep = &value;
  printf("adding %d to each byte-----------\n", amount);
  for (int counter = 0; counter < 4; counter++) {
    *valuep += amount;
    printf("%hhx\n", *valuep);
    valuep++;
  }
  printf("Value after adding %d to each byte (in hex): %x\n", amount, value);
  printf("Value after adding %d to each byte (in decimal): %ld\n", amount, value);
  return 0;
}

int main(){
  printf("before changes hex: %x\n", x);
  printf("before changes decimal: %ld\n", x);
  increment(0, x);
  increment(1, x);
  increment(16, x);
  return 0;
}

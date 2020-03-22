//https://news.quelsolaar.com/2020/03/16/how-one-word-broke-c/
#include <stdio.h>
#include <limits.h> 

void func(unsigned short a, unsigned short b)
{
  unsigned int x;
  x = a * b;
  if(x > 0x80000000)
    printf("%u is more then %u\n", x, 0x80000000);
  else
    printf("%u is less or equal then %u\n", x, 0x80000000);
}


int main(void) {
  printf("%lu short %lu int\n", sizeof(short)*CHAR_BIT, sizeof(int)*CHAR_BIT);
  func(65535, 65535);
  return 0;
}
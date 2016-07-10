#include <stdio.h>

int main()
{
  size_t to_read = __syscall(sc_getkeyinfo, 0x00, 0x00, 0x00, 0x00, 0x00);
  printf("We need to read from %x\n", to_read);
  /* YOUR CODE HERE */
  return 0;
}

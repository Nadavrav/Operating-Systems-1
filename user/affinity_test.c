#include "kernel/types.h"
#include "user/user.h"

int
main(int argc, char *argv[])
{
  set_affinity_mask((1 << 2) + (1 << 0)); // A Valid CPU 0, 2
  for(;;)
    printf("\nCurrent Process id: %d\n", getpid());

  exit(0, 0);
}

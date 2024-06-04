#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"

int main(int argc, char *argv[])
{
  write(1, "Hello World! SHALOM BDIKA\n", sizeof("Hello World! SHALOM BDIKA\n"));


  exit(0);
}
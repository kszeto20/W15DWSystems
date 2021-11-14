#include "read.h"

int main () {
  printf("Good News Everyone\n");

  char line[200] = "ls -a -l";
  char ** arguments = parse_args(line);

  execvp(arguments[0], arguments);
  return 0;
}

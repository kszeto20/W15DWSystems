#include "read.h"


char ** parse_args( char * line ) {
  char ** toRet = malloc(5 * sizeof(char * ));

  toRet[0] = strsep(&line, " ");
  int i = 1;
  while (i < 5) {
    toRet[i] = strsep(&line, " ");
    if (toRet[i] == NULL) {
      i += 5;
    }
    else {
      i++;
    }
  }

  return toRet;
}

#include <stdio.h>
#include <stdlib.h>

int my_recurse (int n) {
  if (n <= 1){
    return 1;
  }else{
    n = my_recurse(n-1) * (n + my_recurse(n-2));
  }
  return n;
}

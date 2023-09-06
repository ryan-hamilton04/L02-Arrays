#include <stdio.h>
#include <stdlib.h>

void doEncode (
  const unsigned char encode[], 
  const unsigned char str[], 
  unsigned char res[],
  size_t len
) {
  int i = 0;
  while (str[i] != '\0' && str[i] != '\n' && i < len - 1) {
    if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z') || (str[i] >= '0' && str[i] <= '9')) {
      res[i] = encode[str[i]];
    }else{
      res[i] = str[i];
    }
    i++;
  }
  res[i] = '\0';
}
          

void doDecode (
  const unsigned char encode[], 
  const unsigned char str[],
  unsigned char res[],
  size_t len
) {
  int i = 0;
  while (str[i] != '\0' && str[i] != '\n' && i < len - 1) {
    if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z') || (str[i] >= '0' && str[i] <= '9')) {
      for (unsigned char j = 0; j < 256; j++) {
        if (encode[j] == str[i]) {
          res[i] = j;
          break;
        }
      }
    }else{
      res[i] = str[i];
    }
    i++;
  }
  res[i] = '\0';
}

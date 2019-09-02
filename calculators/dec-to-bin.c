#include <stdio.h>
#include <stdlib.h>
int main(){
  int x,xx,xxx;
  system("clear");
  printf("DEC:\n");
  scanf("%d",&x);
  printf("%d to BIN:\n",x);
  for(xx=31;xx>=0;xx--){
    xxx=x>>xx;
    if(xxx&1)
      printf("1");
    else
      printf("0");
  }
  printf("\n");
  return(0);
}

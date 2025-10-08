#include<stdio.h>
int main(){
  int i;
  printf("1~10000中13的倍数有:\n");
  for(i=13;i<=10000;i+=13){
      printf("%d",i);
  }
  printf("\n");
  return 0;
}

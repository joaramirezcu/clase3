#include <iostream>
#include <cstdio>

const int N = 150;

int main(void){
  
  float under = 1;
  int over = 1;
 

  for(int n=0; n < N; ++n){
    under /= 2.0;
    over *= 2.0;
    std::printf("%d\t%15.6e%15.6e\n", n, under, over);     
  }
  return 0;
}

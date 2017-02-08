#include <iostream>
#define FLAG

int main(void){
  #ifdef FLAG
  std::cout << "Hola Alejandro " << std::endl;
  std::cerr << "ERROR ERROR ERROR " << std::endl;
  #endif

  return 0;
}

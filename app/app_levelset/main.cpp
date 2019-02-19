#include "levelset.h"
#include <iostream>

int main(void) {
  LevelSet sim;

  std::cerr << "Initialized grid with size " << sim.size()
            << "  and resolution " << sim.h() << std::endl;

  return 0;
}
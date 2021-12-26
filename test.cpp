#include "MakeID.h"

int main() {
  MakeID makeId(10240);

  uint32_t id;

  while (makeId.CreateID(id)) {
    std::printf("%d\n", id);
  }

  makeId.PrintRanges();
  makeId.DestroyID(4);
  makeId.DestroyID(5);
  makeId.DestroyID(50);
  makeId.PrintRanges();

  makeId.CreateID(id);

  std::printf("%d\n", id);


  return 0;
}


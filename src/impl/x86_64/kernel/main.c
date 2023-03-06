#include "print.h"

struct Char
{
  uint8_t character;
  uint8_t color;
};

void kernel_main()
{
  print_clear();
  print_set_color(WHITE, DGRAY);

  print_clear();
  print_str("\n\n Hello world!");
}
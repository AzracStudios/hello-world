#pragma once

#include <stdint.h>
#include <stddef.h>

enum
{
  BLACK = 0,
  BLUE = 1,
  GREEN = 2,
  CYAN = 3,
  RED = 4,
  MAGENTA = 5,
  BROWN = 6,
  LGRAY = 7,
  DGRAY = 8,
  LBLUE = 9,
  LGREEN = 10,
  LCYAN = 11,
  LRED = 12,
  PINK = 13,
  YELLOW = 14,
  WHITE = 15,
};

void print_clear();
void print_char(char character);
void print_str(char *string);
void print_set_color(uint8_t foreground, uint8_t background);
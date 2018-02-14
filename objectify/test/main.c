#include "objectify.h"

#include <stdio.h>

#define SHOW(type, msg) show_##type(msg)
void show_error(char *);
void show_info(char *);

void show_error(char *message) {
  fprintf(stderr, "ERROR: %s", message);
}

void show_info(char *message){
  fprintf(stdout, "INFO: %s", message);
}

int main() {
  test("Hello!");
  SHOW(error, "An error\n");
  SHOW(info, "Some message\n");
  return 0;
}

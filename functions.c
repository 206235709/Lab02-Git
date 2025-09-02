#include "functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void function_that_might_or_might_not_print_the_number_inserted(uint64_t num) {
  srand(time(NULL));
  if (rand() % 2)
    printf("Your number is %lu\n", num);
  else
    printf("Train go boom\n");
}

void function_that_will_probably_work_even_less_often_than_the_other_function(uint64_t num) {
  srand(time(NULL));
  if (rand() % 10)
    printf("Your number is %lu\n", num);
  else
    printf("Train go boom\n");
}

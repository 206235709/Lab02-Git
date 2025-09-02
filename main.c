#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include "functions.h"

int main(int argc, char **argv) {
  if (strcmp(*(argv + 2), "secret"))
    function_that_will_probably_work_even_less_often_than_the_other_function(atoi(*(argv + 1)));
  else
    function_that_might_or_might_not_print_the_number_inserted(atoi(*(argv + 1)));
}

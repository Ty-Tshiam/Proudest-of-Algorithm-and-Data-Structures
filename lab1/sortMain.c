#include <stdio.h>
#include <stdlib.h>

#include "mySort.h"

int main(int argc, char *argv[])

{
  int data[100000];

  int nDataItems;

  int i;

  int cmdlines = 2;

  if (argc > 1) {
    cmdlines = 1;
    for (i = 1; i < argc; i++) {
      data[i - 1] = atoi(argv[i]);
    }
    nDataItems = argc - 1;
  } else {
    cmdlines = 0;
  }

  if (cmdlines == 0) {

    nDataItems = 4;

    data[0] = 10;

    data[1] = 20;

    data[2] = 30;

    data[3] = 40;
  }
  mySort(data, nDataItems);

  for (i = 0; i < nDataItems - 1; i++) {
    if (data[i] > data[i + 1]) {
      fprintf(stderr,
              "Sort error: data[%d] (= %d)"

              " should be <= data[%d] (= %d)- -aborting\n",

              i, data[i], i + 1, data[i + 1]);

      exit(1);
    }
  }

  for (i = 0; i < nDataItems; i++) {
    printf("%d\n", data[i]);
  }

  exit(0);
}


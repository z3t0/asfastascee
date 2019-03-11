#include <stdio.h>

#define SUM_COUNT 1000
#define LOOP_COUNT 200000

int compute (int i);

int test (int i);



int main() {
    int sum = 0;

    int accumulative_sum = 0;
    
    for (int i = 0; i < SUM_COUNT; i++) {
        int j = 0;

        while(j < LOOP_COUNT) {

            if (test (j) ) {

                sum += compute (j);
            }
            j++;
        }
    }


    return sum;
}

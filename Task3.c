#include <stdio.h>
#include <string.h>


int solution(int *A, int A_length) {
    int n = A_length;
    int i = n - 1;
    int result = -1;
    int k = 0, maximal = 0;
    while (i > 0 && i < n) {
        if (A[i] == 1) {
            k = k + 1;
            if (k >= maximal) {
                maximal = k;
                result = i;
            }
        }
        else
            k = 0;
        i = i - 1;
    }
    if (A[i] == 1 && k + 1 > maximal)
        result = 0;
    return result;
}


 
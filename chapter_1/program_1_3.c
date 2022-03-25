#include <stdio.h>

#define MAX_INDEX 100

/**
 * Returns the index of the first negative integer.
 * @param {int[]} A - Array of integers
 */
int find_index_of_first_negative(int a[])
{
    for (int i = 0; i < MAX_INDEX; ++i) {
        if (a[i] < 0) {
            return i;
        }
    }

    return -1;
}

int main(int argc, char const *argv[])
{
    int a[MAX_INDEX];

    for (int i = 0; i < MAX_INDEX; ++i) {
        a[i] = i * i;
    }

    a[17] = -a[17];

    printf("First negative integer in A found at index = %2d\n", find_index_of_first_negative(a));

    return 0;
}

#include <stdio.h>

int main() {
    int x, y;
    int smallest_sum = 0, largest_sum = 0, total_sum = 0;
    int counter = 0;

    while (1) {
        char input[100];
        fgets(input, sizeof(input), stdin);

        if (input[0] == '*') {
            break;
        }

        sscanf(input, "%d,%d", &x, &y);

        if (counter == 0) {
            smallest_sum = x + y;
            largest_sum = x + y;
        }

        int sum = x + y;
        if (sum < smallest_sum) {
            smallest_sum = sum;
        }
        if (sum > largest_sum) {
            largest_sum = sum;
        }

        total_sum += sum;
        counter++;
    }

    double average_pairs = (double)total_sum / counter;
    double overall_average = (double)total_sum / (2 * counter);

    printf("menor soma: %d\n", smallest_sum);
    printf("maior soma: %d\n", largest_sum);
    printf("media dos pares: %.2lf\n", average_pairs);
    printf("media de todos: %.2lf\n", overall_average);

    return 0;
}

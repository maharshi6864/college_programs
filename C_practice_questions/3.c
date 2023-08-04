#include <stdio.h>

int main()
{

    float weight_1 = 15, item_1 = 5, weight_2 = 25, item_2 = 4;
    float average_weigth = ((weight_1 * item_1) + (weight_2 * item_2)) / (item_1 + item_2);
    printf("%f", average_weigth);
}
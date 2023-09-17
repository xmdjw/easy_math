#include <stdio.h>

void main()
{
    float length, width, height, superficial_area, volume, edge_length;

    scanf("%f %f %f", &length, &width, &height);

    superficial_area = (length * width + width * height + length * height) * 2;
    volume = length * width * height; /*计算公式*/
    edge_length = (length + width + height) * 3;

    printf("superficial_area = %f\n", superficial_area); /*表面积*/
    printf("edge_length = %f\n", edge_length);           /*棱长*/
    printf("volume = %f\n", volume);                     /*体积*/
}
#include <stdio.h>

void main()
{
    float radius, diameter, height , superficial_area, volume, lateral_area;
    
    printf("input radius: ");
    scanf("%f", &radius);

    printf("input height: ");
    scanf("%f",  &height);
    
    diameter = 2.0 *radius;

        superficial_area = 2.0 * 3.14 * radius * radius + 2 * 3.14 * radius * height;
        volume = 3.14 * radius * radius * height; /*计算公式*/
        lateral_area = diameter * 3.14 * height;

    printf("superficial_area = %f\n", superficial_area); /*表面积*/
    printf("lateral_area = %f\n", lateral_area);         /*侧面积*/
    printf("volume = %f\n", volume);                     /*体积*/
}

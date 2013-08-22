//
//  main.c
//  cl
//
//  Created by ishi on 2013/08/22.
//  Copyright (c) 2013年 simultechnology. All rights reserved.
//

#include <stdio.h>

float calc_bmi(float height, float weight)
{
    float height_m = height / 100.0;
    return weight / (height_m * height_m);
}

int main(int argc, const char * argv[])
{
    float height, weight;
    
    height = 169.7;
    weight = 66.4;
    
    float bmi = calc_bmi(height, weight);
    
    printf("BMI = %5.2f\n", bmi);
}


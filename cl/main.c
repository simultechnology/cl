//
//  main.c
//  cl
//
//  Created by ishi on 2013/08/22.
//  Copyright (c) 2013年 simultechnology. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{
    float height, weight;
    
    height = 169.7;
    weight = 66.4;
    
    float height_m = height / 100.0;
    float bmi = weight / (height_m * height_m);
    
    printf("BMI = %5.2f\n", bmi);
}


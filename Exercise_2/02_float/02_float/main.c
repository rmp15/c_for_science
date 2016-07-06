//
//  main.c
//  02_float
//
//  Created by Robbie Parks on 06/07/2016.
//  Copyright © 2016 Robbie Parks. All rights reserved.
//

#include <stdio.h>
#include <float.h>

int main(void)
{
    printf("max. float is\n%f\n",FLT_MAX);
    printf("min. float is\n%f\n",FLT_MIN);
    printf("float epsilon is\n%f\n",FLT_EPSILON);

    printf("max. double is\n%f\n",DBL_MAX);
    printf("min. double is\n%f\n",DBL_MIN);
    printf("double epsilon is\n%f\n",DBL_EPSILON);
    
    double a = 1.0 + DBL_EPSILON;
    double b = (1.0 + DBL_EPSILON / 2.0) + DBL_EPSILON / 2.0;
    double c = 1.0 + (DBL_EPSILON / 2.0 + DBL_EPSILON / 2.0);
    
    printf("%g\n",1-a);
    printf("%g\n",1-b);
    printf("%g\n",1-c);

}

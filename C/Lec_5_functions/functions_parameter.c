#include <stdio.h>

void calGST(float value);

int main()
{
    float value=100;
    calGST(value);
    printf("\nvalue is %f ", value); 

    return 0;
}

void calGST(float value)
{
value=value+0.18*value;
printf("GST added value is %f", value);
}


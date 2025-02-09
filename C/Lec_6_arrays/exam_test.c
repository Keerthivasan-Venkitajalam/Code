#include <stdio.h>

main() {
int Array[] = {11, 8, 4, 12, 3, 10}, temp_1;
float out_1[6],out_2[6],out_3=0, out_4=0,out_5=0;
printf("Output 1 is below \n");
for (int i = 0; i < 4; i++)
{
    out_1[i]=Array[i]/2;
    out_2[i]=Array[i]/2*3;
    out_3+=Array[i];
    out_4=out_4+out_1[i];
    out_5=out_5+out_2[i]*2/3;
    temp_1=Array[i]>5 && Array[i]<10;
    printf("%d", temp_1);
}
printf("\n Out_3 is %.1f",out_3);
printf("\n Out_4 is %.1f",out_4);
printf("\n Out_5 is %.1f",out_5);
}
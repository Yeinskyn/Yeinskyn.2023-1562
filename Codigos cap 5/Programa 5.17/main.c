#include <stdio.h>
#include <stdlib.h>

void main(void)
{
    int V1 [4] = {1, 3, 5, 7}, V2[4] = {2, 4};
    int *AX, *AY;
    AX = &V1[2];
    AY = &V2[2];
    V2[2] = *(AX + 1);
    V2[3] = *AX;
    AX = AX + 1;
    V1 [0] = *AX;

    printf ("\nV1[0] = %d \nV1[1] = %d \nV1[2] = %d \nV1[3] = %d \nV2[0] = %d \nV2[1] = %d  \nV2[2] = %d \nV2[3] = %d", V1[0], V1[1], V1[2], V1[3], V2[0], V2[1], V2[2], V2[3]);

    V1[2] = *AY;
    V1[1] = --*AY;
    AX = AX + 1;
    V1[3] = *AX;

    printf ("\n\nV1[0] = %d \nV1[1] = %d \nV1[2] = %d \nV1[3] = %d \nV2[0] = %d \nV2[1] = %d  \nV2[2] = %d \nV2[3] = %d", V1[0], V1[1], V1[2], V1[3], V2[0], V2[1], V2[2], V2[3]);
}

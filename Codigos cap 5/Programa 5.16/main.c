#include <stdio.h>
#include <stdlib.h>

void main(void)
{
    int V1[4] = {2, 3, 4, 7}, V2[4] = {6};
    int *AX, *AY;
    AX = &V1[3];
    AY = &V2[2];
    V1[V2[0] - V1[2]] = *AY;
    *AY = *AX - V1[0];

    printf ("\nV1[0]= %d \nV1[1]= %d \nV1[2] \nV1[3] \nV2[0] \nV2[1] \nV2[2] \nV2[3]", V1[0], V1[1], V1[2], V1[3], V2[0], V2[1], V2[2], V2[3]);

    V2[1] = ++*AX;
    V2[3] = (*AY)++;
    *AX += 2;

    printf ("\n\nV1[0]= %d \nV1[1]= %d \nV1[2] \nV1[3] \nV2[0] \nV2[1] \nV2[2] \nV2[3]", V1[0], V1[1], V1[2], V1[3], V2[0], V2[1], V2[2], V2[3]);
}

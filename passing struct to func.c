#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef union _Box
{
    short candy;
    float snack;
    char doll[8];
} Box, *PBox;

typedef enum _BOX_TYPE
{
    BOX_PAPAER = 0,
    BOX_WOOD,
    BOX_PLASTIC
} BOX_TYPE, *PBOX_TYPE;

void setBox(PBox box)
{
    box->candy = 20;
}

void setBoxType(PBOX_TYPE boxType)
{
    *boxType = BOX_WOOD;
}

int main(void)
{
    Box box;
    BOX_TYPE boxType;

    setBox(&box);
    setBoxType(&boxType);

    printf("%d\n", box.candy);
    printf("%d\n", boxType);

    return 0;
}

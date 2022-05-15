#include <geo.c>
#include <ctest.h>
#include <math.h>
#include <stdlib.h>
CTEST(set_geometry, test_perimetr)
{
    int i = 0;
    const int exp = 62;
    float number1[6];
    float perimetr[6];
    number1[i] = 10;
    perimetrcir(perimetr, i, number1);
    ASSERT_EQUAL(exp, perimetr[i]);
}
CTEST(set_geometry, test_crossing)
{
    int i = 1;
    const int exp = 0;
    float number1[10];
    float pointx[5][5], pointy[5][5];
    int k[5][6];
    pointx[0][0] = 1;
    pointx[0][1] = 1;
    pointy[0][0] = 3;
    pointy[0][1] = 40;
    number1[1] = 1;
    number1[0] = 1;
    object[0] = 'c';
    crossings(i, pointx, pointy, k, number1);
    int dd;
    dd = k[0][i];
    ASSERT_EQUAL(exp, dd);
}
CTEST(set_geometry, test_radiusconflict)
{
    int i = 1, gg = 0;
    const int exp = 1;
    float number1[6];
    number1[1] = -1;
    gg = nasttest1(number1, i, gg);
    ASSERT_EQUAL(exp, gg);
}
CTEST(set_geometry, test_threeperimetr)
{
    int i = 1;
    const int exp = 13;
    float pointx[5][5], pointy[5][5], perimetr[6];
    pointx[0][1] = 1;
    pointy[0][1] = 1;
    pointx[1][1] = 2;
    pointy[1][1] = 3;
    pointx[2][1] = 7;
    pointy[2][1] = 1;
    perimetrthree(perimetr, i, pointx, pointy);
    ASSERT_EQUAL(exp, perimetr[i]);
}
CTEST(set_geometry, test_nastsquare)
{
    int i = 1;
    const int exp = 6;
    float pointx[5][5], pointy[5][5], ploshad[6];
    pointx[0][1] = 1;
    pointy[0][1] = 1;
    pointx[1][1] = 2;
    pointy[1][1] = 3;
    pointx[2][1] = 7;
    pointy[2][1] = 1;
    ploshadthree(ploshad, i, pointx, pointy);
    ASSERT_EQUAL(exp, ploshad[i]);
}
CTEST(set_geometry, test_squarecircle)
{
    int i = 0;
    const int exp = 314;
    float number1[10];
    float ploshad[5];
    number1[i] = 10;
    squarecircle(ploshad, i, number1);
    ASSERT_EQUAL(exp, ploshad[i]);
}


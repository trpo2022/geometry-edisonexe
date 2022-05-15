#include <geo.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int j, i = 0;
    float pointx[5][5], pointy[5][5], number1[5];
    char ans[2], yes[2] = "y";
    for (j = 0; j < 5; j++) {
        printf("\nWould you like to add object?(y/n)>");
        scanf("%s", &ans[0]);
        if (strcmp(ans, yes) == 0) {
            thevvod(pointx, pointy, number1, i);

            i++;
        } else
            break;
    }
}

#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
float perimetr(float r);
float area(float S);

int main()
{
    int k = 1, c = 7, n = 0, z = 1;
    char s[99], xs[20] = {0}, ys[20] = {0}, rs[20] = {0};
    float y = 0, x = 0, r = 0;
    puts("Enter geometric shape:");
    fgets(s, 99, stdin);
    for (int i = 0; i < strlen(s); i++) {
        if ((s[i] == 'c') && (s[i + 1] == 'i') && (s[i + 2] == 'r')
            && (s[i + 3] == 'c') && (s[i + 4] == 'l') && (s[i + 5] == 'e')
            && (s[i + 6] == '(')) {
            k += 6;
            break;
        } else {
            printf("^\nError at column 0: expected 'circle'");
            exit(0);
        }
    }
    for (; k < 100; k++) {
        if (s[k] == ' ') {
            while (c < k) {
                xs[n] = s[c];
                n++;
                c++;
            }
            x = atof(xs);
            if (x == 0.0) {
                printf("\nError at column %d: expected '<double>'\n", k - 2);
                exit(0);
            }
            n = 0;
            c = k + 1;
        }
        if (s[k] == ',') {
            while (c < k) {
                ys[n] = s[c];
                n++;
                c++;
            }
            y = atof(ys);
            if (y == 0.0) {
                printf("\nError at column %d: expected '<double>'\n", k - 2);
                exit(0);
            }
            n = 0;
            c = k + 1;
        }
        if (s[k] == ')') {
            while (c < k) {
                rs[n] = s[c];
                n++;
                c++;
            }
            r = atof(rs);
            if (r == 0.0) {
                printf("\nError at column %d: expected '<double>'\n", k - 2);
                exit(0);
            }
            n = 0;
        }
    }
    while (s[z + 1] != '\0') {
        if (s[z + 2] == '\0' && s[z] != ')') {
            printf("\nError at column %d: expected ')' \n\n", z + 1);
            exit(0);
        }
        z++;
    }
    printf("\nOkruzhnost: ");
    printf("x=%.1f ", x);
    printf("y=%.1f ", y);
    printf("r=%.1f\n", r);
    printf("P=%.4f", perimetr(r));
    printf(" ");
    printf("S=%.4f\n", area(r));
}

//Периметр
float perimetr(float r)
{
    float P = 2 * M_PI * r;
    return P;
}
//Площадь
float area(float r)
{
    float S = M_PI * pow(r, 2);
    return S;
}

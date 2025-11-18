#include<stdio.h>

int main() {
    int q, r, x, n, a = 0;
    n = 153;
    x = n;

    do {
        q = n / 10;
        r = n % 10;
        a = a + r*r*r;
        n = q;
    } while (q != 0);   // <-- Correct condition

    if (x == a)
        printf("Yes, it is Armstrong");
    else
        printf("No, it is not Armstrong");

    return 0;
}

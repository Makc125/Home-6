/// http://informatics.mccme.ru/mod/statements/view3.php?id=277&chapterid=307
#include <stdio.h>
#include <stdlib.h>

double power(double a, int n)
{
    if (n <= 0) return 1;
    else return a * power(a, n - 1);
}

int main()
{
    double a;
    scanf("%lf", &a);
    int n;
    scanf("%d", &n);
    printf("%lf", power(a, n));
    return 0;
}

/// http://informatics.mccme.ru/mod/statements/view3.php?id=253&chapterid=156
#include <stdio.h>
#include <stdlib.h>

void rotate(int n)
{
    if (n != 0){
        int m;
        scanf("%d", &m);
        rotate(n - 1);
        printf("%d ", m);
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    rotate(n);
    return 0;
}

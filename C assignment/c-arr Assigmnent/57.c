#include <stdio.h>

int main()
{
    int n = 5;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int min_dist = i;
            if (j < min_dist)
                min_dist = j;
            if (n - 1 - i < min_dist)
                min_dist = n - 1 - i;
            if (n - 1 - j < min_dist)
                min_dist = n - 1 - j;

            printf("%d ", min_dist + 1);
        }
        printf("\n");
    }

    return 0;
}

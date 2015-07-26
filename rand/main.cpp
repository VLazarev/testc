#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int random;
    srand(time(0));
    random = rand()%100;
    printf("%d\n\n\n", random);

    for(int i=0; i<=100; i++) {
        printf("%d\n", rand()%100);
    }


    return 0;
}

#include<stdio.h>

enum year{ Jan, Feb, Mar, Apr, May, Jun, 
    Jul, Aug, Sep, Oct, Nov, Dec};

enum week{ Mon = 2, Tue = 33, Wed = 444, 
    Thu = 555, Fri = 66, Sat = 1, Sun};

int main()
{
    int i;
    for( i = Jan; i <= Dec; i++)
    {
        printf("%d ", i);
    }
    printf("\nEnd of Enum year \n");

    printf("%d  %d  %d  %d  %d  %d  %d", 
        Fri, Mon, Sun, Tue, Wed, Thu, Sun);

    return 0;
}
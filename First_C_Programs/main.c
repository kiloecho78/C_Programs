#include <stdio.h>
#include <stdlib.h>


main()
{
    printf("hello, ");
    printf("world");
    printf("\n");

/* print Fahrenheit-Celcius table
        for fahr = 0, 20, ..., 300 */
    float fahr, celcius;

    #define LOWER = 0   /* LOWER limit of temperature scale*/
    #define UPPER = 300 /* UPPER limit */
    #define STEP = 20   /* step size */

    fahr = 0;
    printf("Fahrenheit to Celcius Conversion\n");
    while (fahr <= 300){
        celcius = 5.0 *(fahr-32.0) / 9.0;
        printf("%3.0f\t%6.1f\n", fahr, celcius);
        fahr = fahr + 20;
    }
    /* print Celcius - Fahrenheit table
        for celcius = 0, 20, ..., 300 */
    printf("Celcius to Fahrenheit Conversion\n");
    celcius = 0;
    while(celcius <= 300){
        fahr = ((9.0 * celcius)/5.0) + 32.0;
        printf("%3.0f\t%6.1f\n", celcius, fahr);
        celcius = celcius + 20;
    }

    /* print Fahrenheit-Celcius table
        using for loop instead of while loop */

     printf("\n");
     printf("Fahrenheit to Celcius Conversion Table using for loop 0-300\n");
     int fahr_for;

     for(fahr_for = 0; fahr_for <= 300; fahr_for = fahr_for + 20)
            printf("%3d %6.1f\n", fahr_for, (5.0/9.0)*(fahr_for - 32));

     printf("\n");
     printf("Fahrenheit to Celcius Conversion Table using for loop 300-0\n");
     int fahr_f;

     for(fahr_f = 300; fahr_f >= 0; fahr_f = fahr_f - 20)
            printf("%3d %6.1f\n", fahr_f, (5.0/9.0)*(fahr_f - 32));
}


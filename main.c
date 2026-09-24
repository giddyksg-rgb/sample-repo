#include <stdio.h>
#include <stdlib.h>

int main()
{
    double area ;
    const double Pi = 3.142;
    double radius;
    char userName[50];
    printf("Please enter your username\n");
    scanf("%s",userName);
    printf("Hello %s",userName);
    printf("Please enter radius\n");
    scanf("%lf",&radius);
    area= Pi*radius*radius;
    printf("The area of the circle is %lf",area);

return 0;
}

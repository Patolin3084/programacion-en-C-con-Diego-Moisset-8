#include<stdio.h>
#include<conio.h>

int returnSurface(int side)
{
    int surface=side*side;
    return surface;
}

int main()
{
    int value,surf;
    printf("Enter the value of the side of the square: ");
    scanf("%i",&value);
    surf=returnSurface(value);
    printf("The surface of the square is %i",surf);
    getch();
    return 0;
}

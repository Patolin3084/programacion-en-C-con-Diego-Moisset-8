#include<stdio.h>
#include<conio.h>


struct point{
    int x;
    int y;
};

struct triangle{
    struct point point1;
    struct point point2;
    struct point point3;
};

struct triangle load()
{
    struct triangle t;
    t.point1.x=10;
    t.point1.y=34;
    t.point2.x=100;
    t.point2.y=23;
    t.point3.x=10;
    t.point3.y=78;
    return t;
};

void print(struct triangle t)
{
    printf("Coordinates of the vertices of the triangle.\n");
    printf("Coordinates Point 1 (%i,%i)\n",t.point1.x,t.point1.y);
    printf("Coordinates Point 2 (%i,%i)\n",t.point2.x,t.point2.y);
    printf("Coordinates Point 3 (%i,%i)\n",t.point3.x,t.point3.y);
}

int main()
{
    struct triangle triangle1;
    triangle1=load();
    print(triangle1);
    getch();
    return 0;
}

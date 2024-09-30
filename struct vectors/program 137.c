#include<stdio.h>
#include<conio.h>

#define TAMANO 4

struct product{
    int code;
    char description[41];
    float price;
};

void load(struct product vec[TAMANO])
{
    for(int r=0;r<TAMANO;r++)
    {
        printf("Enter the product code: ");
        scanf("%i",&vec[r].code);
        fflush(stdin);
        printf("Enter the product name: ");
        gets(vec[r].description);
        printf("Enter the product price: ");
        scanf("%f",&vec[r].price);
    }
}

void print(struct product vec[TAMANO])
{
    for(int r=0;r<TAMANO;r++)
    {
        printf("%i  %s  %0.2f\n",vec[r].code,vec[r].description,vec[r].price);
    }
}

void highPrice(struct product vec[TAMANO])
{
    int pos=0;
    for(int r=1;r<TAMANO;r++)
    {
        if(vec[r].price>vec[pos].price)
        {
            pos=r;
        }
    }
    printf("The most expensive product is '%s'",vec[pos].description);
}

int main()
{
    struct product vector[TAMANO];
    load(vector);
    print(vector);
    highPrice(vector);
    getch();
    return 0;
}

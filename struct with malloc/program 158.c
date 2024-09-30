#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>

struct product {
    int code;
    char description[41];
    float price;
};

int main()
{
    struct product *prod;
    prod=malloc(sizeof(struct product));
    prod->code=1;
    strcpy(prod->description,"papas");
    prod->price=12.50;
    printf("Product code: %i\n",prod->code);
    printf("Product name: %s\n",prod->description);
    printf("Product price: %0.2f\n",prod->price);
    free(prod);
    getch();
    return 0;
}

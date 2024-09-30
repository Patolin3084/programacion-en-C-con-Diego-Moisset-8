#include<stdio.h>
#include<conio.h>

#define TAMANO 3

struct date{
    int dd;
    int mm;
    int yy;
};

struct product{
    int code;
    char description[41];
    float price;
    struct date dueDate;
};

void load(struct product vec[TAMANO])
{
    for(int r=0;r<TAMANO;r++)
    {
        printf("Enter the product code: ");
        scanf("%i",&vec[r].code);
        fflush(stdin);
        printf("Enter the product description: ");
        gets(vec[r].description);
        printf("Enter the product price: ");
        scanf("%f",&vec[r].price);
        printf("Due date.\n");
        printf("Day: ");
        scanf("%i",&vec[r].dueDate.dd);
        printf("Month: ");
        scanf("%i",&vec[r].dueDate.mm);
        printf("Year: ");
        scanf("%i",&vec[r].dueDate.yy);
    }
}

void print (struct product vec[TAMANO])
{
    for(int r=0;r<TAMANO;r++)
    {
        printf("%i  %s  %0.2f %i/%i/%i/\n",vec[r].code,vec[r].description,vec[r].price,
               vec[r].dueDate.dd,vec[r].dueDate.mm,vec[r].dueDate.yy);
    }
}

int main()
{
    struct product vec[TAMANO];
    load(vec);
    print(vec);
    getch();
    return 0;
}


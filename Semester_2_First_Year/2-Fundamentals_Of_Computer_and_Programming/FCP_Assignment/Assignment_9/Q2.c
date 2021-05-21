#include <stdio.h>

struct item
{
    char item_name[100];
    int Qty;
    int Price;
    int Amount;
};

void calculate(struct item b)
{
    printf("\n\t Bill ");
    printf("\nItem Name : %s", b.item_name);
    printf("\nQuantity of Item : %d", b.Qty);
    printf("\nPrice of Item : %d", b.Price);
    b.Amount = (b.Price) * (b.Qty);
    printf("\nAmount : %d", b.Amount);
}

void main()
{
    struct item a;
    printf("Enter Item Name : ");
    scanf("%s", &a.item_name);
    printf("Enter Quantity of Item : ");
    scanf("%d", &a.Qty);
    printf("Enter Price of Item : ");
    scanf("%d", &a.Price);
    calculate(a);
}
#include <stdio.h>

struct Item
{
    int count, price;
};

typedef struct Item Item;

int main()
{
    Item values[] = {{100, 100}, {20, 30}, {1, 2}};
    long int n;
    scanf("%ld", &n);
    int i = 0, allPrice = 0;
    while (i < 3)
    {
        allPrice += (n / values[i].count) * values[i].price;
        if (n % values[i].price > 65)
        {
            allPrice += 100;
            break;
        }
        else if (n < 100 && n % values[i].count > 15)
        {
            allPrice += 30;
            break;
        }
        n = n % values[i].count;
        i++;
    }
    printf("%d", allPrice);
}
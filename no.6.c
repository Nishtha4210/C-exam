#include <stdio.h>
#include <string.h>

#define MAX_MOBILES 10

struct Mobile {
    char company_name[50];
    char color[20];
    char model[50];
    float price;
};

int main() {
    struct Mobile mobiles[MAX_MOBILES];
    int i, n;

    printf("Enter the number of mobiles: ");
    scanf("%d", &n);

   
    if(n < 1 || n > MAX_MOBILES) {
        printf("Invalid number of mobiles. Please enter a number between 1 and %d.\n", MAX_MOBILES);
        return 1;
    }

    
    for(i = 0; i < n; i++) {
        printf("\nEnter the details of mobile %d:\n", i + 1);
        printf("Company name: ");
        scanf("%s", mobiles[i].company_name);
        printf("Color: ");
        scanf("%s", mobiles[i].color);
        printf("Model: ");
        scanf("%s", mobiles[i].model);
        printf("Price: ");
        scanf("%f", &mobiles[i].price);
    }

    
    printf("\nDetails of the mobiles:\n");
    for(i = 0; i < n; i++) {
        printf("\nMobile %d:\n", i + 1);
        printf("Company name: %s\n", mobiles[i].company_name);
        printf("Color: %s\n", mobiles[i].color);
        printf("Model: %s\n", mobiles[i].model);
        printf("Price: %.2f\n", mobiles[i].price);
    }

    return 0;
}
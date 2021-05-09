#include <stdio.h>

int main()
{
    int count, i;
    float purchasePrice[10], sellingPrice[10];
    float totalPurchase = 0, totalSelling = 0, totalTurnover, brokerage, serviceTax, securityTax, stampDuty, regulatoryCharges, amount;
    printf("\nEnter total no of shares NOT more than 10=");
    scanf("%d", &count);
    printf("\nEnter purchase price for each share :");
    for (i = 0; i < count; i++)
    {
        printf("\n%d th share =", i);
        scanf("%f", &purchasePrice[i]);
        totalPurchase += purchasePrice[i];
    }
    printf("\nEnter selling price for each share :");
    for (i = 0; i < count; i++)
    {
        printf("\n%d th share =", i);
        scanf("%f", &sellingPrice[i]);
        totalSelling += sellingPrice[i];
    }
    totalTurnover = totalPurchase + totalSelling;
    brokerage = (totalPurchase * 0.0003) + (totalSelling * 0.0003);
    serviceTax = brokerage * 0.1036;
    securityTax = totalSelling * 0.00025;
    stampDuty = totalTurnover * 0.00002;
    regulatoryCharges=(totalTurnover*0.00004);
    amount = totalSelling - totalPurchase - (regulatoryCharges+serviceTax + securityTax + stampDuty);
    if (amount > 0)
        printf("\nProfit of %f Rs", amount);
    else if (amount < 0)
        printf("\nLoss of %f Rs", amount);
    else
        printf("\nNo profit or loss");
}

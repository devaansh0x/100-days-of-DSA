#include <stdio.h>

int maxProfit(int *prices, int pricesSize)
{
    int minPrice = prices[0];
    int maxProfit = 0;

    for (int i = 1; i < pricesSize; i++)
    {
        if (prices[i] < minPrice)
        {
            minPrice = prices[i];
        }
        else
        {
            int profit = prices[i] - minPrice;
            if (profit > maxProfit)
            {
                maxProfit = profit;
            }
        }
    }

    return maxProfit;
}

int main()
{
    int n;
    scanf("%d", &n);

    int prices[100000];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &prices[i]);
    }

    int result = maxProfit(prices, n);
    printf("%d\n", result);

    return 0;
}

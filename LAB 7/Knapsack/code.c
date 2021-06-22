#include <stdio.h>

int max(int a, int b) { return (a > b) ? a : b;}

int knapSack(int W, int weight[], int value[], int n)
{
    if (n == 0 || W == 0)
        return 0;

    if (weight[n - 1] > W)
        return knapSack(W, weight, value, n - 1);

    else
        return max(value[n - 1] + knapSack(W - weight[n - 1], weight, value, n - 1), knapSack(W, weight, value, n - 1));
}

int main()
{
    int n;
    printf("\nEnter the number of items : ");
    scanf("%d", &n);
    int value[n];
    int weight[n];
    int i;
    printf("\nEnter the items weight \n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &weight[i]);
    }
    printf("\nEnter the items value \n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &value[i]);
    }

    int W;
    printf("\nEnter the capacity of the knapsack : ");
    scanf("%d", &W);
    printf("\nMaximum value in a 0-1 knapsack : %d\n", knapSack(W, weight, value, n));
    return 0;
}

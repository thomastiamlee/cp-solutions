#include <cstdio>

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    int left[n];
    int right[n];

    // Use two arrays - one to get the cumulative maximum so far from the left, and
    // another to get the cumulative minimum from the right
    int maxSoFar = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        if (i == 0 || arr[i] > maxSoFar)
        {
            maxSoFar = arr[i];
        }
        left[i] = maxSoFar;
    }
    int minSoFar = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        if (i == n - 1 || arr[i] < minSoFar)
        {
            minSoFar = arr[i];
        }
        right[i] = minSoFar;
    }

    // For an element to be a pivot, the maximum so far from the left of the previous element
    // should be less than the pivot, while the minimum so far from the right should be greater
    // than the pivot
    int pivot = 0;
    for (int i = 0; i < n; i++)
    {
        if (i == 0 && right[i + 1] > arr[i])
            pivot++;
        else if (i == n - 1 && left[i - 1] < arr[i])
            pivot++;
        else if (right[i + 1] > arr[i] && left[i - 1] < arr[i])
            pivot++;
    }

    printf("%d\n", pivot);
}
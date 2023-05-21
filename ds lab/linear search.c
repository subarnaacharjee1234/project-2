#include <stdio.h>

int linear_search(int arr[], int len, int val)
{
    int i = 0;
    for (i = 0; i < len; i++)
    {
        if (arr[i] == val)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int len, val , result;

    scanf("%d", &len);
    int arr[len];
    for (int i = 0; i < len; i++)
    {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &val);

    result = linear_search(arr, len, val);
    (result != -1)
    ?
         printf("%d is Found at %d", val, result + 1)
    :
        printf("%d is not Found", val);

    return 0;
}

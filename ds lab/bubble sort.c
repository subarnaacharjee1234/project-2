#include <stdio.h>
int main()
{
    int i, j, temp, len;

    scanf("%d", &len);
    int arr[len];
    for (i = 0; i < len; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < len; i++)
    {
        /* Inner Loop */
        for (j = 0; j < len - i - 1; j++)
        {
            /* Check */
            if (arr[j] > arr[j + 1])
            {
                /* Swap */
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
          /*Show Step*/
        // printf("Step : %d    ", i+1);
        // for (int k = 0; k < len; k++)
        // {
        //     printf("%d, ", arr[k]);
        // }
        // printf("\n\n");
    }

    /*Show sorted array*/

    for (i = 0; i < len; i++)
    {
        printf("%d ", arr[i]);
    }
}

#include <stdio.h>

int main()
{
    int start_num, end_num;

    printf("Enter starting and ending range: ");
    scanf("%d %d", &start_num, &end_num);

    printf("Strong numbers between %d and %d are: ", start_num, end_num);
    for (int i = start_num; i <= end_num; i++)
    {
        int sum = 0;
        int digit;
        for (int j = i; j != 0; j /= 10)
        {
            digit = j % 10;
            int factor = 1;
            for (int k = digit; k > 1; k--)
            {
                factor *= k;
            }
            sum += factor;
        }
        if (sum == i)
            printf("%d ", sum);
    }
}

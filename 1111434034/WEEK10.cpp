#include<stdio.h>

#define SIZE 10

void sort(int j[], int length, int flag);

int main()

{

    int a[SIZE] =

    { 2

    , 6

    , 4

    , 8

    , 10

    , 12

    , 89

    , 68

    , 45,

    , 37

    };



    for (int i = 0; i < 10;i++)

    {

        printf("輸入第%d筆資料:", i + 1);

        scanf_s("%d", &a[i]);

    }

    for (int i = 0; i < 10;i++)

    {

        printf("%d.", a[i]);

    }

    printf("請輸入排序方式 (0: 由大到小, 1: 由小到大):");

    int flag;

    scanf_s("%d", &flag);



    sort(a, 10, flag);

    printf("排序後資料順序: ");

    for (int i = 0; i < 10;i++)

    {

        printf("%d ", a[i]);

    }

    printf("\n");



    return 0;

}

void sort(int j[], int length, int flag)

{

    for (int pass = 1; pass < length; ++pass)

    {

        for (int i = 0; i < length - pass; ++i)

        {

            if (flag == 1)

            {

                if (j[i] > j[i + 1])

                {

                    int hold = j[i];

                    j[i] = j[i + 1];

                    j[i + 1] = hold;

                }

            }

            else if (flag == 0)

            {

                if (j[i] < j[i + 1])

                {

                    int hold = j[i];

                    j[i] = j[i + 1];

                    j[i + 1] = hold;

                }

            }

        }

    }

}
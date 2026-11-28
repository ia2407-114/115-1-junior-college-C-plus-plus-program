#include<stdio.h>

#define SIZE 10
#define Grade 3
void sort_array(int j[][3], int length, int flag);
int  binary_search(int k[][3], int key, int low, int high);
int main()
{
    int a[SIZE][Grade] =
    { {1,10,20},
        {2,20,30},
        {3,30,40},
        {4,40,50},
        {5,90,60},
        {6,62,78},
        {7,52,10},
        {8,92,0},
        {9,81,52},
        {10,63,65}
    };
    for (int i = 0; i < 10; i++)
    {
        printf("學號:%d.", a[i][0]);
        printf("數學成績:%d.", a[i][1]);
        printf("英文成績:%d.\n", a[i][2]);
    }
    printf("請輸入排序方式(英文成績排序) (0: 由大到小, 1: 由小到大):");
    int flag;
    scanf_s("%d", &flag);
    sort_array(a, 10, flag);
    printf("排序後資料順序: ");
    for (int i = 0; i < 10; i++)
    {
        printf("學號:%d.", a[i][0]);
        printf("數學成績:%d.", a[i][1]);
        printf("英文成績:%d.\n", a[i][2]);
    }
    int low = 0;
    int high = SIZE-1;
    printf("\n");
    int key;
    printf("輸入要尋找的英文成績:");
    scanf_s("%d", &key);
    int found = binary_search(a, key, low, high);
    if (found==1)
    {
        printf("找到了!!");
    }
    else if(found==0)
    {
        printf("NO FOUND!");
    }
    return 0;
}
void sort_array(int j[][3], int length, int flag)
{
    for (int pass = 1; pass < length; ++pass)
    {
        for (int i = 0; i < length - pass; ++i)
        {
            if (flag == 1)
            {
                if (j[i][2] > j[i + 1][2])
                {
                    for (int c = 0; c < 3; c++)
                    {
                        int hold = j[i][c];
                        j[i][c] = j[i + 1][c];
                        j[i + 1][c] = hold;
                    }
                }
            }
            else if (flag == 0)
            {
                if (j[i][2] < j[i + 1][2])
                {
                    for (int c = 0; c < 3; c++)
                    {
                        int hold = j[i][c];
                        j[i][c] = j[i + 1][c];
                        j[i + 1][c] = hold;
                    }
                }
            }
        }
    }
}
 int binary_search(int k[][3], int key, int low, int high)
{
     
     while (low <= high)
     {
         int mid = (low + high) / 2;
         if (key == k[mid][2] )
         {
             return 1;
         }
         else if (key != k[mid][2])
         {
             if (key > k[mid][2])
             {
                 low = mid + 1;
             }
             else if (key < k[mid][2])
             {
                 high = mid - 1;
             }
         }
     }
     return 0;
 }
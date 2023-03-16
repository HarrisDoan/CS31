#include <iostream>
#include <string>

using namespace std;

void descSort(int *nums, int len)
{
    for (int i = 0; i < len; i++)
    {
        int min_value = *(nums + i);
        int min_ind = i;
        for (int j = i + 1; j < len; j++)
        {
            int curr_num = *(nums + j);
            if (curr_num > min_value)
            {
                min_value = curr_num;
                min_ind = j;
            }
        }
        *(nums + min_ind) = *(nums + i);
        *(nums + i) = min_value;
    }
}

void mergeAndSort(int *nums1, int *nums2, int *merged, int len1, int len2)
{
    int merged_index = 0;

    for (int x = 0; x < len1; x++)
    {
        *(merged + merged_index) = *(nums1 + x);
        merged_index++;
    }

    for (int y = 0; y < len2; y++)
    {
        *(merged + merged_index) = *(nums2 + y);
        merged_index++;
    }

    for (int i = 0; i < len1 + len2; i++)
    {
        int min_value = *(merged + i);
        int min_index = i;

        for (int j = i + 1; j < len1 + len2; j++)
        {
            int curr_value = *(merged + j);
            if (curr_value < min_value)
            {
                min_value = curr_value;
                min_index = j;
            }
        }

        *(merged + merged_index) = *(merged + i);
        *(merged + i) = min_index;
    }
}

void minMax(int arr[], int n, int *min, int *max)
{
    int min_value = 1000;
    int max_value = -1000;
    for (int i = 0; i < n; i++)
    {
        int curr_value = *(arr + i);
        if (curr_value < min_value)
        {
            min_value = curr_value;
            min = arr + i;
        }
        if (curr_value > max_value)
        {
            max_value = curr_value;
            max = arr + i;
        }
    }

    cout << "The maximum value is: " << *max << endl;
    cout << "The minimum value is: " << *min << endl;
}

int main()
{
    int arr[5] = {0, 5, 7, -10, 2};
    int *min;
    int *max;
    minMax(arr, 5, min, max);
}
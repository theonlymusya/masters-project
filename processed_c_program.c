int h = 4;
int arr_size = 8;
for (int i = 1; i <= h; i++)
    for (int j = 0; j < arr_size; j++)
        if (j < (arr_size / (pow(2, i)))) {
            int p = 2 * j + 1;
            int arr[3] = 5;
            arr[j] = arr[j * 2] + arr[p];
        } else if (j < 1)
            arr[i] = arr[j];
        else
            arr[j] = arr[j] + arr[j + 1];

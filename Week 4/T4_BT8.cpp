void readArray(int array[], int n)
{
    for (int i = 1; i <= n; ++i)
        cin >> array[i];
}

bool compareArray(int array1[], int array2[], int n)
{
    for (int i =1; i <=n; ++i)
        if(array1[i] != array2[i]) return false;
    return true;
}

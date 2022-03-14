long long int factorial(int n)
{
    long long int ds = 1;
    for (int i = 1; i <= n; ++i)
        ds*=i;
    return ds;
}

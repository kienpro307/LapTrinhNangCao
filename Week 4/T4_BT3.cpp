void printArrow(int n, bool left)
{
    if(!left)
    {
        for (int i = 1; i <= n; ++i)
        {

            for (int j = 1; j <= 2*n - 1; ++j)
                if(j >= 2*i - 1 && j <= 2*n - 1 - (n - i)) cout << "*";
                else cout << " ";
            cout << endl;
        }
        for (int i = 1; i <= n - 1; ++i)
        {
            for (int j = 1; j <= 2*n - 1; ++j)
                if(j >= 2*n - 1 - 2*i && j <= 2*n - 1 - i) cout << "*";
                else cout << " ";
            cout << endl;
        }
    }
    else
    {
        for (int i = 1; i <= n; ++i)
        {
            for (int j = 1; j <= 2*n - 1; ++j)
                if(j >= n + 1 - i && j <= 2*n + 1 - 2*i) cout << "*";
                else cout << " ";
            cout << endl;
        }
        for (int i = 1; i <= n - 1; ++i)
        {
            for (int j = 1; j <= 2*n - 1; ++j)
                if(j >= i + 1 && j <= 1 + 2*i) cout << "*";
                else cout << " ";
            cout << endl;
        }
    }
}

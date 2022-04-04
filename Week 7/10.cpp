void rFilter(char *s)
{
    int n = strlen(s);
    int t = -1;
    for (int i = n-1; i >= 0; i--)
        if((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
            {
                t = i;
                break;
            }
    for (int i = t + 1; i < n; ++i) s[i] = '_';
}

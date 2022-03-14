string toLower (string s)
{
    int n = s.length();
    string key= "";
    for (int i = 0;  i < n; ++i)
        key += tolower(s[i]);
    return key;
}

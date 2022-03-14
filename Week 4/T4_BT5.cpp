bool isPrime (int number)
{
    if (number <= 1) return false;
    if (number == 2) return true;
    for (int i = 3; i <= sqrt(number); ++i)
        if (number % i == 0)
    {
        return false;
        break;
    }
    return true;
}

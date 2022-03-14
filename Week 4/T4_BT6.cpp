double calculate (double num1, char operat, double num2)
{
    double ds;
    switch (operat)
    {
        case '-':
        {
            ds = num1 - num2;
            break;
        }
        case '+':
        {
            ds = num1 + num2;
            break;
        }
        case '/':
        {
            ds = num1 / num2;
            break;
        }
        case '*':
        {
            ds = num1 * num2;
            break;
        }
    }
    return ds;
}

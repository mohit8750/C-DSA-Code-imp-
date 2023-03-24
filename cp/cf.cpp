unsigned long int factorial(unsigned int n)
{
    unsigned long int res = 1;

    for (int i = 1; i <= n; ++i)
    {
        res *= i;
    }

    return res;
}

unsigned long int binomialCoeff(unsigned int n, unsigned int k)
{
    unsigned long int res = 1;

    if (k > n - k)
        k = n - k;

    for (int i = 0; i < k; ++i)
    {
        res *= (n - i);
        res /= (i + 1);
    }

    return res;
}

unsigned long int catalan(unsigned int n)
{

    unsigned long int c = binomialCoeff(2 * n, n);

    return c / (n + 1);
}

unsigned long int countBST(unsigned int n)
{

    unsigned long int count = catalan(n);

    return count;
}

bool palindrome(int n)
{
    if( n == 0 )
    {
        return true;
    }
    // Write your code here
    int dup=n;
    int revNum=0;
    int r;
    while(n>0)
    {
      r = n % 10;
      revNum = (10*revNum)+r;
      n = n / 10;
    }

    if(dup == revNum)
    {
        return true;
    }
    else
    {
        return false;
    }
    return false;
}

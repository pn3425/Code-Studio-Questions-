int count(int n)
{
	int r;
	int count=0;
	while(n>0)
	{
		r = n % 10;
		count++;
		n = n / 10;
	}
	return count;
}

bool checkArmstrong(int n){
	//Write your code here
    int r;
	int dup=n;
	int res=0;
	int c = count(n);
	while(n>0)
	{
		r = n % 10;
        res = res + pow(r,c);
		n = n / 10;
	}
	if ( dup == res)
	{
		return true;
	}
	return false;
}

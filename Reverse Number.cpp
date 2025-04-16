#include <bits/stdc++.h> 
long long int reverseNumber(long long int n)
{
	//type your code here
	long long r;
	long long revnum=0;
	while(n>0)
	{
		r = n % 10;
		revnum = (10 * revnum) + r;
		n = n / 10;
	}
	return revnum;
}
/*
n = 12345

n>0       r=n%10   n=n/10       revnum = (10*revnum) + r
12345>0     5       1234                   0+5=       5
1234>0      4        123                   10*5 + 4 = 54
123>0		3		  12	               540 + 3 =  543
12>0        2          1                   5430+ 2 = 5432
1>0         1          0                   54320 + 1 = 54321
0>0 {F} 
*/

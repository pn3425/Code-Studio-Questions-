#include<bits/stdc++.h>
bool isPrime(int n)
{
	// Write your code here.
	int count = 0;
	for(int i=1;i<sqrt(n);i++)
	{
		if(n % i == 0)
		{
			count++;
		
		 if ( (n/i) != i )
		
			count++;
		} 
	}
	if(count == 2)
	{
		return true;
	}
	return false;
}

/*
--> Prime number definition
	A prime number has exactly 2 divisors: 1 and itself.
	For example:
	
	n=7 → divisors = {1, 7} → prime ✅
	
	n=6 → divisors = {1, 2, 3, 6} → not prime ❌
	
--> Why do we check i != n/i?

		When you find a divisor i of n, you also know that n/i is another divisor.
		But sometimes i and n/i are the same number (when n is a perfect square).
		In that case, we must not double-count the divisor.

		Example 1: n = 12
		
		Divisors = {1, 2, 3, 4, 6, 12}
		
		Loop:
		
		i=2 → n/i = 12/2 = 6 → i != n/i ✅ → count both (2,6).
		
		i=3 → n/i = 12/3 = 4 → i != n/i ✅ → count both (3,4).
		
		So both divisors in each pair are different → safe to count both.


		Example 2: n = 9 (perfect square)
		
		Divisors = {1, 3, 9}
		
		Loop:
		
		i=3 → n/i = 9/3 = 3 → i == n/i ❌
		→ means divisor pair is the same number (3,3).
		→ So we should only count it once.
*/

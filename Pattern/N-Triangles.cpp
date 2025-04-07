void nTriangle(int n) {

	for(int i=1;i<=n;i++)
	{
		cout<<endl;
		for(int j=1;j<=i;j++)
		{
			cout<<j<<" ";
		}
	}
	
}

// i=0 i<=n i=0 i<n


/*    n=3

i    j   j<=i
-----------------------------------------
1    1   1<=1 (T)   i=1,j=1 Print -> 1
     2   2<=1 (F)

2    1   1<=2 (T)   i=2,j=1 Print -> 1
     2   2<=2 (T)   i=2,j=2 Print -> 2
     3   3<=2 (F) 

3    1   1<=3 (T)   i=3,j=1 Print -> 1
     2   2<=3 (T)   i=3,j=2 Print -> 2
	 3   3<=3 (T)   i=3,j=3 Print -> 3
     4   4<=3 (F)
*/

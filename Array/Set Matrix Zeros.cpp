#include <bits/stdc++.h>

void setZeros(vector<vector<int>> &matrix)
{
	/*
		1) Approach 1 : Brute Force , TC -> O(n*m) (First trversal) + O(n+m) (Marking -1) + (n*m) (Again from -1 to 0)
		-> Where ever you find while traversing matrix 0, so its column and row mark it to -1
		-> Again iterate and replace those -1 to 0 
	*/

    /*
	for(int i=0;i<matrix.size();i++)   //Traverse and mark -1
	{
		for(int j=0;j<matrix.size();j++)
		{
			if(matrix[i][j] == 0)
			{
				markRow[i];
				markCol[j];
			}
		}
	}

	void markRow(int i)            //Function to mark -1 for row
	{  
		for(int j=0;j<matrix.size();j++)
		{
			if(matrix[i][j] != 0)
			{
				matrix[i][j] = -1;
			}
		}

	}

	void markCol(int j)  		//Function to mark -1 to col
	{
		for(int j=0;j<matrix.size();j++)
		{
			if(matrix[i][j] != 0)
			{
				matrix[i][j] = -1;
			}
		}

	}

		for(int i=0;i<matrix.size();i++)   //Marking back 0 where -1 was there
	{
		for(int j=0;j<matrix.size();j++)
		{
			if(matrix[i][j] == -1)
			{
				matrix[i][j] = 0;
			}
		}
	} */



      // 2) Better Solution: 

}

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



      // 2) Better Solution:  TC -> O(2*(N*M)) SC -> O(N+M) (Extra Array)
      /*
	  -> Use Col[m] and row[m] array and initialise to 0
	  -> Now traverse matrix, for every 0 that you encounter, mark it corresponding col and row array to 1 (Marking done where 0 is needed)
	  -> Now traverse matrix, for where 1 you find check its corresponding col or row if they are marked or not if yes set that 1 to 0 
    
	  */


	  /*
		int col[m]={0};   //Initialize row and column array
		int row[n]={0};

		for(int i=0;i<n;i++)   //Set col and row array as 1, where matrix[i][j]=0
		{
			for(int j=0;j<m;j++)
			{
				if(matrix[i][j]=0)
				{
					col[i]=1;
					row[j]=1;
				}
			}
		}

		for(int i=0;i<n;i++)   //Now traverse again to check where 1 is there in matrix, and mark to 0
		{
			for(int j=0;j<m;j++)
			{
				if(col[j] || row[i])
				{
					matrix[i][j]=0;
				}
			}
		}

		return matrix;
	  */
}

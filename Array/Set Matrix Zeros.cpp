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

//-------------------------------------------------------------------------------

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
//-------------------------------------------------------------------------------

	// 3) Optimal : 

	/* MAIN ALGO : 
      -> Here similar to approach 2 we have to follow
	  -> But the col and row will be the top row and leftmost col in matric itself, NO NEED TO DECLARE SEPARATE ROW AND COL
	  -> Since matrix[0][0] collides between row and col, take it separately in another variable
	  -> Start iterating matrix if found 0, mark the resp col & row cell as 0
	  -> Now start iterating matrix (From matrix[1,1]) to mark existing 1's to 0 by cross checking the above step
	  -> Update the top most row
	  -> Followed by the left most col
	*/

	//int col[m]={0}; -> matrix[0][..];
	//int row[n]={0}; -> matrix[..][0];

	int n = matrix.size();         // number of rows
    int m = matrix[0].size();      // number of columns

    int col0=1;
	for(int i=0;i<n;i++)              //MARKING 
	{
		for(int j=0;j<m;j++)
		{
			if(matrix[i][j] == 0)
			{
				matrix[i][0]=0;  //Mark ith row
				
				if(j!=0)
				{
					matrix[0][j]=0; //Mark ith col
				}
				else
				col0=0;
			}
		}
	}

	for(int i=1;i<n;i++)    //Updating from matrix[1][1]
	{
		for(int j=1;j<m;j++)
		{
			if(matrix[i][0] == 0 || matrix[0][j] == 0)
			{
				matrix[i][j]=0;
			}
		}
	}

	if(matrix[0][0] == 0) {   //Updating 0 in the top most row
		for(int j=0;j<m;j++)
		{
			matrix[0][j]=0;
		}
	}  
	if(col0 == 0)
	{
		for(int i=0;i<n;i++)
		{
			matrix[i][0]=0;
		}
	}
}

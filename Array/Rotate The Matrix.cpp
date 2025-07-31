#include<vector>

void rotateMatrix(vector<vector<int>> &mat){
	// Write your code here.

	// 1) Brute Force Approach : tc -> O(n^2), sc -> o(n^2)
	/*
		11 32 45       90 88 11        
		88 56 67  ->   21 56 32
		90 21 36       36 67 45

		 i j      j (n-1)-i
		[0,0] -> [0,2]
		[0,1] -> [1,2]
		[0,2] -> [2,2]

		int n = mat.size();
		int ans[n][n];

		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){

				ans[j][(n-1)-i]=matrix[i][j];
			}
		}

		return ans;
	*/                     	 

//-------------------------------------------------------------------------------

	/*
    2) Optimal Solution : Changes within the matrix

    -> Transpose the matrix
	-> Reverse each row to get the final matrix (rotated matrix by 90 on clockwise)

         Given         Transpose      Reversing

    	11 32 45       11 88 90       90 88 11
		88 56 67  ->   32 56 21   ->  21 56 32
		90 21 36       45 67 36       36 67 45


    For Logic/Actual Implementation :
	     1) The diagnol doest change its location
		 2) Swap mat[0][1] to mat[1][0] (B/w given & transpose)
		 3) Similarly check for others

		 [0][1] [1][0]
		 [0][2] [2][0]
		 [1][2] [2][1]

		 For 0 we travelled 1 to 2
		     i             i+1  n-1

		 For 1 we travelled to (d)

		 So from 0 to 1 -> n-2 
	*/

	//Transposing :   TC -> O(n/2 * n/2)
	int n = mat.size();
	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			swap(mat[i][j],mat[j][i]);
		}
	}

	//Reversing : TC -> O(n (Traverse) * n/2(Rev))

	for(int i=0;i<n;i++)
	{
		reverse(mat[i].begin(), mat[i].end());
	}

}

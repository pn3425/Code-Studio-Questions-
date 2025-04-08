void numberCrown(int n) {
  int space = 2*n-2;
  for(int i=1;i<=n;i++){

  for(int j=1;j<=i;j++)
  {
      cout<<j<<" ";
  }

  for(int k=1;k<=space;k++)
  {
      cout<<" ";
  }
  space=space-2;
 
  for(int l=i;l>=1;l--)
  {
      cout<<l<<" ";
  }
   cout<<endl;
  }

}


/*
    1 2 3 4 5 6
                      num   space   num  
    1         1   1    1      4      1
    1 2     2 1   2    2      2      2
    1 2 3 3 2 1   3    3      0      3


   First For Loop for rows i=0;i<n;i++

  j=1 j<=2n-2 j++
   

   2n-i-1  
   6-1-1 = 4 
   6-2-1 = 3
   6-3-1 = 2 

1     1 
1 2   1 2 
1 2 3 1 2 3 




*/

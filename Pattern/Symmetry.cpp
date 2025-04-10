void symmetry(int n) {
    // Write your code here.
    
    for(int i=1;i<=n;i++)
    {
        int sp = 2*(2*n-2*i);
        for(int j=1;j<=i;j++)
        {
            cout<<"* ";
        }

        for(int k=1;k<=sp;k++)
        {
            cout<<" ";
        }

        for(int j=1;j<=i;j++)
        {
            cout<<"* ";
        }
        sp=sp-2;

        cout<<endl;
    }

    int sp = (2*n-2);
    //int sp=0;
    for(int i=n-1;i>=1;i--)
    {
     
     for(int j=1;j<=i;j++)
     {
         cout<<"* ";
     }

     for(int k=1;k<=sp;k++)
     {
         cout<<" ";
     }

      for(int j=1;j<=i;j++)
     {
         cout<<"* ";
     }
     
    sp = sp + 4;
    cout<<endl;

    }

}

/*

            0 1 2 3 4 5

            1 2 3 4 5 6
            *         *    0/1
            * *     * *    1/2
            * * * * * *    2/3
            * *     * *    3/4
            *         *    4/5


   Star space star
   1     4      1
   2     2      2
   3     0      3
   2     2      2
   1     4      1













*/

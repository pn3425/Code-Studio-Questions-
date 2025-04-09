void symmetry(int n) {
    // Write your code here.
    int sp=0;
    for(int i=0;i<n;i++)
    {
        
        for(int j=1;j<=n-i;j++)
        {
            cout<<"*"<<" ";
        }

        for(int k=0;k<sp;k++)
        {
           cout<<" ";
        }

        for(int l=1;l<=n-i;l++)
        {
            cout<<"*"<<" ";
        }
        sp=sp+4;

    cout<<endl;
    }
    
    sp = 2*(2*n-2);
    for(int i=1;i<=n;i++)
    {

        for(int j=1;j<=i;j++)
        {
            cout<<"*"<<" ";
        }

        for(int k=0;k<sp;k++)
        {
            cout<<" ";
        }

        for(int l=1;l<=i;l++)
        {
            cout<<"*"<<" ";
        }

        sp=sp-4;
        cout<<endl;
    }
    
    
}







/*
            1 2 3 4 5 6

            * * * * * *  1/0
            * *     * *  2/1
            *         *  3/2
            *         *  4/3
            * *     * *  5/4
            * * * * * *  6/5

 
  star space star
  3     0     3
  2     2     2
  1     4     1
  1     4     1
  2     2     2
  3     0     3






*/

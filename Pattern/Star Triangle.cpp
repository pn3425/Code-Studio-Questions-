void nStarTriangle(int n) {
    // Write your code here.
    // for(int i=0;i<n;i++)
    // {
        
    //     for(int j=0;j<n-i+1;j++)
    //     {
    //        cout<<" "; 
           
    //     }
      
    //     for(int k=0;k<2*i+1;k++)
    //     {
    //         cout<<"*";
    //     }

    //     for(int l=0;l<n-i+1;l++)
    //     {
    //         cout<<" ";
    //     }
    //     cout<<endl;
    // }

    for (int i = 0; i < n; i++)
    {
        // For printing the spaces before stars in each row
        for (int j =0; j<n-i-1; j++)
        {
            cout <<" ";
        }
       
        // For printing the stars in each row
        for(int j=0;j< 2*i+1;j++){
            
            cout<<"*";
        }
        
        // For printing the spaces after the stars in each row
         for (int j =0; j<n-i-1; j++)
        {
            cout <<" ";
        }
        
        // As soon as the stars for each iteration are printed, we move to the
        // next row and give a line break otherwise all stars
        // would get printed in 1 line.
        cout << endl;
    }

}

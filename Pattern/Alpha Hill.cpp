void alphaHill(int n) {
    // Write your code here.
    
    for(int i=0;i<n;i++)
    {
     
      for(int j=0;j<(n-i-1);j++)
      {
          cout<<" ";
      }
     char ch = 'A';
     int breakpoint = (2*i+1)/2;
      for(int k=1;k<=(2*i+1);k++)
      {
          cout<<ch<<" ";
          if(k<=breakpoint)
          {
              ch++;
          }
          else ch--;
          
      }
       
      for(int l=0;l<(n-i-1);l++)
      {
          cout<<" ";
      }
    cout<<endl;
    }
}

/*

            0 1 2 3 4

                A        0
              A B A      1
            A B C B A    2
 

For Printing Ch, Calculate the BreakPoint

 breakpoint (1,2) =  (2*i+1)/2  but for this they have considered 
                                printing indexing from j=1


            1 2 3 4 5

                A        0
              A B A      1
            A B C B A    2

*/

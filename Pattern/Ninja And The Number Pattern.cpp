void getNumberPattern(int n) {
    // Write your code here.
    for(int i=0;i<2*n-1;i++)
    {
        for(int j=0;j<2*n-1;j++)
        {
            int top = i;
            int left = j;
            int right = (2*n-2)-j;
            int down = (2*n-2)-i;

            cout<<(n-min(min(top,down),min(left,right)));
        }
        cout<<endl;
    }

}
/*

The outer and inner loops runs for 2n-1 times


                                         0123456

            4444444                  0   0000000  
            4333334                  1   0111110
            4322234     -> n-matrix =2   0122210
            4321234                  3   0123210
            4322234                  4   0122210
            4333334                  5   0111110
            4444444                  6   0000000

*/

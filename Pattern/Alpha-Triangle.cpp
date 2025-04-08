void alphaTriangle(int n) {
    // Write your code here.
    
    for(int i=0;i<n;i++)
     {
        char ch = 'A' + (n - 1);
        //char ch = 'A';
        if (n >= 1 && n <= 26) {
        char ch = 'A' + (n - 1);
        }
        for(int j=i;j>=0;j--)
        {
            cout<<ch<<" ";
            ch--;
        }
        cout<<endl;
    }
}

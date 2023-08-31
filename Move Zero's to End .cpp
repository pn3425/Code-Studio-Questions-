vector<int> moveZeros(int n, vector<int> a) {
    // Write your code here.
    vector<int>st;
    int zerocnt=0;
    for(int i=0;i<n;i++)
    {
        if(a[i] == 0)
        {
            zerocnt++;
        }
    }
    int l = a.size();
    
    for(int i=0;i<n;i++)
    {
        if (a[i] != 0) {
            st.push_back(a[i]);
        }
    }

      for (int i = 0; i < zerocnt; i++) {
        st.push_back(0);
    }
    return st;
}

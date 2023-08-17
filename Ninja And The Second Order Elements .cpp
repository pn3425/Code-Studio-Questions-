vector<int> getSecondOrderElements(int n, vector<int> a) {
    // Write your code here.
    vector<int>d;
    sort(a.begin(),a.end());
    d.push_back(a[n-2]);
    d.push_back(a[1]);
    return d;
}

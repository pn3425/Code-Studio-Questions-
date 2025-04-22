vector<int> printNos(int x) {
    // Write Your Code Here
    if( x == 0)
    {
       return {};
    }
    vector<int>result = printNos(x-1);
    result.insert(result.begin(),x);
    return result;
}

//But this solution is not optimal
/*

printNos(5)
  ? calls printNos(4)
      ? calls printNos(3)
          ? calls printNos(2)
              ? calls printNos(1)
                  ? calls printNos(0) ? returns {}
              ? returns {1}       (insert 1 at front of {})
          ? returns {2, 1}       (insert 2 at front of {1})
      ? returns {3, 2, 1}       (insert 3 at front of {2, 1})
  ? returns {4, 3, 2, 1}       (insert 4 at front of {3, 2, 1})
? returns {5, 4, 3, 2, 1}     (insert 5 at front of {4, 3, 2, 1})


*/

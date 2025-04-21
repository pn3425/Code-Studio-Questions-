vector<int> printNos(int x) {
    // Write Your Code Here
    if( x == 0)
    {
        return{};
    }
    vector<int> res;
    res = printNos(x-1);
    res.push_back(x);
    return res;
}

/*
printNos(3)
   |
   |--> printNos(2)
         |
         |--> printNos(1)
               |
               |--> printNos(0)
                      --> returns []

               --> res = [] + 1
               --> returns [1]

         --> res = [1] + 2
         --> returns [1, 2]

   --> res = [1, 2] + 3
   --> returns [1, 2, 3]
*/

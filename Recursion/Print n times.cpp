vector<string> printNTimes(int n) {
	// Write your code here.
	if(n == 0)
	{
		return {}; 
	}

    vector<string> res;
	res = printNTimes(n-1);
	res.push_back("Coding Ninjas ");
	return res;
}

/* .
printNTimes(3)
   |
   |--> printNTimes(2)
         |
         |--> printNTimes(1)
               |
               |--> printNTimes(0)
                      --> returns []

               --> result = [] + "Coding Ninjas"
               --> returns ["Coding Ninjas"]

         --> result = ["Coding Ninjas"] + "Coding Ninjas"
         --> returns ["Coding Ninjas", "Coding Ninjas"]

   --> result = ["Coding Ninjas", "Coding Ninjas"] + "Coding Ninjas"
   --> returns ["Coding Ninjas", "Coding Ninjas", "Coding Ninjas"]







*/

/*
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
}*/

//------------------------------STRIVER----------------------------------------

//APP 1 BRUTE FORCE TC & SC -> o(n) WORST CASE 

 vector<int> moveZeros(int n, vector<int> a) {

 vector<int> temp;
 for(int i=0;i<n;i++)
 {
     if(a[i]!=0)
     {
         temp.push_back(a[i]);
     }
 }

 for(int i=0;i<temp.size();i++)
 {
    a[i]=temp[i];
 }

 for(int i=temp.size();i<n;i++)
 {
     a[i]=0;
 }

 return a;
 }

// Approach 2 (Using 2 Pointer) TC->O(N), SP->O(1), since no extra array,vector,list is used
  vector<int> moveZeros(int n, vector<int> a){
       
       int j=-1;                       //This is to set j=0 always and then compare with the right elements and check if it is non zero, if it is then swap
       for(int i=0;i<n;i++)
       {
           if(a[i]==0)
           {
               j=i;
               break;
           }
   
       }
       if(j==-1)return a; //For Non-Zero, since j will be 0 if any zeroes present

       for(int i=j+1;i<n;i++)
       {
           if(a[i]!=0)
           {
               swap(a[i],a[j]);
               j++;
           }
        
       
       }

    return a;
       
  }

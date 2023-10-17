//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
    //Function to find the maximum occurring character in a string.
    char getMaxOccuringChar(string str)
    {
        char ans;
        int maxfreq=0;
        int n=str.length();
        
        int count[256]={0};
        
        for(int i=0; i<n; i++){
            count[str[i]]++;
            
            if(count[str[i]]>maxfreq){
                maxfreq=count[str[i]];
                ans=str[i];
            }
            
            else if(count[str[i]]==maxfreq && str[i]<ans){
                ans=str[i];
            }
        }
        return ans;
        
    }

};

//{ Driver Code Starts.

int main()
{
   
    int t;
    cin >> t;
    while(t--)
    {
        string str;
        cin >> str;
    	Solution obj;
        cout<< obj.getMaxOccuringChar(str)<<endl;
    }
}
// } Driver Code Ends
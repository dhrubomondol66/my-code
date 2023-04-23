#include <iostream>
#include <map>
#include <climits>
using namespace std;

int main() {
	int t, n;
	cin>>t;
	while(t--)
	{
	    cin>>n;
	    string s;
	    //char x;
	    map<char, int>mp;
	    cin>>s;
	    for(int i=0;i<n;i++)
	    {
	        //x=s[i];
	        mp[s[i]]++;
	    }
	    int max=INT_MIN;
	    for(auto i: mp)
	    {
	        if(max<i.second)max=i.second;
	    }
	    cout<<n-max<<endl;
	}
	return 0;
}

#include<bits/stdc++.h>
using namespace std;

int  Inverse(int num){
       int p= 1;
	   int ans = 0;
	   while(num>0){
		   int rem = num%10;
		   ans = ans + p * pow(10,rem-1);
		   p++;
		   num = num/10;
	   }
	  
	    return ans;

}

int main() {
	int n ;
	cin>>n;
	int a[n];
	
	for(int i=0; i<n;i++){
		cin>>a[i];
	}

	for(int i=0; i<n;i++){
		    Inverse(a[i]);

	 if(a[i] == Inverse(a[i]))
      cout<<"true"<<endl;
	  else
	  cout<<"false"<<endl;
	}
	return 0;
}
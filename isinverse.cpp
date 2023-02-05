#include<bits/stdc++.h>
using namespace std;

int  inInverse(int n){
	int ans = 0;
	int p=1;
    while (n>0){
		 int rem = n%10;
         ans = ans + p * pow(10,rem-1);
         p++;
		 n=n/10;
	}

	// if(ans==n){
	// 	return true;
	// }else{
	// 	return false;
	// }
//    cout<<ans;
return ans;

}

int main() {
	int n;
	cin>>n;



	if(n==inInverse(n)){
		cout<<"true";
	}else{
		cout<<"false";
	}
    //  inInverse(n);
	
	return 0;
}

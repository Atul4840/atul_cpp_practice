#include<iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	int a[n];
	int inverse[n]={0};
	for(int i=0; i<n; i++){
          cin>>a[i];
	}

	for(int i=0; i<n; i++){
        inverse[a[i]] =  i;
	}

	// for(int i=0; i<n; i++){
    //     cout<<a[i];
	// }

	// for(int i=0; i<n; i++){
    //     cout<<inverse[i];
	// }

	bool isinverse = true;

	for(int i=0; i<n; i++){
         if(a[i] != inverse[i]){
              isinverse = false;
			break;
	    }
	}

	if(isinverse){
		cout<<"true";
	}else{
		cout<<"false";
	}

	
	return 0;
}
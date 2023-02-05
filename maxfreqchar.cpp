#include<iostream>
#include <cstring>
using namespace std;

 char  maxfreqchar(char str[] ,int freq[]){

        for (int i = 0;  str[i]!='\0'; ++i)
        {
        	freq[str[i]]++;
        }

        // find largest value in array
        int max= -2147483648;
        int index=-1;
        for (int i = 0; i < 256; ++i)
        {  
        	if(max<freq[i]){
        			max=freq[i];
        	        index=i;
        	}
        	
        }

         // cout<<freq[65];
         return char (index) ;
 }


int main(void)
{
         char str[100];
         int freq[256]={0};
        cin>>str;

       
        cout<<maxfreqchar(str, freq);
      	return 0;
}
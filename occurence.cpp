#include<iostream>
using namespace std;


int main(void)
{
	char str[100];
	int freq[256]={0};
	cin>>str;

   for (int i = 0;  str[i]!='\0'; ++i)
   {
    
        int count = 1; 
		
		 while (str[i]!='\0' && str[i] == str[i + 1]) { 
            count++; 
            i++; 
        }
      
        // Print character and its count
        if (count == 1)
        {
          cout << str[i];
        }
        else
        {
          cout << str[i] << count;
        }
   }
	return 0;
}
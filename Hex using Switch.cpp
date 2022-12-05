#include <bits/stdc++.h>
using namespace std;
class Test
{
public:
	
	void dectohex(int num){
	    
        int temp, i = 1, j, r;
        char hex[50];
        
        temp = num;
        while (temp != 0)
        {
            r = temp % 16;
            if (r < 10)
                hex[i++] = r + 48;
            else
                hex[i++] = r + 55;
            temp = temp / 16;
        }
        cout << "\nHexadecimal equivalent of " << num << " is : ";
        for (j = i; j > 0; j--)
            cout << hex[j];
	}
	
	void dectobin(int decimal){
	    
      int binary = 0, remainder, product = 1;
      while (decimal != 0) {
        remainder = decimal % 2;
        binary = binary + (remainder * product);
        decimal = decimal / 2;
        product *= 10;
      }
      cout << "The number in the binary form is: " << binary ;
	}
};

int main() {
	int choice;
	int num;
	Test a;
	cout<<"Enter your choice (1. Dec to Hex) (2.Dec to Bin): ";
	cin>>choice;
	switch(choice){
    case 1:
    cout<<"Enter the decimal number that you want to convert to Hexadecimal: ";
    cin>>num;
    a.dectohex(num);
    break;
    case 2:
    cout<<"Enter the decimal number that you want to convert to Binary: ";
    cin>>num;
    a.dectobin(num);
    break;
}
	
	return 0;
}

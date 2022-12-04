#include <bits/stdc++.h>
using namespace std;
class Test
{
public:
	
    int convert(string num) {
       int len = num.length();
       int base = 1;
       int temp = 0;
       for (int i=len-1; i>=0; i--) {
          if (num[i]>='0' && num[i]<='9') {
             temp += (num[i] - 48)*base;
             base = base * 16;
          }
          else if (num[i]>='A' && num[i]<='F') {
             temp += (num[i] - 55)*base;
             base = base*16;
          }
       }
       return temp;
    }
    
    void leftshift(int n){
        cout<<"leftshift: "<<(n<<1);
    }
    
	void rightshift(int n){
        cout<<"rightshift: "<<(n>>1);
    }
    
    void bitwise_and(int a,int b){
        cout<<"bitwise and: "<<(a&&b);
    }
	
	void bitwise_or(int a,int b){
	    cout<<"bitwise or: "<<(a|b);
	}
};

int main() {
	Test a;
	string num;
	string num2;
	cout << "Enter a Hexadecimal number : ";
	cin >> num;
	a.leftshift(a.convert(num));
	cout<<endl;
	a.rightshift(a.convert(num));
	cout<<endl;
	cout << "Enter another Hexadecimal number : ";
	cin>>num2;
	a.bitwise_and(a.convert(num),a.convert(num2));
	cout<<endl;
	a.bitwise_or(a.convert(num),a.convert(num2));
	return 0;
}

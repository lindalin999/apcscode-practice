/*
-秘密差- 
將一個十進位正整數的奇數位數的和稱為A ，偶數位數的和稱為B，
則A與B的絕對差值 |A －B| 稱為這個正整數的秘密差。
例如： 263541 的奇數位和 A = 6+5+1 =12，偶數位的和 B = 2+3+4 = 9 
所以 263541 的秘密差是 |12 －9|= 3 。
給定一個 十進位正整數 X，請找出 X的秘密差。
*/
#include<bits/stdc++.h> 
using namespace std;
int main(){
	int A,B;
	string s;		
	while(cin>>s){				//輸入一字串s 
		A=0,B=0;							//初始化A、B的值 
		for(int i=0;i<s.length();i++){		//s.length()：字串s的長度 
			if(i%2==0){						//如果i是偶數 
				A=A+s[i]-'0';				//將原本的A值加上第i+1位數 
			}
			else if(i%2!=0){				//如果i是奇數 
				B=B+s[i]-'0';				//將原本的B值加上第i+1位數 
			}
		}
		cout<<abs(A-B)<<endl;				//輸出|A－B| 
	}
	return 0;
}

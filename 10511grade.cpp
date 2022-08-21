/*
-成績指標- 
請你設計一支程式，讀入全班成績(人數不固定)，請對所有分數進行排序，並分別找出不及格中最高分數，以及及格中最低分數。
當找不到最低及格分數，表示對於本次考試而言，這是一個不幸之班級，此時請你印出：「worst case」；
反之，當找不到最高不及格分數時，請你印出「best case」。
*/

#include<bits/stdc++.h>
using namespace std;
int main(){
	int a[20],stu,b,w;
	cin>>stu;
	for(int i=0;i<stu;i++){
		cin>>a[i];
	}
	/*排序大家的成績(升冪)*/ 
	std::sort(a,a+stu);
	for(int i=0;i<stu;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
	
	/*判定大家成績*/
	if(a[0]>=60) cout<<"best case"<<endl;  
	else{
		for(int i=0;a[i]<60 and i<stu;i++){		//最高不及格 b(順著找) 
			b=a[i];					//如果沒補and i<stu，因為後面沒滿的陣列值=0->會印出0 
		}
		cout<<b<<endl;
	}
	
	if(a[stu-1]<60) cout<<"worst case"<<endl;
	else{
		for(int i=stu-1;a[i]>60;i--){		//最低及格 w(反著找) 
			w=a[i];
		}
		cout<<w<<endl;
	}
	return 0;
}

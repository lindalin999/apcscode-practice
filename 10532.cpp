/*最大和 
給定N群數字，每群都恰有M個正整數。若從每群數字中各選擇一個數字
將所選出的N個數字加總即可得和 S
請寫程式計算 S的最大值 (最大總和 )，並判斷各群所選出的數字是否可以整除 S*/ 

#include<bits/stdc++.h>  //include whole header file
using namespace std;
int main(){
	int N,M,m[20][20];	
	int S=0,d=0;
  int div[20]={0},k[20]={0};          //一開始皆將用來存資料的陣列設為空陣列 
	
	/*輸入題目要的測資，用比大小找出每組中的最大數*/ 
	cin>>N>>M;						              //N組數 M每組數字個數	
	for(int i=0;i<N;i++){
		for(int j=0;j<M;j++){
			cin>>m[i][j];				            //m陣列存"第i組的第j個數字" 
			if(m[i][j]>k[i]){
				k[i]=m[i][j]; 			          //k為"每組中的最大數字" 
			}
		}
	}
	/*加總 k[i]得S*/ 
	for(int i=0;i<N;i++){
		S=S+k[i];						              //S為k的加總 
	}
	/*從k[i]中找出可以整除的div[d]*/ 
	for(int i=0;i<N;i++){
		if(S%k[i]==0){					          //如果S除k的餘數為0(可以整除) 
			div[d]=k[i];				            //用div陣列儲存可以整除的數字們 
			d=d+1;						              //d為"可以整除的數字之個數" 
		}
	}
	/*印出題目要的輸出*/ 
	cout<<S<<endl;
	if(d>0){
		for(int i=0;i<d;i++){
			cout<<div[i]<<" ";			        //印出可以整除的數字 
		}
	}
	else if(d==0)cout<<"-1";			      //如果每個數字沒辦法整除S->印出"-1 
	
    return 0;
}

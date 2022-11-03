/*磁磚問題*/ 
#include<bits/stdc++.h> 
using namespace std;
int aa;
int f(int a){					//階乘 
	aa=1;
	int i=1;
	if(a==0)aa=1;
	else{
		for(int s=1;s<=a;s++){
		aa=aa*s;
		} 
	}

	return aa;
}

int main(){
	int n,sol=0,i,j,k,q; 
	while(cin>>n){
		for(i=0;i<=n;i++){
			for(j=0;j<=n;j++){
				for(k=0;k<=n;k++){
					if((i+2*j+3*k)==n){			
						q=f(i+j+k)/(f(i)*f(j)*f(k));
						sol=sol+q;
					}
				}	
			}
		}
		cout<<sol<<endl;
		sol=0;
	}
        return 0;
}

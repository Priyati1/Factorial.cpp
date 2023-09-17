#include<iostream>
using namespace std;
int fact(int no){
	int ans=1;
	for(int i=1;i<=no;i++){
		ans=ans*i;
	}
	return ans;
}
int ncr(int n,int r){
	int res=fact(n)/fact(r)*fact(n-r);
	return res;
}

int main(){
	int n,r;
	cin>>n>>r;
	cout<<ncr(n,r)<<endl;
	return 0;
}
#include<bits/stdc++.h> 
using namespace std; 
int missingAPterm=INT_MIN;

void missingTerm(int a[],int l,int h,int d){

	if(l>=h) return;

	int m=(l+h)/2;
	int currentAPterm=a[0]+m*d;

	if((a[m]-a[m-1])!=d&&m>0) 
	missingAPterm=a[m-1]+d;
	else if((a[m+1]-a[m])!=d&&m+1<h)
	missingAPterm=a[m]+d;
	else if(a[m]==currentAPterm)
	missingTerm(a,m+1,h,d);
	else 
	missingTerm(a,l,m-1,d);

	return;
}
int main() 
{  
	int a[100];
	int n=0;
	while((scanf("%d",&a[n])) != EOF) n++;

	if(n<3) cout<<"invalid input"<<endl;
	else{
		int d;
		if((a[2]-a[1])==(a[1]-a[0])) d=a[1]-a[0];
		else if((a[3]-a[2])==(a[2]-a[1])) d=a[2]-a[1];
		else d=a[1]-a[0];

		missingTerm(a,0,n,d);
		if(missingAPterm>INT_MIN) cout<<missingAPterm<<endl;
		else cout<<"No term missing"<<endl;
	}
	return 0; 
}

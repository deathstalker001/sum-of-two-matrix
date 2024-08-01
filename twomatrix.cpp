#include<iostream>
using namespace std;
int main(){
	int a[10][10],b[10][10],c[10][10];
	int i,j,row,col;
	cout<<"Enter row and columns:"<<endl;
	cin>>row>>col;
	cout<<"Enter the matrix elements for 1st one"<<endl;
    for(i=1;i<=row;i++){
    	for(j=1;j<=col;j++){
    		cout<<"Enter element a"<<i<<j<<":";
    		cin>>a[i][j];
		}
	}
	cout<<"Enter the matrix elements for 2nd one"<<endl;
    for(i=1;i<=row;i++){
    	for(j=1;j<=col;j++){
    		cout<<"Enter element b"<<i<<j<<":";
    		cin>>b[i][j];
		}
	}
	cout<<"Entered 1st matrix is:"<<endl;
	for(i=1;i<=row;i++){
		for(j=1;j<=col;j++){
				cout<<" ";
			cout<<a[i][j];
			cout<<" ";
			if(j==col)
			cout<<endl;
		}
	}
	cout<<"Entered 2st matrix is:"<<endl;
	for(i=1;i<=row;i++){
		for(j=1;j<=col;j++){
				cout<<" ";
			cout<<b[i][j];
				cout<<" ";
			if(j==col)
			cout<<endl;
		}
	}
	cout<<"Sum of two matrix is:"<<endl;
	for(i=1;i<=row;i++){
		for(j=1;j<=col;j++){
			c[i][j]=a[i][j]+b[i][j];
				cout<<" ";
			cout<<c[i][j];
				cout<<" ";
			if(j==col)
			cout<<endl;
		}
	}
	
	return 0;
	
}

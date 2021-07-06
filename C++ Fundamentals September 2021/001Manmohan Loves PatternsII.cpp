/*
1
11
202
3003
40004
*/
#include<iostream>
using namespace std;
int main() {
	int n;
	cin>>n;
	int row = 1;
	while(row<=n){
		int col = 1;
		while(col<=row){
			if(col==1 or col == row){
				if(row == 2 or row == 1){
					cout<<1;
				}else{
					
				cout<<row-1;
				}
			}else{
				cout<<0;
			}
			col = col + 1;
		}		
		cout<<endl;
		row++;
	}
	return 0;
}
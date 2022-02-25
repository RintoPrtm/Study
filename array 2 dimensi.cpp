#include <iostream>
using namespace std;

int main()
{
	int x[4][2]={{2,20000},{4,45000},{8,82000},{12,100000}};
	
	for (int b=0;b<4;b++){
		for (int k=0;k<2;k++){
			cout<<" "<<x[b][k];
		}
		cout<<endl;
	}
return(0);

}

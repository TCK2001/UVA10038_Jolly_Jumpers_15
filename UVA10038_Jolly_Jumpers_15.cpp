/*
Sample Input
4 1 4 2 3
5 1 4 2 -1 6
Sample Output
Jolly
Not jolly
*/

#include <iostream>
#include <cstdio>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
	int n;
	while(cin>>n)
	{
		int save[n+1]={0}; //입력한 값 저장 하는 함수; 
		int count[n]={0}; //횟수 저장 함수; 
		int check=1; //판단 함수; 
		for(int i=0;i<n;i++)
		{
			cin>>save[i]; //값 입력; 
		}
		for(int j=1;j<n;j++) //두번째부터 판단; 
		{
			int temp;
			temp=abs(save[j]-save[j-1]); //마이너스 나올수도 있으니 절대값으로 처리; 
			if(temp<n) //내가 입력한 값보다 횟수보다 무조건 작아야함; 
			{
				count[temp]++;
				if(count[temp]>1||temp<=0)
				{
					check=0;
					break;
				}
			}
			else if(temp>=n) //만약 크거나 같으면 틀림; 
			{
				check=0;
				break;
			}
		}
		if(check==1) //출력; 
		{
			cout<<"Jolly"<<endl;
		}
		else
		{
			cout<<"Not Jolly"<<endl;
		}
	}

return 0;
}


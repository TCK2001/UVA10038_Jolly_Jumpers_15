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
		int save[n+1]={0}; //�Է��� �� ���� �ϴ� �Լ�; 
		int count[n]={0}; //Ƚ�� ���� �Լ�; 
		int check=1; //�Ǵ� �Լ�; 
		for(int i=0;i<n;i++)
		{
			cin>>save[i]; //�� �Է�; 
		}
		for(int j=1;j<n;j++) //�ι�°���� �Ǵ�; 
		{
			int temp;
			temp=abs(save[j]-save[j-1]); //���̳ʽ� ���ü��� ������ ���밪���� ó��; 
			if(temp<n) //���� �Է��� ������ Ƚ������ ������ �۾ƾ���; 
			{
				count[temp]++;
				if(count[temp]>1||temp<=0)
				{
					check=0;
					break;
				}
			}
			else if(temp>=n) //���� ũ�ų� ������ Ʋ��; 
			{
				check=0;
				break;
			}
		}
		if(check==1) //���; 
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


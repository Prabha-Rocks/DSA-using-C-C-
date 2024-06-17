//Kruskal's Algo to find MST Edges
#include<iostream>
#define I INT_MAX
using namespace std;
int set[8]={-1,-1,-1,-1,-1,-1,-1,-1};
void join(int u,int v)//Union or join
{
	if(set[u]<set[v])//if u<v make v as parent
	{
		set[u]=set[u]+set[v];
		set[v]=u;
	}
	else//u>v make u as parent of union set
	{ 
		set[v]=set[u]+set[v];
		set[u]=v;
	}	
}
int find(int u)//u=ele whose parent/root to be found
{
	int v;
	int x=u;//storing u in x
	while(set[x]>0)//if s[x]<0 thats the root index
	{
		x=set[x];
	}
	while(u!=x)//collapsing find:connecting vertices directly to parent
	{
		v=set[u];
		set[u]=x;
		u=v;
	}
	return x;
}
int edges[3][9]=
	{{1,1,2,2,3,4,4,5,5},//1st vertex
	 {2,6,3,7,4,5,7,6,7},//2nd vertex
	 {25,5,12,10,8,16,14,20,18}};//cost
int included[9]={0};
int t[2][6];//result array
int main()
{
	int i=0,j,k,u,v,min=I,n=7,e=9;
	while(i<n-1)
	{
		min=I;
		for(j=0;j<e;j++)
		{
			if(included[j]==0 && edges[2][j]<min)
			{
				min=edges[2][j];
				u=edges[0][j];
				v=edges[1][j];
				k=j;
			}
		}
		if(find(u)!=find(v))
		{
			t[0][i]=u;
			t[1][i]=v;
			join(find(u),find(v));//join parents
			i++;	
		}
	included[k]=1;//mark the edges we got as 1	
	}
	for(i=0;i<n-1;i++)//display ele in result t
	{
		cout<<"("<<t[0][i]<<","<<t[1][i]<<")"<<endl;
	}
	return 0;
}	 



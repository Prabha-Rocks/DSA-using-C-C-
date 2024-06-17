//Array inside Class
//Display price of items in a shop with item id
#include<iostream>
using namespace std;
class Shop{
	int ItemId[20];
	int ItemPrice[20];
	int counter;
	public:
		void initCounter(void){counter=0;}//initial counter value is 0
		void setprice(void);
		void displayprice(void);
};
void Shop::setprice(void)
{
	cout<<"ItemId of itemno "<<counter+1<<endl;
	cin>>ItemId[counter];
	cout<<"Item Price:"<<endl;
	cin>>ItemPrice[counter];
	counter++;
}
void Shop::displayprice(void)
{
	int i;
	for(i=0;i<counter;i++)
	{
		cout<<"Price of Item with Id "<<ItemId[i]<<" is "<<ItemPrice[i]<<endl;		
	}
}
int main()
{
	Shop s;
	s.initCounter();
	s.setprice();
	s.setprice();
	s.setprice();
	s.displayprice();
	return 0;
}

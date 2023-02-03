#include <iostream>
using namespace std;
int main()
{
    int customer, dinner, bill, discount;
    for (customer=1; customer<=5; customer++)
    {
		cout<<"Enter number of dinners you have in restaurant: ";
		cin>>dinner;
		if (dinner>=5)
		{
		    cout<<"Enter your total bill: ";
		    cin>>bill;
		    if (bill>=1000)
		    {
		        discount=(20*bill)/100;
		        cout<<"\nYour discounted amount is "<<discount<<endl;
		    }
		    else
		    cout<<"Not Eligible because your bill is less than 1000"<<endl;
		}
		else
			cout<<"Not Eligible because your no. of dinners is less than 5"<<endl;
		
		cout<<"\n-----------------------------------------------------------\n";
    }
    return 0;
}

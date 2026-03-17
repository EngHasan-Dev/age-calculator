#include <iostream>
using namespace std;
int main(){
	
	
	
	
	cout<<"==============================\n";
	cout<<"calculate your age application\n";
	cout<<"==============================\n";
	
int age;
cin>>age;
int age_is_days=age*365;
int age_is_hours=age_is_days*24;
int age_is_minute=age_is_days*24*60;
int age_is_second=age_is_days*24*60*60;

cout<<"age in days is="<<age_is_days<<" Days\n";
cout<<"age in hours is="<<age_is_hours<<" hours\n";
cout<<"age in minute is="<<age_is_minute<<" minute\n";
cout<<"age in second is="<<age_is_second<<"second\n";
	
	
	
	
}

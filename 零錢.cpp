#include <iostream>
using namespace std;

int main() {
cout<<"請輸入金額:";
int  money;
cin>>money;

cout<<"50有"<<money/50<<"個\n";
cout<<"10有"<<money%50/10<<"個\n";
cout<<"5有"<<money%50%10/5<<"個\n";
cout<<"1有"<<money%50%10%5<<"個\n";
}

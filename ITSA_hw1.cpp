#include <iostream>
using namespace std;

int main(void)
{
	int input11,input12,input21,input22;
    cin>>input11>>input12>>input21>>input22;

    int temph,tempm;
    int totalm;
    temph=(input21-input11)*60;
    tempm=(input22-input12);
    totalm=temph+tempm;
	
    int counter=0;

    int price=0;
	while(totalm>=30)
    {
        switch(counter){
            case 0:
                price+=30;
                break;
            case 1:
                price+=30;
                break;
            case 2:
                price+=30;
                break;
            case 3:
                price+=30;
                break;
            case 4:
                price+=40;
                break;
            case 5:
                price+=40;
                break;
            case 6:
                price+=40;
                break;
            case 7:
                price+=40;
                break;
            default:
                price+=60;
                break;
        }
        totalm-=30;
        counter++;
    }
    cout<<price<<endl;
	return 0;
}
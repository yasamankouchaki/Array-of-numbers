//getting n time number and using array to find how many time does a number repeated
#include<iostream>
using namespace std;
int main()
{
    int n;
    int count[9]={ 0 };
    int max=0,min=0;
    int i;
    cout<<"Enter n numbers (between 1 and 9,enter 0 to stop:" << endl;
    while(true){
       cin>>n;
       if(n==0)
        {
            break;
        }
       if(n<1||n>9){
       cout<<"number between 1 to 9!\n";
            continue;
            }
        count[n-1]++;
    }
        for(int i=1;i<=9;i++){
            if(count[i]>count[max])
               max=i;
        }
        if(count[i]<count[min]||
           count[min]==0){
                 min=i;
       }
         cout<<"Occurrences of each number:\n";
         for (int i = 0; i < 9; i++) {
              cout << i + 1 << ": " << count[i] << " times\n";
    }
         cout << "Most repeated number: " << max + 1 << " (" << count[max] << " times)\n";
         cout << "Least repeated number: " << min + 1 << " (" << count[min] << " times)\n";

    return 0;
}

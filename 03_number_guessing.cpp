#include <iostream>
#include <time.h>
using namespace std;

int main() {
    system("color d");
    srand(time(0));
    int number,Guess,nGuesses=1;
    number= rand()%100+1;

    cout<<"number"<<number<<endl;

    do{
        
      cout<<"Guess a number between 1 to 100"<<endl;
      cin>>Guess;

      if(Guess<0 || Guess>100){
        cout<<"You entered Invalid Number"<<endl;
      }
      else if(Guess<number){
        cout<<"Higher number please!"<<endl;
      }
      else if(Guess>number){
        cout<<"Lower number please!"<<endl;
      }
      else{
        cout<<"You guess it in "<<nGuesses<<" attempts"<<endl;
      }
      nGuesses++;

    }while(number!=Guess);
    return 0;
}
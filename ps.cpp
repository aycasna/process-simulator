#include <iostream>
#include <time.h> 

using namespace std;


int main(){

    int CompletionTime, processCount;
    srand (time(NULL));
    CompletionTime = rand() % 200 + 1;
    processCount = rand() % 10 + 2;

    cout << CompletionTime << endl;
    cout << processCount << endl;

    int count = 0;
    for(int i=0; i<=CompletionTime; i++){
        cout << "Zaman: " << i << " saniye: olay oldu" << endl;
        count++;
        if (count == processCount){
            break;
        }
    }
}

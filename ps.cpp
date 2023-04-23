#include <iostream>
#include <time.h> 

using namespace std;


int main(){

    int SimulationCompletionTime, ProcessCompletionTime;
    srand (time(NULL));
    SimulationCompletionTime = rand() % 200 + 1;

    cout << "Simulation Completion Time: " << SimulationCompletionTime << endl;
    

    
    
    for( int i=0; i<=SimulationCompletionTime; i = i+ProcessCompletionTime ){
        ProcessCompletionTime = rand() % 20 + 1;
        cout << "Process completion time: " <<ProcessCompletionTime << endl;
        cout << "---------------------------Zaman: " << i << " saniye: olay oldu" << endl;
        
        
    }
}

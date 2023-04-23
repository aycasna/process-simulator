#include <iostream>
#include <time.h> 

using namespace std;

int main(){

    int SimulationCompletionTime, ProcessCompletionTime, ProcessType, ProcessCount;
    srand (time(NULL));
    SimulationCompletionTime = rand() % 200 + 1; //simülasyonun tamamlanma süresi, 1 ve 200 arasında rastgele seçilir.
    ProcessCount = rand() % 20 + 1; //toplam süreç sayısı, 1 ve 20 arasında rastgele seçilir.


    cout << "Simulation Completion Time: " << SimulationCompletionTime << endl; 
    cout << "Process Count: " << ProcessCount << endl << endl;
    cout << "Simulation Started" << endl;
    
    //döngü, simülasyon tamamlanma süresine ulaşana kadar, süreçlerin tamamlanma süreleri kadar artarak devam eder.
    for(int i = 0; i <= SimulationCompletionTime; i = i + ProcessCompletionTime ){ 
        ProcessCompletionTime = rand() % 20 + 1; //süreç tamamlanma süresi, 1 ve 20 arasında rastgele seçilir.
        cout << "Process completion time: " << ProcessCompletionTime << endl;
        cout << "Time " << i << "s: event happened." << endl;      
    }
}

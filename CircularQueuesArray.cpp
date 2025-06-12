#include <iostream>
using namespace std;

class Queues {
private:
    static const int MAX = 5;
    int FRONT, REAR;
    int queue_array[5];
public:
    Queues()
    {
        FRONT = -1;
        REAR = -1;
    }
    void insert()
    {
        int num;
        cout << "Enter a number : ";
        cin >> num;
        cout << endl;

        //cek apakah antrian penuh
        if ((FRONT == 0 && REAR == MAX - 1) || (FRONT == REAR + 1)) 
        {
            cout << "\nQueue overflow\n"; //1.a
             return;
        }
        
    }
};
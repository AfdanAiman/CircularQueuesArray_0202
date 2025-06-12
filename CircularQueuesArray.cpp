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
        //cek apakah antrian kosong
        if (FRONT == -1)
        {
            FRONT =0;//2.a
            REAR = 0;//2.b
        }
        else
        {
            //Jika REAR berada di posisi terakhir array,kembali ke awal array
            if (REAR == MAX - 1)
            {
                REAR = 0;
            }
            else
            {
                REAR = REAR + 1;
            }
            queue_array[REAR] = num; 
        }
        
        
    }
};
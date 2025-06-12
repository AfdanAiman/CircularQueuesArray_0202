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
    void remove()
        {
            //Cek apakah antrian kosong
            if (FRONT == -1)
            {
                cout << "Queue underflow\n";
                return;
            }
        cout << "\nThe element deleted from the queue is : " << queue_array[FRONT] << "\n";
            //Cek apakah antrian hanya memiliki satu elemen
            if(FRONT == REAR)
            {
                FRONT = -1;
                REAR = -1; 
            }
            else
            {
                // Jika element yang dihapus berada di posisi terakhir array, kembali ke awal array
                if (FRONT == MAX -1)
                
                    FRONT = 0;
                else
                
                    FRONT = FRONT + 1;
                
            }
           
        }
        void display()
        {
            int FRONT_position = FRONT;
            int REAR_position = REAR;
            //Cek apakah antrian kosong
            if (FRONT == -1)
            {
                cout << "Queue is empty\n";
                return;
            }

            cout << "\nElements in the queue are...\n";
            // Jika FRONT_position <= REAR_position, literasi dari FRONT ke REAR
            if(FRONT_position <= REAR_position)
            {
                while (FRONT_position <= REAR_position)
                {
                    cout << queue_array[FRONT_position] << "  ";
                    FRONT_position++;
                }
                cout << endl;

            }
            else
            {
                // Jika FRONT_position > REAR_position, literasi dari FRONT ke akhir array
                while (FRONT_position <= MAX -1)
                {
                    cout << queue_array[FRONT_position] << "  ";
                    FRONT_position++;
                }

                FRONT_position = 0;
                // literasi dari awal array hingga REAR
                while (FRONT_position <= REAR_position)
                {
                    cout << queue_array[FRONT_position] << "  ";
                    FRONT_position++;
                }
                cout << endl;
            
            }
        }
};

int main()
{
}

#include <iostream>
using namespace std;

class Queues
//membuat class quene
{
    int FRONT, REAR, max = 5;
    int queue_array[5];

    public:
        Queues()
        {
            FRONT = -1;
            REAR = -1;
        }   
        //membuat inputan

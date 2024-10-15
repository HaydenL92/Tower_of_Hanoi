#include <iostream>

using namespace std;

//=============================== Prototype  =========================
int moveDisks(int count, int needle1, int needle3, int needle2, int& s);

//====================== Main =======================================
void main()
{
    int s = 0; //counter to count how many moves
    int howmanyDisk;

    cout << "How many disks do you have for the Tower of Hanoi?" << endl;
    cin >> howmanyDisk;
    cout << "Here is the list of moves for " << howmanyDisk << " disks" << endl;

    moveDisks(howmanyDisk, 1, 3, 2, s);
    cout << "We made " << s << " number of moves to finish the project" << endl;

    system("pause");
}
//=====================  Definition of recursive function ==============
int moveDisks(int count, int needle1, int needle3, int needle2, int& s)
{

    if (count > 0)
    {

        moveDisks(count - 1, needle1, needle2, needle3, s);

        cout << "Move disk No. " << count << " from Tower " << needle1 << " to Tower " << needle3 << " . " << endl;

        moveDisks(count - 1, needle2, needle3, needle1, s);
        s++;
    }
    return s;
}
#include <iostream>
#include <string.h>
using namespace std;

class Node
{
public:
    int noMhs;
    Node *next;
    
};

class List
{
    Node *START;

public:
    List()
    {
        Node *START;

public:
    List()
    {
        START = NULL;
    }    

    void addNote()
    {
        int nim;
        cout << "\nMasukkan Nomor Mahasiswa: ";
        cin >> nim;

        Node *nodeBaru = new Node;
        nodeBaru->noMhs = nim;

        if (START != NULL && nim <= START->noMhs)
        {
            cout << "\nDUplikasi noMhs tidak diijinkan\n";
            return;
        }
    }

node *previous = start;
node *current = start;




    }
}
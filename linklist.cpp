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

while ((current != NULL) && (nim >= current->noMhs)){
    if (nim== current->noMhs){
        cout << "\nDuplikasi noMhs tidak diijinkan\n";
        return;
    }
    previous = current;
    current= current->next;
}

nodebaru->next = current;
previous->next = nodebaru;

    bool listempty(){
    return (start == NULL);
    }

    bool Search(int nim, node **previous, node **current){
        *previous = *current;
        *current = (*current)->next;
    }
    
    return (*current != NULL);
}
    bool delnode(int nim){
        node *current, *previous;
        if (!Search(nim, &previous, &current))
        return false;

        if (current == start)
        start = start->next;
        else
        previous->next = current->next;

        delete current;
        return true;
    }

    void traverse(){
        if (listemty()){
            cout << "\nList Kosong\n";
        }
        else{
            cout << "\nData didalam list adalah\n";
            node *currentnode = start;
            while (currentnode != NULL ){
                cout << currentnode->noMhs << endl;
                currentnode = currentnode->next;
            }
            cout << endl;
        }
    }
};

int main()
{
    LinkedList mhs;
    int nim;
    char ch;

    do
    {
        cout << "Menu" << endl;
        cout << "1. Menambahkan data kedalam list" << endl;
        cout << "2. Menghapus data dari dalam list" << endl;
        cout << "3. Menampilkan semua data didalam list" endl;
        cout << "4. Mencari data dalam list" << endl;
        cout << "5. Keluar" << endl;
        cout << endl
             << "Masukkan pilihan (1-5): ";
        cin >> ch;
        switch (ch)
        {
            case '1':
            {
                mhs.addNode();
                break;
            }

            case '2':
            {
                if (mhs.LisEmpty())
                {
                    cout << endl
                         << "List Kosong" << endl;
                    break;     
                }
                cout << endl
                     << "\nMasukkan no mahasiswa yang akan dihapus : ";
                cin >> nim;
                if (mhs.delNode(nim) == false)
                    cout << endl
                         << "Data tidak ditemukan" << endl;
                else
                    cout  << endl
                          << "Data dengan nomor mahasiswa " << nim << " berhasil dihapus " << endl;
                          
                          


            }
            break;
            case '3':
            {
                mhs.traverse();
            }
            break;

            case '4':
            {
                if(mhs.ListEmpty()== true)
                {
                    cout << '\nList Kososng\n';
                    break;
                }
                Node *previous, *current;
                cout << endl
                     << "Masukkan no mahasiswa yang dicari : ";
                     cin >> nim;
                     if (mhs.Search(nim, &previous, &current) == false)
                     cout << endl
                          << "Data tidak ditemukan" << endl;
                    else      
                     {
                        cout << endl
                             << "Data ditemukan" << endl;
                        cout << "\nNo Mahasiswa: " << current->noMhs << endl;
                        cout << "\n";     
                     }
            }
            break;
            case '5':
            {
            }
            break;
            default:
            {
                cout << "Pilihan salah !." << endl;
            }
            break; 
            }
         
        }   while (ch != '5');

    
    } 
{   
}
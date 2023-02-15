// Import library and file.
#include <bits/stdc++.h>
#include "mahasiswa.cpp"

using namespace std;

int main()
{
    /* Experimental code. */

    // Let's try again, this time with input and list.
    int i, n = 0;
    string nama;
    string nim;
    string prodi;
    string fakultas;

    // You have taken Data Structures, haven't you? Let's try this convenient,
    // premade Linked List library!
    list<Mahasiswa> llist;

    cout << "Masukkan jumlah mahasiswa : ";
    cin >> n;
    for (i = 0; i < n; i++)
    {
        // Temporary object.
        Mahasiswa temp;

        // Attribute input.
        cout << "\nInput Data Mahasiswa " << (i + 1) << '\n';
        cout << "Nama     = ";
        cin >> nama;
        cout << "NIM      = ";
        cin >> nim;
        cout << "Prodi    = ";
        cin >> prodi;
        cout << "Fakultas = ";
        cin >> fakultas;
        cout << "\n=========================\n";

        // Assign input to the temporary object.
        temp.set_nama(nama);
        temp.set_nim(nim);
        temp.set_prodi(prodi);
        temp.set_fakultas(fakultas);

        // Insert temporary object into the list. See? Even the linked list
        // is an object itself.
        llist.push_back(temp);
    }

    /* Output. */

    /*
    Meanwhile, this is an example to print all elements of a list. Explore
    and discover more code by yourself!
    */
    cout << "\nInitial output : " << endl;
    i = 0;
    for (list<Mahasiswa>::iterator it = llist.begin(); it != llist.end(); it++)
    {
        cout << '\n'
             << "Mahasiswa " << (i + 1) << '\n';
        cout << "| Nama     : " << it->get_nama() << '\n';
        cout << "| NIM      : " << it->get_nim() << '\n';
        cout << "| Prodi    : " << it->get_prodi() << '\n';
        cout << "| Fakultas : " << it->get_fakultas() << '\n';
        i++;
    }

    int angka;

    cout << "\nOpsi : \n";
    cout << "1. Insert\n";
    cout << "2. Delete\n";
    cout << "3. Edit\n";
    cout << "\nKetik angka untuk operasi yang akan dilakukan : ";
    cin >> angka;

    switch (angka)
    {
    case 1:
    {
        // insert
        Mahasiswa temp1;
        cout << "\nMasukkan data yang ingin ditambah :\n";
        // Attribute input.
        cout << "Nama     = ";
        cin >> nama;
        cout << "NIM      = ";
        cin >> nim;
        cout << "Prodi    = ";
        cin >> prodi;
        cout << "Fakultas = ";
        cin >> fakultas;
        cout << "\n=========================\n";

        // Assign input to the temporary object.
        temp1.set_nama(nama);
        temp1.set_nim(nim);
        temp1.set_prodi(prodi);
        temp1.set_fakultas(fakultas);

        // Insert temporary object into the list
        llist.push_back(temp1);
        break;
    }
    case 2:
    {
        // Delete
        string nim_temp;
        cout << "\nMasukkan NIM mahasiswa yang akan dihapus :\n";
        cin >> nim_temp;
        list<Mahasiswa>::iterator it = llist.begin();

        while (it != llist.end())
        {
            if (it->get_nim() == nim_temp)
            {
                it = llist.erase(it);
                continue;
            }
            it++;
        }
        break;
    }
    case 3:
    {
        // Edit
        string nim_temp;
        cout << "Masukkan NIM mahasiswa yang akan diedit: ";
        cin >> nim_temp;
        list<Mahasiswa>::iterator it = llist.begin();
        while (it != llist.end())
        {
            if (it->get_nim() == nim_temp)
            {
                it = llist.erase(it);

                Mahasiswa temp2;

                string nama1;
                string nim1;
                string prodi1;
                string fakultas1;
                cout << "Masukkan ulang data mahasiswa\n";
                cout << "Nama     = ";
                cin >> nama1;
                cout << "NIM      = ";
                cin >> nim1;
                cout << "Prodi    = ";
                cin >> prodi1;
                cout << "Fakultas = ";
                cin >> fakultas1;

                temp2.set_nama(nama1);
                temp2.set_nim(nim1);
                temp2.set_prodi(prodi1);
                temp2.set_fakultas(fakultas1);

                // Insert temporary object into the list
                llist.push_front(temp2);
                break;
            }
            it++;
        }
        break;
    }
    case 4:
    {

        break;
    }
    default:
    {
        cout << "Opsi pilihan tidak ada";
        // getch();
        break;
    }
    }

    cout << "\nUpdated output : " << endl;
    i = 0;
    for (list<Mahasiswa>::iterator it = llist.begin(); it != llist.end(); it++)
    {
        cout << '\n'
             << "Mahasiswa " << (i + 1) << '\n';
        cout << "| Nama     : " << it->get_nama() << '\n';
        cout << "| NIM      : " << it->get_nim() << '\n';
        cout << "| Prodi    : " << it->get_prodi() << '\n';
        cout << "| Fakultas : " << it->get_fakultas() << '\n';
        i++;
    }

    return 0;
}
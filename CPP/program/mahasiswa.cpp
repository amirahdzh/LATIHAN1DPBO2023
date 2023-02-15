// Import library.
#include <iostream>
#include <string>

// using standard namaspace.
using namespace std;

// Class declaration, for C++, the first letter doesn't have to be
// capitalized, but it's better so we can distinguish it with the other types.
class Mahasiswa
{
    // Private attributes.
    private:
        string nama;
        string nim;
        string prodi;
        string fakultas;

    // Public methods.
    public:
    
    /* Constructors. */

    // Constructor. Take note that it doesn't have any return type.

        Mahasiswa()
        {
            // Set nama and nim to default value.
            this->nama = "";
            this->nim = "";
            this->prodi = "";
            this->fakultas = "";
        }

        // Another constructor with parameter. This one will be called if the
        // object is instanced with the given parameter.
        Mahasiswa(string nama, string nim, string prodi, string fakultas)
        {
            // "This" object's attributes will be set with the given parameter attributes.
            this->nama = nama;
            this->nim = nim;
            this->prodi = prodi;
            this->fakultas = fakultas;
        }

        /* Getter and Setter*/

        // Get nama.
        string get_nama()
        {
            return this->nama;
        }

        // Set nama.
        void set_nama(string nama)
        {
            this->nama = nama;
        }

        // Get nim
        string get_nim()
        {
            return this->nim;
        }

        // set nim
        void set_nim(string nim)
        {
            this->nim = nim;
        }

        // Get prodi
        string get_prodi()
        {
            return this->prodi;
        }

        // set prodi
        void set_prodi(string prodi)
        {
            this->prodi = prodi;
        }

        // Get fakultas
        string get_fakultas()
        {
            return this->fakultas;
        }

        // set fakultas
        void set_fakultas(string fakultas)
        {
            this->fakultas = fakultas;
        }

        /* Destructors */

        // Default destructor. Leave it blank for now.
        ~Mahasiswa()
        {
            
        }
};
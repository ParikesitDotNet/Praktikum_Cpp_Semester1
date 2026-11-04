#include "../global/header.h"

struct TanggalBuah
{
    unsigned int hari;
    unsigned int bulan;
    unsigned int tahun;
};

struct DataBuah
{
    string nama;
    string warna;
    double berat;
    TanggalBuah panenDate;
};

int main()
{
    // Deklarasi Vector dan Input number step
    vector<DataBuah> buahVector;
    int inputStep = 1;

    cout << left;

    // Loop input
    while (true)
    {
        DataBuah data;

        cout << "Buah ke-" << inputStep << endl;

        // Input nama
        cout << setw(25) << "Masukkan nama buah" << ": ";
        getline(cin, data.nama);

        // Input Warna
        cout << setw(25) << "Masukkan warna buah" << ": ";
        getline(cin, data.warna);

        // Input berat (kg)
        cout << setw(25) << "Masukkan berat buah(kg)" << ": ";
        cin >> data.berat;

        // Input parameter ke tanggal
        cout << setw(25) << "Masukkan tanggal panen" << ": ";
        cin >> data.panenDate.hari;

        cout << setw(25) << "Masukkan bulan panen" << ": ";
        cin >> data.panenDate.bulan;

        cout << setw(25) << "Masukkan tahun panen" << ": ";
        cin >> data.panenDate.tahun;

        // Push back ke array masing-masing
        buahVector.push_back(data);

        // Cek submission untuk ulang
        char userDecision;
        cout << endl
             << "Ingin memasukkan data buah lagi?(Y/n): ";
        cin >> userDecision;

        if (static_cast<char>(std::tolower(userDecision)) == 'n')
        {
            break;
        }

        inputStep++;
        cin.ignore();
        cout << endl;
    }

    if (buahVector.size() == 0)
    {
        cout << "Tidak ada buah yang dimasukkan!";
        return 0;
    }

    cout << endl;
    for (int i = 0; i < buahVector.size(); i++)
    {
        DataBuah buah = buahVector[i];

        cout << "Data Buah " << i + 1 << endl;
        cout << setw(20) << "Nama buah" << ": " << buah.nama << endl
             << setw(20) << "Warna buah" << ": " << buah.warna << endl
             << setw(20) << "Berat buah" << ": " << buah.berat << " kg" << endl;

        cout << setw(20) << "Tanggal Panen" << ": "
             << buah.panenDate.hari
             << "-" << buah.panenDate.bulan
             << "-" << buah.panenDate.tahun << endl;
        cout << endl;
    }

    return 0;
}

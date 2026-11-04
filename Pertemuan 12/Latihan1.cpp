#include "../global/header.h"

int main()
{
    struct DataBuah
    {
        string nama;
        string warna;
        double berat;
    };

    struct DateBuah
    {
        string hari;
        int bulan;
        int tahun;
    };

    // Deklarasi Vector dan Input number step
    vector<DataBuah> listBuah;
    vector<DateBuah> listTanggal;
    int inputStep = 1;

    cout << left;

    // Loop input
    while (true)
    {
        DataBuah data;
        DateBuah tanggal;

        cout << "Buah ke-" << inputStep << endl;

        // Input parameter ke data (DataBuah Struct)
        cout << setw(25) << "Masukkan nama buah" << ": ";
        cin >> data.nama;
        cout << setw(25) << "Masukkan warna buah" << ": ";
        cin >> data.warna;
        cout << setw(25) << "Masukkan berat buah(kg)" << ": ";
        cin >> data.berat;

        // Input parameter ke tanggal (DateBuah Struct)
        cout << setw(25) << "Masukkan tanggal panen" << ": ";
        cin >> tanggal.hari;
        cout << setw(25) << "Masukkan bulan panen" << ": ";
        cin >> tanggal.bulan;
        cout << setw(25) << "Masukkan tahun panen" << ": ";
        cin >> tanggal.tahun;

        // Push back ke array masing-masing
        listBuah.push_back(data);
        listTanggal.push_back(tanggal);

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
        cout << endl;
    }

    if (listBuah.size() == 0 || listTanggal.size() == 0)
    {
        cout << "Tidak ada buah yang dimasukkan!";
        return 0;
    }

    if (listBuah.size() != listTanggal.size())
    {
        cerr << "ERROR! Jumlah data pada listBuah tidak sama dengan listTanggal";
        return 0;
    }

    for (int i = 0; i < listBuah.size(); i++)
    {
        auto buah = listBuah[i];
        auto date = listTanggal[i];

        cout << "Buah ke-" << i + 1 << endl;
        cout << setw(20) << "Nama buah" << ": " << buah.nama << endl
             << setw(20) << "Warna buah" << ": " << buah.warna << endl
             << setw(20) << "Berat buah" << ": " << buah.berat << " kg" << endl;

        cout << "Tanggal Panen: " << date.hari << "-" << date.bulan << "-" << date.tahun << endl;
        cout << endl;
    }

    return 0;
}

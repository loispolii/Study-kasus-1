#include <iostream>
using namespace std;

class bensin
{
    friend ostream& operator<<(ostream&, const bensin&);
    friend istream& operator>>(istream&, bensin&);
    
public :
    bensin();
    void jumlah_total()
	{
		total = harga*liter;
	}
	
private :
    int harga,liter,total;
	char jenis[15],nama[10];
};

bensin::bensin()
{
    cout << " Kasir SPBU "<< endl;
    cout << " Bensin Yang Tesedia : " << endl;
    cout << " 1.Pertalite -> 7000/L " << endl;
    cout << " 2.Pertamax  -> 9000/L"  << endl;
    cout << "================================\n";
}

istream& operator>>(istream& in, bensin& input)
{
	cout << "Nama Pembeli           : "; in >>input.nama;
    cout << "\nMasukan Jenis Bensin : "; in >>input.jenis;
    cout << "\nMasukan Jumlah Liter : "; in >>input.liter;
    cout << "\nHarga/Liter          : "; in >>input.harga;
  return in;
}

ostream& operator<<(ostream& out, const bensin& output)
{
	out << endl << endl;
	out << "STURK....\n";
	out << "Nama         : " <<output.nama  << endl;
    out << "Jenis Bensin : " <<output.jenis << endl;
    out << "Jumlah Liter : " <<output.liter << endl;
    out << "Total Harga Bensin : " <<output.total << endl;
  return out;
} 

main()
{
    bensin x;
    cin>>x;
    x.jumlah_total();
    cout<<x;
    return 0;
}

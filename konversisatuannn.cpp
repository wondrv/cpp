#include <iostream>
#include <iomanip>
#include <conio.h>
using namespace std;

int main() {
    // Input
    double massa_asam_sulfat;
    cout << "Masukkan massa asam sulfat dalam gram: ";
    cin >> massa_asam_sulfat;

    // Konstanta
    double massa_jenis_asam_sulfat = 1.84; // dalam gram/cm^3
    double persen_massa = 98; // dalam persen
    double massa_rumus_asam_sulfat = 98.079; // dalam gram/mol
    double faktor_normalitas = 2; // faktor normalitas untuk H2SO4

    // Perhitungan
    double volume_asam_sulfat = massa_asam_sulfat / (massa_jenis_asam_sulfat * 1000);
    double volume_air = volume_asam_sulfat / (persen_massa / 100);
    double total_volume = volume_asam_sulfat + volume_air;
    double persen_volum = (volume_asam_sulfat / total_volume) * 100;
    double persen_massa_volum = (massa_asam_sulfat / total_volume) * 100;
    double ppm = (massa_asam_sulfat / massa_rumus_asam_sulfat) / total_volume * 1000000;
    double molaritas = (massa_asam_sulfat / massa_rumus_asam_sulfat) / (total_volume / 1000);
    double molalitas = (massa_asam_sulfat / massa_rumus_asam_sulfat) / (volume_air / 1000);
    double mol_asam_sulfat = massa_asam_sulfat / massa_rumus_asam_sulfat;
    double mol_air = volume_air / 18; // massa jenis air = 1 g/cm^3
    double total_mol = mol_asam_sulfat + mol_air;
    double fraksi_mol = mol_asam_sulfat / total_mol;
    double normalitas = molaritas * faktor_normalitas;

    // Output
    cout << fixed << setprecision(2);
    cout << "Persen volum\t\t: " << persen_volum << "%" << endl;
    cout << "Persen massa/volum\t: " << persen_massa_volum << "%" << endl;
    cout << "PPM\t\t\t: " << ppm << endl;
    cout << "Molaritas\t\t: " << molaritas << " M" << endl;
    cout << "Molalitas\t\t: " << molalitas << " m" << endl;
    cout << "Normalitas\t\t: " << normalitas << " N" << endl;
    cout << "Fraksi mol\t\t: " << fraksi_mol << endl;

    _getch();
    return 0;
}

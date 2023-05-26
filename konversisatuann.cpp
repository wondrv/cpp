#include <iostream>
using namespace std;

int main() {
    double massa_asam_sulfat, massa_jenis_asam_sulfat, persen_massa, massa_rumus_asam_sulfat, massa_air, faktor_normalitas;

    cout << "Masukkan massa asam sulfat dalam gram: ";
    cin >> massa_asam_sulfat;

    cout << "Masukkan massa jenis asam sulfat dalam gram/mL: ";
    cin >> massa_jenis_asam_sulfat;

    cout << "Masukkan persen massa asam sulfat: ";
    cin >> persen_massa;

    cout << "Masukkan massa rumus asam sulfat dalam gram/mol: ";
    cin >> massa_rumus_asam_sulfat;

    cout << "Masukkan massa air yang dibutuhkan dalam gram: ";
    cin >> massa_air;

    cout << "Masukkan faktor normalitas: ";
    cin >> faktor_normalitas;

    // Hitung volume asam sulfat dalam mL
    double volume_asam_sulfat = massa_asam_sulfat / (massa_jenis_asam_sulfat * 1000);

    // Hitung volume air yang dibutuhkan dalam mL
    double volume_air = volume_asam_sulfat / (persen_massa / 100);

    // Hitung total volume larutan dalam mL
    double total_volume = volume_asam_sulfat + volume_air;

    // Hitung konsentrasi dalam persen volum
    double persen_volum = (volume_asam_sulfat / total_volume) * 100;

    // Hitung konsentrasi dalam persen massa/volum
    double persen_massa_volum = (massa_asam_sulfat / total_volume) * 100;

    // Hitung konsentrasi dalam ppm
    double ppm = (massa_asam_sulfat / massa_rumus_asam_sulfat) / total_volume * 1000000;

    // Hitung konsentrasi dalam molaritas
    double molaritas = (massa_asam_sulfat / massa_rumus_asam_sulfat) / (total_volume / 1000);

    // Hitung konsentrasi dalam molalitas
    double molalitas = (massa_asam_sulfat / massa_rumus_asam_sulfat) / (massa_air / 1000);

    // Hitung konsentrasi dalam normalitas
    double normalitas = (massa_asam_sulfat / massa_rumus_asam_sulfat) / (total_volume / 1000) * faktor_normalitas;

    // Hitung fraksi mol
    double mol_asam_sulfat = massa_asam_sulfat / massa_rumus_asam_sulfat;
    double mol_air = volume_air / 18;
    double total_mol = mol_asam_sulfat + mol_air;
    double fraksi_mol = mol_asam_sulfat / total_mol;

    // Output semua hasil konsentrasi
    cout << "Konsentrasi awal (persen massa): " << persen_massa << endl;
    cout << "Konsentrasi dalam persen volum: " << persen_volum << endl;
    cout << "Konsentrasi dalam persen massa/volum: " << persen_massa_volum << endl;
    cout << "Konsentrasi dalam ppm: " << ppm << endl;
    cout << "Konsentrasi dalam Molaritas: " << molaritas << endl;
    cout << "Konsentrasi dalam molalitas: " << molalitas << endl;
    cout << "Konsentrasi dalam normalitas: " << normalitas << endl;
    cout << ""

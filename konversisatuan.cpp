#include <iostream>
#include <conio.h>
using namespace std;

int main() {
    // Input konsentrasi awal dalam persen massa
    float persen_massa;
    cout << "Masukkan konsentrasi awal dalam persen massa: ";
    cin >> persen_massa;

    // Input densitas zat dan massa molekul
    float densitas_zat, massa_molekul;
    cout << "Masukkan densitas zat dalam g/cm^3: ";
    cin >> densitas_zat;
    cout << "Masukkan massa molekul zat dalam g/mol: ";
    cin >> massa_molekul;

    // Input faktor pengali untuk normalitas
    float faktor_pengali;
    cout << "Masukkan faktor pengali untuk normalitas: ";
    cin >> faktor_pengali;

    // Konversi persen massa menjadi persen volum
    float persen_volum = (persen_massa / densitas_zat) * 100;

    // Konversi persen massa menjadi persen massa/volum
    float persen_massa_volum = (persen_massa / 100) * densitas_zat;

    // Konversi persen massa menjadi ppm
    float ppm = (persen_massa / 10000) * 1000000;

    // Konversi persen massa menjadi molaritas
    float molaritas = (persen_massa / massa_molekul) * (1 / (densitas_zat / 1000));

    // Konversi persen massa menjadi molalitas
    float molalitas = molaritas / (massa_molekul / 1000);

    // Konversi persen massa menjadi normalitas
    float normalitas = molaritas * faktor_pengali;

    // Konversi persen massa menjadi fraksi mol
    float fraksi_mol = (persen_massa / massa_molekul) / ((persen_massa / massa_molekul) + ((100 - persen_massa) / massa_molekul));

    // Output hasil konversi
    cout << "Konversi konsentrasi awal:" << endl;
    cout << "Persen volum: " << persen_volum << endl;
    cout << "Persen massa/volum: " << persen_massa_volum << endl;
    cout << "PPM: " << ppm << endl;
    cout << "Molaritas: " << molaritas << endl;
    cout << "Molalitas: " << molalitas << endl;
    cout << "Normalitas: " << normalitas << endl;
    cout << "Fraksi mol: " << fraksi_mol << endl;
    
    _getch();
    return 0;

}

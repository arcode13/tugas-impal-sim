#include <iostream>
using namespace std;

double pulsa = 100000;
double kuota = 5.0;

void displayMenu() {
  cout << "\n=== MENU OPERATOR SIM PALING UHUYYY ===" << endl;
  cout << "1. Cek Pulsa (cek dulu, siapa tau pulusanya hilang!)" << endl;
  cout << "2. Beli Paket Data (internetan sampai lupa waktu)" << endl;
  cout << "3. Cek Kuota (ingat, jangan sampai zonk)" << endl;
  cout << "4. Isi Pulsa (biar nggak putus komunikasi)" << endl;
  cout << "5. Promo Menarik (gratisan? siapa takut!)" << endl;
  cout << "6. Keluar (serius mau keluar? nanti kangen loh!)" << endl;
  cout << "Pilih layanan (1-6): ";
}

void cekPulsa() {
  cout << "\nKamu punya Pulsa sebanyak: Rp " << pulsa << endl;
  cout << "Bagus! Pulsa aman. Nggak perlu guling-guling panik!" << endl;
}

void cekKuota() {
  cout << "\nSisa kuota Anda: " << kuota << " GB" << endl;
  cout << "Kuota masih ada. Jadi bisa streaming video kucing sepuasnya!"
       << endl;
}

void beliPaketData() {
  double hargaPaket;
  double kuotaTambahan;

  cout << "\nPilih paket data yang cocok buat kamu:" << endl;
  cout << "1. Paket 500MB - Rp 5000 (cocok buat yang hemat)" << endl;
  cout << "2. Paket 1GB - Rp 10000 (buat buka sosmed sebentar)" << endl;
  cout << "3. Paket 3GB - Rp 25000 (bisa lah buat streaming dikit)" << endl;
  cout << "4. Paket 5GB - Rp 40000 (lumayan buat Netflix-an)" << endl;
  cout << "5. Paket 10GB - Rp 70000 (asik buat YouTube-an!)" << endl;
  cout << "6. Paket 20GB - Rp 130000 (mau jadi Sultan kuota?)" << endl;
  cout << "7. Paket 50GB - Rp 300000 (internet lancar, hati tenang)" << endl;
  cout << "8. Paket 100GB - Rp 500000 (bebas nonton sampai puas)" << endl;
  cout << "Pilih paket (1-8): ";
  int pilihan;
  cin >> pilihan;

  switch (pilihan) {
  case 1:
    hargaPaket = 5000;
    kuotaTambahan = 0.5;
    break;
  case 2:
    hargaPaket = 10000;
    kuotaTambahan = 1.0;
    break;
  case 3:
    hargaPaket = 25000;
    kuotaTambahan = 3.0;
    break;
  case 4:
    hargaPaket = 40000;
    kuotaTambahan = 5.0;
    break;
  case 5:
    hargaPaket = 70000;
    kuotaTambahan = 10.0;
    break;
  case 6:
    hargaPaket = 130000;
    kuotaTambahan = 20.0;
    break;
  case 7:
    hargaPaket = 300000;
    kuotaTambahan = 50.0;
    break;
  case 8:
    hargaPaket = 500000;
    kuotaTambahan = 100.0;
    break;
  default:
    cout << "Pilihan nggak valid! Lain kali fokus ya ;)" << endl;
    return;
  }

  if (pulsa >= hargaPaket) {
    pulsa -= hargaPaket;
    kuota += kuotaTambahan;
    cout << "\nYay! Pembelian paket berhasil! Kuota kamu sekarang: " << kuota
         << " GB" << endl;
    cout << "Ayo lanjut internetan sampai lupa waktu! :D" << endl;
  } else {
    cout << "Oops, pulsa kamu nggak cukup buat beli paket ini. Yuk, isi pulsa "
            "dulu!"
         << endl;
  }
}

void isiPulsa() {
  double jumlah;
  cout << "\nMasukkan jumlah pulsa yang ingin diisi: Rp ";
  cin >> jumlah;
  pulsa += jumlah;
  cout << "\nPulsa berhasil diisi. Pulsa kamu sekarang: Rp " << pulsa << endl;
  cout << "Mantap! Pulsa aman, komunikasi lancar. Nggak perlu khawatir lagi!"
       << endl;
}

void promoMenarik() {
  cout << "\n=== Promo Menarik ===" << endl;
  cout << "1. Cashback 10% untuk pembelian paket data di atas Rp 30000 "
          "(lumayan, kan?)"
       << endl;
  cout << "2. Kuota malam gratis 2GB untuk isi pulsa minimal Rp 50000 (malam "
          "bebas internetan)"
       << endl;
  cout << "3. Double kuota untuk paket data pertama di bulan ini (dua kali "
          "lipat, dua kali senang!)"
       << endl;
  cout << "4. Pulsa bonus Rp 10000 untuk pelanggan baru (baru? selamat datang!)"
       << endl;
  cout << "Buruan ambil promo sebelum habis!" << endl;
}

int main() {
  int pilihan;

  do {
    displayMenu();
    cin >> pilihan;

    switch (pilihan) {
    case 1:
      cekPulsa();
      break;
    case 2:
      beliPaketData();
      break;
    case 3:
      cekKuota();
      break;
    case 4:
      isiPulsa();
      break;
    case 5:
      promoMenarik();
      break;
    case 6:
      cout << "\nSerius mau keluar? Nanti kangen loh! Sampai jumpa lagi ya!"
           << endl;
      break;
    default:
      cout << "\nPilihan nggak valid. Coba pilih yang bener ya. Fokus, fokus!"
           << endl;
      break;
    }
  } while (pilihan != 6);

  return 0;
}
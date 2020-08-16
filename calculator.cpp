/********************************************************************
*	Program kalkulator sederhana untuk empat operasi				*
*	penjumlahan, pengurangan, pembagian, dan perkalian				*
*																	*
* Author: Muhammad Arifin											*
* Date	: 16 Agustus 2020											*
********************************************************************/

#include <iostream>
#include <stdlib.h>
#include <string.h>

int main() {
	
	// Deklarasikan variabel-variabel untuk perhitungan
	int pilihan; /* pilihan operasi pengguna */
	double angka1; /* angka pertama yang ingin dioperasikan */
	double angka2; /* angka kedua yang ingin dioperasikan */
	double hasil;  /* hasil operasi angka 1 dan angka 2 */

	// Variabel untuk cek apakah user ingin menghitung lagi atau tidak
	char lagi; /* Untuk cek mau hitung lagi atau tidak */
	bool maulagi = true; /* untuk mengecek mau hitung lagi atau tidak */
	
	// Tampilkan judul program
	std::cout << "========================================================" << std::endl;
	std::cout << "============= Program Kalkulator Sederhana =============" << std::endl;
	std::cout << "========================================================" << std::endl;


	while (maulagi == true) {
		// Tampilkan operasi-operasi yang ada
		std::cout << "\nOperasi-Operasi yang Ada:" << std::endl;
		std::cout << "1. Penjumlahan Dua Angka" << std::endl;
		std::cout << "2. Pengurangan Dua Angka" << std::endl;
		std::cout << "3. Pembagian Dua Angka" << std::endl;
		std::cout << "4. Perkalian Dua Angka" << std::endl;

		// Masukkan pilihan operasi pengguna (1-4)
		std::cout << "\nKamu mau ngapain nih? (1-4): ";
		std::cin >> pilihan;
		printf("\n");

		/*==============================================================
		Cek apakah pilihan angka di rentang (1-4)
		Jika pilihan operasi (1-4), mulai operasi
		Jika tidak, berikan pesan mohon maaf. Selesaikan program 
		================================================================*/

		// Evaluasi pilihan operasi
		if (pilihan > 0 && pilihan < 5) {
			
			// switch case pilihan
			switch(pilihan){

				// Operasi Penjumlahan
				case 1:

					std::cout << "Okee, penjumlahan nih ya." << std::endl; // Pesan supaya user ingat
					std::cout << "Masukkan angka pertama: "; // Masukkan angka pertama
					std::cin >> angka1;
					
					std::cout << "Masukkan angka kedua: "; // Masukkan angka Kedua
					std::cin >> angka2;

					hasil = angka1 + angka2; // Lakukan perhitungan

					printf("Hasil %.2f + %.2f = %.2f\n", angka1, angka2, hasil); // Tampilkan hasil

					break; // Break

				// Operasi Pengurangan 
				case 2:
					
					std::cout << "Okee, pengurangan nih ya." << std::endl; // Pesan supaya user ingat
					std::cout << "Masukkan angka pertama: "; // Masukkan angka pertama
					std::cin >> angka1;
					
					std::cout << "Masukkan angka kedua: "; // Masukkan angka Kedua
					std::cin >> angka2;

					hasil = angka1 - angka2; // Lakukan perhitungan

					printf("\nHasil %.2f - %.2f = %.2f\n", angka1, angka2, hasil); // Tampilkan hasil
					
					break; // Break

				// Operasi Pembagian 
				case 3:
					
					std::cout << "Okee, pembagian nih ya." << std::endl; // Pesan supaya user ingat
					std::cout << "Masukkan angka pertama: "; // Masukkan angka pertama
					std::cin >> angka1;
					
					std::cout << "Masukkan angka kedua: "; // Masukkan angka Kedua
					std::cin >> angka2;

					hasil = angka1 / angka2; // Lakukan perhitungan

					printf("\nHasil %.2f / %.2f = %.2f\n", angka1, angka2, hasil); // Tampilkan hasil
					
					break; // Break case


				// Operasi Perkalian
				case 4:
					
					std::cout << "Okee, perkalian nih ya." << std::endl; // Pesan supaya user ingat
					std::cout << "Masukkan angka pertama: "; // Masukkan angka pertama
					std::cin >> angka1;
					
					std::cout << "Masukkan angka kedua: "; // Masukkan angka Kedua
					std::cin >> angka2;

					hasil = angka1 * angka2; // Lakukan perhitungan

					printf("\nHasil %.2f x %.2f = %.2f\n", angka1, angka2, hasil); // Tampilkan hasil
					
					break; //break
			}

				
		} else {
			std::cout << "Yah...pilihan kamu gaada :(" << std::endl;
		}

		// Cek apakah user ingin melakukan perhitungan lagi atau tidak
		std::cout << "\nMau menghitung lagi? (y/n): ";
		std::cin >> lagi;

		if (lagi == 'y') {
			maulagi = true;
		} else {
			maulagi = false;
		}

	}
	

	// Tampilkan ucapan terimakasih

	std::cout << "\nTerimakasih sudah menggunakan kalkulator ini :)" << std::endl;
	std::cin.get();
	return 0;
}
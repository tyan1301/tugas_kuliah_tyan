#include <stdio.h>

int main() {
    int pilihan;      //bilangan bulat tanpa koma    
    float celcius;    //bilangan desimal menggunakan koma    
    float hasil;      //bilangan desimal menggunakan koma    

    // input suhu hanya sekali saja
    printf("Masukkan Suhu Dalam Celcius = ");
    scanf("%f", &celcius);

    // perulangan while agar bisa pilih berulang kali
    while (1) {
        printf("\n===== Kalkulator Suhu =====\n");
        printf("1. Reamur\n");
        printf("2. Fahrenheit\n");
        printf("3. Kelvin\n");
        printf("99. Keluar\n");
        printf("Masukkan pilihan mu = ");
        scanf("%d", &pilihan);

        switch (pilihan) {
            case 1: //reamur
                hasil = celcius * 4 / 5;
                printf("Suhu Reamur adalah = %.2f\n", hasil);
                break;
            case 2: //fahrenheit
                hasil = (celcius * 9 / 5) + 32;
                printf("Suhu Fahrenheit adalah = %.2f\n", hasil);
                break;
            case 3: //kelvin
                hasil = celcius + 273.15;
                printf("Suhu Kelvin adalah = %.2f\n", hasil);
                break;
            case 99: //keluar dari program
                printf("Terima kasih, program selesai.\n");
                return 0;
            default: //jika memasukan input diluar dari pilihan case
                printf("Pilihan Tidak Valid, Mohon Coba Lagi\n");
        }
    }
}
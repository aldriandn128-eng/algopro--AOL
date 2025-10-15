#include <stdio.h>
#include <string.h>
int main (){

#define max_booking 50  //ini maksimal orangnya, kalau lebih dari ini program tidak akan mulai atau muncul
#define max_kamar 5

//ini untuk menyimpan data booking
struct booking
{
  char nama[50];
  int noKamar; 
  int lamaMenginap; 
};

//daftar jenis hotel
char daftarKamar[max_kamar][50] = {
    "Kamar 50 - Standart",
"Kamar 60 - Deluxe",
"Kamar 70 - Superior",
"Kamar 80 - Vip",
"Kamar 90 - Family",
};
//perlu codingan fungsi untuk menampilkan daftar kamarnya

//perlu codingan fungsi untuk menampilkan booking kamar

//lanjutin ajaa lahhhh, bingung gw

return 0;
}




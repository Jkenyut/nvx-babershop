//SATRIA NUR SAPUTRO 19102296
//M.ALDI YUDHI PRADANA 19102252

//LIBRARY
#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <time.h>
#include <string>
#include <fstream>
#include <windows.h>

using namespace std;//untuk memberitahukan kepada kompiler bahwa kita akan menggunakan semua fungsi

//fungsi searching
int function_binary_search(string data[],int jml_indeks,string data_dicari){
    //type variable yang digunakan
    int atas, bawah, tengah, posisi;
    bool ada;

    ada     = false;
    bawah   = 0;
    atas    = jml_indeks-1;
    posisi  = -1;

    while (bawah <= atas){//perulangan while
        tengah =(atas + bawah)/2;
        if (data_dicari == data[tengah]){//kondisi pernyataan
        posisi = tengah;
        break;//berhenti
        }
        else if(data_dicari < data[tengah]) atas = tengah -1;//kondisi pernyataan jika if tidak memenuhi
        else if(data_dicari > data[tengah]) bawah = tengah + 1;//kondisi pernyataan jika if tidak memenuhi
    }//end of while
    return posisi;//untuk mentransfer kembali atau mengembalikan suatu nilai
}

//prosedur sorting
void bubble_sort(string arrs[],int panjang){
    //type variable yang digunakan
    bool not_sorted= true;
    int j=0;
    string temp;

    while (not_sorted){//perulangan while
        not_sorted= false;
        j++;
        for (int i = 0;i < panjang-j; i++){//perulangan while
            //kodisi if pernyataan untuk mencari nilai
            if (arrs[i] > arrs[i+1]){
                temp = arrs[i];
                arrs[i] = arrs[i+1];
                arrs [i+1] = temp;
                not_sorted = true;
            }//endl of if
        }//end of for loop
    }//end of while loop
}//end of bubble_sort

//fungsi output sorting
void print_array(string a[], int length){
    cout << "                                                                  --->>>   CATATAN = MASUKKAN 123 UNTUK MENCARI WARNA  " << endl;
    for (int i = 0;i < length; i ++){  //perulangan for
        cout  << "        " << i+1 <<"." << a[i] << " " << endl;//output
    }//end of for
    cout << endl;
    cout << "                                                                  --->>>   CATATAN = MASUKKAN 123 UNTUK MENCARI WARNA  " << endl;
}
//prosedur kategori
void kategori (){
    cout << "============================================== [ ]          KATEGORI          [ ] =====================================" << endl;
}

//prosedur daftar pilih
void pilih_daftar(){
    cout << "============================================== [ ]        PILIH DAFTAR        [ ] =====================================" << endl;
}

//prosedur garis
void garis(){
    cout << "=======================================================================================================================" << endl;
}

//prosedur paket
void menu_paket(){
    cout << "============================================== [ ]         MENU PAKET         [ ] =====================================" << endl;
}

//prosedur cek data
void mengecek_data(){
    cout << "                                                 [ MOHON MENGECEK DATA ANDA ]                                          " << endl;
}

//prosedur data tersimpan
void data_tersimpan(){
    cout << "                                           [ DATA TELAH TERSIMPAN SILAKAN MENGANTRI ]                                  " << endl;
    cout << "****************************************** [    KAMI KEMBALIKAN KE PROGRAM UTAMA    ] *********************************" << endl;
    cout << "PRESS ANY KEY TO CONTINUE . . .";
}

//prosedur data salah
void data_salah(){
    cout << "============================================ [ ] SILAKAN ISI DATA DENGAN BENAR [ ] ====================================" << endl;
    cout << "******************************************** [ KAMI KEMBALIKAN KE PROGRAM UTAMA  ] ************************************" << endl;
    cout << "PRESS ANY KEY TO CONTINUE . . .";
}

//prosedur salah input
void salah_input(){
    cout << " ======================================= [ ]   MOHON MAAF ANDA SALAH MENGINPUT  [ ] ===================================" << endl;
    cout << "*********************************** << TERIMA KASIH TELAH BERKUNJUNG KE X THE NATHAN >> *******************************" << endl;
    cout << "**************************************** [ ]  KAMI KEMBALIKAN KE PROGRAM UTAMA  [ ] ***********************************" << endl;
    cout << "PRESS ANY KEY TO CONTINUE . . .";
}

//prosedur salah input
void salah_input_menu(){
    cout << " ======================================= [ ]   MOHON MAAF ANDA SALAH MENGINPUT  [ ] ===================================" << endl;
    cout << "*********************************** << TERIMA KASIH TELAH BERKUNJUNG KE X THE NATHAN >> *******************************" << endl;
    cout << "**************************************** [ ]      KAMI KEMBALIKAN KE MENU       [ ] ***********************************" << endl;
    cout << "PRESS ANY KEY TO CONTINUE . . .";
}

//prosedur masukkan warna
void masukkan_warna(){
    cout << "============================================== [ ]        MASUKAN WARNA       [ ] =====================================" << endl;
}

//prosedur warna ada
void warna_ada(){
    cout << "============================================== [ ]          WARNA ADA         [ ] =====================================" << endl;
}

//prosedur warna tidak ada
void warna_tidak_ada(){
    cout << "********************************************** [ ] MOHON MAAF WARNA TIDAK ADA [ ] *************************************" << endl;
}

//prosedur daftar arsip
void daftar(){
    cout << "============================================== [ ]           DAFTAR           [ ] =====================================" << endl;
}

//prosedur data telah terhapus
void data_terhapus(){
    cout << "============================================== [ ]     DATA TELAH DIHAPUS     [ ] =====================================" << endl;
}

//prosedur kembali ke program utama
void kembali(){
    cout << "******************************************  [ KAMI AKAN KEMBALIKAN KE PROGRAM UTAMA ] *********************************" << endl;
    cout << "PRESS ANY KEY TO CONTINUE . . .";
}

//prosedur kembali ke menu
void kembali_menu(){
    cout << "***************************************** [ ]       KAMI KEMBALIKAN KE MENU       [ ] *********************************" << endl;
    cout << "PRESS ANY KEY TO CONTINUE . . .";
}

//prosedur keluar progran
void keluar_program(){
    cout << "************************************* <<  TERIMA KASIH TELAH MENGGUNAKAN PROGRAM INI   >> *****************************" << endl;
    cout << "****************************************              << SEE YOU LATER >>              ********************************" << endl;
}

//prosedur dewasa
void Inputan_Dewasa(int pil){
    //variable
    string name,address,konfirmasi;
    time_t waktusekarang;
    time (&waktusekarang);
    int i,pilihan;
    char number[13];
    //array
    int harga_dewasa[]={20000,35000,50000};
    //arsip
    ofstream myfile;
    myfile.open("Data Kategori Dewasa.txt",ios :: app);//menambah arsip

    //output dan input
    garis();//memanggil posedur
    cout << "==     Masukkan Nama Anda                              = ";cin.ignore(1);getline(cin,name);
    cout << "==     Masukkan Nomer Hp                               = ";cin.ignore(0);cin >> number;
    cout << "==     Masukkan Alamat                                 = ";cin.ignore(1);getline(cin,address);
    cout << "********************************************************" << endl;
    cout << endl;
    mengecek_data();//memanggil posedur
    cout << endl;
    cout << "**     Waktu Pesanan                                   = " << ctime(&waktusekarang);
    cout << "**     Nama                                            = " << name << endl;
    cout << "**     Nomer Telepon                                   = " << number << endl;
    cout << "**     Alamat                                          = " << address << endl;
    cout << "**     Paket                                           = " << "Paket " << pil << " Untuk Dewasa" << endl;
    cout << "**     Harga Paket                                     = " << harga_dewasa[pil-1] <<  endl;
    cout << "**     Apakah Data Sudah Benar (Y/N)                   = ";cin >> konfirmasi;
    if (konfirmasi== "Y" || konfirmasi=="y"||konfirmasi== "Yes" || konfirmasi=="yes"||konfirmasi== "YES"){//kondisi memenuhi
        //menyimpan arsip data dewasa
        if (!myfile.fail()){
            myfile << " ======== Data Pemesan Dewasa ========" << endl;
            myfile << " Waktu     =  "<< ctime(&waktusekarang);
            myfile << " Name      =  "<< name << endl;
            myfile << " Number    =  "<< number << endl;
            myfile << " Address   =  "<< address << endl;
            myfile << " Price     =  "<< harga_dewasa[pil-1] << endl;
                myfile << " " << endl;
                myfile.close();
            cout << endl;
            data_tersimpan();//memanggil posedur
            getch();
            }
            }else if(konfirmasi == "N" || konfirmasi == "n"||konfirmasi== "No" || konfirmasi == "no"|| konfirmasi == "NO"){//kondisi memenuhi
                cout << endl;
                data_salah();//memanggil posedur
                getch();
            }else{//kondisi tidak memenuhi
                salah_input();//memanggil posedur
                getch();
            }
}

//prosedur anak
void Inputan_Anak(int pil){
    //variable
    string name,address,konfirmasi;
    time_t waktusekarang;
    time (&waktusekarang);
    int i,pilihan;
    char number[13];
    //array
    int harga_anak[]={15000,25000,40000};
    //arsip
    ofstream myfile;
    myfile.open("Data Kategori Anak.txt",ios :: app);//menambahkan arsip

    //output dan input
    garis();//memanggil posedur
    cout << "==     Masukkan Nama Anda                              = ";cin.ignore(1);getline(cin,name);
    cout << "==     Masukkan Nomer Hp                               = ";cin.ignore(0);cin >> number;
    cout << "==     Masukkan Alamat                                 = ";cin.ignore(1);getline(cin,address);
    cout << "********************************************************" << endl;
    cout << endl;
    mengecek_data();//memanggil posedur
    cout << endl;
    cout << "**     Waktu Pesanan                                   = " << ctime(&waktusekarang);
    cout << "**     Nama                                            = " << name << endl;
    cout << "**     Nomer Telepon                                   = " << number << endl;
    cout << "**     Alamat                                          = " << address << endl;
    cout << "**     Paket                                           = " << "Paket " << pil << " Untuk Anak" << endl;
    cout << "**     Harga Paket                                     = " << harga_anak[pil-1] <<  endl;
    cout << "**     Apakah Data Sudah Benar (Y/N)                   = ";cin >> konfirmasi;
    if (konfirmasi== "Y" || konfirmasi=="y"||konfirmasi== "Yes" || konfirmasi=="yes"||konfirmasi== "YES"){//kondisi memenuhi
        //menyimpan arsip data anak
        if (!myfile.fail()){
            myfile << " ========= Data Pemesan Anak =========" << endl;
            myfile << " Waktu     =  "<< ctime(&waktusekarang);
            myfile << " Name      =  "<< name << endl;
            myfile << " Number    =  "<< number << endl;
            myfile << " Address   =  "<< address << endl;
            myfile << " Price     =  "<< harga_anak[pil-1] << endl;
            myfile << " " << endl;
            myfile.close();
        cout << endl;
        data_tersimpan();//memanggil posedur
        }
        getch();
        }else if(konfirmasi == "N" || konfirmasi == "n"||konfirmasi== "No" || konfirmasi == "no"|| konfirmasi == "NO"){//kondisi memenuhi
            cout << endl;
            data_salah();//memanggil posedur
            getch();
        }else{//kondisi tidak memenuhi
            salah_input();//memanggil posedur
            getch();
        }
}

//prosedur colour searching
void Inputan_colour_search(int pil){
    //variable
    int harga_colour = 60000;
    time_t waktusekarang;
    time (&waktusekarang);
    string name,address,konfirmasi;
    char number[13];
    int length =30;
    //array
    string paket_3[length]={"Maroon","Blue Light","Red Light","Rose Gold","Bronze","Platinum Blonde","Yellow Red","Caramel","Brown Light","Dark Brown","Strawberry Blonde","Red Blue","Walnut Brown","Silver Ombre","Ashy","Ashy Blue","Ice Blonde","Nebula Ombre","Pink","Mahogany","Brown Coffe","Blue White","Platinum Gold","Blue","Ashy Dark Brown","Brown Red","Ashy Brown Grey","Yellow","Blue Dark","Silver"};
    //arsip
    ofstream myfile;
    myfile.open("Data Kategori Colour.txt",ios :: app);//menambah arsip
    bubble_sort(paket_3,length);//memanggil posedur

    //output dan input
    masukkan_warna();//memanggil posedur
    cout << endl;
    cout << "       Masukan Nama Colour/Higlight Yang Akan Dicari = ";cin.ignore();getline(cin,name);
    int posisi = function_binary_search(paket_3,length,name);//memanggil fungsi searching
    cout << endl;
    if (posisi != -1){//pernyataan kondisi
        cout << endl;
        warna_ada();//memanggil posedur
        cout <<endl;
        cout << "       Colour/Higlight " << name << " Ditemukan Pada Urutan Ke- " << posisi+1 << endl;//output posisi angka array
        cout << endl;
        garis();//memanggil posedur
        cout << "==     Masukkan Nama Anda                              = ";cin.ignore(1);getline(cin,name);
        cout << "==     Masukkan Nomer Hp                               = ";cin.ignore(0);cin >> number;
        cout << "==     Masukkan Alamat                                 = ";cin.ignore(1);getline(cin,address);
        cout << "********************************************************" << endl;
        cout << endl;
        mengecek_data();//memanggil posedur
        cout << endl;
        cout << "**     Waktu Pesanan                                   = " << ctime(&waktusekarang);
        cout << "**     Nama                                            = " << name << endl;
        cout << "**     Nomer Telepon                                   = " << number << endl;
        cout << "**     Alamat                                          = " << address << endl;
        cout << "**     Paket                                           = colour " << posisi+1  << endl;
        cout << "**     Harga Paket                                     = " << harga_colour <<  endl;
        cout << "**     Apakah Data Sudah Benar (Y/N)                   = ";cin >> konfirmasi;
        if (konfirmasi== "Y" || konfirmasi=="y"||konfirmasi== "Yes" || konfirmasi=="yes"||konfirmasi== "YES"){//kondisi memenuhi
            //menyimpan arsip
            if (!myfile.fail()){
                myfile << " ======== Data Pemesan Colour ========" << endl;
                myfile << " Waktu     =  "<< ctime(&waktusekarang);
                myfile << " Name      =  "<< name << endl;
                myfile << " Number    =  "<< number << endl;
                myfile << " Address   =  "<< address << endl;
                myfile << " Price     =  "<< harga_colour << endl;
                myfile << " " << endl;
                myfile.close();
            cout << endl;
            data_tersimpan();//memanggil posedur
            getch();
            }
        }else if(konfirmasi == "N" || konfirmasi == "n"||konfirmasi== "No" || konfirmasi == "no"|| konfirmasi == "NO"){//kondisi memenuhi
            cout << endl;
            data_salah();//memanggil posedur
            getch();
        }else{
            salah_input();//memanggil posedur
            getch();
        }
    }else{//kondisi pernyataan jika if tidak memenuhi
        warna_tidak_ada();
        getch();
    }
}

//prosedur colour
void Inputan_colour(int pil){
    //variable
    int harga_colour = 60000;
    time_t waktusekarang;
    time (&waktusekarang);
    char number[13];
    string name,address,konfirmasi,konfirmasi_1;
    //arsip
    ofstream myfile;
    myfile.open("Data Kategori Colour.txt",ios :: app);

    //ouput dan input
    cout << endl;
    garis();//memanggil posedur
    cout << "==     Masukkan Nama Anda                              = ";cin.ignore(1);getline(cin,name);
    cout << "==     Masukkan Nomer Hp                               = ";cin.ignore(0);cin >> number;
    cout << "==     Masukkan Alamat                                 = ";cin.ignore(1);getline(cin,address);
    cout << "********************************************************" << endl;
    cout << endl;
    mengecek_data();//memanggil posedur
    cout << endl;
    cout << "**     Waktu Pesanan                                   = " << ctime(&waktusekarang);
    cout << "**     Nama                                            = " << name << endl;
    cout << "**     Nomer Telepon                                   = " << number << endl;
    cout << "**     Alamat                                          = " << address << endl;
    cout << "**     Paket                                           = colour " << pil  << endl;
    cout << "**     Harga Paket                                     = " << harga_colour <<  endl;
    cout << "**     Apakah Data Sudah Benar (Y/N)                   = ";cin >> konfirmasi;
    if (konfirmasi== "Y" || konfirmasi=="y"||konfirmasi== "Yes" || konfirmasi=="yes"||konfirmasi== "YES"){//kondisi memenuhi
            //menyimpan arsip data clour
            if (!myfile.fail()){
                myfile << " ======== Data Pemesan Colour ========" << endl;
                myfile << " Waktu     =  "<< ctime(&waktusekarang);
                myfile << " Name      =  "<< name << endl;
                myfile << " Number    =  "<< number << endl;
                myfile << " Address   =  "<< address << endl;
                myfile << " Price     =  "<< harga_colour << endl;
                myfile << " " << endl;
                myfile.close();
            cout << endl;
            data_tersimpan();//memanggil posedur
            getch();
        }
    }else if(konfirmasi == "N" || konfirmasi == "n"||konfirmasi== "No" || konfirmasi == "no"|| konfirmasi == "NO"){//kondisi mmenuhi
        cout << endl;
        data_salah();//memanggil posedur
        getch();
    }else{//kondisi tidak memenuhi
        salah_input();//memanggil posedur
        getch();
    }
}

//prosedur menampilkan data dewasa
void menampilkan_data_dewasa(){
    cout << endl;
    daftar();//memanggil posedur
    ifstream infile;
    infile.open("Data Kategori Dewasa.txt",ios :: in);//menampilkan data
    string tmp;
    while(getline(infile,tmp)){//looping
            cout << tmp << endl;
        }//end of while
    infile.close();
    cout << endl;
}

//prosedur menampilkan data anak
void menampilkan_data_anak(){
    cout << endl;
    daftar();//memanggil posedur
    ifstream infile;
    infile.open("Data Kategori Anak.txt",ios :: in);//menampilkan data
    string tmp;
    while(getline(infile,tmp)){//looping
            cout << tmp << endl;
        }//end of while
    infile.close();
    cout << endl;
}

//prosedur menampilkan data colour
void menampilkan_data_colour(){
    cout << endl;
    daftar();//memanggil posedur
    ifstream infile;
    infile.open("Data Kategori Colour.txt",ios :: in);//menampilkan data
    string tmp;
    while(getline(infile,tmp)){//looping
            cout << tmp << endl;
        }//end of while
    infile.close();
    cout << endl;
}

//prosedur menghapus data dewasa
void menghapus_data_dewasa(){
    cout << endl;
    data_terhapus();
    ofstream outfile;
    outfile.open("Data Kategori Dewasa.txt",ios::trunc);//menghapus data
    outfile.close();

}

//prosedur menghapus data anak
void menghapus_data_anak(){
    cout << endl;
    data_terhapus();//memanggil posedur
    ofstream outfile;
    outfile.open("Data Kategori Anak.txt",ios::trunc);//menghapus data
    outfile.close();
}

//prosedur menghapus data colour
void menghapus_data_colour(){
    cout << endl;
    data_terhapus();//memanggil posedur
    ofstream outfile;
    outfile.open("Data Kategori Colour.txt",ios::trunc);//menghapus data
    outfile.close();
}


//program utama
int main(){
    //variable yang digunakan
    a:
    int i,pilihan,pilihan_1,pil;
    int harga_colour = 60000;
    time_t waktusekarang;
    time (&waktusekarang);
    string name,address,konfirmasi,konfirmasi_1;
    char number[13];
    //array
    string dewasa[]={"Hair Cut + Hair Tonic","Hair Cut + Hair tonic + Vitamin + Hair Wash + Hairstyling ","Hair Cut + Hair tonic + Vitamin + Hairstyling + Message + Hot Towel + Hair Wash"};
    int harga_dewasa[]={20000,35000,50000};
    string anak[]={"Hair Cut + Hair Tonic","Hair Cut + Hair tonic + Vitamin + Hair Wash","Hair Cut + Hair tonic + Vitamin + Message + Hairstyling + Hot Towel + Hair Wash"};
    int harga_anak[]={15000,25000,40000};
    int length =30;
    string paket_3[length]={"Maroon","Blue Light","Red Light","Rose Gold","Bronze","Platinum Blonde","Yellow Red","Caramel","Brown Light","Dark Brown","Strawberry Blonde","Red Blue","Walnut Brown","Silver Ombre","Ashy","Ashy Blue","Ice Blonde","Nebula Ombre","Pink","Mahogany","Brown Coffe","Blue White","Platinum Gold","Blue","Ashy Dark Brown","Brown Red","Ashy Brown Grey","Yellow","Blue Dark","Silver"};

    //output dan input
    cout << endl;
    cout << "\t\t\t\t\t\t   |*BARBERSHOP THE X NATHAN*|" << endl;
    cout << "\t\t\t\t\t\t   |   BUKA SENIN - JUM'AT   |" << endl;
    cout << "\t\t\t\t\t\t   | BUKA PUKUL 10.00-22.00  |" << endl;
    cout << endl;
    kategori();//memanggil prosedur
    cout << "==     1.Dewasa (Umur Diatas  16)                                                                                    ==" << endl;
    cout << "==     2.Anak   (Umur Dibawah 16)                                                                                    ==" << endl;
    cout << "==     3.Colour/Higlight                                                                                             ==" << endl;
    cout << "==     4.Keluar Program                                                                                              ==" << endl;
    pilih_daftar();//memanggil prosedur
    cout << "       Masukkan Pilihan Anda (1 - 4) = ";cin >> pilihan;
    garis();//memanggil prosedur
    if (pilihan == 1){//kondisi
        bagian1:
        menu_paket();//memanggil prosedur
        //output dan input
        for (i=0;i < 3 ;i++){
            cout <<"       " << i+1 << ". " << dewasa[i] << " = Rp." << harga_dewasa[i] <<",-" << endl;
        }
        cout << "       4. Program Utama" << endl;
        pilih_daftar();//memanggil prosedur
        cout << "       Masukkan Pilihan Anda (1 - 4) = ";cin >> pil;
        cout << endl;
        switch (pil){//pilihan
        case 1 :
            Inputan_Dewasa(pil);//memanggil prosedur
            system("cls");//hapus
            goto a;//kembali ke program utama
            break;
        case 2 :
            Inputan_Dewasa(pil);//memanggil prosedur
            system("cls");//hapus
            goto a;//kembali ke program utama
            break;
        case 3 :
            Inputan_Dewasa(pil);//memanggil prosedur
            system("cls");//hapus
            goto a;//kembali ke program utama
            break;
        case 4 :
            cout << endl;
            kembali();//memanggil prosedur
            getch();
            system("cls");//hapus
            goto a;//kembali ke program utama
            break;
        case 5 :
            cout << endl;
            salah_input_menu();//memanggil prosedur
            getch();
            system("cls");//hapus
            goto bagian1;//kembali ke menu
            break;
        case 6 :
            cout << endl;
            salah_input_menu();//memanggil prosedur
            getch();
            system("cls");//hapus
            goto bagian1;//kembali ke menu
            break;
        case 7 :
            cout << endl;
            salah_input_menu();//memanggil prosedur
            getch();
            system("cls");//hapus
            goto bagian1;//kembali ke menu
            break;
        case 8 :
            cout << endl;
            salah_input_menu();//memanggil prosedur
            getch();
            system("cls");//hapus
            goto bagian1;//kembali ke menu
            break;
        case 9 :
            cout << endl;
            salah_input_menu();//memanggil prosedur
            getch();
            system("cls");//hapus
            goto bagian1;//kembali ke menu
            break;
        case 10 :
            cout << endl;
            salah_input_menu();//memanggil prosedur
            getch();
            system("cls");//hapus
            goto bagian1;//kembali ke menu
            break;
        }
    }else if(pilihan == 2){//kondisi
        bagian2:
        menu_paket();//memanggil prosedur
        //output dan input
        for (i=0;i < 3 ;i++){//looping
            cout << "       " << i+1 << ". " << anak[i] << " = Rp." << harga_anak[i] <<",-" << endl;
        }//end of for
        cout << "       4. Program Utama" << endl;
        pilih_daftar();
        cout << "       Masukkan Pilihan Anda (1 - 4) = ";cin >> pil;
        cout << endl;
        switch (pil){//pilihan
        case 1:
            Inputan_Anak(pil);//memanggil prosedur
            system("cls");//hapus
            goto a;//kembali ke program utama
            break;
        case 2:
            Inputan_Anak(pil);//memanggil prosedur
            system("cls");//hapus
            goto a;//kembali ke program utama
            break;
        case 3:
            Inputan_Anak(pil);//memanggil prosedur
            system("cls");//hapus
            goto a;//kembali ke program utama
            break;
        case 4 :
            cout << endl;
            kembali();//memanggil prosedur
            getch();
            system("cls");//hapus
            goto a;//kembali ke program utama
            break;
        case 5 :
            cout << endl;
            salah_input_menu();//memanggil prosedur
            getch();
            system("cls");//hapus
            goto bagian2;//kembali ke menu
            break;
        case 6 :
            cout << endl;
            salah_input_menu();//memanggil prosedur
            getch();
            system("cls");//hapus
            goto bagian2;//kembali ke menu
            break;
        case 7 :
            cout << endl;
            salah_input_menu();//memanggil prosedur
            getch();
            system("cls");//hapus
            goto bagian2;//kembali ke menu
            break;
        case 8 :
            cout << endl;
            salah_input_menu();//memanggil prosedur
            getch();
            system("cls");//hapus
            goto bagian2;//kembali ke menu
            break;
        case 9 :
            cout << endl;
            salah_input_menu();//memanggil prosedur
            getch();
            system("cls");//hapus
            goto bagian2;//kembali ke menu
            break;
        case 10 :
            cout << endl;
            salah_input_menu();//memanggil prosedur
            getch();
            system("cls");//hapus
            goto bagian2;//kembali ke menu
            break;
        }
    }else if(pilihan == 3){//kondisi
        cout << endl;
        menu_paket();//memanggil prosedur
        cout << endl;
        //output dan menginput
        bubble_sort(paket_3,length);//memanggil prosedur
        print_array(paket_3,length);//memanggil prosedur
        cout << "        31. Program Utama" << endl;
        cout << endl;
        pilih_daftar();//memanggil prosedur
        cout << "       Masukkan Pilihan Anda (1 - 31 atau 123  ) = ";cin >> pil;
        cout << endl;
        if (pil == 123){//kondisi memenuhi
            Inputan_colour_search(pil);//memanggil prosedur
            system("cls");//hapus
            goto a;//kembali program awal
        }else if ( pil <= 30 ){//kondisi memenuhi
            Inputan_colour(pil);//memanggil prosedur
            system("cls");//hapus
            goto a;//kembali program awal
        }else if(pil == 31){//kondisi memenuhi
            cout << endl;
            kembali();//memanggil prosedur
            getch();
            system("cls");//hapus
            goto a;//kembali program awal
        }else{//kondisi tidak memenuhi
            salah_input();//memanggil prosedur
            getch();
            system("cls");//hapus
            goto a;//kembali program awal
        }
    }else if(pilihan == 4){//kondisi memenuhi
        cout << endl;
        keluar_program();//memanggil prosedur
    }else if(pilihan == 2345){//kondisi memenuhi
        bagian3:
        //output dan menginput
        cout << endl;
        kategori();//memanggil prosedur
        cout << "==     1.Tampilkan Data Dewasa                                                                                       ==" << endl;
        cout << "==     2.Tampilkan Data Anak                                                                                         ==" << endl;
        cout << "==     3.Tampilkan Data Colour/Higlight                                                                              ==" << endl;
        cout << "==     4.Hapus Data Dewasa                                                                                           ==" << endl;
        cout << "==     5.Hapus Data Anak                                                                                             ==" << endl;
        cout << "==     6.Hapus Data Colour/Higlight                                                                                  ==" << endl;
        cout << "==     7.Program Utama                                                                                               ==" << endl;
        pilih_daftar();//memanggil prosedur
        cout << "       Masukkan Pilihan Anda (1 - 7) = ";cin >> pilihan;
        garis();//memanggil prosedur
        if(pilihan == 1 ){//kondisi memenuhi
            menampilkan_data_dewasa();//meanggil prosedur
            cout << endl;
            kembali_menu();//memanggil prosedur
            getch();
            system("cls");//hapus
            goto bagian3;//kembali menu
        }else if(pilihan == 2 ){//kondisi memenuhi
            menampilkan_data_anak();//meanggil prosedur
            cout << endl;
            kembali_menu();//memanggil prosedur
            getch();
            system("cls");//hapus
            goto bagian3;//kembali menu
        }else if(pilihan == 3 ){//kondisi memenuhi
            menampilkan_data_colour();//meanggil prosedur
            cout << endl;
            kembali_menu();//memanggil prosedur
            getch();
            system("cls");//hapus
            goto bagian3;//kembali menu
         }else if(pilihan == 4 ){//kondisi memenuhi
            menghapus_data_dewasa();//meanggil prosedur
            cout << endl;
            kembali_menu();//memanggil prosedur
            getch();
            system("cls");//hapus
            goto bagian3;//kembali menu
         }else if(pilihan == 5){//kondisi memenuhi
            menghapus_data_anak();//memanggil prosedur
            cout << endl;
            kembali_menu();//memanggil prosedur
            getch();
            system("cls");//hapus
            goto bagian3;//kembali menu
        }else if(pilihan == 6){//kondisi memenuhi
            menghapus_data_colour();//meanggil prosedur
            cout << endl;
            kembali_menu();//memanggil prosedur
            getch();
            system("cls");//hapus
            goto bagian3;//kembali menu
        }else if(pilihan == 7){//kondisi memenuhi
            cout << endl;
            kembali();//memanggil prosedur
            getch();
            system("cls");//hapus
            goto a;//kembali program awal
        }else{//kondisi memenuhi
            cout << endl;
            salah_input_menu();//memanggil prosedur
            getch();
            system("cls");//hapus
            goto bagian3;//kembali menu
        }
    }else{//kondisi tidak memenuhi
        cout << endl;
        salah_input();//memanggil prosedur
        getch();
        system("cls");//hapus
        goto a;//kembali program awal
        }
    return 0;//untuk mentransfer kembali atau mengembalikan suatu nilai
}



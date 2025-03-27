#include "Tampilan.h"

void tampilkanData(){
	int i = 0;
	while(i < PANJANG){
		if(kota[i] != Nil){
			printf("ID: %d Nama Kota: %s ", i+1, nama(kota[i]));
			tampilkanOrang(i);
			printf("\n");
		}
		i++;
	}
}

void tampilkanOrang(int i){
	if(orang(kota[i]) == Nil){
		printf("--> (Kosong)");
		return;
	}
	
	address temp = orang(kota[i]);
	while(temp != Nil){
		printf("--> %s ",info(temp));
		temp = next(temp);
	}
	
}

void Menu3(){
	int i = 0, pilihan;
	while(i < PANJANG){
		if(kota[i] != Nil){
			printf("ID: %d Nama Kota: %s ", i+1, nama(kota[i]));
			printf("\n");
		}
		i++;
	}
	printf("Masukkan pilihan ID kota: ");
	scanf("%d",&pilihan);
	if(!isValidChoice(pilihan)){
		printf("Pilihan tidak valid. Mohon masukkan ulang\n");
		return;
	}
	deleteKota(pilihan);
}

void Menu4(){
	int pilihan;
	char nama[10];
	tampilkanData();
	printf("Masukkan pilihan ID kota: ");
	scanf("%d",&pilihan);
	if(!isValidChoice(pilihan)){
		printf("Pilihan tidak valid. Mohon masukkan ulang\n");
		return;
	}
	printf("Masukkan nama: ");
	scanf("%s",nama);
	tambahOrang(pilihan, nama);
}

void Menu5(){
	int pilihan;
	char nama[10];
	tampilkanData();
	printf("Masukkan pilihan ID kota: ");
	scanf("%d",&pilihan);
	if(!isValidChoice(pilihan)){
		printf("Pilihan tidak valid. Mohon masukkan ulang\n");
		return;
	}
	printf("Masukkan nama: ");
	scanf("%s",nama);
	deleteOrang(pilihan, nama);
}



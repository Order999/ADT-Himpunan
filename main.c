#include "LinkedList.h"

int main(int argc, char *argv[]) {
	char nama[10];
	int i = 0, pilihan;
	initKota();
	tambahKota("Cimahi"); tambahOrang(1, "Ivan"); tambahOrang(1, "Zaidan");
	tambahKota("Bandung"); tambahOrang(2, "Rangga"); 
	tambahKota("Jakarta"); tambahOrang(3, "David");
	tambahKota("Bogor"); tambahOrang(4, "Thoriq");
	tambahKota("Semarang"); tambahOrang(5, "Joko");
	system("cls");
	
	do{
		printf("\n");
		printf("\n=== SISTEM ANTRIAN BANK ===\n");
	    printf("1. Tampilkan Data\n");
	    printf("2. Tambah Kota\n");
	    printf("3. Hapus Kota\n");
	    printf("4. Tambah Orang\n");
	    printf("5. Hapus Orang\n");
	    printf("6. Keluar\n");
	    printf("Pilihan Anda: ");
	    scanf("%d",&pilihan);
	    
	    switch(pilihan){
	    	case 1:
	    		tampilkanData();
	    		break;
	    	case 2:
				printf("Masukkan nama kota: ");
				scanf("%s",nama);
				tambahKota(nama);
				break;
	    	case 3:
	    		Menu3();
	    		break;
	    	case 4:
	    		Menu4();
	    		break;
	    	case 5:
	    		Menu5();
	    		break;
	    	case 6:
	    		while(i < 7){
	    			if(kota[i] != Nil){
	    				deleteKota(i+1);
					}
					i++;
				}
	    		break;
	    	default:
	    		printf("\nPilihan tidak valid!\n");
		}
	}while(pilihan != 6);
	return 0;
}

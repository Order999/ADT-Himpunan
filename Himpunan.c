#include "Himpunan.h"

void initKota(){
	int i = 0;
	while(i < PANJANG){
		kota[i] = Nil;
		i++;
	}
}

void tambahKota(char nama[]){
	int i = 0;
	if(!isValidKota(nama)){
		printf("Tidak bisa menambahkan kota %s karena sudah ada dalam daftar\n",nama);
		return;
	}
	
	while(i < PANJANG){
		if(kota[i] == Nil){
			kota[i] = (unit) malloc(sizeof(Kota));
			strcpy(nama(kota[i]),nama);
			orang(kota[i]) = Nil;
			printf("Kota %s berhasil ditambahkan\n",nama);
			return;
		}
		i++;
	}
	printf("Tidak bisa menambahkan kota %s, karena array sudah penuh\n",nama);
}

bool isValidKota(char nama[]){
	int i = 0;
	while(i < PANJANG){
		if(kota[i] != Nil && strcmp(kota[i]->nama, nama) == 0){
			return false;
		}
		i++;
	}
	return true;	
}

bool isValidNama(int i, char nama[]){
	address temp = orang(kota[i-1]);
	while(temp != Nil){
		if(strcmp(info(temp), nama) == 0){
			return false;
		}
		temp = next(temp);
	}
	return true;
}

void tambahOrang(int i, char nama[]){
	if(!isValidNama(i, nama)){
		printf("Nama %s sudah ada pada kota %s\n", nama, nama(kota[i-1]));
		return;	
	} 
	
	insertLast(&(orang(kota[i-1])),nama);
	printf("%s berhasil ditambahkan di kota %s", nama, nama(kota[i-1]));
}

void deleteSemuaOrang(int i){
	if(orang(kota[i-1]) == Nil){
		printf("List pada kota %s sudah kosong\n", nama(kota[i-1]));
		return;
	}
	
	while(next(orang(kota[i-1])) != Nil){
		address temp = orang(kota[i-1]);
		orang(kota[i-1]) = next(orang(kota[i-1]));
		free(temp);
	}
	free(orang(kota[i-1]));
	orang(kota[i-1]) = Nil;
}

void deleteOrang(int i, char nama[]){
	if(orang(kota[i-1]) == Nil){
		printf("List pada kota %s sudah kosong\n", nama(kota[i-1]));
		return;
	}
	
	if(isValidNama(i, nama)){
		printf("Nama %s anda tidak ditemukan pada kota %s. Mohon masukkan ulang\n", nama, nama(kota[i-1]));
		return;	
	}
	
	if(strcmp(info(orang(kota[i-1])), nama) == 0){
		address temp = orang(kota[i-1]);
		orang(kota[i-1]) = next(temp);
		free(temp);
		printf("Nama %s berhasil dihapus dari kota %s\n", nama, nama(kota[i-1]));
		return;
	}
	address temp = orang(kota[i-1]);
	address prev = temp;
	while(strcmp(info(temp), nama) != 0){
		prev = temp;
		temp = next(temp);
	}
	next(prev) = next(temp);
	free(temp);
	printf("Nama %s berhasil dihapus dari kota %s\n", nama, nama(kota[i-1]));
}

void deleteKota(int i){
	deleteSemuaOrang(i);
	free(kota[i-1]);
	kota[i-1] = Nil;
	printf("Penghapusan berhasil\n");
}

bool isValidChoice(int i){
	if(i < 1 && i > 8){
		return false;
	}
	
	if(kota[i-1] == Nil){
		return false;
	}
	
	return true;
}

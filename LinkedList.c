#include "LinkedList.h"

void insertLast(address* First, infotype nama){
	address P = (address) malloc(sizeof(ElmtList));
	strcpy(info(P), nama);
    next(P) = Nil;
    
    if(*First == Nil){
    	*First = P;
	}else{
		address temp = *First;
		while(next(temp) != Nil){
			temp = next(temp);
		}
		next(temp) = P;
	}
}

void deleteLast(address *First){
	address temp = *First;
	if(next(*First) == Nil){
		free(*First);
		*First = Nil;
	}else{
		while (next(next(temp)) != Nil) {
            temp = next(temp);
        }

        free(next(temp));
        next(temp) = Nil;
	}
}
	

void printSemuaNode(address First){
    if (First == Nil) {
        printf("{}\n");
        return;
    }

    printf("{");
    address temp = First;
    printf("%d", info(temp));
    temp = next(temp);
    while (temp != Nil) {
        printf(", %d", info(temp));
        temp = next(temp);
    }
    printf("}\n");
}


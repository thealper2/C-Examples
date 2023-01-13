#include <stdio.h>
#include <stdlib.h>

char kare[10]={'0','1','2','3','4','5','6','7','8','9'};

int game(){
	if(kare[1]==kare[2] && kare[2]==kare[3]) {
		return 1;
	} else if(kare[4]==kare[5] && kare[5]==kare[6]) {
		return 1;
	} else if(kare[7]==kare[8] && kare[8]==kare[9]) {
		return 1;
	} else if(kare[1]==kare[4] && kare[4]==kare[7]) {
		return 1;
	} else if(kare[2]==kare[5] && kare[5]==kare[8]) {
		return 1;
	} else if(kare[3]==kare[6] && kare[6]==kare[9]) {
		return 1;
	} else if(kare[1]==kare[5] && kare[5]==kare[9]) {
		return 1;
	} else if(kare[3]==kare[5] && kare[5]==kare[7]) {
		return 1;
	} else if(kare[1] != '1' && kare[2] != '2' && kare[3] != '3' && kare[4] != '4' && kare[5] != '5' && kare[6] != '6' && kare[7] != '7' && kare[8] != '8' && kare[9] != '9') {
		return 0;
	} else {
		return -1;
	}
}
void ciz(){
	printf("\n\n\t tic tac toe \n\n");
	printf("Player 1 = (X) - Player 2 = (O) \n\n\n");
	printf("    |    |    \n");
	printf(" %c  | %c | %c  \n", kare[1], kare[2], kare[3]);
	printf("____|____|____\n");
	printf("    |    |    \n");
	printf(" %c  | %c | %c  \n", kare[4], kare[5], kare[6]);
	printf("____|____|____\n");
	printf("    |    |    \n");
	printf(" %c  | %c | %c  \n", kare[7], kare[8], kare[9]);
	printf("    |    |    \n");
}

int main() {
	int player = 1, oyun, secim;
	char mark;
	while(oyun != -1); {
		ciz();
		player = (player%2) ? 1:2;
		printf("Player %d, secim gir: ",player);
		scanf("%d",&secim);
		mark = (player==1)?'X':'O';
		if(secim==1 && kare[1]=='1') {
			kare[1]=mark;
		} else if(secim==2 && kare[2]=='2')  {
			kare[2]=mark;
		} else if(secim==3 && kare[3]=='3') {
			kare[3]=mark;
		} else if(secim==4 && kare[4]=='4') {
			kare[4]=mark;
		} else if(secim==5 && kare[5]=='5') {
			kare[5]=mark;
		}
		else if(secim==6 && kare[6]=='6') {
			kare[6]=mark;
		}
		else if(secim==7 && kare[7]=='7') {
			kare[7]=mark;
		}
		else if(secim==8 && kare[8]=='8') {
			kare[8]=mark;
		}
		else if(secim==9 && kare[9]=='9') {
			kare[9]=mark;
		}
		else {
			printf("Hatali secim");
		}
		oyun = game();
		player++;

	}
	ciz();
	if(game == 1){
		printf("Player %d kazandi.\n",--player);
	} else {
		printf("Berabere bitti.\n");
	}
	return 0;
}

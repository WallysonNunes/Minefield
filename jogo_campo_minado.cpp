//jogo campo minado
/*
   PROGRAMA........: JOGO DO CAMPO MINADO	
   CRIADO EM.......: 23/02/2011
   TERMINADO EM....: 09/03/2011
   ATUALIZADO EM...: 09/03/2011
   AUTOR...........: WALLYSON NUNES
   E-MAIL..........: linho_msn_@hotmail.com
   DESCRIÇÃO.......: JOGO DO CAMPO MINADO ONDE O OBJETIVO DO JOGO É PREENCHER TODAS
                     AS POSIÇÕES SEM ACHAR A BOMBA.
*/
#include <iostream>
#include <iomanip>
#include <cstdlib>

using namespace std;

void facil(); //função do nível fácil
void medio();
void dificil();
	
	string tecla;
	 int valor[32],opcao=0,i,ja_teclou[32],soma=0,x,num=0,sair=0,venceu = 0,teclou_bomba[32];
	char exibir[32];

int main (void)
	{
		string nome;
		srand(time(NULL)); // inicializa o gerador de números aleatórios para cada vez que ser inicializado usar números diferentes

	for (i=0;i<32;i++) { //inicializa as variaveis
		exibir[i] = 'X';
		valor[i] = i+1;
		ja_teclou[i] = 0;
		teclou_bomba[i] = 0;
		}
	
	cout << "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n";
	cout << "X                                                                     X\n";
	cout << "X      XXXXX    XXXXX     XXX XXX     XXXXX       XXXX                X\n";
    cout << "X     XX       XX   XX   XX  XX  XX   XX   XX    XX  XX               X\n";
    cout << "X     XX       XX   XX   XX  XX  XX   XX   XX   XX    XX              X\n";
    cout << "X     XX       XXXXXXX   XX  XX  XX   XX   XX   XX    XX              X\n";
    cout << "X     XX       XX   XX   XX  XX  XX   XXXXXX    XX    XX              X\n";
    cout << "X     XX       XX   XX   XX  XX  XX   XX         XX  XX               X\n";
    cout << "X      XXXXX   XX   XX   XX  XX  XX   XX          XXXX                X\n";
    cout << "X                                                                     X\n";    
    cout << "X        XXX XXX    XX   XXXXX     XXXXX     XXXXX       XXXX         X\n";
    cout << "X      XX  XX  XX   XX   XX  XX   XX   XX    XX  XX     XX  XX        X\n";
    cout << "X      XX  XX  XX   XX   XX  XX   XX   XX    XX   XX   XX    XX       X\n";
    cout << "X      XX  XX  XX   XX   XX  XX   XXXXXXX    XX   XX   XX    XX       X\n";
    cout << "X      XX  XX  XX   XX   XX  XX   XX   XX    XX  XX     XX  XX        X\n";
    cout << "X      XX  XX  XX   XX   XX  XX   XX   XX    XXXX        XXXX         X\n";
	cout << "X                                                                     X\n";
	cout << "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n\n";
	cout << "           APERTER UMA LETRA E DIGITE ENTER PARA CONTINUAR !           \n";
	 cin >> tecla;
	 
	cout << "\n===============================================================\n";
	cout << "\nDigite o nome do jogador : ";
	 cin >> nome;
	cout << "===============================================================\n\n";
	 
	 cout << "\n                  *=============================*\n";
	 cout << "                  |    NIVEIS DE DIFICULDADE    |\n";
	 cout << "                  *=============================*\n";
	 cout << "                  |    1 - NIVEL FÁCIL          |\n";
	 cout << "                  |    2 - NIVEL MÉDIO          |\n";
	 cout << "                  |    3 - NIVEL DIFÍCIL        |\n";
	 cout << "                  *=============================*\n";
	 cout << "                  Digite o nível em que quer jogar ?\n";
	  cin >> opcao;
	  
	switch (opcao) { //conforme a opção desejada ele inicializa a função correspondente
		case 1: facil();   break;
		case 2: medio();   break;
		case 3: dificil(); break;
		default: cout << "Você digitou uma opção errada, reinicie o programa !\n";  return 0;
	}
	
		if (venceu == 1) {
			cout << "\n===============================================================\n";
			cout << "\n                      Parabéns, você venceu !\n";
			cout << "===============================================================\n\n";
		}
			
	return 0;
}

	void facil()// função fácil
	{
	cout << "*==========================================================================*\n";
	cout << "|  ___   ___ ___ ___    ___ _________ ___                                  |\n";
	cout << "|  XXX_  XXX XXX XXX    XXX XXXXXXXXX XXX                                  |\n";
	cout << "|  XXXX_ XXX XXX XXX    XXX XXXXXXXXX XXX                                  |\n";
	cout << "|  XXXXX_XXX XXX XXX_  _XXX XXX____   XXX                                  |\n";
	cout << "|  XXXXXXXXX XXX  XXX__XXX  XXXXXXX   XXX                                  |\n";
	cout << "|  XXX XXXXX XXX   XXXXXX   XXX______ XXX______                            |\n";
	cout << "|  XXX  XXXX XXX    XXXX    XXXXXXXXX XXXXXXXXX                            |\n";
	cout << "|  XXX   XXX XXX     XX     XXXXXXXXX XXXXXXXXX                            |\n";
	cout << "|                            _________ _________ _________ ___ ___         |\n";
	cout << "|                            XXXXXXXXX XXXXXXXXX XXXXXXXXX XXX XXX         |\n";
	cout << "|                            XXXXXXXXX XXXXXXXXX XXXXXXXXX XXX XXX         |\n";
	cout << "|                            XXX___    XXX___XXX XXX       XXX XXX         |\n";
	cout << "|                            XXXXXX    XXXXXXXXX XXX       XXX XXX         |\n";
	cout << "|                            XXXXXX    XXXXXXXXX XXX______ XXX XXX______   |\n";
	cout << "|                            XXX       XXX   XXX XXXXXXXXX XXX XXXXXXXXX   |\n";
	cout << "|                            XXX       XXX   XXX XXXXXXXXX XXX XXXXXXXXX   |\n";
	cout << "|                                                                          |\n";
	cout << "*==========================================================================*\n\n";
	cout << "               Presione uma letra e digite enter para continuar !              \n";
	 cin >> tecla;
	
	cout << "                     Posições que podem ser escolhidas ! \n\n"; //exibe as opções disponíveis
    cout << "                       XXXXXXXXXXXXXXXXXXXXXXX\n";
	cout << "                       X                     X\n";
    cout << "                       X     "<<valor[0]<<"  "<<valor[1]<<"  "<<valor[2]<<"  "<<valor[3]<<"      X\n";
    cout << "                       X     "<<valor[4]<<"  "<<valor[5]<<"  "<<valor[6]<<"  "<<valor[7]<<"      X\n";
    cout << "                       X     "<<valor[8]<<"  "<<valor[9]<<" "<<valor[10]<<" "<<valor[11]<<"     X\n";
    cout << "                       X                     X\n";
    cout << "                       XXXXXXXXXXXXXXXXXXXXXXX\n\n"; 
	
	for (i=0; i<12; i++)  valor[i] = 0; //atribui 0 a var valor
		 
	for (i=1; i<=4; i++){ // gera 4 números aleatórios
		volta: // volta aqui se repetir numeros
		opcao = rand() % 12 + 1; //numeros aleatórios sendo gerados de 1 a 12
		
		switch (opcao){ // valor gerado pelo rand
			
			case 1: num = 0; break;		case 2:  num = 1; break;	case 3:  num = 2;  break;	case 4:  num = 3;  break; 
			case 5: num = 4; break;		case 6:  num = 5; break;	case 7:  num = 6;  break;	case 8:  num = 7;  break;
			case 9: num = 8; break;		case 10: num = 9; break;	case 11: num = 10; break;	case 12: num = 11; break;
		}
		if (teclou_bomba[num] == 0) { teclou_bomba[num] = 1; valor[num] = 2; } else goto volta; // marca a var valor[num] com 2 (bomba)
		
	}
	
	// for (i=0; i<12; i++)  cout << valor[i] << " "; //trapaça
	
	for (i=0; i<=7; i++){ //o loop termina quando todas as casas são preenchidas ou o usuário acerta a bomba
	
	errado: // volta aqui se ele digitou uma posição repetida
	
	cout << "\n===============================================================\n";
	cout << "\n Digite uma opção(lembrando que é de 1 a 12) : ";
	 cin >> opcao;
	cout << "===============================================================\n\n";
	
    switch (opcao) {
		case 1: for (x=1; x<6; x++) { // vai da posicao 1 ate a 5
					if (x == 2 || x == 3) continue; //verifica os numeros que nao estao em volta do 0 e continuam o loop
					else if (valor[x] == 2) soma++; } //se tiver bomba, soma recebe ela mesma mais 1
				num = 0;
		 		break;
		
		case 2: for (x=0; x<7; x++) { 
					if (x == 1 || x == 3) continue; 
					else if (valor[x] == 2) soma++; } 
				num = 1;
				break;
		
		case 3: for (x=1; x<8; x++) { 
					if (x == 2 || x == 4) continue;
					else if (valor[x] == 2) soma++; }
				num = 2; 
				break;
					
		case 4: for (x=2; x<8; x++) { 
					if (x == 3 || x == 4 || x == 5) continue;
					else if (valor[x] == 2) soma++; }
				num = 3;
				break;
					
		case 5: for (x=0; x<10; x++) {
					if (x == 2 || x == 3 || x == 4 || x == 6 || x == 7) continue;
					else if (valor[x] == 2) soma++; }
				num = 4;
				break;
				  
		case 6: for (x=0; x<11; x++) {
					if (x == 3 || x == 5 || x == 7) continue;
					else if (valor[x] == 2) soma++; } 
				num = 5;
				break;
				  
		case 7: for (x=1; x<12; x++) {
					if (x == 4 || x == 6 || x == 8) continue;
					else if (valor[x] == 2) soma++; }
				num = 6;
				break;
				  
		case 8: for (x=2; x<12; x++) {
					if (x == 4 || x == 5 || x == 7 || x == 8 || x == 9) continue;
					else if (valor[x] == 2) soma++; }
				num = 7;
				break;
				  
		case 9: for (x=4; x<10; x++) {
					if (x == 6 || x == 7 || x == 8) continue;
					else if (valor[x] == 2) soma++; }
				num = 8;
				break;
					
		case 10: for (x=4; x<11; x++) {
					if (x == 7 || x == 9) continue;
					else if (valor[x] == 2) soma++; }  
				num = 9;
				break;
				  
		case 11: for (x=5; x<12; x++) {
					if (x == 8 || x == 10) continue;
					else if (valor[x] == 2) soma++; } 
				num = 10;
				break;
					
		case 12: for (x=6; x<11; x++) {
					if (x == 8 || x == 9) continue;
					else if (valor[x] == 2) soma++; }
				 num = 11;
				 break;
				 
		default: cout << "\n===============================================================\n";
				 cout << "\nPosição inválida ! escolha outra !\n";
				 cout << "===============================================================\n"; 
				 goto errado;
				 break;
					
				} // fecha o switch
	
	
	if (valor[num]==2) { // Se for igual a 2 essa posicao tem uma bomba ! 
		cout << "\n===============================================================\n";
		cout << "\n                      Você Perdeu ! RsRsRs\n";
		cout << "===============================================================\n\n";
		for (x=0; x<12; x++) if (valor[x]==2) exibir[x]= '*'; sair = 1;} //exibe todas as bombas
	else {
		if (ja_teclou[num] == 0) { ja_teclou[num] = 1; 
			if (soma == 1) exibir[num] = '1';  //marca a posição do jogador
			else if (soma == 2) exibir[num] = '2';
			else if (soma == 3) exibir[num] = '3';
			else if (soma == 4) exibir[num] = '4';
			else exibir[num] = '0';
						}	
		else {
		  cout << "\n===============================================================\n";
		  cout << "\nVocê já digitou essa posição ! escolha outra !\n";
		  cout << "===============================================================\n"; goto errado;}
					}		
		                            
    cout << "                       XXXXXXXXXXXXXXXXXXXXXXX\n";
	cout << "                       X                     X\n";
    cout << "                       X     "<<exibir[0]<<"  "<<exibir[1]<<"  "<<exibir[2]<<"  "<<exibir[3]<<"      X\n";
    cout << "                       X     "<<exibir[4]<<"  "<<exibir[5]<<"  "<<exibir[6]<<"  "<<exibir[7]<<"      X\n";
    cout << "                       X     "<<exibir[8]<<"  "<<exibir[9]<<"  "<<exibir[10]<<"  "<<exibir[11]<<"      X\n";
    cout << "                       X                     X\n";
    cout << "                       XXXXXXXXXXXXXXXXXXXXXXX\n\n"; 
    
		if (i == 7 && sair == 0)  venceu = 1; //verifica se o jogador ganhou
		else if (sair == 1) break; //verifica se o jogador perdeu
		
		soma = 0; // reinicia a var soma depois de acabar a rodada
		
	} // fecha o for que controla o jogo
 }
 
 //função médio
 void medio()
	{
	cout << "*==========================================================================*\n";
	cout << "|  ___   ___  ___  ___    ___  _________  ___                              |\n";
	cout << "|  XXX_  XXX  XXX  XXX    XXX  XXXXXXXXX  XXX                              |\n";
	cout << "|  XXXX_ XXX  XXX  XXX    XXX  XXXXXXXXX  XXX                              |\n";
	cout << "|  XXXXX_XXX  XXX  XXX_  _XXX  XXX____    XXX                              |\n";
	cout << "|  XXXXXXXXX  XXX   XXX__XXX   XXXXXXX    XXX                              |\n";
	cout << "|  XXX XXXXX  XXX    XXXXXX    XXX______  XXX______                        |\n";
	cout << "|  XXX  XXXX  XXX     XXXX     XXXXXXXXX  XXXXXXXXX                        |\n";
	cout << "|  XXX   XXX  XXX      XX      XXXXXXXXX  XXXXXXXXX                        |\n";
	cout << "|                     ___     ___  _________  ________   ___  _________    |\n";
	cout << "|                     XXX_   _XXX  XXXXXXXXX  XXXXXXXX   XXX  XXXXXXXXX    |\n";
	cout << "|                     XXXX_ _XXXX  XXXXXXXXX  XXXXXXXXX  XXX  XXXXXXXXX    |\n";
	cout << "|                     XXXXX_XXXXX  XXX____    XXX   XXX  XXX  XXX   XXX    |\n";
	cout << "|                     XXX XXX XXX  XXXXXXX    XXX    XX  XXX  XXX   XXX    |\n";
	cout << "|                     XXX  X  XXX  XXX______  XXX___XXX  XXX  XXX___XXX    |\n";
	cout << "|                     XXX     XXX  XXXXXXXXX  XXXXXXXXX  XXX  XXXXXXXXX    |\n";
	cout << "|                     XXX     XXX  XXXXXXXXX  XXXXXXXX   XXX  XXXXXXXXX    |\n";
	cout << "|                                                                          |\n";
	cout << "*==========================================================================*\n\n";
	cout << "              Presione uma letra e digite enter para continuar ! \n";
	 cin >> tecla;              
    
    cout << "                   Posições que podem ser escolhidas ! \n\n";
    cout << "                   XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n";
	cout << "                   X                                X\n";
    cout << "                   X     "<<valor[0]<<"   "<<valor[1]<<"   "<<valor[2]<<"   "<<valor[3]<<"   "<<valor[4]<<"   "<<valor[5]<<"      X\n";
    cout << "                   X     "<<valor[6]<<"   "<<valor[7]<<"   "<<valor[8]<<"   "<<valor[9]<<"  "<<valor[10]<<"  "<<valor[11]<<"     X\n";
    cout << "                   X     "<<valor[12]<<"  "<<valor[13]<<"  "<<valor[14]<<"  "<<valor[15]<<"  "<<valor[16]<<"  "<<valor[17]<<"     X\n";
    cout << "                   X     "<<valor[18]<<"  "<<valor[19]<<"  "<<valor[20]<<"  "<<valor[21]<<"  "<<valor[22]<<"  "<<valor[23]<<"     X\n";
    cout << "                   X                                X\n";
    cout << "                   XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n\n"; 
    		                   
	for (i=0; i<24; i++)  valor[i] = 0; //atribui 0 a var valor
		 
	for (i=1; i<=8; i++){ // gera 8 números aleatórios
		volta: // volta aqui se repetir o número
		opcao = rand() % 24 + 1; //numeros aleatórios sendo gerados de 1 a 24
		
		switch (opcao){
			case 1:  num = 0;  break;  case 2:  num = 1;  break;  case 3:  num = 2;  break;  case 4:  num = 3;  break;
			case 5:  num = 4;  break;  case 6:  num = 5;  break;  case 7:  num = 6;  break;  case 8:  num = 7;  break;
			case 9:  num = 8;  break;  case 10: num = 9;  break;  case 11: num = 10; break;  case 12: num = 11; break;
			case 13: num = 12; break;  case 14: num = 13; break;  case 15: num = 14; break;  case 16: num = 15; break;
			case 17: num = 16; break;  case 18: num = 17; break;  case 19: num = 18; break;  case 20: num = 19; break;
			case 21: num = 20; break;  case 22: num = 21; break;  case 23: num = 22; break;  case 24: num = 23; break;
		}
		if (teclou_bomba[num] == 0) { teclou_bomba[num] = 1; valor[num] = 2; } else goto volta;
	}
	 
	// for (i=0; i<24; i++)  cout << valor[i] << " "; //trapaça
	
	for (i=0; i<=15; i++){ //o loop termina quando todas as casas são preenchidas ou o usuário acerta a bomba
	
	errado: // volta aqui se ele digitou uma posição repetida
	
	cout << "\n===============================================================\n";
	cout << "\n Digite uma opção(lembrando que é de 1 a 24) : ";
	 cin >> opcao;
	cout << "===============================================================\n\n";
	
    switch (opcao) {
		case 1: for (x=1; x<8; x++) { 
					if (x == 2 || x == 3 || x == 4 || x == 5) continue; 
					else if (valor[x] == 2) soma++; }
				num = 0;
		 		break;
		
		case 2: for (x=0; x<9; x++) { 
					if (x == 1 || x == 3 || x == 4 || x == 5) continue; 
					else if (valor[x] == 2) soma++; } 
				num = 1;
				break;
		
		case 3: for (x=1; x<10; x++) { 
					if (x == 2 || x == 4 || x == 5 || x == 6) continue;
					else if (valor[x] == 2) soma++; }
				num = 2; 
				break;
					
		case 4: for (x=2; x<11; x++) { 
					if (x == 3 || x == 5 || x == 5 || x == 6 || x == 7) continue;
					else if (valor[x] == 2) soma++; }
				num = 3;
				break;
					
		case 5: for (x=3; x<12; x++) {
					if (x == 4 || x == 6 || x == 7 || x == 8) continue;
					else if (valor[x] == 2) soma++; }
				num = 4;
				break;
				  
		case 6: for (x=4; x<12; x++) {
					if (x == 5 || x == 6 || x == 7 || x == 8 || x == 9) continue;
					else if (valor[x] == 2) soma++; } 
				num = 5;
				break;
				  
		case 7: for (x=0; x<14; x++) {
					if (x == 2 || x == 3 || x == 4 || x == 5 || x == 6 || x == 8 || x == 9 || x == 10 || x == 11) continue;
					else if (valor[x] == 2) soma++; }
				num = 6;
				break;
				  
		case 8: for (x=0; x<15; x++) {
					if (x == 3 || x == 4 || x == 5 || x == 7 || x == 9 || x == 10 || x == 11) continue;
					else if (valor[x] == 2) soma++; }
				num = 7;
				break;
				  
		case 9: for (x=1; x<16; x++) {
					if (x == 4 || x == 5 || x == 6 || x == 8 || x == 10 || x == 11 || x == 12) continue;
					else if (valor[x] == 2) soma++; }
				num = 8;
				break;
					
		case 10: for (x=2; x<17; x++) {
					if (x == 5 || x == 6 || x == 7 || x == 9 || x == 11 || x == 12 || x == 13) continue;
					else if (valor[x] == 2) soma++; }  
				 num = 9;
				 break;
				  
		case 11: for (x=3; x<18; x++) {
					if (x == 6 || x == 7 || x == 8 || x == 10 || x == 12 || x == 13 || x == 14) continue;
					else if (valor[x] == 2) soma++; } 
				 num = 10;
				 break;
					
		case 12: for (x=4; x<18; x++) {
					if (x == 6 || x == 7 || x == 8 || x == 9 || x == 11 || x == 12 || x == 13 || x == 14 || x == 15) continue;
					else if (valor[x] == 2) soma++; }
				 num = 11;
				 break;
				
		case 13: for (x=6; x<20; x++) {
					if (x == 8 || x == 9 || x == 10 || x == 11 || x == 12 || x == 14 || x == 15 || x == 16 || x == 17) continue;
					else if (valor[x] == 2) soma++; }
				  num = 12;
				  break;
		
		case 14: for (x=6; x<21; x++) {
					if (x == 9 || x == 10 || x == 11 || x == 13 || x == 15 || x == 16 || x == 17) continue;
					else if (valor[x] == 2) soma++; }
				  num = 13;
				  break;
				  
		case 15: for (x=7; x<22; x++) {
					if (x == 10 || x == 11 || x == 12 || x == 14 || x == 16 || x == 17 || x == 18) continue;
					else if (valor[x] == 2) soma++; }
				 num = 14;
				 break;
				 
		case 16: for (x=8; x<23; x++) {
					if (x == 11 || x == 12 || x == 13 || x == 15 || x == 17 || x == 18 || x == 19) continue;
					else if (valor[x] == 2) soma++; }
				  num = 15;
				  break;
				  
		case 17: for (x=9; x<24; x++) {
					if (x == 12 || x == 13 || x == 14 || x == 16 || x == 18 || x == 19 || x == 20) continue;
					else if (valor[x] == 2) soma++; }
				 num = 16;
				 break;
				 
		case 18: for (x=10; x<24; x++) {
					if (x == 12 || x == 13 || x == 14 || x == 15 || x == 17 || x == 18 || x == 19 || x == 20 ||  x == 21) continue;
				    else if (valor[x] == 2) soma++; }
				  num = 17;
				  break;
				
		case 19: for (x=12; x<20; x++) {
					if (x == 14 || x == 15 || x == 16 || x == 17 || x == 18) continue;
					else if (valor[x] == 2) soma++; } 
				  num = 18;
				  break;
				  
		case 20: for (x=12; x<21; x++) {
					if (x == 15 || x == 16 || x == 17 || x == 19) continue;
					else if (valor[x] == 2) soma++; }
				  num = 19;
				  break;
				  
		case 21: for (x=13; x<22; x++) {
					if (x == 16 || x == 17 || x == 18 || x == 20) continue;
					else if (valor[x] == 2) soma++; }
				  num = 20;
				  break;
				 
		case 22: for (x=14; x<23; x++) {
					if (x == 17 || x == 18 || x == 19 || x == 21) continue;
					else if (valor[x] == 2) soma++; }
				  num = 21;
				  break;
				  
		case 23: for (x=15; x<24; x++) {
					if (x == 18 || x == 19 || x == 20 || x == 22) continue;
					else if (valor[x] == 2) soma++; }
				  num = 22;
				  break;
				  
		case 24: for (x=16; x<23; x++) {
					if (x == 18 || x == 19 || x == 20 || x == 21) continue;
					else if (valor[x] == 2) soma++; }
				  num = 23;
				  break;	
		
		default: cout << "\n===============================================================\n";
				 cout << "\nPosição inválida ! escolha outra !\n";
				 cout << "===============================================================\n"; 
				 goto errado;
				 break;				
				
		} // fecha o switch
	
	
	if (valor[num]==2) { // Se for igual a 2 essa posicao tem uma bomba ! 
		cout << "\n===============================================================\n";
		cout << "\n                      Você Perdeu ! RsRsRs\n";
		cout << "===============================================================\n\n";
		for (x=0; x<24; x++) if (valor[x]==2) exibir[x]= '*'; sair = 1;} //exibe todas as bombas
	else {
		if (ja_teclou[num] == 0) { ja_teclou[num] = 1; 
			if (soma == 1) exibir[num] = '1';
			else if (soma == 2) exibir[num] = '2';
			else if (soma == 3) exibir[num] = '3'; 
			else if (soma == 4) exibir[num] = '4';
			else if (soma == 5) exibir[num] = '5';
			else if (soma == 6) exibir[num] = '6';
			else if (soma == 7) exibir[num] = '7';
			else if (soma == 8) exibir[num] = '8';
			else exibir[num] = '0';
						}	
		else {
		  cout << "\n===============================================================\n";
		  cout << "\nVocê já digitou essa posição ! escolha outra !\n";
		  cout << "===============================================================\n"; goto errado;}
					}		
	cout << "                   XXXXXXXXXXXXXXXXXXXXXXXXXXXX\n";
	cout << "                   X                          X\n";
    cout << "                   X     "<<exibir[0]<<"  "<<exibir[1]<<"  "<<exibir[2]<<"  "<<exibir[3]<<"  "<<exibir[4]<<"  "<<exibir[5]<<"     X\n";
    cout << "                   X     "<<exibir[6]<<"  "<<exibir[7]<<"  "<<exibir[8]<<"  "<<exibir[9]<<"  "<<exibir[10]<<"  "<<exibir[11]<<"     X\n";
    cout << "                   X     "<<exibir[12]<<"  "<<exibir[13]<<"  "<<exibir[14]<<"  "<<exibir[15]<<"  "<<exibir[16]<<"  "<<exibir[17]<<"     X\n";
    cout << "                   X     "<<exibir[18]<<"  "<<exibir[19]<<"  "<<exibir[20]<<"  "<<exibir[21]<<"  "<<exibir[22]<<"  "<<exibir[23]<<"     X\n";
    cout << "                   X                          X\n";
    cout << "                   XXXXXXXXXXXXXXXXXXXXXXXXXXXX\n\n"; 
                                
		if (i == 15 && sair == 0) venceu = 1;
		else if (sair == 1) break;
		
		soma = 0;		
	} // fecha o for que controla o jogo
 }


// função dificil
void dificil()
	{
	cout << "*==========================================================================*\n";
	cout << "|  ___   ___  ___  ___    ___  _________  ___                              |\n";
	cout << "|  XXX_  XXX  XXX  XXX    XXX  XXXXXXXXX  XXX                              |\n";
	cout << "|  XXXX_ XXX  XXX  XXX    XXX  XXXXXXXXX  XXX                              |\n";
	cout << "|  XXXXX_XXX  XXX  XXX_  _XXX  XXX____    XXX                              |\n";
	cout << "|  XXXXXXXXX  XXX   XXX__XXX   XXXXXXX    XXX                              |\n";
	cout << "|  XXX XXXXX  XXX    XXXXXX    XXX______  XXX______                        |\n";
	cout << "|  XXX  XXXX  XXX     XXXX     XXXXXXXXX  XXXXXXXXX                        |\n";
	cout << "|  XXX   XXX  XXX      XX      XXXXXXXXX  XXXXXXXXX                        |\n";
	cout << "|               ________   ___  _________  ___  _________  ___  ___        |\n";
	cout << "|               XXXXXXXX   XXX  XXXXXXXXX  XXX  XXXXXXXXX  XXX  XXX        |\n";
	cout << "|               XXXXXXXXX  XXX  XXXXXXXXX  XXX  XXXXXXXXX  XXX  XXX        |\n";
	cout << "|               XXX   XXX  XXX  XXX___     XXX  XXX        XXX  XXX        |\n";
	cout << "|               XXX    XX  XXX  XXXXXX     XXX  XXX        XXX  XXX        |\n";
	cout << "|               XXX___XXX  XXX  XXXXXX     XXX  XXX______  XXX  XXX______  |\n";
	cout << "|               XXXXXXXXX  XXX  XXX        XXX  XXXXXXXXX  XXX  XXXXXXXXX  |\n";
	cout << "|               XXXXXXXX   XXX  XXX        XXX  XXXXXXXXX  XXX  XXXXXXXXX  |\n";
	cout << "|                                                                          |\n";
	cout << "*==========================================================================*\n\n";
	cout << "              Presione uma letra e digite enter par continuar ! \n";
	 cin >> tecla;         

	cout << "                  Posições que podem ser escolhidas ! \n\n";
    cout << "                  XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n";
	cout << "                  X                                          X\n";
    cout << "                  X     "<<valor[0]<<"   "<<valor[1]<<"   "<<valor[2]<<"   "<<valor[3]<<"   "<<valor[4]<<"   "<<valor[5]<<"    "<<valor[6]<<"    "<<valor[7]<<"      X\n";
    cout << "                  X     "<<valor[8]<<"   "<<valor[9]<<"  "<<valor[10]<<"  "<<valor[11]<<"  "<<valor[12]<<"  "<<valor[13]<<"   "<<valor[14]<<"   "<<valor[15]<<"     X\n";
    cout << "                  X     "<<valor[16]<<"  "<<valor[17]<<"  "<<valor[18]<<"  "<<valor[19]<<"  "<<valor[20]<<"  "<<valor[21]<<"   "<<valor[22]<<"   "<<valor[23]<<"     X\n";
    cout << "                  X     "<<valor[24]<<"  "<<valor[25]<<"  "<<valor[26]<<"  "<<valor[27]<<"  "<<valor[28]<<"  "<<valor[29]<<"   "<<valor[30]<<"   "<<valor[31]<<"     X\n";
    cout << "                  X                                          X\n";
    cout << "                  XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n\n"; 
                                
   	for (i=0; i<32; i++)  valor[i] = 0; //atribui 0 a var valor
		 
	for (i=1; i<=12; i++){ // gera 12 números aleatórios
		volta:
		opcao = rand() % 32 + 1; //numeros aleatórios sendo gerados de 1 a 32
		
		switch (opcao){ // valor = 2 (quer dizer bomba) 
			// marca a bomba na var valor
			case 1:  num = 0;  break;	case 2:  num = 1;  break;	case 3:  num = 2;  break;	case 4:  num = 3;  break;
			case 5:  num = 4;  break;	case 6:  num = 5;  break;	case 7:  num = 6;  break;	case 8:  num = 7;  break;
			case 9:  num = 8;  break;	case 10: num = 9;  break;	case 11: num = 10; break;	case 12: num = 11; break;
			case 13: num = 12; break;	case 14: num = 13; break;	case 15: num = 14; break;	case 16: num = 15; break;
			case 17: num = 16; break;	case 18: num = 17; break;	case 19: num = 18; break;	case 20: num = 19; break;
			case 21: num = 20; break;	case 22: num = 21; break;	case 23: num = 22; break;	case 24: num = 23; break;
			case 25: num = 24; break;	case 26: num = 25; break;	case 27: num = 26; break;	case 28: num = 27; break;
			case 29: num = 28; break;	case 30: num = 29; break;	case 31: num = 30; break;	case 32: num = 31; break;
		}
		if (teclou_bomba[num] == 0) { teclou_bomba[num] = 1; valor[num] = 2; } else goto volta;
	}
	 for (x=0; x<32; x++) cout << valor[x] << " "; //trapaça
	
    for (i=0; i<=19; i++){ //o loop termina quando todas as casas são preenchidas ou o usuário acerta a bomba
	
	errado: // volta aqui se ele digitou uma posição repetida
	
	cout << "\n===============================================================\n";
	cout << "\n Digite uma opção(lembrando que é de 1 a 32) : ";
	 cin >> opcao;
	cout << "===============================================================\n\n";
	
    switch (opcao) {
		case 1: for (x=1; x<10; x++) { 
					if (x == 1 || x == 8 || x == 9) 
					  if (valor[x] == 2) soma++; }
				num = 0;
		 		break;
		
		case 2: for (x=0; x<11; x++) { 
					if (x == 0 || x == 2 || x == 8 || x == 9 || x == 10) 
					  if (valor[x] == 2) soma++; } 
				num = 1;
				break;
		
		case 3: for (x=1; x<12; x++) { 
					if (x == 1 || x == 3 || x == 9 || x == 10 || x == 11)
					  if (valor[x] == 2) soma++; }
				num = 2; 
				break;
					
		case 4: for (x=2; x<13; x++) { 
					if (x == 2 || x == 4 || x == 10 || x == 11 || x == 12)
					  if (valor[x] == 2) soma++; }
				num = 3;
				break;
					
		case 5: for (x=3; x<14; x++) {
					if (x == 3 || x == 5 || x == 11 || x == 12 || x == 13)
					  if (valor[x] == 2) soma++; }
				num = 4;
				break;
				  
		case 6: for (x=4; x<15; x++) {
					if (x == 4 || x == 6 || x == 12 || x == 13 || x == 14)
					  if (valor[x] == 2) soma++; } 
				num = 5;
				break;
				  
		case 7: for (x=5; x<16; x++) {
					if (x == 5 || x == 7 || x == 13 || x == 14 || x == 15)
					  if (valor[x] == 2) soma++; }
				num = 6;
				break;
				  
		case 8: for (x=6; x<16; x++) {
					if (x == 6 || x == 14 || x == 15)
					  if (valor[x] == 2) soma++; }
				num = 7;
				break;
				  
		case 9: for (x=0; x<18; x++) {
					if (x == 0 || x == 1 || x == 9 || x == 16 || x == 17)
					  if (valor[x] == 2) soma++; }
				num = 8;
				break;
					
		case 10: for (x=0; x<19; x++) {
					if (x == 0 || x == 1 || x == 2 || x == 8 || x == 10 || x == 16 || x == 17 || x == 18)
					  if (valor[x] == 2) soma++; }  
				 num = 9;
				 break;
				  
		case 11: for (x=1; x<20; x++) {
					if (x == 1 || x == 2 || x == 3 || x == 9 || x == 11 || x == 17 || x == 18 || x == 19)
					  if (valor[x] == 2) soma++; } 
				 num = 10;
				 break;
					
		case 12: for (x=2; x<21; x++) {
					if (x == 2 || x == 3 || x == 4 || x == 10 || x == 12 || x == 18 || x == 19 || x == 20)
					  if (valor[x] == 2) soma++; }
				 num = 11;
				 break;
				
		case 13: for (x=3; x<22; x++) {
					if (x == 3 || x == 4 || x == 5 || x == 11 || x == 13 || x == 19 || x == 20 || x == 21)
					  if (valor[x] == 2) soma++; }
				  num = 12;
				  break;
		
		case 14: for (x=4; x<23; x++) {
					if (x == 4 || x == 5 || x == 6 || x == 12 || x == 14 || x == 20 || x == 21 || x == 22)
					  if (valor[x] == 2) soma++; }
				  num = 13;
				  break;
				  
		case 15: for (x=5; x<24; x++) {
					if (x == 5 || x == 6 || x == 7 || x == 13 || x == 15 || x == 21 || x == 22 || x == 23)
					  if (valor[x] == 2) soma++; }
				 num = 14;
				 break;
				 
		case 16: for (x=6; x<24; x++) {
					if (x == 6 || x == 7 || x == 14 || x == 22 || x == 23)
					  if (valor[x] == 2) soma++; }
				  num = 15;
				  break;
				  
		case 17: for (x=8; x<26; x++) {
					if (x == 8 || x == 9 || x == 17 || x == 24 || x == 25)
					  if (valor[x] == 2) soma++; }
				 num = 16;
				 break;
				 
		case 18: for (x=8; x<27; x++) {
					if (x == 8 || x == 9 || x == 10 || x == 16 || x == 18 || x == 24 || x == 25 || x == 26)
				      if (valor[x] == 2) soma++; }
				  num = 17;
				  break;
				
		case 19: for (x=9; x<28; x++) {
					if (x == 9 || x == 10 || x == 11 || x == 17 || x == 19 || x == 25 || x == 26 || x == 27)
					  if (valor[x] == 2) soma++; } 
				  num = 18;
				  break;
				  
		case 20: for (x=10; x<29; x++) {
					if (x == 10 || x == 11 || x == 12 || x == 18 || x == 20 || x == 26 || x == 27 || x ==28)
					  if (valor[x] == 2) soma++; }
				  num = 19;
				  break;
				  
		case 21: for (x=11; x<30; x++) {
					if (x == 11 || x == 12 || x == 13 || x == 19 || x == 21 || x == 27 || x == 28 || x == 29)
					  if (valor[x] == 2) soma++; }
				  num = 20;
				  break;
				 
		case 22: for (x=12; x<31; x++) {
					if (x == 12 || x == 13 || x == 14 || x == 20 || x == 22 || x == 28 || x == 29 || x == 30)
					  if (valor[x] == 2) soma++; }
				  num = 21;
				  break;
				  
		case 23: for (x=13; x<32; x++) {
					if (x == 13 || x == 14 || x == 15 || x == 21 || x == 23 || x == 29 || x == 30 || x == 31)
					  if (valor[x] == 2) soma++; }
				  num = 22;
				  break;
				  
		case 24: for (x=14; x<32; x++) {
					if (x == 14 || x == 15 || x == 22 || x == 30 || x == 31)
					  if (valor[x] == 2) soma++; }
				  num = 23;
				  break;
		
		case 25: for (x=16; x<26; x++) {
					if (x == 16 || x == 17 || x == 25)
					  if (valor[x] == 2) soma++; }
				  num = 24;
				  break;
				  
		case 26: for (x=16; x<27; x++) {
					if (x == 16 || x == 17 || x == 18 || x == 24 || x == 26)
					  if (valor[x] == 2) soma++; }
				  num = 25;
				  break;
				  
		case 27: for (x=17; x<28; x++) {
					if (x == 17 || x == 18 || x == 19 || x == 25 || x == 27)
					  if (valor[x] == 2) soma++; }
				  num = 26;
				  break;
				 
		case 28: for (x=18; x<29; x++) {
					if (x == 18 || x == 19 || x == 20 || x == 26 || x == 28)
					  if (valor[x] == 2) soma++; }
				  num = 27;
				  break;
				  
		case 29: for (x=19; x<30; x++) {
					if (x == 19 || x == 20 || x == 21 || x == 27 || x == 29)
					  if (valor[x] == 2) soma++; }
				  num = 28;
				  break;
				  
		case 30: for (x=20; x<31; x++) {
					if (x == 20 || x == 21 || x == 22 || x == 28 || x == 30)
					  if (valor[x] == 2) soma++; }
				  num = 29;
				  break;
		
		case 31: for (x=21; x<32; x++) {
					if (x == 21 || x == 22 || x == 23 || x == 29 || x == 31)
					  if (valor[x] == 2) soma++; }
				  num = 30;
				  break;
				  
		case 32: for (x=22; x<32; x++) {
					if (x == 22 || x == 23 || x == 30)
					  if (valor[x] == 2) soma++; }
				  num = 31;
				  break;
		
		default: cout << "\n===============================================================\n";
				 cout << "\nPosição inválida ! escolha outra !\n";
				 cout << "===============================================================\n"; 
				 goto errado;
				 break;		  
				
		} // fecha o switch
	
	
	if (valor[num]==2) { // Se for igual a 2 essa posicao tem uma bomba ! 
		cout << "\n===============================================================\n";
		cout << "\n                      Você Perdeu ! RsRsRs\n";
		cout << "===============================================================\n\n";
		for (x=0; x<32; x++) if (valor[x]==2) exibir[x]= '*'; sair = 1; } //exibe todas as bombas
	else {
		if (ja_teclou[num] == 0) { ja_teclou[num] = 1; 
			if (soma == 1) exibir[num] = '1';
			else if (soma == 2) exibir[num] = '2';
			else if (soma == 3) exibir[num] = '3'; 
			else if (soma == 4) exibir[num] = '4';
			else if (soma == 5) exibir[num] = '5';
			else if (soma == 6) exibir[num] = '6';
			else if (soma == 7) exibir[num] = '7';
			else if (soma == 8) exibir[num] = '8';
			else exibir[num] = '0';
						}	
		else {
		  cout << "\n===============================================================\n";
		  cout << "\nVocê já digitou essa posição ! escolha outra !\n";
		  cout << "===============================================================\n"; goto errado;}
					}		
    
    cout << "                  XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n";
	cout << "                  X                                  X\n";
    cout << "                  X     "<<exibir[0]<<"  "<<exibir[1]<<"  "<<exibir[2]<<"  "<<exibir[3]<<"  "<<exibir[4]<<"  "<<exibir[5]<<"   "<<exibir[6]<<"   "<<exibir[7]<<"     X\n";
    cout << "                  X     "<<exibir[8]<<"  "<<exibir[9]<<"  "<<exibir[10]<<"  "<<exibir[11]<<"  "<<exibir[12]<<"  "<<exibir[13]<<"   "<<exibir[14]<<"   "<<exibir[15]<<"     X\n";
    cout << "                  X     "<<exibir[16]<<"  "<<exibir[17]<<"  "<<exibir[18]<<"  "<<exibir[19]<<"  "<<exibir[20]<<"  "<<exibir[21]<<"   "<<exibir[22]<<"   "<<exibir[23]<<"     X\n";
    cout << "                  X     "<<exibir[24]<<"  "<<exibir[25]<<"  "<<exibir[26]<<"  "<<exibir[27]<<"  "<<exibir[28]<<"  "<<exibir[29]<<"   "<<exibir[30]<<"   "<<exibir[31]<<"     X\n";
    cout << "                  X                                  X\n";
    cout << "                  XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n\n"; 
		
		if (i == 19 && sair == 0) venceu = 1;
		else if (sair == 1) break;
		soma = 0;		               
	} // fecha o for que controla o jogo
 }

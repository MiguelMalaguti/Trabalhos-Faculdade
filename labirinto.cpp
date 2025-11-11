#include <iostream>



using namespace std;



int labirinto[5][5] = {

    {0,1,0,0,3},

    {0,1,1,0,1},

    {0,0,0,0,0},

    {1,0,1,1,0},

    {2,0,0,0,0}

};



int linhaJogador = 4;
int colunaJogador = 0;
int jogador = labirinto[linhaJogador][colunaJogador];
int novaLinha,novaColuna;

char comando;



void exibirLabirinto(int labirinto[5][5]){

    for(int i = 0; i < 5; i++){

        for(int j = 0; j < 5; j++){

            if(labirinto[i][j] == 0){

                cout << " . ";

            }

            if(labirinto[i][j] == 1){

                cout << " # ";

            }

            if(labirinto[i][j] == 2){

                cout << " J ";

            }

            if(labirinto[i][j] == 3){

                cout <<  " S ";

            }
        }
        cout << endl;
    }
}


bool moverJogador(int labirinto[5][5],int jogador){

    if(comando == 'W'|| comando == 'w'){

       novaLinha = linhaJogador-1;
       novaColuna = colunaJogador;

        if(novaLinha >= 0 && novaLinha < 5 && labirinto[novaLinha][novaColuna] != 1){
            labirinto[linhaJogador][colunaJogador] = 0;
	        if(labirinto[novaLinha][novaColuna] == 3){
                cout << "Voce venceu!";
                return true;
            }else{
                labirinto[novaLinha][novaColuna] = 2;
                linhaJogador = novaLinha;
                return false;   
            }
       }else if(!(novaLinha >= 0 && novaLinha < 5 && labirinto[novaLinha][novaColuna] != 1)){
        cout <<" vc bateu na parede" << endl;
        return false;
       }
    }
    if(comando == 'S' || comando=='s'){

       novaLinha = linhaJogador+1;
       novaColuna = colunaJogador;

       if(novaLinha >= 0 && novaLinha < 5 && labirinto[novaLinha][novaColuna] != 1){
	        labirinto[linhaJogador][colunaJogador] = 0;
            if(labirinto[novaLinha][novaColuna] == 3){
                cout << "Voce venceu!";
                return true;
            }else{
                labirinto[novaLinha][novaColuna] = 2;
                linhaJogador = novaLinha;
                return false;   
            } 	
        }else if(!(novaLinha >= 0 && novaLinha < 5 && labirinto[novaLinha][novaColuna] != 1)){
        cout <<" vc bateu na parede" << endl;
        return false;
       }	
    }
    if(comando == 'A'||comando=='a'){

       novaLinha = linhaJogador;
       novaColuna = colunaJogador - 1;

       if(novaColuna >= 0 && novaColuna < 5 && labirinto[novaLinha][novaColuna] != 1){
            labirinto[linhaJogador][colunaJogador] = 0;
            if(labirinto[novaLinha][novaColuna] == 3){
                cout << "Voce venceu!";
                return true;
            }else{
                labirinto[novaLinha][novaColuna] = 2;
                colunaJogador = novaColuna;
                return false;   
            } 	
        }else if(!(novaLinha >= 0 && novaLinha < 5 && labirinto[novaLinha][novaColuna] != 1)){
        cout <<" vc bateu na parede"<< endl;
        return false;
       }	
    }
    if(comando == 'D'||comando=='d'){

       novaLinha = linhaJogador;
       novaColuna = colunaJogador + 1;

       if(novaColuna >= 0 && novaColuna < 5 && labirinto[novaLinha][novaColuna] != 1){
	        labirinto[linhaJogador][colunaJogador] = 0;
            if(labirinto[novaLinha][novaColuna] == 3){
                cout << "Voce venceu!";
                return true;
            }else{
                labirinto[novaLinha][novaColuna] = 2;
                colunaJogador = novaColuna;
                return false;   
        } 	
        }else if(!(novaLinha >= 0 && novaLinha < 5 && labirinto[novaLinha][novaColuna] != 1)){
        cout <<" vc bateu na parede" << endl;
        return false;
       }
}
}

int main(){

    
    while(true){


        exibirLabirinto(labirinto);



        cout << "Digite o comando(W = cima, S = baixo, A = esquerda, D = direita): ";

        cin >> comando;

     

        if(moverJogador(labirinto,jogador)){
            break;
        }


    }



    return 0;



}
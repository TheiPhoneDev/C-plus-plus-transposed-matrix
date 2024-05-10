#include <iostream>

using namespace std;

const int righeMax=3;
const int colonneMax=3;

//prototipi
void caricaMatrice(int matrix[righeMax][colonneMax]);
void stampa(int matrix[righeMax][colonneMax]);
void scambiaMatrice(int matrix[righeMax][colonneMax]);
int Menu();


int main() {
  int scelta;
  int matrix[righeMax][colonneMax];

  do {
    scelta=Menu();
    switch(scelta) {
      case 1:
        caricaMatrice(matrix);
        stampa(matrix);
      break;
      case 2:
        scambiaMatrice(matrix);
      break;
      case 0:
        cout<<"Esci"<<endl;
      break;
      default:
        cout<<"Attenzione, scelta sbagliata!"<<endl;
      break;
    }
  }while(scelta!=0);
 
}

int Menu() {
  int scegli;
  cout<<"-----------------MENU-----------------"<<endl;
  cout<<"1-Carica matrice"<<endl;
  cout<<"2-Scambia matrice"<<endl;
  cout<<"0-Fine"<<endl;
  cout<<"Scegli un operazione: "<<endl;
  cin>>scegli;

  return scegli;
}


void caricaMatrice(int matrix[righeMax][colonneMax]) {

  for(int i=0; i<righeMax; i++) {
    for(int j=0; j<colonneMax; j++) {
      cout<<"Inserisci il valore in posizione "<<i<<","<<j<<" : ";
      cin>>matrix[i][j];
    }
  }
  
}


void stampa(int matrix[righeMax][colonneMax]) {
  for(int i=0; i<righeMax; i++) {
    for(int j=0; j<colonneMax; j++) {
      cout<<matrix[i][j]<<"\t";
    }
    cout<<endl;
  }
}


void scambiaMatrice(int matrix[righeMax][colonneMax]) {

  for(int i=0; i<righeMax; i++) {
    for(int j=0; j<colonneMax; j++) {
      cout<<matrix[j][i]<<"\t";
    }
    cout<<endl;
  }
  
}

#include <iostream>

using namespace std;

int main(){
        int teste = 10000;
        //Setagem da variavel
        cout << endl;
        //O codigo acima quebra uma linha 
        cout << "teste de manipulacao de variavel: " << teste << endl;
        //O endl funciona como o \n, As proximas linhas não serão impressas até o endl ser executado
        cout << endl;
        cout << "Memoria da Variavel teste: " << sizeof(teste) << " Bytes" << endl;
        //sizeof te entrega o valor de bytes que uma variavel esta ocupando     
        cout << endl;
        system("pause");
        //Linha a cima pausa o terminal antes de encerrar o programa
}
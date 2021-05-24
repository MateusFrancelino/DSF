// sistemaGerenciador.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include <iostream>
#include <string>
using namespace std;


struct Operation
{
    string nome;
    string moedaorigem;
    string moedadestino;
    int data;
    float valorOriginal;
    float valorConvertido;
    float taxa_Cobrada;
};

string listaNomes(int pos) {
   
    string nome[5]{ "joao","bruno","mateus","carlos","ana" };
    return nome[pos];
}
string moedaOrigem(int pos) {
    string moedaorigem[5]{ "dolar","real","euro","yen","libra" };
    return moedaorigem[pos];
}
string moedaDestino(int pos) {
    string moedadestino[5]{ "libra" ,"yen" ,"euro" ,"real" ,"dolar" };
    return moedadestino[pos];
}

int listaDatas(int pos) {
    int datas[5]{ 2014,2014,2021,2016,2013 };
    return datas[pos];
}

float valorOriginal(int pos) {
    float valor[5]{ 29.99,39.99,452.12,9904.99,12.99 };
    return valor[pos];

}

float valorConvertido(int pos) {
    float valor[5]{ 99.52,12.43,8134.41,513.54,9831.13 };
    return valor[pos];
}

int menu() {
    int escolha;
    cout << "escolha o tipo de filtro" << "1 por intervalo de data" << endl<<"2 por cliente"<<endl;
    cin >> escolha;
    return escolha ;


}

int main()
{
    const int numerocliente = 5;
    Operation operation[numerocliente];
    int escolha;
    for (int i = 0; i < numerocliente; i++) {
        operation[i].nome = listaNomes(i);
        operation[i].moedaorigem = moedaOrigem(i);
        operation[i].moedadestino = moedaDestino(i);
        operation[i].data=listaDatas(i);
        operation[i].valorOriginal = valorOriginal(i);
        operation[i].valorConvertido = 2.99;
        operation[i].taxa_Cobrada = 0.10;
    }

    escolha = menu();



}
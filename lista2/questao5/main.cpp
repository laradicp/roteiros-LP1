#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    ifstream in;
    in.open("teste.txt", ios::in);

    if(!in.is_open())
    {
        cout << "Erro ao abrir o arquivo teste.txt." << endl;
        in.close();
        return 0;
    }

    ofstream out;
    out.open("teste_bkp.txt", ios::out);

    if(!out.is_open())
    {
        cout << "Erro ao abrir o arquivo teste_bkp.txt." << endl;
        out.close();
        return 0;
    }

    string line;
    while(!in.eof())
    {
        getline(in, line);
        out << line << endl;
    }

    in.close();
    out.close();

    cout << "Dados copiados com sucesso." << endl;

    return 0;
}

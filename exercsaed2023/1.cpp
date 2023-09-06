#include <iostream>
#include <string>
using namespace std;

class AgendaTelefonica {       
  private:             
    string nome;        
    string telefone;  
    
  public:  
    void imprimirDados()
    {
      cout << "###### Contato ######" << endl;
      cout << "Nome: " << nome << endl; 
      cout << "Telefone: " << telefone; 
    }

    void setNome(string n)
    {
      nome = n;
    }

    void setTelefone(string tel)
    {
      telefone = tel;
    }
};

int main() {
  AgendaTelefonica novoContato;
  novoContato.setNome("Lucas Hipolito");
  novoContato.setTelefone("61982014266");
  novoContato.imprimirDados();
  return 0;
}


#include <iostream>
#include <string>
using namespace std;

class Alunos {       

private:          
    string nome;        
    string matricula;  
    string curso;
    
public:
    void imprimirDados()
    {
      cout << endl;
      cout << "###### Aluno ######" << endl;
      cout << "Nome: " << nome << endl; 
      cout << "Matricula: " << matricula << endl; 
      cout << "Curso: " << curso;
      cout << endl;
    }

    void setNome()
    {
      cout<<"Nome do aluno:" << endl;
      cin>>nome;
    }

    void setMatricula()
    {
      cout<<"Matricula do aluno:" << endl;
      cin>>matricula;
    }
    
    void setCurso()
    {
      cout<<"Curso do aluno:" << endl;
      cin>>curso;
    }
};

int main() {
	Alunos novoAluno;
	novoAluno.setNome();
	novoAluno.setMatricula();
	novoAluno.setCurso();
	novoAluno.imprimirDados();
	return 0;
}


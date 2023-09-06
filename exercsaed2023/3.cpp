#include <iostream>
#include <string>
using namespace std;

class Alunos {       

private:          
    string nome;        
    int matricula = 0;  
    string curso;
	int notas = 0;
	int faltas = 0;
    
public:
    void imprimirDados()
    {
      cout << endl;
      cout << "###### Aluno ######" << endl;
      cout << "Nome: " << nome << endl; 
      cout << "Matricula: " << matricula << endl; 
      cout << "Curso: " << curso << endl;
      cout << "Notas do aluno: " << notas << endl;
      cout << "Quantidades de faltas do aluno: " << faltas << endl;
      cout << endl;
    }

    void setNome()
    {
      cout << "Nome do aluno:" << endl;
      cin >> nome;
    }

    void setMatricula()
    {
      cout << "Matricula do aluno:" << endl;
      cin >> matricula;
    }
    
    void setCurso()
    {
      cout << "Curso do aluno:" << endl;
      cin >> curso;
    }
    
    void setNotaEFaltas()
    {
      	cout << "Notas do aluno:" << endl;
		cin >> notas;
      	cout << "Quantidades de faltas do aluno:" << endl;
		cin >> faltas;
	}
};

int main() {
	
	Alunos novoAluno;
	novoAluno.setNome();
	novoAluno.setMatricula();
	novoAluno.setCurso();
	novoAluno.setNotaEFaltas();
	novoAluno.imprimirDados();
	return 0;

}


package ex2_alunos_2;

public class Aluno {
    private String nome;
    private int matricula;
    private int ano;
    private Curso curso;

    public Aluno(String nome) {
        this.nome = nome;
    }

    public void matricular(int matricula, Curso curso, int ano) {
        this.matricula = matricula;
        this.ano = ano;
        this.curso = curso;
    }

    @Override
    public String toString() {
        return "Aluno : " + nome + " - matricula : " + matricula + " - Curso : " + curso + " - " + ano;
    }

    public void setCurso(Curso curso) {
        this.curso = curso;
    }

    public void setAno(int ano) {
        this.ano = ano;
    }
}


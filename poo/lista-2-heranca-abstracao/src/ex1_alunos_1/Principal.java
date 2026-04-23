package ex1_alunos_1;

public class Principal {
    public static void main(String[] args) {
        Aluno aluno = new Aluno("Maria");

        aluno.matricular(2026001, "Sistemas de Informacao", 2026);
        System.out.println(aluno.toString());

        aluno.setCurso("Ciencia da Computacao");
        aluno.setAno(2027);
        System.out.println(aluno.toString());
    }
}


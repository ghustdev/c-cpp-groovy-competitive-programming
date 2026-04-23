package ex2_alunos_2;

public class Principal {
    public static void main(String[] args) {
        Aluno aluno = new Aluno("Maria");

        Curso si = new Curso("SI", "Sistemas de Informacao");
        aluno.matricular(2026001, si, 2026);
        System.out.println(aluno.toString());

        Curso cc = new Curso("CC", "Ciencia da Computacao");
        aluno.setCurso(cc);
        aluno.setAno(2027);
        System.out.println(aluno.toString());
    }
}


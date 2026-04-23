package exe6_cds;

public class Filme extends Item {
    private String diretor;

    public Filme(String titulo, int ano, int tempoDuracao, String comentarios, String diretor) {
        super(titulo, ano, tempoDuracao, comentarios);
        this.diretor = diretor;
    }

    public String getDiretor() {
        return diretor;
    }

    public void setDiretor(String diretor) {
        this.diretor = diretor;
    }

    @Override
    public String dadosEspecificos() {
        return "diretor='" + diretor + '\'';
    }
}


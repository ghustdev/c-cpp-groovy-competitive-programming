package exe6_cds;

public class Jogo extends Item {
    private int numeroJogadores;
    private String plataforma;

    public Jogo(String titulo, int ano, int tempoDuracao, String comentarios, int numeroJogadores, String plataforma) {
        super(titulo, ano, tempoDuracao, comentarios);
        this.numeroJogadores = numeroJogadores;
        this.plataforma = plataforma;
    }

    public int getNumeroJogadores() {
        return numeroJogadores;
    }

    public void setNumeroJogadores(int numeroJogadores) {
        this.numeroJogadores = numeroJogadores;
    }

    public String getPlataforma() {
        return plataforma;
    }

    public void setPlataforma(String plataforma) {
        this.plataforma = plataforma;
    }

    @Override
    public String dadosEspecificos() {
        return "numeroJogadores=" + numeroJogadores +
                ", plataforma='" + plataforma + '\'';
    }
}


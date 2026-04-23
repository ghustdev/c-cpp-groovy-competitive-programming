package exe5_filmes;

public class Filme {
    private static int totalFilmesCriados = 0;

    private int codigo;
    private String nome;
    private String genero;
    private int ano;
    private String autorPrincipal;

    public Filme(int codigo, String nome) {
        this.codigo = codigo;
        this.nome = nome;
        totalFilmesCriados++;
    }

    public static int getTotalFilmesCriados() {
        return totalFilmesCriados;
    }

    public int getCodigo() {
        return codigo;
    }

    public void setCodigo(int codigo) {
        this.codigo = codigo;
    }

    public String getNome() {
        return nome;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }

    public String getGenero() {
        return genero;
    }

    public void setGenero(String genero) {
        this.genero = genero;
    }

    public int getAno() {
        return ano;
    }

    public void setAno(int ano) {
        this.ano = ano;
    }

    public String getAutorPrincipal() {
        return autorPrincipal;
    }

    public void setAutorPrincipal(String autorPrincipal) {
        this.autorPrincipal = autorPrincipal;
    }

    @Override
    public String toString() {
        return "Filme{" +
                "codigo=" + codigo +
                ", nome='" + nome + '\'' +
                ", genero='" + genero + '\'' +
                ", ano=" + ano +
                ", autorPrincipal='" + autorPrincipal + '\'' +
                '}';
    }
}


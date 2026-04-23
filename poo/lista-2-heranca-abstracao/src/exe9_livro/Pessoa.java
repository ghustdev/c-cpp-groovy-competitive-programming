package exe9_livro;

public class Pessoa {
    private String nome;
    private String nomeIntermediario;
    private String sobrenome;

    public Pessoa(String nome, String nomeIntermediario, String sobrenome) {
        this.nome = nome;
        this.nomeIntermediario = nomeIntermediario;
        this.sobrenome = sobrenome;
    }

    public String getNome() {
        return nome;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }

    public String getNomeIntermediario() {
        return nomeIntermediario;
    }

    public void setNomeIntermediario(String nomeIntermediario) {
        this.nomeIntermediario = nomeIntermediario;
    }

    public String getSobrenome() {
        return sobrenome;
    }

    public void setSobrenome(String sobrenome) {
        this.sobrenome = sobrenome;
    }

    // Formato: SOBRENOME, A. C.
    public String getNomeReferencia() {
        String s = sobrenome == null ? "" : sobrenome.trim().toUpperCase();
        char i1 = primeiraLetra(nome);
        char i2 = primeiraLetra(nomeIntermediario);

        if (i1 == 0 && i2 == 0) {
            return s;
        }
        if (i2 == 0) {
            return s + ", " + i1 + ".";
        }
        return s + ", " + i1 + ". " + i2 + ".";
    }

    private static char primeiraLetra(String texto) {
        if (texto == null) {
            return 0;
        }
        String t = texto.trim();
        if (t.isEmpty()) {
            return 0;
        }
        return Character.toUpperCase(t.charAt(0));
    }
}


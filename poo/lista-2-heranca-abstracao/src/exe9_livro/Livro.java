package exe9_livro;

import java.util.Collections;
import java.util.LinkedHashMap;
import java.util.Map;

public class Livro {
    private static int totalLivrosCriados = 0;
    private static final Map<String, Integer> totalPorGenero = new LinkedHashMap<>();

    private String titulo;
    private int codigo;
    private Pessoa autor;
    private String editora;
    private String edicao;
    private int ano;
    private String local;
    private String genero;

    public Livro(int codigo, String titulo) {
        this.codigo = codigo;
        this.titulo = titulo;
        totalLivrosCriados++;
    }

    public static int getTotalLivrosCriados() {
        return totalLivrosCriados;
    }

    public static Map<String, Integer> getTotalPorGenero() {
        return Collections.unmodifiableMap(totalPorGenero);
    }

    public String getTitulo() {
        return titulo;
    }

    public void setTitulo(String titulo) {
        this.titulo = titulo;
    }

    public int getCodigo() {
        return codigo;
    }

    public void setCodigo(int codigo) {
        this.codigo = codigo;
    }

    public Pessoa getAutor() {
        return autor;
    }

    public void setAutor(Pessoa autor) {
        this.autor = autor;
    }

    public String getEditora() {
        return editora;
    }

    public void setEditora(String editora) {
        this.editora = editora;
    }

    public String getEdicao() {
        return edicao;
    }

    public void setEdicao(String edicao) {
        this.edicao = edicao;
    }

    public int getAno() {
        return ano;
    }

    public void setAno(int ano) {
        this.ano = ano;
    }

    public String getLocal() {
        return local;
    }

    public void setLocal(String local) {
        this.local = local;
    }

    public String getGenero() {
        return genero;
    }

    public void setGenero(String genero) {
        String antigo = normalizarGenero(this.genero);
        String novo = normalizarGenero(genero);

        if (antigo.equals(novo)) {
            this.genero = genero;
            return;
        }

        // Atualiza o total por genero usando membro estatico
        if (!antigo.isEmpty()) {
            Integer atual = totalPorGenero.get(antigo);
            if (atual != null) {
                int v = atual - 1;
                if (v <= 0) {
                    totalPorGenero.remove(antigo);
                } else {
                    totalPorGenero.put(antigo, v);
                }
            }
        }

        this.genero = genero;
        if (!novo.isEmpty()) {
            totalPorGenero.put(novo, totalPorGenero.getOrDefault(novo, 0) + 1);
        }
    }

    public String getReferencia() {
        String autorRef = autor == null ? "" : autor.getNomeReferencia();
        String t = nvl(titulo);
        String e = nvl(edicao);
        String l = nvl(local);
        String ed = nvl(editora);
        String a = ano <= 0 ? "" : String.valueOf(ano);

        // Ex: DEITEL, P.J. Java Como Programar. 8a. edicao. Sao Paulo: Pearson, 2010.
        StringBuilder sb = new StringBuilder();
        if (!autorRef.isEmpty()) {
            sb.append(autorRef);
            if (!autorRef.endsWith(".")) {
                sb.append('.');
            }
            sb.append(' ');
        }
        if (!t.isEmpty()) {
            sb.append(t).append(". ");
        }
        if (!e.isEmpty()) {
            sb.append(e).append(". edicao. ");
        }
        if (!l.isEmpty() || !ed.isEmpty() || !a.isEmpty()) {
            sb.append(l);
            if (!l.isEmpty()) {
                sb.append(": ");
            }
            sb.append(ed);
            if (!ed.isEmpty() && !a.isEmpty()) {
                sb.append(", ");
            }
            sb.append(a);
            sb.append(".");
        }
        return sb.toString().trim();
    }

    private static String nvl(String s) {
        return s == null ? "" : s.trim();
    }

    private static String normalizarGenero(String g) {
        return g == null ? "" : g.trim();
    }
}

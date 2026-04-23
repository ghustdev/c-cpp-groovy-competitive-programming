package exe9_livro;

import java.util.ArrayList;
import java.util.List;
import java.util.Map;
import java.util.Scanner;

public class Principal {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        List<Livro> livros = new ArrayList<>();

        while (true) {
            System.out.print("Codigo do livro (0 para sair): ");
            int codigo = lerInt(sc);
            if (codigo == 0) {
                break;
            }

            System.out.print("Titulo: ");
            String titulo = sc.nextLine();

            Livro livro = new Livro(codigo, titulo);

            System.out.print("Genero: ");
            livro.setGenero(sc.nextLine());

            System.out.println("Autor (Pessoa):");
            System.out.print("Nome: ");
            String nome = sc.nextLine();
            System.out.print("Nome intermediario: ");
            String nomeInter = sc.nextLine();
            System.out.print("Sobrenome: ");
            String sobrenome = sc.nextLine();
            livro.setAutor(new Pessoa(nome, nomeInter, sobrenome));

            System.out.print("Editora: ");
            livro.setEditora(sc.nextLine());

            System.out.print("Edicao (ex: 8a): ");
            livro.setEdicao(sc.nextLine());

            System.out.print("Ano: ");
            livro.setAno(lerInt(sc));

            System.out.print("Local: ");
            livro.setLocal(sc.nextLine());

            livros.add(livro);
            System.out.println();
        }

        for (Livro l : livros) {
            System.out.println("Codigo: " + l.getCodigo());
            System.out.println("Titulo: " + l.getTitulo());
            System.out.println("Genero : " + l.getGenero());
            System.out.println("Referencia : " + l.getReferencia());
            System.out.println();
        }

        System.out.println("Total de livros criados: " + Livro.getTotalLivrosCriados());
        System.out.println("Totais por genero:");
        for (Map.Entry<String, Integer> e : Livro.getTotalPorGenero().entrySet()) {
            System.out.println(e.getKey() + ": " + e.getValue());
        }

        sc.close();
    }

    private static int lerInt(Scanner sc) {
        while (true) {
            String linha = sc.nextLine().trim();
            try {
                return Integer.parseInt(linha);
            } catch (NumberFormatException e) {
                System.out.print("Valor invalido. Digite um inteiro: ");
            }
        }
    }
}


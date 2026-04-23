package exe5_filmes;

import java.util.Scanner;

public class Principal {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        while (true) {
            System.out.print("Codigo do filme (0 para sair): ");
            int codigo = lerInt(sc);
            if (codigo == 0) {
                break;
            }

            System.out.print("Nome: ");
            String nome = sc.nextLine();

            Filme filme = new Filme(codigo, nome);

            System.out.print("Genero: ");
            filme.setGenero(sc.nextLine());

            System.out.print("Ano: ");
            filme.setAno(lerInt(sc));

            System.out.print("Autor principal: ");
            filme.setAutorPrincipal(sc.nextLine());

            System.out.println("Criado: " + filme);
            System.out.println();
        }

        System.out.println("Total de filmes criados: " + Filme.getTotalFilmesCriados());
        sc.close();
    }

    private static int lerInt(Scanner sc) {
        while (true) {
            String linha = sc.nextLine().trim();
            try {
                return Integer.parseInt(linha);
            } catch (NumberFormatException e) {
                System.out.print("Valor invalido. Digite um numero inteiro: ");
            }
        }
    }
}


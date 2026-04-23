package exe10_moradores;

import java.util.Scanner;

public class CadastroSimples {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        while (true) {
            Morador morador = lerMorador(sc);
            System.out.println();
            System.out.println("Morador cadastrado:");
            System.out.println(morador);
            System.out.println();

            if (!desejaContinuar(sc)) {
                break;
            }
        }

        sc.close();
    }

    private static Morador lerMorador(Scanner sc) {
        System.out.print("Nome: ");
        String nome = sc.nextLine();

        System.out.print("CPF: ");
        String cpf = sc.nextLine();

        System.out.print("Celular: ");
        String celular = sc.nextLine();

        System.out.print("Data de nascimento: ");
        String dataNascimento = sc.nextLine();

        System.out.print("Sexo: ");
        String sexo = sc.nextLine();

        System.out.print("Bloco: ");
        String bloco = sc.nextLine();

        System.out.print("Apartamento (numero): ");
        int apto = lerInt(sc);

        System.out.print("Codigo de acesso: ");
        String codigoAcesso = sc.nextLine();

        return new Morador(nome, cpf, celular, dataNascimento, sexo, bloco, apto, codigoAcesso);
    }

    private static boolean desejaContinuar(Scanner sc) {
        while (true) {
            System.out.print("Deseja cadastrar outro morador? (s/n): ");
            String resp = sc.nextLine().trim().toLowerCase();
            if (resp.equals("s") || resp.equals("sim")) {
                return true;
            }
            if (resp.equals("n") || resp.equals("nao") || resp.equals("não")) {
                return false;
            }
            System.out.println("Resposta invalida.");
        }
    }

    private static int lerInt(Scanner sc) {
        while (true) {
            String s = sc.nextLine().trim();
            try {
                return Integer.parseInt(s);
            } catch (NumberFormatException e) {
                System.out.print("Valor invalido. Digite um inteiro: ");
            }
        }
    }
}


package exe7_funcionarios;

import java.util.Locale;
import java.util.Scanner;

public class CadastroEmpresa {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        sc.useLocale(Locale.US);

        System.out.print("CNPJ: ");
        String cnpj = sc.nextLine().trim();
        System.out.print("Nome da empresa: ");
        String nome = sc.nextLine().trim();

        Empresa empresa = new Empresa(cnpj, nome);

        while (true) {
            System.out.println();
            System.out.println("1 - Cadastrar Funcionario");
            System.out.println("2 - Cadastrar Gerente");
            System.out.println("3 - Cadastrar Vendedor");
            System.out.println("0 - Finalizar");
            System.out.print("Opcao: ");

            int opcao = lerInt(sc);
            if (opcao == 0) {
                break;
            }

            if (opcao < 0 || opcao > 3) {
                System.out.println("Opcao invalida.");
                continue;
            }

            System.out.print("Id: ");
            int id = lerInt(sc);
            System.out.print("Nome: ");
            String nomeFunc = sc.nextLine();
            System.out.print("Salario (mensal): ");
            double salario = lerDouble(sc);
            System.out.print("Bonificacao (mensal): ");
            double bonificacao = lerDouble(sc);

            if (opcao == 1) {
                empresa.adicionarFuncionario(new Funcionario(id, nomeFunc, salario, bonificacao));
            } else if (opcao == 2) {
                System.out.print("Departamento: ");
                String depto = sc.nextLine();
                System.out.print("Senha (numero): ");
                int senha = lerInt(sc);
                empresa.adicionarFuncionario(new Gerente(id, nomeFunc, salario, bonificacao, depto, senha));
            } else {
                System.out.print("Percentual de comissao (ex: 0.05 para 5%): ");
                double pct = lerDouble(sc);
                Vendedor v = new Vendedor(id, nomeFunc, salario, bonificacao, pct);
                for (int mes = 1; mes <= 12; mes++) {
                    System.out.print("Total de vendas do mes " + mes + ": ");
                    v.setVendaMes(mes, lerDouble(sc));
                }
                empresa.adicionarFuncionario(v);
            }
        }

        System.out.println();
        System.out.println(empresa);
        System.out.println("Lista de funcionarios + proventos anuais:");
        for (Funcionario f : empresa.getFuncionarios()) {
            System.out.println(f + " | proventosAnuais=" + f.calcularProventosAnuais());
        }

        System.out.println();
        System.out.println("Aplicando aumento de 10% a todos...");
        for (Funcionario f : empresa.getFuncionarios()) {
            f.aumentarSalario(10);
        }

        System.out.println("Depois do aumento (proventos anuais):");
        for (Funcionario f : empresa.getFuncionarios()) {
            System.out.println(f + " | proventosAnuais=" + f.calcularProventosAnuais());
        }

        sc.close();
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

    private static double lerDouble(Scanner sc) {
        while (true) {
            String s = sc.nextLine().trim().replace(',', '.');
            try {
                return Double.parseDouble(s);
            } catch (NumberFormatException e) {
                System.out.print("Valor invalido. Digite um numero: ");
            }
        }
    }
}


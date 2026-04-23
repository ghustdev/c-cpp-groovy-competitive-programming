package exe7_funcionarios;

import java.util.ArrayList;
import java.util.List;

public class ProgramaListas {
    public static void main(String[] args) {
        List<Funcionario> funcionarios = new ArrayList<>();
        List<Gerente> gerentes = new ArrayList<>();
        List<Vendedor> vendedores = new ArrayList<>();

        funcionarios.add(new Funcionario(1, "Ana", 2500, 200));
        funcionarios.add(new Funcionario(2, "Bruno", 2300, 150));
        funcionarios.add(new Funcionario(3, "Carla", 2800, 100));
        funcionarios.add(new Funcionario(4, "Diego", 2200, 0));
        funcionarios.add(new Funcionario(5, "Erika", 2600, 180));

        gerentes.add(new Gerente(6, "Fernanda", 6000, 800, "Financeiro", 1234));
        gerentes.add(new Gerente(7, "Gustavo", 6500, 900, "TI", 4321));

        Vendedor v1 = new Vendedor(8, "Helena", 2000, 100, 0.05);
        Vendedor v2 = new Vendedor(9, "Igor", 2100, 80, 0.06);
        Vendedor v3 = new Vendedor(10, "Joao", 1900, 120, 0.04);
        Vendedor v4 = new Vendedor(11, "Katia", 2050, 90, 0.05);
        Vendedor v5 = new Vendedor(12, "Lucas", 2150, 70, 0.07);

        preencherVendasExemplo(v1);
        preencherVendasExemplo(v2);
        preencherVendasExemplo(v3);
        preencherVendasExemplo(v4);
        preencherVendasExemplo(v5);

        vendedores.add(v1);
        vendedores.add(v2);
        vendedores.add(v3);
        vendedores.add(v4);
        vendedores.add(v5);

        System.out.println("Antes do aumento:");
        mostrarListas(funcionarios, gerentes, vendedores);

        aplicarAumento(funcionarios, gerentes, vendedores, 10);

        System.out.println();
        System.out.println("Depois do aumento de 10%:");
        mostrarListas(funcionarios, gerentes, vendedores);
    }

    private static void preencherVendasExemplo(Vendedor v) {
        for (int mes = 1; mes <= 12; mes++) {
            v.setVendaMes(mes, 1000 + mes * 100);
        }
    }

    private static void mostrarListas(List<Funcionario> funcionarios, List<Gerente> gerentes, List<Vendedor> vendedores) {
        for (Funcionario f : funcionarios) {
            System.out.println(f + " | proventosAnuais=" + f.calcularProventosAnuais());
        }
        for (Gerente g : gerentes) {
            System.out.println(g + " | proventosAnuais=" + g.calcularProventosAnuais());
        }
        for (Vendedor v : vendedores) {
            System.out.println(v + " | proventosAnuais=" + v.calcularProventosAnuais());
        }
    }

    private static void aplicarAumento(List<Funcionario> funcionarios, List<Gerente> gerentes, List<Vendedor> vendedores, double percentualEx) {
        for (Funcionario f : funcionarios) {
            f.aumentarSalario(percentualEx);
        }
        for (Gerente g : gerentes) {
            g.aumentarSalario(percentualEx);
        }
        for (Vendedor v : vendedores) {
            v.aumentarSalario(percentualEx);
        }
    }
}


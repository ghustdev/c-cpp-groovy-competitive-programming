package exe8_horario;

import java.util.Scanner;

public class Principal {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        Horario h1 = lerHorario(sc, "1");
        Horario h2 = lerHorario(sc, "2");

        System.out.println();
        System.out.println("Horario 1: " + h1.getHorarioCompleto());
        System.out.println("Horario 2: " + h2.getHorarioCompleto());
        System.out.printf("Diferenca em minutos: %.2f%n", Horario.diferencaEmMinutos(h1, h2));

        sc.close();
    }

    private static Horario lerHorario(Scanner sc, String rotulo) {
        while (true) {
            System.out.println();
            System.out.println("Informe o horario " + rotulo + " (hh mm ss):");
            System.out.print("Hora (0-23): ");
            int h = lerInt(sc);
            System.out.print("Minuto (0-59): ");
            int m = lerInt(sc);
            System.out.print("Segundo (0-59): ");
            int s = lerInt(sc);

            if (Horario.validarHora(h) && Horario.validarMinuto(m) && Horario.validarSegundo(s)) {
                return new Horario(h, m, s);
            }

            System.out.println("Horario invalido. Tente novamente.");
        }
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


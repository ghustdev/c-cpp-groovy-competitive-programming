package exe4_robos;

import exe4_robos.RoboAspirador;

public class Principal {
    public static void main(String[] args) {
        RoboAspirador r1 = new RoboAspirador(1, 10);
        RoboAspirador r2 = new RoboAspirador(2, 6);

        System.out.println("Estado inicial:");
        System.out.println(r1);
        System.out.println(r2);
        System.out.println();

        System.out.println("r1: andar(2,3) com robo desligado");
        r1.andar(2, 3);
        System.out.println(r1);
        System.out.println();

        System.out.println("r1: ligar()");
        r1.ligar();
        System.out.println(r1);
        System.out.println();

        System.out.println("r1: andar(2,3)");
        r1.andar(2, 3);
        System.out.println(r1);
        System.out.println();

        System.out.println("r1: aspirar(4)");
        r1.aspirar(4);
        System.out.println(r1);
        System.out.println();

        System.out.println("r1: parar()");
        r1.parar();
        System.out.println(r1);
        System.out.println();

        System.out.println("r1: aspirar(10) (deve atingir limite e desligar)");
        r1.aspirar(10);
        System.out.println(r1);
        System.out.println();

        System.out.println("r1: desligar() (ja esta desligado)");
        r1.desligar();
        System.out.println(r1);
        System.out.println();

        System.out.println("r2: ligar()");
        r2.ligar();
        System.out.println(r2);
        System.out.println();

        System.out.println("r2: andar(-1,5)");
        r2.andar(-1, 5);
        System.out.println(r2);
        System.out.println();

        System.out.println("r2: aspirar(3)");
        r2.aspirar(3);
        System.out.println(r2);
        System.out.println();

        System.out.println("r2: aspirar(3) (deve atingir limite e desligar)");
        r2.aspirar(3);
        System.out.println(r2);
        System.out.println();

        System.out.println("r2: parar() com robo desligado");
        r2.parar();
        System.out.println(r2);
    }
}


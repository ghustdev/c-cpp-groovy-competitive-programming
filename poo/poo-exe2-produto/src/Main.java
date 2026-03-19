import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		Produto produto1, produto2;
		
		System.out.print("Código do produto 1: ");
		int codigo1 = sc.nextInt();
		sc.nextLine();
		System.out.print("Nome do produto 1: ");
		String nome1 = sc.nextLine();
		System.out.print("Quantidade do produto 1: ");
		int quantidade1 = sc.nextInt();
		sc.nextLine();
		System.out.print("Tipo do produto 1: ");
		String tipo1 = sc.nextLine();
		System.out.print("Valor do produto 1: ");
		int valor1 = sc.nextInt();
		sc.nextLine();
		
		produto1 = new Produto(codigo1, nome1, quantidade1, tipo1, valor1);
		
		System.out.print("Código do produto 2: ");
		int codigo2 = sc.nextInt();
		sc.nextLine();
		System.out.print("Nome do produto 2: ");
		String nome2 = sc.nextLine();
		System.out.print("Quantidade do produto 2: ");
		int quantidade2 = sc.nextInt();
		sc.nextLine();
		System.out.print("Tipo do produto 2: ");
		String tipo2 = sc.nextLine();
		System.out.print("Valor do produto 2: ");
		int valor2 = sc.nextInt();
		sc.nextLine();
		
		produto2 = new Produto(codigo2, nome2, quantidade2, tipo2, valor2);
		
		produto1.vender(5);
		produto1.comprar(10, 50);
		produto1.comprar(20);
		System.out.println(produto1.toString());
		produto1.inserir("Computador", 10, "Eletronico", 1000);
		System.out.println(produto1.toString());
		
		produto2.vender(7);
		produto2.comprar(11, 50);
		produto2.comprar(22);
		System.out.println(produto2.toString());
		produto2.inserir("Celular", 10, "Eletronico", 1000);
		System.out.println(produto2.toString());
	}
}

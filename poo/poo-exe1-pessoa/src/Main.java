public class Main {
	public static void main(String[] args) {
		Pessoa gustavo, murilo, felipe;
		Contatos ana, paula;
		
		gustavo = new Pessoa("Gustavo", 20, 'M', "77 998650782");
		murilo = new Pessoa("Murilo", 19, 'M', "62 981723637");
		felipe = new Pessoa("Felipe", 19, 'M', "62 098177832");
		
		System.out.println(gustavo.toString());
		System.out.println(murilo.toString());
		System.out.println(felipe.toString());
		
		ana = new Contatos("Ana", 29, 'F', "62 981723637", "Setor Marista", "111.222.333-33");
		paula = new Contatos("Paula", 19, 'F', "62 817712677", "Vila Itatiaia", "111.222.333-44");
		
		System.out.println(ana.toString());
		System.out.println(paula.toString());
	}
}
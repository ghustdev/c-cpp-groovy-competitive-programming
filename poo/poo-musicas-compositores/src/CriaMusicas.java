
public class CriaMusicas {
	static Compositor comp1 = new Compositor ("Lulu Santos", "Brasileira");
	
	static Compositor comp2 = new Compositor ("Nelson Motta", "Brasileira");
	
	static Compositor comp3 = new Compositor ("Madona", "Americana");
	
	static Musica mu1 = new Musica("Tudo Azul", 1984, "Pop");
	
	public static void main(String[] args) {
		mu1.addCompositor(comp1);
		mu1.addCompositor(comp2);
		mu1.addCompositor(comp3);
		
		Teste teste1 = new Teste();
		teste1.teste = "Teste";
		
		teste1.testar();
		
		mu1.compositoresList().forEach(
			compositor -> System.out.println(compositor.getName() + " - " + compositor.getCountry())
		);
	}
}

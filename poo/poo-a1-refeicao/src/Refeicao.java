public class Refeicao {
	private String nome;
	private double valor;
	
	TabelaNutricional tabelaNutricional;
	
	public Refeicao(String nome, double valor, TabelaNutricional tabelaNutricional) {
		this.nome = nome;
		this.valor = valor;
		this.tabelaNutricional = tabelaNutricional;
	}
	
	public String getNome() {
		return nome;
	}
	
	public void setNome(String nome) {
		this.nome = nome;
	}
	
	public double getValor() {
		return valor;
	}
	
	public void setValor(double valor) {
		this.valor = valor;
	}
	
	// Métodos
	public void showNutritionalInformations() {
		System.out.println("- Calorias: " + this.tabelaNutricional.getQtd_calorias());
		System.out.println("- Carboidratos: " + this.tabelaNutricional.getQtd_carboidratos());
		System.out.println("- Fibras: " + this.tabelaNutricional.getQtd_fibras());
		System.out.println("- Gorduras: " + this.tabelaNutricional.getQtd_gorduras());
		System.out.println("- Proteinas: " + this.tabelaNutricional.getQtd_proteinas());
	}
	
	public void serviceTax(double tax) {
		System.out.println("Valor com taxa: " + this.valor + tax);
	}
}

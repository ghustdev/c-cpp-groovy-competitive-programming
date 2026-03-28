public class TabelaNutricional {
	private double qtd_calorias;
	private double qtd_proteinas;
	private double qtd_gorduras;
	private double qtd_carboidratos;
	private double qtd_fibras;
	
	public TabelaNutricional(double qtd_calorias, double qtd_proteinas, double qtd_gorduras, double qtd_carboidratos, double qtd_fibras) {
		this.qtd_calorias = qtd_calorias;
		this.qtd_proteinas = qtd_proteinas;
		this.qtd_gorduras = qtd_gorduras;
		this.qtd_carboidratos = qtd_carboidratos;
		this.qtd_fibras = qtd_fibras;
	}
	
	public double getQtd_proteinas() {
		return qtd_proteinas;
	}
	
	public void setQtd_proteinas(double qtd_proteinas) {
		this.qtd_proteinas = qtd_proteinas;
	}
	
	public double getQtd_calorias() {
		return qtd_calorias;
	}
	
	public void setQtd_calorias(double qtd_calorias) {
		this.qtd_calorias = qtd_calorias;
	}
	
	public double getQtd_gorduras() {
		return qtd_gorduras;
	}
	
	public void setQtd_gorduras(double qtd_gorduras) {
		this.qtd_gorduras = qtd_gorduras;
	}
	
	public double getQtd_carboidratos() {
		return qtd_carboidratos;
	}
	
	public void setQtd_carboidratos(double qtd_carboidratos) {
		this.qtd_carboidratos = qtd_carboidratos;
	}
	
	public double getQtd_fibras() {
		return qtd_fibras;
	}
	
	public void setQtd_fibras(double qtd_fibras) {
		this.qtd_fibras = qtd_fibras;
	}
}

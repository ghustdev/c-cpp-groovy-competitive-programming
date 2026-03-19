public class Produto {
	private int codigo;
	private String nome;
	private int qtd;
	private String tipo;
	private double valor;
	
	public Produto(int codigo) {
		this.codigo = codigo;
	}
	
	public Produto(int codigo, String nome) {
		this(codigo); // Chama o construtor acima para evitar repetição de código
		setNome(nome);
	}
	
	public Produto(int codigo, String nome, int qtd) {
		this(codigo, nome);
		setQtd(qtd);
	}
	
	public Produto(int codigo, String nome, int qtd, String tipo, double valor) {
		this(codigo, nome, qtd); // Chama o construtor anterior
		setTipo(tipo);
		setValor(valor);
	}
	
	public String getNome() {
		return nome;
	}
	
	public void setNome(String nome) {
		this.nome = nome;
	}
	
	public int getQtd() {
		return qtd;
	}
	
	public void setQtd(int qtd) {
		this.qtd = qtd;
	}
	
	public String getTipo() {
		return tipo;
	}
	
	public void setTipo(String tipo) {
		this.tipo = tipo;
	}
	
	public double getValor() {
		return valor;
	}
	
	public void setValor(double valor) {
		this.valor = valor;
	}
	
	public void vender(int qtdVendida) {
		if (qtdVendida <= getQtd()) {
			setQtd(getQtd() - qtdVendida);
			System.out.println("Valor vendido: " + qtdVendida * getValor());
		}
		else {
			throw new IllegalArgumentException("A quandidade excedeu o estoque!");
		}
	}
	
	public void comprar(int qtdCompra, double novoValor) {
		setQtd(getQtd() + qtdCompra);
		setValor(novoValor);
	}
	
	public void comprar(int qtdCompra) {
		comprar(qtdCompra, 0.0);
	}
	
	public void inserir (String nome, int qtd, String tipo, double valor) {
		setValor(valor);
		setQtd(qtd);
		setNome(nome);
		setTipo(tipo);
	}
	
	public void igual(Produto produto) {
		if (getNome().equals(produto.nome)) {
			System.out.println("true");
		}
		else {
			System.out.println("false");
		}
	}
	
	public String toString() {
		return "Código: " + this.codigo + ", Nome: " + getNome() + ", Quantidade: " + getQtd() + ", Valor: " + getValor() + ", Tipo: " + getTipo();
	}
}

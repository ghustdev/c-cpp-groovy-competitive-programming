
public class Pessoa {
	private String nome;
	private int idade;
	private char sexo;
	private String telefone;
	
	public Pessoa(String nome, int idade, char sexo, String telefone) {
		setNome(nome);
		setIdade(idade);
		setSexo(sexo);
		setTelefone(telefone);
	}
	
	public Pessoa() {}
	
	public String getNome() {
		return nome;
	}
	
	public void setNome(String nome) {
		this.nome = nome;
	}
	
	public int getIdade() {
		return idade;
	}
	
	public void setIdade(int idade) {
		this.idade = idade;
	}
	
	public char getSexo() {
		return sexo;
	}
	
	public void setSexo(char sexo) {
		this.sexo = sexo;
	}
	
	public String getTelefone() {
		return telefone;
	}
	
	public void setTelefone(String telefone) {
		this.telefone = telefone;
	}
	
	public String toString() {
		return "Nome: " + getNome() + ", Idade: " + getIdade() + ", Sexo: " + getSexo() + ", Telefone: " + getTelefone();
	}
}

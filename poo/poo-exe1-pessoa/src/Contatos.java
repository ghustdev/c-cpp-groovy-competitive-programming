public class Contatos extends Pessoa {
	private String local;
	private String cpf;
	
	public Contatos() {}
	
	public Contatos(String nome, int idade, char sexo, String telefone, String local, String cpf) {
		super(nome, idade, sexo, telefone);
		setLocal(local);
		setCpf(local);
	}
	
	public String getCpf() {
		return cpf;
	}
	
	public void setCpf(String cpf) {
		this.cpf = cpf;
	}
	
	public String getLocal() {
		return local;
	}
	
	public void setLocal(String local) {
		this.local = local;
	}
	
	@Override
	public String toString() {
		return super.toString() + ", Local: " + getLocal() + ", CPF: " + getCpf();
	}
}

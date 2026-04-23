package exe2_clientes;

public class Cadastro {
	
	public static void main(String[] args) {
		
		Cliente cliente = new Cliente ("Maria");
		cliente.setTelefone("9823-2323");
		cliente.setIdade(20);
		
		System.out.println("Cliente : " + cliente.getNome() + " - Idade : " + cliente.getIdade() + " - Telefone : " + cliente.getTelefone());
		
		System.out.println(cliente);
	}
	
}
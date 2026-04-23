package exe2_clientes;

public class CadastroMultiplo {
	
	public static void main(String[] args) {
		
		Cliente[] cliente = new Cliente[5];
		
		cliente[0] = new Cliente("Maria");
		cliente[0].setIdade(20);
		cliente[0].setTelefone("999-8899");
		
		cliente[1] = new Cliente("Stefanny");
		cliente[1].setIdade(20);
		cliente[1].setTelefone("999-8899");
		
		cliente[2] = new Cliente("Gustavo");
		cliente[2].setIdade(20);
		cliente[2].setTelefone("999-8899");
		
		cliente[3] = new Cliente("Rita");
		cliente[3].setIdade(20);
		cliente[3].setTelefone("999-8899");
		
		cliente[4] = new Cliente("Deri");
		cliente[4].setIdade(20);
		cliente[4].setTelefone("999-8899");
		
		for (int i=0;i<cliente.length;i++) {
			System.out.println(i+1 + " " + cliente[i]);
			
		}
	}
}

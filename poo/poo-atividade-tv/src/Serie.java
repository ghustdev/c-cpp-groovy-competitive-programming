public final class Serie extends ProgramaTV {
	private int qtd_temporadas;
	private int qtd_episodios;
	
	
	Serie(String nome, String categoria, int qtd_episodios, int qtd_temporadas) {
		super(nome, categoria);
		this.qtd_episodios = qtd_episodios;
		this.qtd_temporadas = qtd_temporadas;
	}
	
	public int getQtd_temporadas() {
		return qtd_temporadas;
	}
	
	public void setQtd_temporadas(int qtd_temporadas) {
		this.qtd_temporadas = qtd_temporadas;
	}
	
	public int getQtd_episodios() {
		return qtd_episodios;
	}
	
	public void setQtd_episodios(int qtd_episodios) {
		this.qtd_episodios = qtd_episodios;
	}
	
	public String toString() {
		String serie = codigo + "-" + nome + " (" + categoria + ")\n";
		serie = serie + "Quantidade de Temporadas : " + qtd_temporadas + '\n';
		serie = serie + "Quantidade de Episodios : " + qtd_episodios + '\n';
		serie = serie + "Diretor : " + diretor +"\n";
		serie = serie + "Artistas : \n";
		for (int i=0;i<artistas.size();i++) {
			serie = serie + artistas.get(i) + "\n";
		}
		return serie;
	}
}

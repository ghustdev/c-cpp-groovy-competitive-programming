package exe3_tvs;

public class TV {
	private int canal;
	private int volume;
	
	public TV(int canal, int volume) {
		this.canal = 0;
		this.volume = 0;
	}
	
	public int getCanal() {
		return canal;
	}
	
	public void setCanal(int canal) {
		this.canal = canal;
	}
	
	public int getVolume() {
		return volume;
	}
	
	public void setVolume(int volume) {
		this.volume = volume;
	}
	
	public void aumentarVolume() {
		this.volume++;
	}
	
	public void diminuirVolume() {
		this.volume--;
	}
	
	public void trocarCanal(int newCanal) {
		setCanal(newCanal);
	}
	
	@Override
	public String toString() {
		return "TV [canal=" + canal + ", volume=" + volume + "]";
	}
}

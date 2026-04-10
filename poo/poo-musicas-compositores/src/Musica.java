import java.util.ArrayList;

public class Musica {
	private String name;
	private int year;
	private String type;
	private ArrayList<Compositor> compositores = new ArrayList<>();
	
	public Musica(String name, int year, String type) {
		this.name = name;
		this.year = year;
		this.type = type;
	}
	
	public String getName() {
		return name;
	}
	
	public void setName(String name) {
		this.name = name;
	}
	
	public int getYear() {
		return year;
	}
	
	public void setYear(int year) {
		this.year = year;
	}
	
	public String getType() {
		return type;
	}
	
	public void setType(String type) {
		this.type = type;
	}
	
	public ArrayList<Compositor> compositoresList() {
		return this.compositores;
	}
	
	public void addCompositor(Compositor comp) {
		this.compositores.add(comp);
	}
	
	@Override
	public String toString() {
		System.out.println("Musica: " + this.name + "Ano: " + this.year);
		return null;
	}
}

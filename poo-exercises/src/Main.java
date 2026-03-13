import java.util.ArrayList;
import java.util.List;

public class Main {
	public static void main(String[] args) {
		List<Integer> x = new ArrayList<>();
		for (String n : args) {
			x.add(Integer.parseInt(n));
		}
		
		x.sort(null);
		
		System.out.println("Maior: " + x.getFirst());
		System.out.println("Menor: " + x.getLast());
	}
}

package exe3_tvs;

public class ControleRemoto {
	public static void main(String[] args) {
		TV tv1 = new TV(0, 0);
		
		tv1.aumentarVolume();
		System.out.println(tv1);
		
		tv1.diminuirVolume();
		System.out.println(tv1);
		
		tv1.trocarCanal(20);
		System.out.println(tv1);
	}
}

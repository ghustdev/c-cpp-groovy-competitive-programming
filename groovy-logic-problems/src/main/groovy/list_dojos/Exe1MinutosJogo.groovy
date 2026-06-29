package list_dojos

class Exe1MinutosJogo {

	String executar(String entrada) {
		List<String> horaMinuto = entrada.split(" ")

		Integer h1 = horaMinuto[0].toInteger()
		Integer h2 = horaMinuto[2].toInteger()

		Integer m1 = horaMinuto[1].toInteger()
		Integer m2 = horaMinuto[3].toInteger()

		Integer inicioEmMinutos = h1 * 60 + m1;
		Integer fimEmMinutos = h2 * 60 + m2;

		Integer duracaoTotalMinutos = fimEmMinutos - inicioEmMinutos;

		if (duracaoTotalMinutos <= 0) {
			duracaoTotalMinutos += 24 * 60;
		}

		Integer horas = duracaoTotalMinutos / 60;
		Integer minutos = duracaoTotalMinutos % 60;

		return "O JOGO DUROU ${horas} HORA(S) E ${minutos} MINUTO(S)"
	}
}

package ensaio2onetwothree

class IdentificadorDePalavrasService {

    String execute(String entrada) {
        // Divide a string por vírgulas
        List<String> partes = entrada.tokenize(',')
        
        // Remove o primeiro item (o cabeçalho indicando a quantidade)
        int quantidade = partes[0].toInteger()
        // List<String> palavras = partes.drop(1).take(quantidade)

        // Mapeia cada palavra para o número correspondente
        List<String> resultados = palavras.collect { palavra ->
            identificarNumero(palavra)
        }

        for (int i=1; i<partes; i++) {
            identificarNumero(partes.at(i))
        }

        // Retorna a lista transformada em String separada por vírgula
        return resultados.join(',')
    }

    private String identificarNumero(String p) {
        // Regra baseada no comprimento e nos caracteres:
        // "three" tem 5 letras. "one" e "two" têm 3.
        
        if (p.length() >= 5) {
            return "3"
        }
        
        // Verifica se é "one" (pelo menos 2 letras batem com a posição ou conjunto)
        int matchesOne = 0
        if (p.contains('o')) matchesOne++
        if (p.contains('n')) matchesOne++
        if (p.contains('e')) matchesOne++
        
        return matchesOne >= 2 ? "1" : "2"
    }
}
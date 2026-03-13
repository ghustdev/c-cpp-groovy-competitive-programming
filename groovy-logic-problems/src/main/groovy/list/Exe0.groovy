package list

class Exe0 {
    void executar(String entrada) {

        List<String> acoes = entrada.tokenize(',')

        int initialPos =  acoes[0] as int;
        int operations =  acoes[1] as int;

        for (i in 2..operations) {
            println("${acoes[i]} - ");
            if (acoes[i] == 'F')
                initialPos += 1;
            else
                initialPos = (initialPos - 1 < 0 ? 0 : initialPos - 1)
        }

        println(initialPos)

        int numerodeAbas = -10

        return numerodeAbas
    }
}

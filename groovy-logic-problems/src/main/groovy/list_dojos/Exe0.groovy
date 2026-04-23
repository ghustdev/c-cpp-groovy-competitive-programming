package list_dojos

class Exe0 {

    private int countCD = 0
    private int count2CD = 0
    private boolean isMin = false

    int executar(String entrada) {
        if (!entrada) {throw new IllegalArgumentException("Entrada não pode ser um valor nulo")}

        List<String> acoes = entrada.tokenize(',')

        int abasAtuais = acoes[0] as int
        int numeroAcoes = acoes[1] as int
        List<String> conjunto = acoes[2..-1]

        for (int i = 0; i < numeroAcoes; i++) {
            if (abasAtuais == 0) {
                break
            }

            if (conjunto[i] == "MAX") {
                isMin = false
            }

            if (!isMin) {
                abasAtuais = calcularAbas(conjunto[i], abasAtuais)
            }
        }
        return abasAtuais
    }


    private int calcularAbas(String acao, int numeroAbas) {
        switch (acao) {
            case "F":
                if(count2CD>0){
                    numeroAbas += 3
                    count2CD--
                } else{
                    numeroAbas++
                }
                break

            case "C":
                if(countCD>0){
                    numeroAbas += 2
                    countCD -= 1
                } else {
                    numeroAbas--
                }
                break

            case "2C":
                numeroAbas += 4
                break

            case "CAD":
                numeroAbas *= 2
                break

            case "ESC":
                numeroAbas = 0
                break

            case "MIN":
                isMin = true
                break

            case "CD":
                numeroAbas -= 1
                countCD+=2
                break

            case"2CD":
                numeroAbas -= 2
                count2CD += 2
        }

        return numeroAbas
    }
}
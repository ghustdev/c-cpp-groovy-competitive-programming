package list_dojos

import spock.lang.Specification
import spock.lang.Unroll

class Exe1MinutosJogoTest extends Specification {
    static Exe1MinutosJogo exe

    void setupSpec() {
        exe = new Exe1MinutosJogo()
    }

    @Unroll
    void "caseTest Base"() {
        given:
        String valor1 = "7 8 9 10"
        String valor2 = "7 7 7 7"
        String valor3 = "7 10 8 9"
        String valor4 = "7 10 7 9"

        String resposta1 = "O JOGO DUROU 2 HORA(S) E 2 MINUTO(S)"
        String resposta2 = "O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)"
        String resposta3 = "O JOGO DUROU 0 HORA(S) E 59 MINUTO(S)"
        String resposta4 = "O JOGO DUROU 23 HORA(S) E 59 MINUTO(S)"

        when:
        String obtido1 = exe.executar(valor1)
        String obtido2 = exe.executar(valor2)
        String obtido3 = exe.executar(valor3)
        String obtido4 = exe.executar(valor4)

        then:
        resposta1 == obtido1
        resposta2 == obtido2
        resposta3 == obtido3
        resposta4 == obtido4

    }

    @Unroll
    void "casesTest #entrada"() {
        expect:
        exe.executar(entrada) == valorEsperado

        where:
        entrada                     | valorEsperado
        "7 8 9 10" | "O JOGO DUROU 2 HORA(S) E 2 MINUTO(S)"
        "7 7 7 7" | "O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)"
        "7 10 8 9" | "O JOGO DUROU 0 HORA(S) E 59 MINUTO(S)"
        "7 10 7 9" | "O JOGO DUROU 23 HORA(S) E 59 MINUTO(S)"
    }
}

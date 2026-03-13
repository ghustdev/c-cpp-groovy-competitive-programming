package list

import spock.lang.Specification

class Exe0Test extends Specification {

    static Exe0 exe0;

    void setupSpec() {
        exe0 = new Exe0()
    }

    void "case base | Base_750"() {
        given:
        String entrada1 = "5,10,F,F,F,F,F,C,C,C,C,C"
        int valorEsperado1 = 5
        String entrada2 = "3,5,F,F,C,C,C"
        int valorEsperado2 = 2

        when:
        int valorObtido1 = exe0.executar(entrada1)
        int valorObtido2 = exe0.executar(entrada2)

        then:
        valorEsperado1 == valorObtido1
        valorEsperado2 == valorObtido2

    }


    void "casesTest"() {
        expect:
        exe0.executar(entrada) == valorEsperado

        where:
        entrada                     | valorEsperado
        "5,5,F,F,F,F,C"             | 8
        "1,2,F,F"                   | 3
        "3,3,C,F,C"                 | 2
        "10,10,C,C,C,C,C,C,C,C,C,C" | 0
        "4,10,C,C,C,C,F,F,F,C,C,F"  | 0
        "4,3,F,F,C"                 | 5
        "1,3,C,C,F,F,F,F"           | 0
    }


    void "comandoExtra1Test | Extra1_50"() {
        given:
        int x = -1
        when:
        x+=2
        then:
        x == 0
    }
}

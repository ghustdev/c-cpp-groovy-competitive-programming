package list_dojos

import spock.lang.Specification

class Exe1Test extends Specification {
    static Exe1 exe;

    void setupSpec() {
        exe = new Exe1()
    }

    // Testes

    void "caseTest Base"() {
        // Definições

    }

    void "casesTest"() {
        expect:
        exe.executar(entrada) == valorEsperado

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
}

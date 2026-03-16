package list_dojos

import spock.lang.Specification

class Exe0Test extends Specification {

    static Exe0 exe;

    void setupSpec() {
        exe = new Exe0()
    }

    void "case base | Base_750"() {
        given:
        String entrada1 = "5,10,F,F,F,F,F,C,C,C,C,C"
        int valorEsperado1 = 5
        String entrada2 = "3,5,F,F,C,C,C"
        int valorEsperado2 = 2

        when:
        int valorObtido1 = exe.executar(entrada1)
        int valorObtido2 = exe.executar(entrada2)

        then:
        valorEsperado1 == valorObtido1
        valorEsperado2 == valorObtido2

    }

    void "casesTest Extra"() {
        expect:
        exe.executar(entrada) == valorEsperado

        where:
        entrada                                    | valorEsperado
        "5,5,F,F,2C,CAD,F"                         | 23
        "5,6,F,F,2C,CAD,F,ESC"                     | 0
        "5,10,F,F,MIN,2C,CAD,F,ESC,MAX,F,F"        | 9
        "5,9,F,F,MIN,C,C,C,MAX,C,C"                | 5
        "5,7,F,F,CD,2C,C,F,C"                      | 15
        "2,15,C,F,F,2CD,F,CD,C,F,C,C,C,C,C,C,F"    | 6
        "2,10,F,CD,CD,C,C,F,F,C,F,C"               | 12
        "2,15,F,CD,CD,C,2CD,C,2CD,F,F,C,F,C,F,F,C" | 17
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


    void "caso extra 1 | Extra1_50"() {
        given:
        String entrada1 = "5,10,F,F,F,C,2C"
        int valorEsperado1 = 11

        when:
        int valorObtido1 = exe.executar(entrada1)

        then:
        valorEsperado1 == valorObtido1
    }

    void "caso extra 2 | Extra2_50"() {
        given:
        String entrada1 = "5,10,F,F,F,C,2C,CAD"
        int valorEsperado1 = 22

        when:
        int valorObtido1 = exe.executar(entrada1)

        then:
        valorEsperado1 == valorObtido1
    }

    void "caso extra 3 | Extra3_50"() {
        given:
        String entrada1 = "5,10,F,F,F,C,2C,CAD,ESC"
        int valorEsperado1 = 0

        when:
        int valorObtido1 = exe.executar(entrada1)

        then:
        valorEsperado1 == valorObtido1
    }

    void "caso extra 4 | Extra4_100"() {
        given:
        String entrada1 = "5,10,MIN,F,F,F,C,2C,CAD,ESC"
        int valorEsperado1 = 5

        when:
        int valorObtido1 = exe.executar(entrada1)

        then:
        valorEsperado1 == valorObtido1
    }

    void "caso extra 5 | Extra5_100"() {
        given:
        String entrada1 = "5,10,MIN,F,F,F,C,2C,CAD,MAX,F"
        int valorEsperado1 = 6

        when:
        int valorObtido1 = exe.executar(entrada1)

        then:
        valorEsperado1 == valorObtido1
    }

    void "caso extra 6 | Extra6_200"() {
        given:
        String entrada1 = "3,13,F,F,C,C,2C,CD,F,C,F,F,C,C,C"
        int valorEsperado1 = 11

        when:
        int valorObtido1 = exe.executar(entrada1)

        then:
        valorEsperado1 == valorObtido1
    }

    void "caso extra 7 | Extra7_200"() {
        given:
        String entrada1 = "3,10,F,F,F,C,2CD,C,C,F,F,C"
        int valorEsperado1 = 6

        when:
        int valorObtido1 = exe.executar(entrada1)

        then:
        valorEsperado1 == valorObtido1
    }

    // A fé move montanhas
}

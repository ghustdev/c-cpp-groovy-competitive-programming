package exercism

import spock.lang.Ignore
import spock.lang.Specification

class AcronymSpec extends Specification {
    static Acronym exe

    void setup() {
        exe = new Acronym()
    }

    void "Is it acronym?"() {
        given: "A possible string"
        String entrada1 = "As Soon As Possible"
        String saida1 = "ASAP"

        when: "Geting value and performing comparison"
        String resultado1 = Acronym.abbreviate(entrada1)

        then: "Comparison"
        saida1 == resultado1
    }

    void "Is it acronym? Where cases"() {
        expect:
        Acronym.abbreviate(entrada) == saidaEsperada

        where:
        entrada | saidaEsperada
        "Liquid-crystal display" | "LCD"
        "Thank George It's Friday!" | "TGIF"
    }

    def "Basic"() {
        expect:
        Acronym.abbreviate(phrase) == expected
        where:
        phrase                      || expected
        'Portable Network Graphics' || 'PNG'
    }

    def "Lowercase words"() {
        expect:
        Acronym.abbreviate(phrase) == expected
        where:
        phrase          || expected
        'Ruby on Rails' || 'ROR'
    }

    def "Punctuation"() {
        expect:
        Acronym.abbreviate(phrase) == expected
        where:
        phrase                || expected
        'First In, First Out' || 'FIFO'
    }

    def "All caps word"() {
        expect:
        Acronym.abbreviate(phrase) == expected
        where:
        phrase                           || expected
        'GNU Image Manipulation Program' || 'GIMP'
    }

    def "Punctuation without whitespace"() {
        expect:
        Acronym.abbreviate(phrase) == expected
        where:
        phrase                                    || expected
        'Complementary metal-oxide semiconductor' || 'CMOS'
    }

    def "Very long abbreviation"() {
        expect:
        Acronym.abbreviate(phrase) == expected
        where:
        phrase = 'Rolling On The Floor Laughing So Hard That My Dogs Came Over And Licked Me'
        expected = 'ROTFLSHTMDCOALM'
    }

    def "Consecutive delimiters"() {
        expect:
        Acronym.abbreviate(phrase) == expected
        where:
        phrase                                || expected
        'Something - I made up from thin air' || 'SIMUFTA'
    }

    def "Apostrophes"() {
        expect:
        Acronym.abbreviate(phrase) == expected
        where:
        phrase            || expected
        'Halley\'s Comet' || 'HC'
    }

    def "Underscore emphasis"() {
        expect:
        Acronym.abbreviate(phrase) == expected
        where:
        phrase                 || expected
        'The Road _Not_ Taken' || 'TRNT'
    }
}

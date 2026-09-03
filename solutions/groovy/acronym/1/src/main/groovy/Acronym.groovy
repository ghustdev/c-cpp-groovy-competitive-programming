class Acronym {

    static String abbreviate(String phrase) {
        String acronym = ""

        String[] words = phrase.split(" |\\-")

        words.each {it ->
            def matcher = (it =~ /[a-zA-Z]/)
            if (matcher.find()) {
                acronym += matcher[0].toUpperCase()
            }
        }

        return acronym
    }

}
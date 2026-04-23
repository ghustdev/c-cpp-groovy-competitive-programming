package exe6_cds;

public class Principal {
    public static void main(String[] args) {
        Item[] itens = new Item[10];

        itens[0] = new Filme("A Chegada", 2016, 116, "Ficcao cientifica", "Denis Villeneuve");
        itens[1] = new CD("Back in Black", 1980, 42, "Classico do rock", "AC/DC", 10);
        itens[2] = new Jogo("Minecraft", 2011, 0, "Sandbox", 4, "PC");

        itens[3] = new Filme("Parasita", 2019, 132, "Thriller", "Bong Joon-ho");
        itens[4] = new CD("Kind of Blue", 1959, 46, "Jazz", "Miles Davis", 5);
        itens[5] = new Jogo("Mario Kart 8", 2014, 0, "Corrida", 4, "Switch");

        itens[6] = new Filme("O Poderoso Chefao", 1972, 175, "Mafia", "Francis Ford Coppola");
        itens[7] = new CD("The Dark Side of the Moon", 1973, 43, "Progressivo", "Pink Floyd", 10);
        itens[8] = new Jogo("FIFA 23", 2022, 0, "Futebol", 2, "PS5");

        itens[9] = new Filme("Mad Max: Estrada da Furia", 2015, 120, "Acao", "George Miller");

        for (Item item : itens) {
            System.out.println("Dados comuns: " + item.dadosComuns());
            System.out.println("Dados especificos: " + item.dadosEspecificos());

            if (item instanceof Jogo) {
                Jogo jogo = (Jogo) item;
                System.out.println("Plataforma (separado): " + jogo.getPlataforma());
            }

            System.out.println();
        }
    }
}


public class Deck {

    private Card[] deck;

    public Deck() {
        deck = new Card[52];
        int cardIndex = 0;
        for (Suit suit : Suit.values()) {
            for (Rank rank : Rank.values()) {
                deck[cardIndex] = new Card(suit, rank);
                cardIndex++;
            }
        }
    }
  // Shuffling and dealing next
  @Override
    public String toString() {
        StringBuilder sb = new StringBuilder();
        for (Card card : deck) {
            sb.append(card.getRank()).append(" of ").append(card.getSuit()).append("\n");
        }
        return sb.toString();
    }
}

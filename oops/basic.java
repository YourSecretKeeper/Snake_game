interface Playable {
    void play();
}

class Guitar implements Playable {
    public void play() {
        System.out.println("Strumming the guitar ");
    }
}

class Piano implements Playable {
    public void play() {
        System.out.println("Playing the piano");
    }
}

public class  basic {
    public static void main(String[] args) {
        Playable p1 = new Guitar();
        p1.play();

        Playable p2 = new Piano();
        p2.play();
    }
}

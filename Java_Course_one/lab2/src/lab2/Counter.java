package lab2;

public class Counter {

    private String[] converted;

    public void count1(String str, String word) {
        converted = str.replaceAll("\\p{Punct}", "").split(" ");
        int count = 0;
        for (String word_index : converted) {
            if (word.equals(word_index)) {
                count++;
            }
        }

        System.out.println("The word " + "(" + word + ")" + " occurs " + count + " times in the above string");
    }

    public void count2(String string, String word) {
        int count = 0, index = 0;
        while ((index = string.indexOf(word, index)) != -1) {
            count++;
            index++;

        }

        System.out.println("The word " + "(" + word + ")" + " occurs " + count + " times in the above string");

    }
}

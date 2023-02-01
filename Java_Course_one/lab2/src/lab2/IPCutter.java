package lab2;

import java.util.StringTokenizer;

public class IPCutter {

    private String[] cutString;
    private int[] result = new int[4];

    public int[] Split_IPCutter(String str) {

        cutString = str.split("\\.");

        for (int i = 0; i < cutString.length; i++) {
            result[i] = Integer.parseInt(cutString[i]);
        }
        return result;
    }

    public int[] Tokenizer_IPCutter(String str) {
        StringTokenizer st = new StringTokenizer(str, ".");
        for (int i = 0; st.hasMoreTokens(); i++) {
            result[i] = Integer.parseInt((st.nextToken()));
        }
        return result;
    }

}

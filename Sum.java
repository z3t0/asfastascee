public class Sum {

    static final int SUM_COUNT = 1000;

    public static void main (String[] args) {

        int sum = 0;

        for (int i = 0; i < SUM_COUNT; i++) {
            sum += i;
        }

        System.out.println("Sum: " + sum);

    }
}

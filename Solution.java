
public class Solution {

    private static final int MIN_INPUT_VALUE = 1;
    private static final int MAX_INPUT_VALUE = 500;

    public boolean divideArray(int[] input) {
        int[] frequency = new int[MAX_INPUT_VALUE + 1];
        for (int n : input) {
            frequency[n]++;
        }
        for (int n : frequency) {
            if (n % 2 != 0) {
                return false;
            }
        }
        return true;
    }
}

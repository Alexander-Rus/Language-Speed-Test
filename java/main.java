import java.util.Arrays;
import java.util.Random;
import java.time.*;

public class main {
    public static void main(String[] args) {
        
        // Create an array of 10,000 integers
        int[] values = new int[10000];
        for (int i = 0; i < values.length; i++) {
            values[i] = i;
        }

        //Reverse the array
        int left = 0;
        int right = values.length - 1;
        while (left < right) {
            int temp = values[left];
            values[left] = values[right];
            values[right] = temp;
            left++;
            right--;
        }

        //start timing
        Instant start = Instant.now();

        //Perform a bubble sort on the array
        for (int i = 0; i < values.length - 1; i++) {
            for (int j = 0; j < values.length - i - 1; j++) {
                if (values[j] > values[j + 1]) {
                    // swap the elements
                    int temp = values[j];
                    values[j] = values[j + 1];
                    values[j + 1] = temp;
                }
            }
        }

        //End timing
        Instant end = Instant.now();
        Duration elapsed = Duration.between(start, end);
        System.out.println("JAVA Time elapsed: " + elapsed.toMillis() + " milliseconds");
    }
}

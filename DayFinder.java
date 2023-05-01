import java.io.*;
import java.sql.Date;
import java.text.*;
import java.time.format.DateTimeFormatter;
import java.util.Calendar;
import java.util.Scanner;


class Result {

    /*
     * Complete the 'findDay' function below.
     *
     * The function is expected to return a STRING.
     * The function accepts following parameters:
     *  1. INTEGER month
     *  2. INTEGER day
     *  3. INTEGER year
     */

    public static String findDay(int month, int day, int year) {
       Calendar c = Calendar.getInstance();
        c.set(year, month-1,day, 0, 0, 0);
        Date d = new Date(c.getTimeInMillis());
         DateTimeFormatter dateTimeFormatter = DateTimeFormatter.ofPattern("MM dd yyyy");
        String dayWeekText = new SimpleDateFormat("EEEE").format(d);
        return dayWeekText.toUpperCase();
    }

}

public class DayFinder {
    public static void main(String[] args) throws IOException {
       

       Scanner sc = new Scanner(System.in);
        int month = sc.nextInt();

        int day = sc.nextInt();

        int year = sc.nextInt();

        String res = Result.findDay(month, day, year);
        System.out.println(res);

    }
}

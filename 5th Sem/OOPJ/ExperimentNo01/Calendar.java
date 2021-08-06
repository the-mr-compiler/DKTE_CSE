public class Calendar {

    int dd, mm, yy;
    Calendar(int d, int m, int y) {
        dd = d;
        mm = m;
        yy = y;
    }
    /*
       Using Tøndering's algorithm (http://www.tondering.dk/claus/cal/chrweek.php#calcdow)
    */
    public String getDay() {
        String day = "";    
        int a = ((14 - mm) / 12);
        int y = yy - a;
        int m = mm + (12 * a) - 2;
        int d = (dd + y + (y / 4) - (y / 100) + (y / 400) + ((31 * m) / 12)) % 7;
        
        switch (d + 1) {
            case 1:
                day = "Sunday";
                break;
            case 2:
                day = "Monday";
                break;
            case 3:
                day = "Tuesday";
                break;
            case 4:
                day = "Wednesday";
                break;
            case 5:
                day = "Thursday";
                break;
            case 6:
                day = "Friday";
                break;
            case 7:
                day = "Saturday";
                break;

        }
        return day;
    }

    public boolean isValid() {
        if (mm < 1 || dd < 1 || yy < 1 || mm > 12)
            return false;
        else if (mm == 1 || mm == 3 || mm == 5 || mm == 7 || mm == 8 || mm == 10 || mm == 12) {
            if (dd < 32) {
                return true;
            }
        } else if (mm == 2) {
            if (dd == 29 && yy % 4 == 0)
                return true;
            else if (dd < 29)
                return true;
        } else {
            if (dd < 31)
                return true;
        }

        return false;
    }

    public static void main(String[] args) {
        if (args.length == 3) {
            int dd = Integer.parseInt(args[0]);
            int mm = Integer.parseInt(args[1]);
            int yy = Integer.parseInt(args[2]);
            Calendar d = new Calendar(dd, mm, yy);
            if (d.isValid())
                System.out.println(d.getDay());
        } else
            System.out.println("Please enter date through command line");
    }
}
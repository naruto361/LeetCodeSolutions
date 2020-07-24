class Solution {
public:
    string dayOfTheWeek(int d, int m, int y) {
        static int t[] = { 0, 3, 2, 5, 0, 3, 
                       5, 1, 4, 6, 2, 4 };  
        y -= m < 3;  
        int ok= ( y + y / 4 - y / 100 +  
             y / 400 + t[m - 1] + d) % 7;
        switch(ok)
        {
            case 0:return "Sunday";
            case 1:return "Monday";
            case 2:return "Tuesday";
            case 3:return "Wednesday";
            case 4:return "Thursday";
            case 5:return "Friday";
            default:return "Saturday";
        }
    }
};

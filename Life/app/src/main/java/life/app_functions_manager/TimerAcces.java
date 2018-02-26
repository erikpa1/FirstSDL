package life.app_functions_manager;
/**
 * Created by erikp on 26.02.2018.
 */

import java.util.Timer;
import java.util.TimerTask;

public class TimerAcces {

    private static Timer timer = new Timer();

    public static void addObject(TimerTask task, String instanceName, long delay)
    {
        timer.schedule(task, delay);
        System.out.println("Added task of: " + instanceName);
    }



}

package life.app_functions_manager;

/**
 * Created by erikp on 26.02.2018.
 */
import android.media.Image;
import android.view.View;
import android.widget.ImageView;
import java.util.TimerTask;

import life.life.R;

public class BackgroundChanger extends TimerTask {

    private View view_controlled;

    public BackgroundChanger(View view)
    {
        this.view_controlled = view;
    }
    @Override
    public void run() {
        this.view_controlled.setBackgroundColor((int)Math.random());
    }
}

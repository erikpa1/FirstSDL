package life.life;

import android.content.Intent;
import android.os.Handler;
import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.view.View;
import android.os.Handler;

import life.learn.LearnMainWindow;
import life.app_functions_manager.BackgroundChanger;
import life.app_functions_manager.TimerAcces;

class FirstScreen extends AppCompatActivity {

    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_first_screen);

        View v = (View )findViewById(R.id.layout_background);
        TimerAcces.addObject(new BackgroundChanger(v), "mainWindow", 3);

    }
    public void on_lean(View view)
    {
        this.intent_creator(new LearnMainWindow());
    }
    public void on_notes(View view)
    {
        this.intent_creator(new LearnMainWindow());
    }
    public void on_reminder(View view)
    {
        this.intent_creator(new LearnMainWindow());
    }
    public void on_sleep_analysis(View view)
    {
        this.intent_creator(new LearnMainWindow());
    }
    private void intent_creator(AppCompatActivity newOne)
    {
        Intent help = new Intent(this, newOne.getClass());
        this.startActivity(help);
    }


}

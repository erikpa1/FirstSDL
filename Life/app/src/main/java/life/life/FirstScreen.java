package life.life;

import android.content.Intent;
import android.content.SharedPreferences;
import android.net.Uri;
import android.os.Handler;
import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.util.Log;
import android.view.Menu;
import android.view.View;
import android.os.Handler;
import android.widget.Button;
import android.widget.CheckBox;
import android.widget.TextView;
import android.widget.Toast;

import life.learn.LearnMainWindow;
import life.app_functions_manager.BackgroundChanger;
import life.app_functions_manager.TimerAcces;

class FirstScreen extends AppCompatActivity implements View.OnClickListener {



    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_first_screen);

        View v = (View )findViewById(R.id.layout_background);
        Button btn = (Button)findViewById(R.id.button_test);
        //TimerAcces.addObject(new BackgroundChanger(v), "mainWindow", 3);



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

    @Override
    protected void onStart() {
        super.onStart();
        this.sendMassage("Starting");
    }

    @Override
    protected void onPause() {
        super.onPause();
        this.sendMassage("Pausing");


    }

    @Override
    protected void onStop() {
        super.onStop();
        this.sendMassage("Stopping");
    }

    @Override
    protected void onDestroy() {
        super.onDestroy();
        this.sendMassage("Destroying");
    }

    @Override
    protected void onRestart()
    {
        super.onRestart();
        this.sendMassage("Restarting");

    }

    private void sendMassage(String text)
    {
        Toast.makeText(this, text, Toast.LENGTH_LONG).show();
    }

    @Override
    protected void onSaveInstanceState(Bundle outState) {
        super.onSaveInstanceState(outState);
        outState.putCharSequence("textView", ((TextView)findViewById(R.id.textView_basic)).getText());
    }

    @Override
    protected void onRestoreInstanceState(Bundle savedInstanceState) {
        super.onRestoreInstanceState(savedInstanceState);
        CharSequence textView = savedInstanceState.getCharSequence("textView");
        ((TextView)findViewById(R.id.textView_basic)).setText(textView);

    }

    @Override
    public void onClick(View view) {





    }
}

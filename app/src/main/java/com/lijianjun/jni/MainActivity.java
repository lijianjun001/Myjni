package com.lijianjun.jni;

import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.widget.TextView;

public class MainActivity extends AppCompatActivity {

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        // Example of a call to a native method
        TextView tv = (TextView) findViewById(R.id.sample_text);
        MyJnilibs myJnilibs = new MyJnilibs();
        int a=myJnilibs.add(1,2);
        tv.setText(""+a);
//        tv.setText(""+myJnilibs.getPw());
    }

    /**
     * A native method that is implemented by the 'native-lib' native library,
     * which is packaged with this application.
     */
    public native String stringFromJNI();


    // Used to load the 'native-lib' library on application startup.
    static {
        System.loadLibrary("native-lib2");
    }

    static {
        System.loadLibrary("myjni-lib");
    }
}

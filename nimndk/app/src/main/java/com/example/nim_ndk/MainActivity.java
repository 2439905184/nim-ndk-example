package com.example.nim_ndk;

import android.app.Activity;
import android.os.Bundle;
import android.widget.TextView;

public class MainActivity extends Activity
{
    static
    {
        System.loadLibrary("nim_ndk");
    }
    @Override
    protected void onCreate(Bundle savedInstanceState)
    {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        String c = c_hello();
        String nim = nim_hello();
        TextView cc = findViewById(R.id.c);
        TextView nimm = findViewById(R.id.nim);
        cc.setText(c);
        nimm.setText(nim);
    }
    public native String c_hello();
    public native String nim_hello();

}
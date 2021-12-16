package com.MarcusCheaT;

import android.app.Activity;
import android.content.Intent;
import android.os.Bundle;

public class MainActivity extends Activity {
    static {
        System.loadLibrary("MarcusCheaT");
    }
	

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);

        Launcher.Init(this);
    }
}

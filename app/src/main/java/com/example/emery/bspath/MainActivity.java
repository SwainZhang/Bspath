package com.example.emery.bspath;

import android.os.Bundle;
import android.os.Environment;
import android.support.v7.app.AppCompatActivity;
import android.view.View;

public class MainActivity extends AppCompatActivity {
    private static  final String oldFilePath= Environment.getExternalStorageDirectory().getAbsolutePath()+"/apkOld.apk";
    private static  final String newFilePath=Environment.getExternalStorageDirectory().getAbsolutePath()+"/apkNew.apk";
    private static  final String patchFilePath=Environment.getExternalStorageDirectory().getAbsolutePath()+"/apkPatch.patch";


    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

    }

    public void diff(View view){
        FileDiffAndPathUtils fileDiffAndPathUtils=new FileDiffAndPathUtils();
        fileDiffAndPathUtils.bisDiff(oldFilePath,newFilePath,patchFilePath);
    }
    public void patch(View view){

    }

}

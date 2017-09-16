package com.example.emery.bspath;

/**
 * Created by emery on 2017/9/3.
 */

public class FileDiffAndPathUtils {
    static {
        System.load("libemerypatch.so");
    }
    public native void bisDiff(String oldFile,String newFile,String pathFile);
    public native void bisPath(String oldFile,String newFile,String pathFile);

}

package com.jindemo.jindemo;


public class HelloWorld {

    public static native String sayHello(String name);

    public static String text() {
        return sayHello("yangxin");
    }

    static {
        System.loadLibrary("myjni");
    }

}
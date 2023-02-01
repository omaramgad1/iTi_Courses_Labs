package lab2;

import java.util.*;
import java.util.Scanner;
import java.lang.Math;
import java.lang.reflect.Array;

public class Lab2 {
    
    public static void task1() {
        String commandLine = "163.121.12.30";
        IPCutter cutted_ip = new IPCutter();
        System.out.println("the output of " + commandLine + " is");
        int[] Split_output = cutted_ip.Split_IPCutter(commandLine);
        int[] Tokenizer_output = cutted_ip.Tokenizer_IPCutter(commandLine);
        for (int i = 0; i < Split_output.length; i++) {
            System.out.println(Split_output[i]);
        }
        System.out.println("--------------------------------------");
        for (int i = 0; i < Tokenizer_output.length; i++) {
            System.out.println(Tokenizer_output[i]);
        }
        
    }
    
    public static void task2() {
        
        String searchText = "Your body may be chrome, but the heart never changes. It wants what it wants.";
        String targetWord = "wants";
        Counter obj = new Counter();
        obj.count1(searchText, targetWord);
        obj.count2(searchText, targetWord);
        
    }
    
    public static void task3(int[] arr) {
        long startTime = System.nanoTime();
        
        Array_Algorithms obj = new Array_Algorithms();
        int maxNumber = obj.max(arr);
        int minNumber = obj.min(arr);
        System.out.println(maxNumber);
        System.out.println(minNumber);
        
        long endTime = System.nanoTime();
        long totalTime = endTime - startTime;
        System.out.println((double)totalTime /1000000000);        
    }
    
    public static void task4(int[] arr) {
        long startTime = System.nanoTime();
        Array_Algorithms obj = new Array_Algorithms();
        System.out.print("Enter Value for search :");        
        
        Scanner scanner = new Scanner(System.in);
        int value = scanner.nextInt();
        obj.binarySearch(arr, value);
        
        long endTime = System.nanoTime();
        long totalTime = endTime - startTime;
        System.out.println( (double)totalTime /1000000000);        
    }
    
    public static void main(String[] args) {

        //task1();
        // task2();
        
        int[] array = new int[1000];
        for (int i = 0; i < array.length; i++) {
            array[i] = (int) (Math.random() * 100);
        }
        task3(array);
        //task4(array);

    }
    
}

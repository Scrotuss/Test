/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 * adding this line for see how git works
 */
package javaapplication1; 

import java.lang.Math;

/**
 *
 * @author Roxanji
 */
public class JavaApplication1 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        int[] array1 = {1,2,3,4};
        int[] array2 = {2,4,6,8};
        
        
        System.out.println(totalDiff(array1, array2, array1.length));
        System.out.println(totalDiff(array1, array2, array1.length - 1));
        System.out.println(totalDiff(array1, array2, array1.length - 2));
        System.out.println(totalDiff(array1, array2, array1.length - 3));
        System.out.println(totalDiffRec(array1, array2, array1.length));

        
    }
    
    public static int totalDiffRec(int[] a, int[] b, int size){
        if(size == 0) return 0;
        int last = Math.abs(a[size - 1] - b[size -1]);
        int diff = totalDiffRec(a, b, size - 1) + last;
        
        return diff;
    }
    
    
    public static int totalDiff(int[] a, int[] b, int size){
        int diff = 0;
        for(int i = 0; i < size; i++){
            diff += Math.abs(a[i] - b[i]);
        }
        
        return diff;
    }
    
}

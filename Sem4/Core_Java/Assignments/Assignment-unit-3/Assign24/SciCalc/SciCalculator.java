package Assign24.SciCalc;

import Assign24.Calc.Calculator;

public class SciCalculator {

  static void squareroot(int number) {
    System.out.println("Square root of number is : " + Math.sqrt(number));
  }

  public static void main(String[] args) {
    Calculator calculator = new Calculator();
    calculator.summ(12, 24);
  }
}
//import javax.swing.*;
import java.math.*;

public class multiplyDigits {

private static Long largestProduct(BigInteger bigNumber, Integer numberDigits) {
  long product = 0, tempProduct = 0; 
  Integer index = 0, jindex = 0;
  String digitString = bigNumber.toString();
  Integer[] digitArray = new Integer[digitString.length()];
  for (index = 0; index < digitString.length(); index++) {
    digitArray[index] = new Integer(digitString.charAt(index) - '0');
  }
  for (index = 0; index <= digitArray.length - numberDigits; index++) {
    tempProduct = 1;
    for (jindex = 0; jindex < numberDigits; jindex++) {
      tempProduct *= digitArray[index + jindex];
    }
    if (tempProduct > product) {
      for (jindex = 0; jindex < numberDigits - 1; jindex++) {
        //System.out.print(digitArray[index + jindex] + " * ");
      }
      //System.out.println(digitArray[index + jindex] + " = " + tempProduct);
      product = tempProduct;
    }
  }
  return product;
}

public static void main(String[] args) {
  if (args.length != 1) {
    System.out.println("Usage: java multiplyDigits [digits]");
    System.exit(1);
  }
  Integer numberDigits =  Integer.parseInt(args[0]);
  BigInteger bigBoy = new BigInteger("7316717653133062491922511967442657474235534919493496983520312774506326239578318016984801869478851843858615607891129494954595017379583319528532088055111254069874715852386305071569329096329522744304355766896648950445244523161731856403098711121722383113622298934233803081353362766142828064444866452387493035890729629049156044077239071381051585930796086670172427121883998797908792274921901699720888093776657273330010533678812202354218097512545405947522435258490771167055601360483958644670632441572215539753697817977846174064955149290862569321978468622482839722413756570560574902614079729686524145351004748216637048440319989000889524345065854122758866688116427171479924442928230863465674813919123162824586178664583591245665294765456828489128831426076900422421902267105562632111110937054421750694165896040807198403850962455444362981230987879927244284909188845801561660979191338754992005240636899125607176060588611646710940507754100225698315520005593572972571636269561882670428252483600823257530420752963450");
  System.out.println("The largest product of " + numberDigits + " consecutive digits is " + largestProduct(bigBoy, numberDigits));
}

} // class multiplyDigits
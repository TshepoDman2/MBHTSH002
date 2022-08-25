#include <stdio.h>
#include <math.h>
#define TITLE "DECIMAL TO RADIX-i converter"
#define AUTHOR "Tshepo Mbhanyele"
#define DATE 2022
#define arrSize 200




void Dec2RadixI(int decValue , int radValue){
     
    // selecting the corresponding code to run for the entered radix/base 
    switch(radValue){
        //binary conversion
        case 2:         
          // declaring an array that is going to store the remainders of the division process
          // declaring and initializing a variable length to track the size of the array
          // setting num1 equal to decValue
           int remArr1[arrSize] , lengthArr1 = 0 , num1 = decValue ; 
           int posArr1 = 0 ; // this will keep track of array indexes
        
           // if the decimal number happens to be zero 
           // don't even try converting it will always be zero
           if(num1 == 0){
            printf("The radix-%d value is 0",radValue);
            break;
           }
           // loop runs until the division produces a quotient of 0
           // while filling up remainder array with the remainders of the division 

           while(num1 > 0){
            // finding the remainder and storing it in the array
            remArr1[posArr1] = num1%2;
            // finding the quotient and storing it back into num so we can go on with the division

            num1 = num1/2 ;

            posArr1++;
            lengthArr1 ++ ; // keeping track of the size of array.
            }

          // converting the decimal number to its binary representation 
          // by printing the elements in the remiander array backwards

          printf("The radix-%d value is ",radValue);

        
          // printing the elements in the remainder array backwards
          for(posArr1 = lengthArr1-1; posArr1 >= 0 ; posArr1--){
            printf("%d",remArr1[posArr1]);
          }
          break;

        // trinary conversion 
        case 3:
           
           // declaring an array that is going to store the remainders of the division process
           // declaring and initializing a variable length to track the size of the array
           // setting num1 equal to decValue
           int remArr2[arrSize] , lengthArr2 = 0 , num2 = decValue ; 
           int posArr2 = 0 ; // this will keep track of array indexes

           // if the decimal number happens to be zero 
           // don't even try converting it will always be zero
           if(num2 == 0){
            printf("The radix-%d value is 0",radValue);
            break;
           }

           // loop runs until the division produces a quotient of 0
           // while filling up remainder array with the remainders of the division
           while(num2 > 0){
            // finding the remainder and storing it in the array
            remArr2[posArr2] = num2%3;

            // finding the quotient and storing it back into num so we can go on with the division
            num2 = num2/3 ;

            posArr2++;
            lengthArr2++ ; // keeping track of the size of array.
           }

           // converting the decimal number to its trinary or base3  representation by 
           // reading the array of remianders backwards since the most significant digits
           // starts from the end of the array

           printf("The radix-%d value is ",radValue);
           // loop to read remiander array backwards
           for(posArr2 = lengthArr2-1; posArr2 >= 0 ; posArr2--){
            printf("%d",remArr2[posArr2]);
           }
           break;
        
        // Base 4 conversion
        case 4:
          

          // declaring an array that is going to store the remainders of the division process
          // declaring and initializing a variable length to track the size of the array
          // setting num1 equal to decValue
        

          int remArr3[arrSize] , lengthArr3 = 0 , num3 = decValue ; 
          int posArr3 = 0 ; // this will keep track of array indexes

          // if the decimal number happens to be zero 
          // don't even try converting it will always be zero
          if(num3 == 0){
            printf("The radix-%d value is 0",radValue);
            break;
          }

          // loop runs until the division produces a quotient of 0
          // while filling up remainder array with the remainders of the division

          while(num3 > 0){
            // finding the remainder and storing it in the array
            remArr3[posArr3] = num3%4;

            // finding the quotient and storing it back into num so we can go on with the division
            num3 = num3/4 ;
            
            posArr3++;
            lengthArr3++ ; // keeping track of the size of array.
        }

          // converting the decimal number to its trinary or base-i  representation by 
          // reading the array of remianders backwards since the most significant digits

          printf("The radix-%d value is ",radValue);

          // loop to read remiander array backwards to get the base-i representation
          for(posArr3 = lengthArr3-1; posArr3 >= 0 ; posArr3--){
            printf("%d",remArr3[posArr3]);
          }
          break;

        // Base 5 conversion
        case 5:
        
          // declaring an array that is going to store the remainders of the division process
          // declaring and initializing a variable length to track the size of the array
          // setting num1 equal to decValue
        

          int remArr4[arrSize] , lengthArr4 = 0 , num4 = decValue ; 
          int posArr4 = 0 ; // this will keep track of array indexes

          // if the decimal number happens to be zero 
          // don't even try converting it will always be zero
          if(num4 == 0){
            printf("The radix-%d value is 0",radValue);
            break;
          }

          // loop runs until the division produces a quotient of 0
          // while filling up remainder array with the remainders of the division

          while(num4 > 0){
            // finding the remainder and storing it in the array
            remArr4[posArr4] = num4%5;

            // finding the quotient and storing it back into num so we can go on with the division
            num4 = num4/5 ;
            
            posArr4++;
            lengthArr4++ ; // keeping track of the size of array.

            }

          // converting the decimal number to its base-i representation by 
          // reading the array of remianders backwards since the most significant digits
          // starts from the end of the array

          printf("The radix-%d value is ",radValue);
          // loop to read remiander array backwards
          for(posArr4 = lengthArr4-1; posArr4 >= 0 ; posArr4--){
            printf("%d",remArr4[posArr4]);
          }
          break;

    // Base six conversion
    case 6:  
        // declaring an array that is going to store the remainders of the division process
        // declaring and initializing a variable length to track the size of the array
        // setting num1 equal to decValue
        

        int remArr5[arrSize] , lengthArr5 = 0 , num5 = decValue ; 
        int posArr5 = 0 ; // this will keep track of array indexes

        // if the decimal number happens to be zero 
        // don't even try converting it will always be zero
        if(num5 == 0){
            printf("The radix-%d value is 0",radValue);
            break;
        }

        // loop runs until the division produces a quotient of 0
        // while filling up remainder array with the remainders of the division

        while(num5 > 0){

            // finding the remainder and storing it in the array
            remArr5[posArr5] = num5%6;

            // finding the quotient and storing it back into num so we can go on with the division
            num5 = num5/6 ;
            
            posArr5++;
            lengthArr5++ ; // keeping track of the size of array.

        }

        // converting the decimal number to its base_i  representation by 
        // reading the array of remianders backwards since the most significant digits
        // starts from the end of the array

        printf("The radix-%d value is ",radValue);
        // loop to read remiander array backwards
        for(posArr5 = lengthArr5-1; posArr5 >= 0 ; posArr5--){

        printf("%d",remArr5[posArr5]);

        }
        break;

    // Base seven conversion

    case 7:  
        // declaring an array that is going to store the remainders of the division process
        // declaring and initializing a variable length to track the size of the array
        // setting num1 equal to decValue

        int remArr6[arrSize] , lengthArr6 = 0 , num6 = decValue ; 
        int posArr6 = 0 ; // this will keep track of array indexes

        // if the decimal number happens to be zero 
        // don't even try converting it will always be zero
        if(num6 == 0){
            printf("The radix-%d value is 0",radValue);
            break;
        }

        // loop runs until the division produces a quotient of 0
        // while filling up remainder array with the remainders of the division

        while(num6 > 0){

            // finding the remainder and storing it in the array
            remArr6[posArr6] = num6%7;

            // finding the quotient and storing it back into num so we can go on with the division
            num6 = num6/7 ;
            
            posArr6++;
            lengthArr6++ ; // keeping track of the size of array. 

        }

        // converting the decimal number to its base-i  representation by 
        // reading the array of remianders backwards since the most significant digits
        // starts from the end of the array

        printf("The radix-%d value is ",radValue);
        // loop to read remiander array backwards
        for(posArr6 = lengthArr6-1; posArr6 >= 0 ; posArr6--){

        printf("%d",remArr6[posArr6]);

        }
        break;

    // Octal conversion
    case 8:  

        // declaring an array that is going to store the remainders of the division process
        // declaring and initializing a variable length to track the size of the array
        // setting num1 equal to decValue
        

        int remArr7[arrSize] , lengthArr7 = 0 , num7 = decValue ; 
        int posArr7 = 0 ; // this will keep track of array indexes

        // if the decimal number happens to be zero 
        // don't even try converting it will always be zero
        if(num7 == 0){
            printf("The radix-%d value is 0",radValue);
            break;
        }
        

        // loop runs until the division produces a quotient of 0
        // while filling up remainder array with the remainders of the division

        while(num7 > 0){

            // finding the remainder and storing it in the array
            remArr7[posArr7] = num7%8;

            // finding the quotient and storing it back into num so we can go on with the division
            num7 = num7/8 ;
            
            posArr7++;
            lengthArr7++ ; // keeping track of the size of array.

        }

        // converting the decimal number to its trinary or base3  representation by 
        // reading the array of remianders backwards since the most significant digits
        // starts from the end of the array

        printf("The radix-%d value is ",radValue);
        // loop to read remiander array backwards
        for(posArr7 = lengthArr7-1; posArr7 >= 0 ; posArr7--){
            printf("%d",remArr7[posArr7]);
        }
        break;

    // Base 9 Conversion
    case 9: 

        // declaring an array that is going to store the remainders of the division process
        // declaring and initializing a variable length to track the size of the array
        // setting num1 equal to decValue
        

        int remArr8[arrSize] , lengthArr8 = 0 , num8 = decValue ; 
        int posArr8 = 0 ; // this will keep track of array indexes

        // if the decimal number happens to be zero 
        // don't even try converting it will always be zero
        if(num8 == 0){
            printf("The radix-%d value is 0",radValue);
            break;
        }

        // loop runs until the division produces a quotient of 0
        // while filling up remainder array with the remainders of the division

        while(num8 > 0){

            // finding the remainder and storing it in the array
            remArr8[posArr8] = num8%9;

            // finding the quotient and storing it back into num so we can go on with the division
            num8 = num8/9 ;
            
            posArr8++;
            lengthArr8++ ; // keeping track of the size of array

        }

        // converting the decimal number to its base-i  representation by 
        // reading the array of remianders backwards since the most significant digits
        // starts from the end of the array

        printf("The radix-%d value is ",radValue);
        // loop to read remiander array backwards
        for(posArr8 = lengthArr8-1; posArr8 >= 0 ; posArr8--){
            printf("%d",remArr8[posArr8]);
        }
        break;

    // decimal conversion
    case 10: 

        // in this case just print the decimal number enetered
        printf("The radix-%d value is ",radValue);
        break;
    // Base 11 conversion

    case 11: 
        // declaring an array that is going to store the remainders of the division process
        // declaring and initializing a variable length to track the size of the array
        // setting num1 equal to decValue
        

        int remArr10[arrSize] , lengthArr10 = 0 , num10 = decValue ; 
        int posArr10 = 0 ; // this will keep track of array indexes

        // if the decimal number happens to be zero 
        // don't even try converting it will always be zero
        if(num10 == 0){
            printf("The radix-%d value is 0",radValue);
            break;
        }

        // loop runs until the division produces a quotient of 0
        // while filling up remainder array with the remainders of the division

        while(num10 > 0){

            // finding the remainder and storing it in the array
            remArr10[posArr10] = num10%11;

            // finding the quotient and storing it back into num so we can go on with the division
            num10 = num10/11 ;
            
            posArr10++;
            lengthArr10++ ; // keeping track of the size of array. 

        }

        // converting the decimal number to its trinary base-i  representation by 
        // reading the array of remianders backwards since the most significant digits
        // starts from the end of the array

        printf("The radix-%d value is ",radValue);
        // loop to read remiander array backwards
        for(posArr10 = lengthArr10-1; posArr10 >= 0 ; posArr10--){

            switch(remArr10[posArr10]){

                //since we are now in number system greater than the common ten digits(ie. run out common digits),
                //any remainder greater than 9 ougt to be represented by its
                //corresponding digit , in this case letters of the english alaphabet,
                // A for 10 up to F for 15

                case 10:
                printf("A");
                break;

                default:
                // if less than 10 print the digit itself
                printf("%d",remArr10[posArr10]);
            }       

        }
        break;
    
    // Base 12 conversion
    case 12: 
        
        // declaring an array that is going to store the remainders of the division process
        // declaring and initializing a variable length to track the size of the array
        // setting num1 equal to decValue
        

        int remArr11[arrSize] , lengthArr11 = 0 , num11 = decValue ; 
        int posArr11 = 0 ; // this will keep track of array indexes

        // if the decimal number happens to be zero 
        // don't even try converting it will always be zero
        if(num11 == 0){
            printf("The radix-%d value is 0",radValue);
            break;
        }

        // loop runs until the division produces a quotient of 0
        // while filling up remainder array with the remainders of the division

        while(num11 > 0){

            // finding the remainder and storing it in the array
            remArr11[posArr11] = num11%12;

            // finding the quotient and storing it back into num so we can go on with the division
            num11 = num11/12 ;
            
            posArr11++;
            lengthArr11++ ; // keeping track of the size of array. 

        }

        // converting the decimal number to base i  representation by 
        // reading the array of remianders backwards since the most significant digits
        // starts from the end of the array

        printf("The radix-%d value is ",radValue);
        // loop to read remiander array backwards
        for(posArr11 = lengthArr11-1; posArr11 >= 0 ; posArr11--){

            switch(remArr11[posArr11]){

                //since we are now in number system greater than the common ten digits
                //any remainder greater than 9 ougt to be represented by its
                //corresponding digit , in this case letters of the english alaphabet 
                // A for 10 up to F for 15

                case 10:
                printf("A");
                break;

                case 11:
                printf("B");
                break;

                default:
                printf("%d",remArr11[posArr11]);

            }

        

        }

        break;
    // Base 13 conversion
    case 13: 
        
        // declaring an array that is going to store the remainders of the division process
        // declaring and initializing a variable length to track the size of the array
        // setting num1 equal to decValue
        

        int remArr12[arrSize] , lengthArr12 = 0 , num12 = decValue ; 
        int posArr12 = 0 ; // this will keep track of array indexes

        // if the decimal number happens to be zero 
        // don't even try converting it will always be zero
        if(num12 == 0){
            printf("The radix-%d value is 0",radValue);
            break;
        }

        // loop runs until the division produces a quotient of 0
        // while filling up remainder array with the remainders of the division

        while(num12 > 0){

            // finding the remainder and storing it in the array
            remArr12[posArr12] = num12%13;

            // finding the quotient and storing it back into num so we can go on with the division
            num12 = num12/13 ;
            
            posArr12++;
            lengthArr12++ ; // keeping track of the size of array

        }

        // converting the decimal number to base-i representation by 
        // reading the array of remianders backwards since the most significant digits
        // starts from the end of the array

        printf("The radix-%d value is ",radValue);
        // loop to read remiander array backwards
        for(posArr12 = lengthArr12-1; posArr12 >= 0 ; posArr12--){

            switch(remArr12[posArr12]){

                //since we are now in number system greater than the run common ten digits
                //any remainder greater than 9 ougt to be represented by its
                //corresponding digit , in this case letters of the english alaphabet
                // A for 10 upto F for 15

                case 10:
                printf("A");
                break;

                case 11:
                printf("B");
                break;

                case 12:
                printf("C");
                break;

                default:
                printf("%d",remArr12[posArr12]);

            }

        }
        break;

    // Base 14 conversion
    case 14:
        
        // declaring an array that is going to store the remainders of the division process
        // declaring and initializing a variable length to track the size of the array
        // setting num1 equal to decValue
        

        int remArr13[arrSize] , lengthArr13 = 0 , num13 = decValue ; 
        int posArr13 = 0 ; // this will keep track of array indexes

        // if the decimal number happens to be zero 
        // don't even try converting it will always be zero
        if(num13 == 0){
            printf("The radix-%d value is 0",radValue);
            break;
           }

        // loop runs until the division produces a quotient of 0
        // while filling up remainder array with the remainders of the division

        while(num13 > 0){

            // finding the remainder and storing it in the array
            remArr13[posArr13] = num13%14;

            // finding the quotient and storing it back into num so we can go on with the division
            num13 = num13/14 ;
            
            posArr13++;
            lengthArr13++ ; // keeping track of the size of array.

        }

        // converting the decimal number to its base-i representation by 
        // reading the array of remianders backwards since the most significant digits
        // starts from the end of the array

        printf("The radix-%d value is ",radValue);
        // loop to read remiander array backwards
        for(posArr13 = lengthArr13-1; posArr13 >= 0 ; posArr13--){

            switch(remArr13[posArr13]){

                //since we are now in number system greater than ten(ie. run out common digits),
                //any remainder greater than 9 ougt to be represented by its
                //corresponding digit , in this case letters of the english alaphabet 
                // A for 10 upto F for 15

                case 10:
                printf("A");
                break;

                case 11:
                printf("B");
                break;

                case 12:
                printf("C");

                case 13:
                printf("D");
                break;

                default:
                printf("%d",remArr13[posArr13]);

            }

        

        }
        break;

    // Base 15 conversion
    case 15:  
        
        // declaring an array that is going to store the remainders of the division process
        // declaring and initializing a variable length to track the size of the array
        // setting num1 equal to decValue
        

        int remArr14[arrSize] , lengthArr14 = 0 , num14 = decValue ; 
        int posArr14 = 0 ; // this will keep track of array indexes

        // if the decimal number happens to be zero 
        // don't even try converting it will always be zero
        if(num14 == 0){
            printf("The radix-%d value is 0",radValue);
            break;
            }

        // loop runs until the division produces a quotient of 0
        // while filling up remainder array with the remainders of the division

        while(num14 > 0){

            // finding the remainder and storing it in the array
            remArr14[posArr14] = num14%15;

            // finding the quotient and storing it back into num so we can go on with the division
            num14 = num14/15 ;
            
            posArr14++;
            lengthArr14++ ; // keeping track of the size of array.



            //finding the remainders and 

        }

        // converting the decimal number to its base-i  representation by 
        // reading the array of remianders backwards since the most significant digits
        // starts from the end of the array

        printf("The radix-%d value is ",radValue);
        // loop to read remiander array backwards
        for(posArr14 = lengthArr14-1; posArr14 >= 0 ; posArr14--){

            switch(remArr14[posArr14]){

                //since we are now in number system greater than ten(ie. run out common digits),
                //any remainder greater than 9 ougt to be represented by its
                //corresponding digit , in this case letters of the english alaphabet 
                // A for 10 upto F for 15

                case 10:
                printf("A");
                break;

                case 11:
                printf("B");
                break;

                case 12:
                printf("C");
                break;
                
                case 13:
                printf("D");
                break;

                case 14:
                printf("E");
                break;

                default:
                printf("%d",remArr14[posArr14]);

            }
        }
        break;

    //Hexadecimal conversion
    case 16:  
        // declaring an array that is going to store the remainders of the division process
        // declaring and initializing a variable length to track the size of the array
        // setting num1 equal to decValue
        int remArr15[arrSize] , lengthArr15 = 0 , num15 = decValue ; 
        int posArr15 = 0 ; // this will keep track of array indexes

        // if the decimal number happens to be zero 
        // don't even try converting it will always be zero
        if(num15 == 0){
            printf("The radix-%d value is 0",radValue);
            break;
        }

        // loop runs until the division produces a quotient of 0
        // while filling up remainder array with the remainders of the division

        while(num15 > 0){

            // finding the remainder and storing it in the array
            remArr15[posArr15] = num15%16;

            // finding the quotient and storing it back into num so we can go on with the division
            num15 = num15/16 ;
            
            posArr15++;
            lengthArr15++ ; // keeping track of the size of array.

        }
        // converting the decimal number to its base-i representation by 
        // reading the array of remianders backwards since the most significant digits
        // starts from the end of the array

        printf("The radix-%d value is ",radValue);
        // loop to read remiander array backwards
        for(posArr15 = lengthArr15-1; posArr15 >= 0 ; posArr15--){

            switch(remArr15[posArr15]){

                //since we are now in number system greater than ten(ie. run out common digits),
                //any remainder greater than 9 ougt to be represented by its
                //corresponding digit , in this case letters of the english alaphabet,
                // A for 10 upto F for 15

                case 10:
                printf("A");
                break;

                case 11:
                printf("B");
                break;

                case 12:
                printf("C");
                break;

                case 13:
                printf("D");
                break;

                case 14:
                printf("E");
                break;

                case 15:
                printf("F");
                break;

                default:
                printf("%d",remArr15[posArr15]);
            }
        }
        break;
    }
}


int main(){


    // A for loop to print the bottom asterisks 
    for(int i = 0 ;i < 29;i++){

        printf("*");

    }

    printf("\n");
    printf(" %s\n",TITLE);
    printf(" Written by:%s\n",AUTHOR);
    printf(" Date:%d",DATE);
    printf("\n");
    // A for loop to print the bottom asterisks 
    for(int i = 0 ;i < 29;i++){

        printf("*");

    }

    int numToConv;
    int numBase ;
    int terminator = 2;

    while (terminator)
    {

    // prompting user to enter a positive integer number 
    // and then printing the integer they have entered

    printf("\n");
    printf("Enter a decimal number:");
    scanf("%d",&numToConv); 

    // checking if the decimal number entered is less than 0 and if so 
    // we break out of the loop

    if(numToConv < 0 ){
        printf("Exit");
        break;
    }
    else{
        // printing the number user entered    
        printf("You have entered %d\n",numToConv);
        //prompting the user to enter the base number/integer they
        // want to convert to between 2 and 16 and storing it and printing
        printf("Enter a radix for the converter between 2 and 16:");
        scanf("%d",&numBase);
        printf("The radix you have entered is %d\n",numBase);

        // finding the logb(n) of number entered and the printing the result
        double logBaseTwo= log(numToConv)/log(2);
        printf("The log2 of the number is %f\n",logBaseTwo);

        // the decimal number divided by the base/radix
        int baseIntoNumToConv = numToConv/numBase;
        printf("The integer result of the number divided by %d is %d\n",numBase,baseIntoNumToConv);

        // finding the remainder after the division 
        // and printing the result
        int remndr = numToConv%numBase;
        printf("The remiander is %d\n",remndr);
        Dec2RadixI(numToConv,numBase);


    }
        
    }
}
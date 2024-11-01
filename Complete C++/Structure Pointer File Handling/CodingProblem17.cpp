// The code given is trying to do the following: Read the input from the input file input.txt. Output to the file - output.txt stored in the same directory. The output file should contain value that is twice the value of the original input file. Debug this code to solve the problem.






// void userFunction() {
    
//     // Open files in respective modes
//     string inputFilename = "/mnt/codechef/input.txt";
//     string outputFilename = "/mnt/codechef/output.txt";
//     ifstream inputFile(inputFilename);
//     // To write to a file, the stream should be ofstream
//     ofstream outputFile(outputFilename);
    
//     // Read and write the numbers from the file
//     int number;
//     while(inputFile >> number) {
//         outputFile << 2 * number << "\n";
//     }
    
//     // Close the file
//     inputFile.close();
//     outputFile.close();

//     // Display the contents of output.txt    
//     system("cat /mnt/codechef/output.txt");
// }  
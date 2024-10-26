// Read the file and output to console




void userFunction() {
    string filename = "/mnt/codechef/input.txt";
    ifstream MyFile(filename);
    int number;
    
    // Display the numbers from the file
    while(MyFile >> number) cout << number << "\n";
    
    // Close the file
    MyFile.close();
}    
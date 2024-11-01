// You need to find the occurrence of the word - "Codechef" in the file input.txt. Replace all instances of "Codechef" with "CodeChef". Output the file contents to the console





// void userFunction() {
    
//     // Open file in respective mode
//     string file = "/mnt/codechef/input.txt";
//     ifstream myFile(file);
    
//     string search = "Codechef";
//     string replace = "CodeChef";
//     string statement;
//     string buffer;

//     while(myFile >> buffer) {
//         if(buffer == search) {
//             buffer = replace;
//         }
//         statement += buffer;
//         statement += " ";
//     }

//     myFile.close();

//     ofstream myFile2(file);
//     myFile2 << statement << "\n";
//     myFile2.close();
    
//     system("cat /mnt/codechef/input.txt");
// }    
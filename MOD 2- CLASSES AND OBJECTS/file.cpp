// #include <iostream>
// #include <fstream>
// #include <string>
// using namespace std;

// int main()
// {
//     string line;
//     ifstream myfile("eg.txt");
//     if (myfile.is_open())
//     {
//         while (getline(myfile, line))
//         {
//             cout << line << '\n';
//         }
//         myfile.close();
//     }
//     else
//         cout << "Unable to open file";
//     return 0;
// }

// #include <iostream>
// #include <fstream>
// using namespace std;
// int main()
// {
//     ifstream fs;
//     ofstream ft;
//     string str;
//     char sourcefile[50];
//     char destinationfile[50];

//     cout << "Enter Source File with Extension: ";
//     gets(sourcefile);

//     fs.open(sourcefile);

//     if (!fs)
//     {
//         cout << "Error in Opening Source File...!!!";
//         exit(1);
//     }

//     cout << "Enter Destination File with Extension: ";
//     gets(destinationfile);

//     ft.open(destinationfile, ios::app);

//     if (!ft)
//     {
//         cout << "Error in Opening Destination File...!!!";
//         fs.close();
//         exit(2);
//     }

//     if (fs && ft)
//     {
//         while (getline(fs, str))
//         {
//             ft << str << "\n";
//         }
//         cout << "\n\n Source File Date Successfully Copied to Destination File...!!!";
//     }

//     else
//     {
//         cout << "File Cannot Open...!!!";
//     }

//     cout << "\n\n Open Destination File and Check!!!\n";

//     fs.close();
//     ft.close();
// }

// #include <iostream>
// #include <fstream>
// #include <string>
// using namespace std;

// char FileName[] = "eg.txt";

// int main()
// {
//     string line;
//     ifstream inMyStream(FileName);
//     int c = 0;
//     if (inMyStream.is_open())
//     {
//         while (getline(inMyStream, line))
//         {
//             cout << line << endl;
//             c += line.length();
//         }
//         cout << "\n\n"
//              << "Total character In File " << c << endl
//              << endl;
//     }
//     inMyStream.close();
//     return 0;
// }

// #include <iostream>
// #include <fstream>
// using namespace std;

// int main()
// {
//     fstream file;
//     // open file sample.txt in and Write mode
//     file.open("eg.txt", ios::out);

//     if (!file)
//     {
//         cout << "Error in creating file!!!";
//         return 0;
//     }

//     // write A to Z
//     file << "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

//     // print the position
//     cout << "Current position is:" << file.tellp() << endl;
//     file.close();

//     // again open file in read mode
//     file.open("eg.txt", ios::in);

//     if (!file)
//     {
//         cout << "Error in opening file!!!";
//         return 0;
//     }

//     cout << "After opening file position is: " << file.tellg() << endl;

//     // read characters until end of file is not found
//     char ch;

//     while (!file.eof())
//     {
//         cout << "At position : " << file.tellg();
//         // current position
//         file >> ch;
//         // read character from file
//         cout << " Character \"" << ch << "\"" << endl;
//     }
//     // close the file
//     file.close();
//     return 0;
// }

// #include <iostream>
// #include <fstream>
// using namespace std;
// int main()
// {
//     fstream F;
//     char c;

//     // opening a file in input and output mode
//     F.open("my.txt", ios::in | ios::out);

//     // getting current location
//     cout << F.tellg() << endl;

//     // seeing 8 bytes/characters
//     F.seekg(8, ios::beg);

//     // now, getting the current location
//     cout << F.tellg() << endl;

//     // now, seeking 10 more bytes/characters
//     F.seekg(10, ios::cur);

//     // now, getting current location
//     cout << F.tellg() << endl;

//     // again, seeking 7 bytes/characters from beginning
//     F.seekp(7, ios::beg);

//     // writting a character 'Z' at current location
//     F.put('Z');
//     F.seekg(-7, ios::end);

//     // now, printing the current location
//     cout << "End:" << F.tellg() << endl;

//     // extracting one character from current location
//     c = F.get();

//     // printing the character
//     cout << c << endl;

//     // closing the file
//     F.close();
//     return 0;
// }

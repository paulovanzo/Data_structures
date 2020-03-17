#include <iostream>
#include <iomanip>
#include <fstream>
#include <vector>
#include <string>
/* *!
* Print the table ’s header to the terminal ( std :: cout ).
* @param fields_ Reference to the list of header fields to be printed .

void printHeader( const std::vector < std::string > &fields_ ) {
    
    for( auto i : fields_ ){
        std::cout << "+" << std::setw(i.size() + 1) << std::setfill('-');
    }
    std::cout << "+" << std::endl;
    for( auto i : fields_ ){
        std::cout << "|" << std::setw(i.size()) << i;
    }
    std::cout << "|" << std::endl;
    for( auto i : fields_ ){
        std::cout << "+" << std::setw(i.size()+1) << std::setfill('-');
    }
    std::cout << '+' << std::endl;

}
*/

void read_vec(std::vector < std::string > numbers){

    std::string str{""};

    for(size_t i{0}; std::cin.eof(); ++i){
        getline(std::cin,str);
        numbers[i] = str;
    }

}

void print_vec(std::vector < std::string > numbers, std::ofstream &output){

    for( std::string i : numbers){
        output.write(std::cout,output);
    }
    std::cout << "|" << std::endl;

}

int main(){

    /*
    std::vector < std::string > fieldNames = { " ITEM " , " QUANTIDADE " , " VALOR UNITARIO " };
    printHeader ( fieldNames ); // Imprimir cabecalho da tabela .
    Código PrintHeader
    */

    std::ofstream output;

    std::vector < std::string > numbers;

    read_vec(numbers);

    //print_vec(numbers, output);


    return 0;
}
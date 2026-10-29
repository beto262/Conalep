#include <iostream>
#include <string>
#include "compuertas.h"

int pedirBinario(std::string nombre) {
    int v;
    do {
        std::cout << "Ingresa " << nombre << " (0 o 1): ";
        std::cin >> v;  
        if (v != 0 && v != 1) {
            std::cout << "Error: Solo se permite 0 o 1. Intenta de nuevo." << std::endl;
        }
    } while (v != 0 && v != 1);
    return v;
}

int main() {
    int op;
    
        std::cout << "     MENU DE COMPUERTAS LOGICAS      "  << std::endl;
        
        std::cout << " 1. AND    (2 entradas)" << std::endl;
        std::cout << " 2. OR     (2 entradas)" << std::endl;
        std::cout << " 3. NOT    (1 entrada)" << std::endl;
        std::cout << " 4. NAND   (2 entradas)" << std::endl;
        std::cout << " 5. NOR    (2 entradas)" << std::endl;
        std::cout << " 6. XOR    (2 entradas)" << std::endl;      
        std::cout << " 7. XNOR   (2 entradas)" << std::endl;     
        std::cout << " 8. Buffer (1 entrada)" << std::endl;
        std::cout << " 9. Salir" << std::endl;
        std::cout << "-------------------------------------" << std::endl;
        std::cout << "Elige una opcion (1-9): " << std::endl;
        std::cin >> op;

        if (op == 9) {
            std::cout << "Saliendo del programa...";
        
        
       
        }else{
            
            int a, b;

            switch (op) {
              case 1:
                a = pedirBinario("A");
                b = pedirBinario("B");
                std::cout << "[Resultado] AND(" << a << ", " << b << ") = " << compuertaAND(a, b) << std::endl;
                break;

              case 2:
                a = pedirBinario("A");
                b = pedirBinario("B");
                std::cout << "[Resultado] OR(" << a << ", " << b << ") = " << compuertaOR(a, b) << std::endl;
                break;

              case 3:
                a = pedirBinario("A");
                std::cout << "[Resultado] NOT(" << a << ") = " << compuertaNOT(a) << std::endl;
                break;

              case 4:
                a = pedirBinario("A");
                b = pedirBinario("B");
                std::cout << "  [Resultado] NAND(" << a << ", " << b << ") = " << compuertaNAND(a, b) << std::endl;
                break;

              case 5:
                a = pedirBinario("A");
                b = pedirBinario("B");
                std::cout << "  [Resultado] NOR(" << a << ", " << b << ") = " << compuertaNOR(a, b) << std::endl;
                break;      

              case 6: 
                a = pedirBinario("A");
                b = pedirBinario("B");
                std::cout << "[Resultado] XOR(" << a << ", " << b << ") = " << compuertaXOR(a, b) << std::endl;
                break;

              case 7: 
                a = pedirBinario("A");
                b = pedirBinario("B");
                std::cout << "[Resultado] XNOR(" << a << ", " << b << ") = " << compuertaXNOR(a, b) << std::endl;
                break;

              case 8:
                a = pedirBinario("A");
                std::cout << "[Resultado] Buffer(" << a << ") = " << compuertaBuffer(a) << std::endl;
                break;

              default:
                std::cout << "Error: La opcion seleccionada no existe. Intenta de nuevo." << std::endl;
                break;
        
            }
        }


    

    return 0;
}
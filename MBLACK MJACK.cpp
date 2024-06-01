#include "pch.h"
#include "iostream"
#include "conio.h"
#include "time.h"

using namespace System;
using namespace std;

// REALIZAMOS NUESTRAS FUNCIONES:


// FUNCIONES DE FUNCIONAMIENTO.

void cambiar_color_texto(int cambiar_color_texto)
{
    switch (cambiar_color_texto)
    {
    case 1: Console::ForegroundColor = ConsoleColor::Black; break;
    case 2: Console::ForegroundColor = ConsoleColor::DarkBlue; break;
    case 3: Console::ForegroundColor = ConsoleColor::DarkGreen; break;
    case 4: Console::ForegroundColor = ConsoleColor::DarkRed; break;
    case 5: Console::ForegroundColor = ConsoleColor::DarkCyan; break;
    case 6: Console::ForegroundColor = ConsoleColor::DarkYellow; break;
    case 7: Console::ForegroundColor = ConsoleColor::Gray; break;
    case 8: Console::ForegroundColor = ConsoleColor::DarkGray; break;
    case 9: Console::ForegroundColor = ConsoleColor::Blue; break;
    case 10: Console::ForegroundColor = ConsoleColor::Green; break;
    case 11: Console::ForegroundColor = ConsoleColor::Cyan; break;
    case 12: Console::ForegroundColor = ConsoleColor::Red; break;
    case 13: Console::ForegroundColor = ConsoleColor::Magenta; break;
    case 14: Console::ForegroundColor = ConsoleColor::Yellow; break;
    case 15: Console::ForegroundColor = ConsoleColor::White; break;
    }
}

void cambiar_color_fondo(int cambiar_color_fondo)
{
    switch (cambiar_color_fondo)
    {
    case 1: Console::BackgroundColor = ConsoleColor::Black; break;
    case 2: Console::BackgroundColor = ConsoleColor::DarkBlue; break;
    case 3: Console::BackgroundColor = ConsoleColor::DarkGreen; break;
    case 4: Console::BackgroundColor = ConsoleColor::DarkRed; break;
    case 5: Console::BackgroundColor = ConsoleColor::DarkCyan; break;
    case 6: Console::BackgroundColor = ConsoleColor::DarkYellow; break;
    case 7: Console::BackgroundColor = ConsoleColor::Gray; break;
    case 8: Console::BackgroundColor = ConsoleColor::DarkGray; break;
    case 9: Console::BackgroundColor = ConsoleColor::Blue; break;
    case 10: Console::BackgroundColor = ConsoleColor::Green; break;
    case 11: Console::BackgroundColor = ConsoleColor::Cyan; break;
    case 12: Console::BackgroundColor = ConsoleColor::Red; break;
    case 13: Console::BackgroundColor = ConsoleColor::Magenta; break;
    case 14: Console::BackgroundColor = ConsoleColor::Yellow; break;
    case 15: Console::BackgroundColor = ConsoleColor::White; break;
    }
}

void cambiar_posicion(int x, int y) {

    Console::SetCursorPosition(x, y);
}

int randomizar_numeros(int minimo, int maximo) {

    return minimo + rand() % ((maximo + 1) - minimo);
}

// FUNCIONES DE MENÚ DE INICIO.

void mostrar_cuadro_menu(int x, int y) {

    cambiar_posicion(x, y);
    cambiar_color_texto(12);
    for (int i = 1; i <= 30; i++) {

        for (int j = 1; j <= 119; j++) {

            if (i == 1 || i == 30 || j == 1 || j == 119) {
                cout << char(219);
            }
            else {
                cout << " ";
            }

        }
        cout << endl;
    }
    cambiar_color_texto(15);

}

void mostrar_dibujo_carta(int x, int y) {

    for (int i = 1; i <= 15; i++) {
        cambiar_posicion(x, y + i);
        for (int j = 1; j <= 16; j++) {

            if (i == 1 || j == 1 || i == 15 || j == 16) {
                cambiar_color_texto(7);
                cout << char(219);
            }
            else {
                cambiar_color_texto(15);
                cout << char(219);
            }

        }
        cout << endl;
    }
}

int mostrar_simbolo_carta(int forma) {

    int seleccion;

    switch (forma) {

    case 1:
        seleccion = 3;
        break;
    case 2:
        seleccion = 4;
        break;
    case 3:
        seleccion = 5;
        break;
    case 4:
        seleccion = 6;
        break;

    default:
        break;
    }
    return seleccion;
}

void mostrar_cartas_fondo() {

    // VARIABLE QUE HARÁ CAMBIAR EL SIMBOLO DE LAS CARTAS.
    int random_valor_carta1;
    int random_valor_carta2;
    int random_valor_carta3;
    int random_valor_carta4;

    // VARIABLES QUE CONTENDRÁN LA SELECCIÓN DE LOS SIMBOLOS DE LAS CARTAS, LUEGO SE MUESTRAN CON UN CHAR.
    int seleccion_forma_carta_1;
    int seleccion_forma_carta_2;
    int seleccion_forma_carta_3;
    int seleccion_forma_carta_4;


    // CARTA 1

    // RANDOMIZA UN NUMERO DEL 1 AL 4, YA QUE SON SOLO 4 SÍMBOLOS EXISTENTES.
    random_valor_carta1 = randomizar_numeros(1, 4);
    // CON EL VALOR DEL NUMERO RANDOM SE UTILIZA LA FUNCIÓN PARA QUE ADQUIERA EL NUMERO CHAR DEL SÍMBOLO.
    seleccion_forma_carta_1 = mostrar_simbolo_carta(random_valor_carta1);
    // MUESTRA EL DIBUJO DE LA CARTA VACIA.
    mostrar_dibujo_carta(4, 13);
    // MUESTRA EL VALOR Y SIMBOLO.
    cambiar_color_texto(12);
    cambiar_color_fondo(15);
    cambiar_posicion(9, 18); cout << char(seleccion_forma_carta_1); cambiar_posicion(14, 18); cout << char(seleccion_forma_carta_1);
    cambiar_posicion(9, 21); cout << char(seleccion_forma_carta_1); cambiar_posicion(14, 21); cout << char(seleccion_forma_carta_1);
    cambiar_posicion(9, 24); cout << char(seleccion_forma_carta_1); cambiar_posicion(14, 24); cout << char(seleccion_forma_carta_1);
    cambiar_color_fondo(1);

    // CARTA 2

    // SE UTILIZA EL FOR PARA CREAR UNA CARTA DIFERENTE POR QUE ES MÁS PEQUEÑA
    for (int i = 1; i <= 13; i++) {
        cambiar_posicion(19, 15 + i);
        for (int j = 1; j <= 15; j++) {

            if (i == 1 || j == 1 || i == 13 || j == 15) {
                cambiar_color_texto(7);
                cout << char(219);
            }
            else {
                cambiar_color_texto(15);
                cout << char(219);
            }

        }
        cout << endl;
    }

    // RANDOMIZA UN NUMERO DEL 1 AL 4, YA QUE SON SOLO 4 SÍMBOLOS EXISTENTES.
    random_valor_carta2 = randomizar_numeros(1, 4);
    // CON EL VALOR DEL NUMERO RANDOM SE UTILIZA LA FUNCIÓN PARA QUE ADQUIERA EL NUMERO CHAR DEL SÍMBOLO.
    seleccion_forma_carta_2 = mostrar_simbolo_carta(random_valor_carta2);
    // MUESTRA EL VALOR Y SIMBOLO.
    cambiar_color_texto(1);
    cambiar_color_fondo(15);
    cambiar_posicion(26, 19); cout << char(seleccion_forma_carta_2);
    cambiar_posicion(26, 25); cout << char(seleccion_forma_carta_2);
    cambiar_color_fondo(1);


    // CARTA 3


    for (int i = 1; i <= 13; i++) {
        cambiar_posicion(80, 15 + i);
        for (int j = 1; j <= 15; j++) {

            if (i == 1 || j == 1 || i == 13 || j == 15) {
                cambiar_color_texto(7);
                cout << char(219);
            }
            else {
                cambiar_color_texto(15);
                cout << char(219);
            }

        }
        cout << endl;
    }

    // RANDOMIZA UN NUMERO DEL 1 AL 4, YA QUE SON SOLO 4 SÍMBOLOS EXISTENTES.
    random_valor_carta3 = randomizar_numeros(1, 4);
    // CON EL VALOR DEL NUMERO RANDOM SE UTILIZA LA FUNCIÓN PARA QUE ADQUIERA EL NUMERO CHAR DEL SÍMBOLO.
    seleccion_forma_carta_3 = mostrar_simbolo_carta(random_valor_carta3);
    // MUESTRA EL VALOR Y SIMBOLO.
    cambiar_color_texto(12);
    cambiar_color_fondo(15);
    cambiar_posicion(87, 19); cout << char(seleccion_forma_carta_3);
    cambiar_posicion(87, 25); cout << char(seleccion_forma_carta_3);
    cambiar_color_fondo(1);


    // CARTA 4

    // RANDOMIZA UN NUMERO DEL 1 AL 4, YA QUE SON SOLO 4 SÍMBOLOS EXISTENTES.
    random_valor_carta4 = randomizar_numeros(1, 4);
    // CON EL VALOR DEL NUMERO RANDOM SE UTILIZA LA FUNCIÓN PARA QUE ADQUIERA EL NUMERO CHAR DEL SÍMBOLO.
    seleccion_forma_carta_4 = mostrar_simbolo_carta(random_valor_carta4);
    // MUESTRA EL DIBUJO DE LA CARTA VACIA.
    mostrar_dibujo_carta(94, 13);
    // MUESTRA EL VALOR Y SIMBOLO.
    cambiar_color_texto(1);
    cambiar_color_fondo(15);
    cambiar_posicion(99, 18); cout << char(seleccion_forma_carta_4); cambiar_posicion(104, 18); cout << char(seleccion_forma_carta_4);
    cambiar_posicion(99, 24); cout << char(seleccion_forma_carta_4); cambiar_posicion(104, 24); cout << char(seleccion_forma_carta_4);
    cambiar_color_fondo(1);


}

void mostrar_titulo_menu() {

    cambiar_color_texto(15);
    cambiar_posicion(12, 4); cout << "            ____  _            _                                         _            _    ";
    cambiar_posicion(12, 5); cout << "           |  _ \\| |          | |            ___                        | |          | |   ";
    cambiar_posicion(12, 6); cout << "  _ __ ___ | |_) | | __ _  ___| | __        ( _ )         _ __ ___      | | __ _  ___| | __";
    cambiar_posicion(12, 7); cout << " | '_ ` _ \\|  _ <| |/ _` |/ __| |/ /        / _ \\/\\      | '_ ` _ \\ _   | |/ _` |/ __| |/ /";
    cambiar_posicion(12, 8); cout << " | | | | | | |_) | | (_| | (__|   <        | (_>  <      | | | | | | |__| | (_| | (__|   < ";
    cambiar_posicion(12, 9); cout << " |_| |_| |_|____/|_|\\__,_|\\___|_|\\_\\        \\___/\\/      |_| |_| |_|\\____/ \\__,_|\\___|_|\\_\\";
}

int seleccionar_menu_de_inicio() {

    int opcion;
    cambiar_color_texto(14);
    cambiar_posicion(49, 15); cout << "MEN" << char(233) << " DE INICIO";
    cambiar_color_texto(15);
    cambiar_posicion(49, 17); cout << "1. JUGAR";
    cambiar_posicion(49, 18); cout << "2. INSTRUCCIONES";
    cambiar_posicion(49, 19); cout << "3. CR" << char(144) << "DITOS";
    cambiar_posicion(49, 20); cout << "4. SALIR";

    cambiar_color_texto(14);
    cambiar_posicion(39, 22); cout << "ESCOGE UNA OPCI" << char(224) << "N DE PREFERENCIA: ";
    do {
        cambiar_color_texto(15);
        cambiar_posicion(73, 22); cin >> opcion;

    } while (opcion < 1 || opcion > 4);


    return opcion;
}

//FUNCIONES DE INSTRUCCIONES

void mostrar_titulo_instrucciones() {

    cambiar_color_texto(15);
    cambiar_posicion(26, 1); cout << "  _____       _                       _                       ";
    cambiar_posicion(26, 2); cout << " |_   _|     | |                     (_)                      ";
    cambiar_posicion(26, 3); cout << "   | |  _ __ | |_ _ __ _   _  ___ ___ _  ___  _ __   ___  ___ ";
    cambiar_posicion(26, 4); cout << "   | | | '_ \\| __| '__| | | |/ __/ __| |/ _ \\| '_ \\ / _ \\/ __|";
    cambiar_posicion(26, 5); cout << "  _| |_| | | | |_| |  | |_| | (_| (__| | (_) | | | |  __/\\__ \\";
    cambiar_posicion(26, 6); cout << " |_____|_| |_|\\__|_|   \\__,_|\\___\\___|_|\\___/|_| |_|\\___||___/";
}

void mostrar_texto_instrucciones() {

    // OBJETIVO
    cambiar_color_texto(14);
    cambiar_posicion(53, 9); cout << "OBJETIVO";
    cambiar_color_texto(15);
    cambiar_posicion(39, 10); cout << "EL OBJETIVO DEL JUEGO ES SACAR CARTAS"; cambiar_posicion(47, 11); cout << "Y ACUMULAR HASTA 21";

    // ¿CÓMO JUGAR?
    cambiar_color_texto(14);
    cambiar_posicion(52, 13); cout << char(168) << "C" << char(224) << "MO JUGAR?";
    cambiar_color_texto(15);
    cambiar_posicion(36, 14); cout << " 1)SE REPARTEN LAS CARTAS A LOS JUGADORES"; cambiar_posicion(36, 15); cout << "2)SI EL JUGADOR QUIERE OTRA CARTA LO PIDE";
    cambiar_posicion(39, 16); cout << "3)SE VAN SUMANDO LOS VALORES Y DEBEN"; cambiar_posicion(53, 17); cout << "MOSTRARSE";
    cambiar_posicion(39, 18); cout << "4)SI EL VALOR ACUMULADO SOBREPASA 21"; cambiar_posicion(38, 19); cout << "AUTOM" << char(181) << "TICAMENTE ES TURNO DEL JUGADOR 2";
    cambiar_posicion(35, 20); cout << "5)GANA EL JUGADOR CON M" << char(181) << "S 21 O UN APROXIMADO";

    // NÚMERO DE PARTIDAS
    cambiar_color_texto(14);
    cambiar_posicion(49, 22); cout << "N" << char(233) << "MERO DE PARTIDAS";
    cambiar_color_texto(15);
    cambiar_posicion(40, 23); cout << "SE ESTABLECEN 5 <= N <= 10 PARTIDAS"; cambiar_posicion(39, 24); cout << "Y SE VAN REGISTRANDO LAS PUNTUACIONES.";
}

// FUNCIONES DE CRÉDITOS

void mostrar_titulo_creditos() {

    cambiar_color_texto(15);
    cambiar_posicion(35, 3); cout << "   _____       __     _   _   _            ";
    cambiar_posicion(35, 4); cout << "  / ____|     /_/    | | (_) | |           ";
    cambiar_posicion(35, 5); cout << " | |     _ __ ___  __| |  _  | |_ ___  ___ ";
    cambiar_posicion(35, 6); cout << " | |    | '__/ _ \\/ _` | | | | __/ _ \\/ __|";
    cambiar_posicion(35, 7); cout << " | |____| | |  __/ (_| | | | | || (_) \\__ \\";
    cambiar_posicion(35, 8); cout << "  \\_____|_|  \\___|\\__,_| |_|  \\__\\___/|___/";
}

void mostrar_texto_creditos() {

    // OBJETIVO
    cambiar_color_texto(14);
    cambiar_posicion(54, 11); cout << "ALUMNOS";
    cambiar_color_texto(15);
    cambiar_posicion(45, 13); cout << "NESTOR ALONSO ROJAS TELLO "; cambiar_posicion(53, 14); cout << "U202317099";
    cambiar_posicion(44, 16); cout << "RENATO FRANCESCO REGAL VIDAL "; cambiar_posicion(53, 17); cout << "U20241A859";
    cambiar_posicion(44, 19); cout << "KIARA ALEXANDRA SOTERO CH" << char(181) << "VEZ "; cambiar_posicion(53, 20); cout << "U202418117";
    cambiar_posicion(44, 22); cout << "ELVIS OSWALDO COCHACHI CERDAN "; cambiar_posicion(53, 23); cout << "U20241E379";
    cambiar_posicion(43, 25); cout << "MARTIN LEONARDO FUERTES GONZALES "; cambiar_posicion(53, 26); cout << "U20231E936";
}

// FUNCIONES DE JUGAR

void mostrar_informacion_cartas() {

    // OBJETIVO
    cambiar_color_texto(14);
    cambiar_posicion(46, 12); cout << "INFORMACI" << char(224) << "N IMPORTANTE";

    for (int i = 1; i <= 10; i++) {

        cambiar_posicion(36, 13 + i);

        for (int j = 1; j <= 42; j++) {

            if (i == 1 || i == 10 || j == 1 || j == 42) {
                cambiar_color_texto(7);
                cout << char(219);
            }
            else {
                cout << " ";
            }

        }
        cout << endl;
    }

    cambiar_color_texto(15);
    cambiar_posicion(42, 16); cout << "LAS CARTAS (11,12 Y 13) TIENEN";
    cambiar_posicion(47, 17); cout << "EL MISMO VALOR DE 10";
    cambiar_posicion(38, 19); cout << "EL RESTO DE CARTAS TIENE VALOR ORGINAL";
    cambiar_posicion(42, 21); cout << "EL AS VALE 1 O 11," << char(173) << "T" << char(233) << " ELIGES!";

}

int ingresar_cantidad_partidas() {
    int opcion;

    cambiar_color_texto(14);
    cambiar_posicion(41, 25); cout << "INGRESA UNA CANTIDAD DE PARTIDAS";

    cambiar_color_texto(15);
    cambiar_posicion(50, 26); cout << "SELECCI" << char(224) << "N:";
    do {
        cambiar_posicion(61, 26); cin >> opcion;

    } while (opcion < 5 || opcion > 10);

    return opcion;
}

int mostrar_color_carta(int color) {

    int seleccion;

    switch (color) {

    case 1:
        seleccion = 12;
        break;
    case 2:
        seleccion = 1;
        break;

    default:
        break;
    }
    return seleccion;
}

void mostrar_carta_juego(int numero_carta) {

    int random_simbolo_carta;
    int random_color_carta;
    int simbolo;
    int color;

    switch (numero_carta)
    {
    case 1:

        // USAMOS UN FOR Y NO LA FUNCIÓN PORQUE QUEREMOS QUE LA CARTA SEA MÁS ANCHA.
        for (int i = 1; i <= 15; i++) {
            cambiar_posicion(50, 7 + i);
            for (int j = 1; j <= 17; j++) {

                if (i == 1 || j == 1 || i == 15 || j == 17) {
                    cambiar_color_texto(7);
                    cout << char(219);
                }
                else {
                    cambiar_color_texto(15);
                    cout << char(219);
                }

            }
            cout << endl;
        }

        //USAMOS EL RANDOMIZADOR PARA QUE CADA VEZ QUE ESCOJAS UNA CARTA VARÍE EL SIMBOLO O COLOR
        random_simbolo_carta = randomizar_numeros(1, 4);
        random_color_carta = randomizar_numeros(1, 2);

        simbolo = mostrar_simbolo_carta(random_simbolo_carta);
        color = mostrar_color_carta(random_color_carta);

        cambiar_color_texto(color);
        cambiar_color_fondo(15);
        cambiar_posicion(58, 15); cout << char(simbolo);
        cambiar_color_texto(15);
        cambiar_color_fondo(1);
        break;

    case 2:
        // USAMOS UN FOR Y NO LA FUNCIÓN PORQUE QUEREMOS QUE LA CARTA SEA MÁS ANCHA.
        for (int i = 1; i <= 15; i++) {
            cambiar_posicion(50, 7 + i);
            for (int j = 1; j <= 17; j++) {

                if (i == 1 || j == 1 || i == 15 || j == 17) {
                    cambiar_color_texto(7);
                    cout << char(219);
                }
                else {
                    cambiar_color_texto(15);
                    cout << char(219);
                }

            }
            cout << endl;
        }

        //USAMOS EL RANDOMIZADOR PARA QUE CADA VEZ QUE ESCOJAS UNA CARTA VARÍE EL SIMBOLO O COLOR
        random_simbolo_carta = randomizar_numeros(1, 4);
        random_color_carta = randomizar_numeros(1, 2);

        simbolo = mostrar_simbolo_carta(random_simbolo_carta);
        color = mostrar_color_carta(random_color_carta);

        cambiar_color_texto(color);
        cambiar_color_fondo(15);
        cambiar_posicion(58, 12); cout << char(simbolo);
        cambiar_posicion(58, 18); cout << char(simbolo);
        cambiar_color_texto(15);
        cambiar_color_fondo(1);
        break;

    case 3:
        // USAMOS UN FOR Y NO LA FUNCIÓN PORQUE QUEREMOS QUE LA CARTA SEA MÁS ANCHA.
        for (int i = 1; i <= 15; i++) {
            cambiar_posicion(50, 7 + i);
            for (int j = 1; j <= 17; j++) {

                if (i == 1 || j == 1 || i == 15 || j == 17) {
                    cambiar_color_texto(7);
                    cout << char(219);
                }
                else {
                    cambiar_color_texto(15);
                    cout << char(219);
                }

            }
            cout << endl;
        }

        //USAMOS EL RANDOMIZADOR PARA QUE CADA VEZ QUE ESCOJAS UNA CARTA VARÍE EL SIMBOLO O COLOR
        random_simbolo_carta = randomizar_numeros(1, 4);
        random_color_carta = randomizar_numeros(1, 2);

        simbolo = mostrar_simbolo_carta(random_simbolo_carta);
        color = mostrar_color_carta(random_color_carta);

        cambiar_color_texto(color);
        cambiar_color_fondo(15);
        cambiar_posicion(58, 12); cout << char(simbolo);
        cambiar_posicion(58, 15); cout << char(simbolo);
        cambiar_posicion(58, 18); cout << char(simbolo);
        cambiar_color_texto(15);
        cambiar_color_fondo(1);
        break;

    case 4:
        mostrar_dibujo_carta(50, 7);
        //USAMOS EL RANDOMIZADOR PARA QUE CADA VEZ QUE ESCOJAS UNA CARTA VARÍE EL SIMBOLO O COLOR
        random_simbolo_carta = randomizar_numeros(1, 4);
        random_color_carta = randomizar_numeros(1, 2);

        simbolo = mostrar_simbolo_carta(random_simbolo_carta);
        color = mostrar_color_carta(random_color_carta);

        cambiar_color_texto(color);
        cambiar_color_fondo(15);
        cambiar_posicion(55, 12); cout << char(simbolo);
        cambiar_posicion(60, 12); cout << char(simbolo);
        cambiar_posicion(55, 18); cout << char(simbolo);
        cambiar_posicion(60, 18); cout << char(simbolo);
        cambiar_color_texto(15);
        cambiar_color_fondo(1);
        break;

    case 5:
        // USAMOS UN FOR Y NO LA FUNCIÓN PORQUE QUEREMOS QUE LA CARTA SEA MÁS ANCHA.
        for (int i = 1; i <= 15; i++) {
            cambiar_posicion(50, 7 + i);
            for (int j = 1; j <= 17; j++) {

                if (i == 1 || j == 1 || i == 15 || j == 17) {
                    cambiar_color_texto(7);
                    cout << char(219);
                }
                else {
                    cambiar_color_texto(15);
                    cout << char(219);
                }

            }
            cout << endl;
        }

        //USAMOS EL RANDOMIZADOR PARA QUE CADA VEZ QUE ESCOJAS UNA CARTA VARÍE EL SIMBOLO O COLOR
        random_simbolo_carta = randomizar_numeros(1, 4);
        random_color_carta = randomizar_numeros(1, 2);

        simbolo = mostrar_simbolo_carta(random_simbolo_carta);
        color = mostrar_color_carta(random_color_carta);

        cambiar_color_texto(color);
        cambiar_color_fondo(15);
        cambiar_posicion(54, 12); cout << char(simbolo);
        cambiar_posicion(62, 12); cout << char(simbolo);
        cambiar_posicion(54, 18); cout << char(simbolo);
        cambiar_posicion(62, 18); cout << char(simbolo);
        cambiar_posicion(58, 15); cout << char(simbolo);
        cambiar_color_texto(15);
        cambiar_color_fondo(1);
        break;

    case 6:
        mostrar_dibujo_carta(50, 7);

        //USAMOS EL RANDOMIZADOR PARA QUE CADA VEZ QUE ESCOJAS UNA CARTA VARÍE EL SIMBOLO O COLOR
        random_simbolo_carta = randomizar_numeros(1, 4);
        random_color_carta = randomizar_numeros(1, 2);

        simbolo = mostrar_simbolo_carta(random_simbolo_carta);
        color = mostrar_color_carta(random_color_carta);

        cambiar_color_texto(color);
        cambiar_color_fondo(15);
        cambiar_posicion(54, 12); cout << char(simbolo);
        cambiar_posicion(61, 12); cout << char(simbolo);
        cambiar_posicion(54, 18); cout << char(simbolo);
        cambiar_posicion(61, 18); cout << char(simbolo);
        cambiar_posicion(54, 15); cout << char(simbolo);
        cambiar_posicion(61, 15); cout << char(simbolo);
        cambiar_color_texto(15);
        cambiar_color_fondo(1);
        break;

    case 7:
        // USAMOS UN FOR Y NO LA FUNCIÓN PORQUE QUEREMOS QUE LA CARTA SEA MÁS ANCHA.
        for (int i = 1; i <= 15; i++) {
            cambiar_posicion(50, 7 + i);
            for (int j = 1; j <= 17; j++) {

                if (i == 1 || j == 1 || i == 15 || j == 17) {
                    cambiar_color_texto(7);
                    cout << char(219);
                }
                else {
                    cambiar_color_texto(15);
                    cout << char(219);
                }

            }
            cout << endl;
        }

        //USAMOS EL RANDOMIZADOR PARA QUE CADA VEZ QUE ESCOJAS UNA CARTA VARÍE EL SIMBOLO O COLOR
        random_simbolo_carta = randomizar_numeros(1, 4);
        random_color_carta = randomizar_numeros(1, 2);

        simbolo = mostrar_simbolo_carta(random_simbolo_carta);
        color = mostrar_color_carta(random_color_carta);

        cambiar_color_texto(color);
        cambiar_color_fondo(15);
        cambiar_posicion(54, 12); cout << char(simbolo);
        cambiar_posicion(62, 12); cout << char(simbolo);
        cambiar_posicion(54, 18); cout << char(simbolo);
        cambiar_posicion(62, 18); cout << char(simbolo);
        cambiar_posicion(54, 15); cout << char(simbolo);
        cambiar_posicion(62, 15); cout << char(simbolo);
        cambiar_posicion(58, 14); cout << char(simbolo);
        cambiar_color_texto(15);
        cambiar_color_fondo(1);
        break;

    case 8:
        // USAMOS UN FOR Y NO LA FUNCIÓN PORQUE QUEREMOS QUE LA CARTA SEA MÁS ANCHA.
        for (int i = 1; i <= 15; i++) {
            cambiar_posicion(50, 7 + i);
            for (int j = 1; j <= 17; j++) {

                if (i == 1 || j == 1 || i == 15 || j == 17) {
                    cambiar_color_texto(7);
                    cout << char(219);
                }
                else {
                    cambiar_color_texto(15);
                    cout << char(219);
                }

            }
            cout << endl;
        }

        //USAMOS EL RANDOMIZADOR PARA QUE CADA VEZ QUE ESCOJAS UNA CARTA VARÍE EL SIMBOLO O COLOR
        random_simbolo_carta = randomizar_numeros(1, 4);
        random_color_carta = randomizar_numeros(1, 2);

        simbolo = mostrar_simbolo_carta(random_simbolo_carta);
        color = mostrar_color_carta(random_color_carta);

        cambiar_color_texto(color);
        cambiar_color_fondo(15);
        cambiar_posicion(54, 12); cout << char(simbolo);
        cambiar_posicion(62, 12); cout << char(simbolo);
        cambiar_posicion(54, 18); cout << char(simbolo);
        cambiar_posicion(62, 18); cout << char(simbolo);
        cambiar_posicion(54, 15); cout << char(simbolo);
        cambiar_posicion(62, 15); cout << char(simbolo);
        cambiar_posicion(58, 14); cout << char(simbolo);
        cambiar_posicion(58, 17); cout << char(simbolo);
        cambiar_color_texto(15);
        cambiar_color_fondo(1);
        break;

    case 9:
        // USAMOS UN FOR Y NO LA FUNCIÓN PORQUE QUEREMOS QUE LA CARTA SEA MÁS ANCHA.
        for (int i = 1; i <= 15; i++) {
            cambiar_posicion(50, 7 + i);
            for (int j = 1; j <= 17; j++) {

                if (i == 1 || j == 1 || i == 15 || j == 17) {
                    cambiar_color_texto(7);
                    cout << char(219);
                }
                else {
                    cambiar_color_texto(15);
                    cout << char(219);
                }

            }
            cout << endl;
        }

        //USAMOS EL RANDOMIZADOR PARA QUE CADA VEZ QUE ESCOJAS UNA CARTA VARÍE EL SIMBOLO O COLOR
        random_simbolo_carta = randomizar_numeros(1, 4);
        random_color_carta = randomizar_numeros(1, 2);

        simbolo = mostrar_simbolo_carta(random_simbolo_carta);
        color = mostrar_color_carta(random_color_carta);

        cambiar_color_texto(color);
        cambiar_color_fondo(15);
        cambiar_posicion(54, 12); cout << char(simbolo);
        cambiar_posicion(62, 12); cout << char(simbolo);
        cambiar_posicion(54, 18); cout << char(simbolo);
        cambiar_posicion(62, 18); cout << char(simbolo);
        cambiar_posicion(54, 15); cout << char(simbolo);
        cambiar_posicion(62, 15); cout << char(simbolo);
        cambiar_posicion(58, 12); cout << char(simbolo);
        cambiar_posicion(58, 15); cout << char(simbolo);
        cambiar_posicion(58, 18); cout << char(simbolo);
        cambiar_color_texto(15);
        cambiar_color_fondo(1);
        break;

    case 10:
        // USAMOS UN FOR Y NO LA FUNCIÓN PORQUE QUEREMOS QUE LA CARTA SEA MÁS ANCHA.
        for (int i = 1; i <= 15; i++) {
            cambiar_posicion(50, 7 + i);
            for (int j = 1; j <= 17; j++) {

                if (i == 1 || j == 1 || i == 15 || j == 17) {
                    cambiar_color_texto(7);
                    cout << char(219);
                }
                else {
                    cambiar_color_texto(15);
                    cout << char(219);
                }

            }
            cout << endl;
        }

        //USAMOS EL RANDOMIZADOR PARA QUE CADA VEZ QUE ESCOJAS UNA CARTA VARÍE EL SIMBOLO O COLOR
        random_simbolo_carta = randomizar_numeros(1, 4);
        random_color_carta = randomizar_numeros(1, 2);

        simbolo = mostrar_simbolo_carta(random_simbolo_carta);
        color = mostrar_color_carta(random_color_carta);

        cambiar_color_texto(color);
        cambiar_color_fondo(15);
        cambiar_posicion(54, 11); cout << char(simbolo);
        cambiar_posicion(62, 11); cout << char(simbolo);
        cambiar_posicion(54, 17); cout << char(simbolo);
        cambiar_posicion(62, 17); cout << char(simbolo);
        cambiar_posicion(54, 14); cout << char(simbolo);
        cambiar_posicion(62, 14); cout << char(simbolo);
        cambiar_posicion(58, 11); cout << char(simbolo);
        cambiar_posicion(58, 14); cout << char(simbolo);
        cambiar_posicion(58, 17); cout << char(simbolo);
        cambiar_posicion(58, 19); cout << char(simbolo);
        cambiar_color_texto(15);
        cambiar_color_fondo(1);
        break;

    case 11:
        // USAMOS UN FOR Y NO LA FUNCIÓN PORQUE QUEREMOS QUE LA CARTA SEA MÁS ANCHA.
        for (int i = 1; i <= 15; i++) {
            cambiar_posicion(50, 7 + i);
            for (int j = 1; j <= 17; j++) {

                if (i == 1 || j == 1 || i == 15 || j == 17) {
                    cambiar_color_texto(7);
                    cout << char(219);
                }
                else {
                    cambiar_color_texto(15);
                    cout << char(219);
                }

            }
            cout << endl;
        }

        //USAMOS EL RANDOMIZADOR PARA QUE CADA VEZ QUE ESCOJAS UNA CARTA VARÍE EL SIMBOLO O COLOR
        random_simbolo_carta = randomizar_numeros(1, 4);
        random_color_carta = randomizar_numeros(1, 2);

        simbolo = mostrar_simbolo_carta(random_simbolo_carta);
        color = mostrar_color_carta(random_color_carta);

        cambiar_color_texto(color);
        cambiar_color_fondo(15);
        cambiar_posicion(54, 11); cout << char(simbolo);
        cambiar_posicion(62, 11); cout << char(simbolo);
        cambiar_posicion(54, 17); cout << char(simbolo);
        cambiar_posicion(62, 17); cout << char(simbolo);
        cambiar_posicion(54, 14); cout << char(simbolo);
        cambiar_posicion(62, 14); cout << char(simbolo);
        cambiar_posicion(58, 11); cout << char(simbolo);
        cambiar_posicion(58, 14); cout << char(simbolo);
        cambiar_posicion(58, 17); cout << char(simbolo);
        cambiar_posicion(56, 19); cout << char(simbolo);
        cambiar_posicion(60, 19); cout << char(simbolo);
        cambiar_color_texto(15);
        cambiar_color_fondo(1);
        break;

    case 12:
        // USAMOS UN FOR Y NO LA FUNCIÓN PORQUE QUEREMOS QUE LA CARTA SEA MÁS ANCHA.
        for (int i = 1; i <= 16; i++) {
            cambiar_posicion(50, 7 + i);
            for (int j = 1; j <= 17; j++) {

                if (i == 1 || j == 1 || i == 16 || j == 17) {
                    cambiar_color_texto(7);
                    cout << char(219);
                }
                else {
                    cambiar_color_texto(15);
                    cout << char(219);
                }

            }
            cout << endl;
        }

        //USAMOS EL RANDOMIZADOR PARA QUE CADA VEZ QUE ESCOJAS UNA CARTA VARÍE EL SIMBOLO O COLOR
        random_simbolo_carta = randomizar_numeros(1, 4);
        random_color_carta = randomizar_numeros(1, 2);

        simbolo = mostrar_simbolo_carta(random_simbolo_carta);
        color = mostrar_color_carta(random_color_carta);

        cambiar_color_texto(color);
        cambiar_color_fondo(15);
        cambiar_posicion(54, 11); cout << char(simbolo);
        cambiar_posicion(62, 11); cout << char(simbolo);
        cambiar_posicion(54, 17); cout << char(simbolo);
        cambiar_posicion(62, 17); cout << char(simbolo);
        cambiar_posicion(54, 14); cout << char(simbolo);
        cambiar_posicion(62, 14); cout << char(simbolo);
        cambiar_posicion(58, 11); cout << char(simbolo);
        cambiar_posicion(58, 14); cout << char(simbolo);
        cambiar_posicion(58, 17); cout << char(simbolo);
        cambiar_posicion(54, 20); cout << char(simbolo);
        cambiar_posicion(58, 20); cout << char(simbolo);
        cambiar_posicion(62, 20); cout << char(simbolo);
        cambiar_color_texto(15);
        cambiar_color_fondo(1);
        break;

    case 13:
        // USAMOS UN FOR Y NO LA FUNCIÓN PORQUE QUEREMOS QUE LA CARTA SEA MÁS ANCHA.
        for (int i = 1; i <= 16; i++) {
            cambiar_posicion(50, 7 + i);
            for (int j = 1; j <= 17; j++) {

                if (i == 1 || j == 1 || i == 16 || j == 17) {
                    cambiar_color_texto(7);
                    cout << char(219);
                }
                else {
                    cambiar_color_texto(15);
                    cout << char(219);
                }

            }
            cout << endl;
        }

        //USAMOS EL RANDOMIZADOR PARA QUE CADA VEZ QUE ESCOJAS UNA CARTA VARÍE EL SIMBOLO O COLOR
        random_simbolo_carta = randomizar_numeros(1, 4);
        random_color_carta = randomizar_numeros(1, 2);

        simbolo = mostrar_simbolo_carta(random_simbolo_carta);
        color = mostrar_color_carta(random_color_carta);

        cambiar_color_texto(color);
        cambiar_color_fondo(15);
        cambiar_posicion(54, 11); cout << char(simbolo);
        cambiar_posicion(62, 11); cout << char(simbolo);
        cambiar_posicion(54, 17); cout << char(simbolo);
        cambiar_posicion(62, 17); cout << char(simbolo);
        cambiar_posicion(54, 14); cout << char(simbolo);
        cambiar_posicion(62, 14); cout << char(simbolo);
        cambiar_posicion(58, 10); cout << char(simbolo);
        cambiar_posicion(58, 13); cout << char(simbolo);
        cambiar_posicion(58, 16); cout << char(simbolo);
        cambiar_posicion(54, 20); cout << char(simbolo);
        cambiar_posicion(58, 19); cout << char(simbolo);
        cambiar_posicion(62, 20); cout << char(simbolo);
        cambiar_posicion(58, 21); cout << char(simbolo);
        cambiar_color_texto(15);
        cambiar_color_fondo(1);
        break;
        break;

    default:
        break;
    }

}

int asignar_valor_de_cartas(int carta_original) {

    int valor;

    switch (carta_original) {

    case 1:

        cambiar_posicion(39, 24); cout << "ESCOJA EL VALOR DE SU CARTA 1 / 11 : "; cin >> valor;

        break;
    case 2:
        valor = 2;
        break;
    case 3:
        valor = 3;
        break;
    case 4:
        valor = 4;
        break;
    case 5:
        valor = 5;
        break;
    case 6:
        valor = 6;
        break;
    case 7:
        valor = 7;
        break;
    case 8:
        valor = 8;
        break;
    case 9:
        valor = 9;
        break;
    case 10:
        valor = 10;
        break;
    case 11:
        valor = 10;
        break;
    case 12:
        valor = 10;
        break;
    case 13:
        valor = 10;
        break;

    default:
        break;
    }
    return valor;

}

void mostrar_marcador_puntajes(int puntaje_jugador1, int puntaje_jugador2) {

    cambiar_posicion(3, 2); cout << "PUNTAJE JUGADOR 1: " << puntaje_jugador1;
    cambiar_posicion(3, 3); cout << "PUNTAJE JUGADOR 2: " << puntaje_jugador2;
}

void jugar_partidas(int partidas_totales) {

    // DECLARAMOS VARIABLES

    char pedir_carta; // ESTA NOS PERMITE SABER QUE JUGADOR ESTÁ JUGANDO. EMPIEZA CON A PORQUE SIEMPRE EMPIEZA EL JUGADOR 1
    int comparacion;  // ESTA VARIABLE LA USAMOS PARA LUEGO COMPARAR LOS VALORES QUE SACÓ CADA JUGADOR Y SABER QUIEN GANO CADA PARTIDA, NO EL JUEGO, SOLO LAS PARTIDAS INDIVIDUALES

    bool jugador_excedio;  // ESTA VARIABLE MUESTRA SI EL JUGADOR EXCEDIÓ EL NÚMERO 21, SI OCURRE ESO SE PONDRÁ TRUE
    bool jugador_excedio_2;


    int valor_carta; // TODAS ESAS VARIABLES SON DEL JUGADOR 1
    int carta_original;
    int acumulacion_valor_carta;
    int puntos_partidas_ganadas;
    valor_carta = 0;
    puntos_partidas_ganadas = 0;


    int valor_carta_2; // TODAS ESAS VARIABLES SON DEL JUGADOR 2
    int carta_original_2;
    int acumulacion_valor_carta_2;
    int puntos_partidas_ganadas_2;
    char jugo_2;
    valor_carta_2 = 0;
    puntos_partidas_ganadas_2 = 0;


    int ganador;

    char opcion;

    // UN FOR QUE VAYA REALIZANDO EL JUEGO PARTIDA A PARTIDA
    for (int cant_partidas = 1; cant_partidas <= partidas_totales; cant_partidas++) {



        // EMPIEZA EL JUGADOR 1 (A) POR ESO PEDIR CARTA EMPIEZA TOMANDO EL VALOR DE A
        pedir_carta = 'A';

        // LA VARIABLE JUGÓ NOS DICE SI EL JUGADOR 1 O 2, PARTICIPÓ EN EL JUEGO. SE HACE ESTA VARIABLE PORQUE SI EL JUGADOR 1 SE EXCEDE, AUTOMÁTICAMENTE GANA EL JUGADOR 2 SIN JUGAR
        jugo_2 = 'S';

        jugador_excedio = false;
        jugador_excedio_2 = false;

        // PREPARA LA PANTALLA PARA EL JUEGO
        system("cls");

        // EN ESTAS VARIABLES SE ACUMULAN EL VALOR DE LAS CARTAS
        acumulacion_valor_carta = 0;
        acumulacion_valor_carta_2 = 0;



        //////////////////////////////////////////////////////////////////////////

        //JUGADOR 1

        while (pedir_carta == 'A') {


            // MOSTRARÁ EL FONDO
            mostrar_cuadro_menu(0, 0);

            // MUESTRA EL MARCADOR DE PUNTAJES:
            mostrar_marcador_puntajes(puntos_partidas_ganadas, puntos_partidas_ganadas_2);

            // NUMERO DE PARTIDA
            cambiar_color_texto(14);
            cambiar_posicion(54, 2); cout << "PARTIDA " << cant_partidas;

            cambiar_color_texto(15);
            cambiar_posicion(54, 3); cout << "JUGADOR 1";
            cambiar_posicion(37, 5); cout << char(168) << "DESEAS SACAR UNA CARTA? (SI (S) / NO (N))";
            cambiar_posicion(51, 6); cout << "SELECCI" << char(224) << "N [   ]";

            // UN DO-WHILE QUE ME DEJE SELECCIONAR SOLO LAS OPCIONES SI (S) O NO(N)
            do {
                cambiar_posicion(63, 6); cin >> opcion;

            } while (opcion != 'S' && opcion != 'N');


            // SI LA OPCION ES (S)
            if (opcion == 'S') {


                // MOSTRAMOS UNA CARTA AL AZAR DEL 1 AL 13
                carta_original = randomizar_numeros(1, 13);
                mostrar_carta_juego(carta_original);

                // LAS CARTAS TIENEN VALORES ESPECÍFICO SI SON 11,12,13 ENTONCES LAS ASIGNAMOS A LA VARIABLE VALOR_CARTA
                valor_carta = asignar_valor_de_cartas(carta_original);

                // MOSTRAMOS AL USUARIO CUAL HA SIDO SU CARTA ORIGINAL Y LO QUE VALE EN EL JUEGO
                cambiar_posicion(42, 25); cout << "TE HA TOCADO LA CARTA N" << char(233) << "MERO: " << carta_original;
                cambiar_posicion(44, 26); cout << "EL VALOR DE LA CARTA ES: " << valor_carta;

                // LAS CARTAS VAN SUMANDO SU PUNTAJE
                acumulacion_valor_carta = acumulacion_valor_carta + valor_carta;


                // MOSTRAMOS AL USUARIO EL PUNTAJE A MEDIDA QUE VA ESCOGIENDO SUS CARTAS
                cambiar_color_texto(14);
                cambiar_posicion(3, 27); cout << "VALOR ACUMULADO:" << acumulacion_valor_carta;


                //////////////////////////////////////////////////////////////////////////


                // CUANDO EL JUGADOR 1 SE EXCEDE DEL VALOR 21 AL PEDIR CARTAS

                if (acumulacion_valor_carta > 21) {

                    // LIMPIAMOS LA CONSOLA
                    getch();
                    system("cls");

                    // MOSTRARÁ EL FONDO
                    mostrar_cuadro_menu(0, 0);
                    mostrar_cartas_fondo();

                    // NUMERO DE PARTIDA
                    cambiar_color_texto(14);
                    cambiar_posicion(53, 6); cout << "PARTIDA " << cant_partidas;

                    cambiar_color_texto(15);
                    cambiar_posicion(53, 7); cout << "JUGADOR 1";

                    acumulacion_valor_carta = 0;


                    cambiar_posicion(37, 12); cout << "LASTIMA, TE HAS EXCEDIDO DEL VALOR M" << char(181) << "XIMO";
                    cambiar_posicion(47, 13); cout << "EL VALOR TOTAL ES: " << acumulacion_valor_carta;


                    // CAMBIAMOS A TRUE LA VARIABLE QUE SE EXCEDIÓ DEL VALOR 21
                    jugador_excedio = true;

                    // SI ES TRUE, GANA EL JUGADOR 2 LA PARTIDA 
                    if (jugador_excedio == true) {

                        puntos_partidas_ganadas_2++;
                    }

                    // COMO AUTOMÁTICAMENTE PIERDE EL JUGADOR 1, DEBEMOS PASAR A LA SIGUIENTE PARTIDA, SIN QUE JUEGE EL JUGADOR 2, POR ESO LE PONEMOS LA LETRA QUE NO CORRESPONDA A NINGUNO DE LOS JUGADORES.
                    pedir_carta = 'C';

                    // VARIABLE QUE ME INDICA QUE NO JUGÓ EL JUGADOR 2, LE CAMBIAMOS A N
                    jugo_2 = 'N';

                }

                // HACEMOS UNA PAUSA PARA OBSERVAR LOS VALORES Y LUEGO PASAR A LO SIGUIENTE
                getch();

            }
            else {

                system("cls");

                // MOSTRARÁ EL FONDO
                mostrar_cuadro_menu(0, 0);
                mostrar_cartas_fondo();

                // NUMERO DE PARTIDA
                cambiar_color_texto(14);
                cambiar_posicion(54, 6); cout << "PARTIDA " << cant_partidas;

                cambiar_color_texto(15);
                cambiar_posicion(54, 7); cout << "JUGADOR 1";

                cambiar_posicion(55, 11); cout << char(173) << "STOP!";
                cambiar_posicion(44, 12); cout << "DETUVISTE EL PEDIDO DE CARTAS";
                cambiar_posicion(35, 13); cout << "EL VALOR TOTAL DEL ACUMULADO DE TUS CARTAS ES " << acumulacion_valor_carta;

                getch();

                // CAMBIAMOS EL JUGADOR, SIMPLEMENTE COLOCAMOS LA LETRA QUE CORRESPONDE AL JUGADOR 2 = (B)
                pedir_carta = 'B';
            }


        }

        //////////////////////////////////////////////////////////////////////////


        //JUGADOR 2

        while (pedir_carta == 'B') {

            // MOSTRARÁ EL FONDO
            mostrar_cuadro_menu(0, 0);

            // MUESTRA EL MARCADOR DE PUNTAJES:
            mostrar_marcador_puntajes(puntos_partidas_ganadas, puntos_partidas_ganadas_2);

            // NUMERO DE PARTIDA
            cambiar_color_texto(14);
            cambiar_posicion(54, 2); cout << "PARTIDA " << cant_partidas;

            cambiar_color_texto(15);
            cambiar_posicion(54, 3); cout << "JUGADOR 2";
            cambiar_posicion(37, 5); cout << char(168) << "DESEAS SACAR UNA CARTA? (SI (S) / NO (N))";
            cambiar_posicion(51, 6); cout << "SELECCI" << char(224) << "N [   ]";

            // UN DO-WHILE QUE ME DEJE SELECCIONAR SOLO LAS OPCIONES SI (S) O NO(N)
            do {
                cambiar_posicion(63, 6); cin >> opcion;

            } while (opcion != 'S' && opcion != 'N');


            // SI LA OPCION ES (S)
            if (opcion == 'S') {

                // MOSTRAMOS UNA CARTA AL AZAR DEL 1 AL 13
                carta_original_2 = randomizar_numeros(1, 13);
                mostrar_carta_juego(carta_original_2);

                // LAS CARTAS TIENEN VALORES ESPECÍFICO SI SON 11,12,13 ENTONCES LAS ASIGNAMOS A LA VARIABLE VALOR_CARTA
                valor_carta_2 = asignar_valor_de_cartas(carta_original_2);

                // MOSTRAMOS AL USUARIO CUAL HA SIDO SU CARTA ORIGINAL Y LO QUE VALE EN EL JUEGO
                cambiar_posicion(42, 25); cout << "TE HA TOCADO LA CARTA N" << char(233) << "MERO: " << carta_original_2;
                cambiar_posicion(44, 26); cout << "EL VALOR DE LA CARTA ES: " << valor_carta_2;

                // LAS CARTAS VAN SUMANDO SU PUNTAJE
                acumulacion_valor_carta_2 = acumulacion_valor_carta_2 + valor_carta_2;


                // MOSTRAMOS AL USUARIO EL PUNTAJE A MEDIDA QUE VA ESCOGIENDO SUS CARTAS
                cambiar_color_texto(14);
                cambiar_posicion(3, 27); cout << "VALOR ACUMULADO:" << acumulacion_valor_carta_2;


                //////////////////////////////////////////////////////////////////////////


                // CUANDO EL JUGADOR 2 SE EXCEDE DEL VALOR 21 AL PEDIR CARTAS

                if (acumulacion_valor_carta_2 > 21) {

                    getch();
                    system("cls");

                    // MOSTRARÁ EL FONDO
                    mostrar_cuadro_menu(0, 0);
                    mostrar_cartas_fondo();

                    // NUMERO DE PARTIDA
                    cambiar_color_texto(14);
                    cambiar_posicion(53, 6); cout << "PARTIDA " << cant_partidas;

                    cambiar_color_texto(15);
                    cambiar_posicion(53, 7); cout << "JUGADOR 2";

                    acumulacion_valor_carta_2 = 0;

                    cambiar_posicion(37, 12); cout << "LASTIMA, TE HAS EXCEDIDO DEL VALOR M" << char(181) << "XIMO";
                    cambiar_posicion(47, 13); cout << "EL VALOR TOTAL ES: " << acumulacion_valor_carta_2;


                    // CAMBIAMOS A TRUE LA VARIABLE QUE SE EXCEDIÓ DEL VALOR 21
                    jugador_excedio_2 = true;


                    // SI ES TRUE, GANA EL JUGADOR 1 LA PARTIDA SIEMPRE Y CUANDO SU RESULTADO SEA DIFERENTE DE 0
                    if (jugador_excedio_2 == true && acumulacion_valor_carta != 0) {

                        puntos_partidas_ganadas++;
                    }

                    // COMO AUTOMÁTICAMENTE PIERDE EL JUGADOR 2, DEBEMOS PASAR A LA SIGUIENTE PARTIDA, POR ESO LE PONEMOS LA LETRA QUE NO CORRESPONDA A NINGUNO DE LOS JUGADORES.
                    pedir_carta = 'C';

                }

                // HACEMOS UNA PAUSA PARA OBSERVAR LOS VALORES Y LUEGO PASAR A LO SIGUIENTE
                getch();

            }
            else {

                system("cls");

                // MOSTRARÁ EL FONDO
                mostrar_cuadro_menu(0, 0);
                mostrar_cartas_fondo();

                // NUMERO DE PARTIDA
                cambiar_color_texto(14);
                cambiar_posicion(54, 6); cout << "PARTIDA " << cant_partidas;

                cambiar_color_texto(15);
                cambiar_posicion(54, 7); cout << "JUGADOR 2";

                cambiar_posicion(55, 11); cout << char(173) << "STOP!";
                cambiar_posicion(44, 12); cout << "DETUVISTE EL PEDIDO DE CARTAS";
                cambiar_posicion(35, 13); cout << "EL VALOR TOTAL DEL ACUMULADO DE TUS CARTAS ES " << acumulacion_valor_carta_2;

                // DAMOS UN PAUSE PARA PODER VER LA PANTALLA
                getch();

                // ACABAMOS LA PARTIDA CON EL CAMBIO DE LA VARIABLE PEDIR CARTA, DONDE NO SERÁ JUGADOR 1 (A) NI JUGADOR 2 (B)
                pedir_carta = 'C';

                // INICIAMOS AQUI LA VARIABLE PORQUE RECIÉN CUANDO ACABÉ EL TURNO DE AMBOS JUGADORES SE PODRÁ COMPARAR SUS VALORES TOTALES DE CARTAS.
                comparacion = 1;

            }


        }

        // VERIFICAMOS AL GANADOR DE CADA PARTIDA
        if (comparacion == 1) {

            // CUANDO EL JUGADOR 1 TIENE CARTAS MAYORES A LAS DEL JUGADOR 2, Y NO EXCEDE EL 21. ADEMÁS EL JUGADOR 2 TAMPOCO EXCEDE EL VALOR
            if ((acumulacion_valor_carta > acumulacion_valor_carta_2) && (acumulacion_valor_carta < 21) && (acumulacion_valor_carta_2 < 21) && (jugador_excedio == false) && (jugador_excedio_2 == false)) {
                puntos_partidas_ganadas++;
            }
            if ((acumulacion_valor_carta_2 > acumulacion_valor_carta) && (acumulacion_valor_carta < 21) && (acumulacion_valor_carta_2 < 21) && (jugador_excedio == false) && (jugador_excedio_2 == false)) {
                puntos_partidas_ganadas_2++;
            }

        }

        //////////////////////////////////////////////////////////////////////////

        system("cls");

        // PANTALLA GANADOR DE CADA PARTIDA

        // MOSTRARÁ EL FONDO
        mostrar_cuadro_menu(0, 0);
        mostrar_cartas_fondo();

        // NUMERO DE PARTIDA
        cambiar_color_texto(14);
        cambiar_posicion(54, 6); cout << "PARTIDA " << cant_partidas;
        cambiar_color_texto(15);

        cambiar_posicion(37, 11); cout << "EL VALOR TOTAL ACUMULADO DEL JUGADOR 1 ES " << acumulacion_valor_carta;
        cambiar_posicion(37, 12); cout << "EL VALOR TOTAL ACUMULADO DEL JUGADOR 2 ES " << acumulacion_valor_carta_2;



        // EN CASO EL JUGADOR 1 SE HALLA EXCEDIDO, LA XX NOS DICE QUE NO JUGÓ EL OTRO JUGADOR 2
        if (jugo_2 == 'N') {
            cambiar_posicion(79, 12); cout << "XX";
            cambiar_color_texto(14);
            cambiar_posicion(46, 14); cout << "EL GANADOR ES EL JUGADOR 2";
        }

        // EN CASO SEA UNA PARTIDA NORMAL
        cambiar_color_texto(14);

        // NO LES HE COLOCADO LA VARIABLE  "JUGADOR_EXCEDIO"  EN LA CONDICIÓN PORQUE CUANDO SE EXCEDE EL JUGADOR 2; ES DECIR, JUGADOR_EXCEDIO_2 = TRUE , DEBE MOSTRAR TAMBIÉN QUE GANO EL JUGADOR 1.
        if ((acumulacion_valor_carta > acumulacion_valor_carta_2) && (acumulacion_valor_carta < 21) && (acumulacion_valor_carta_2 < 21)) {
            cambiar_posicion(46, 14); cout << "EL GANADOR ES EL JUGADOR 1";
        }

        if ((acumulacion_valor_carta_2 > acumulacion_valor_carta) && (acumulacion_valor_carta < 21) && (acumulacion_valor_carta_2 < 21)) {
            cambiar_posicion(46, 14); cout << "EL GANADOR ES EL JUGADOR 2";
        }

        getch();


    }

    //////////////////////////////////////////////////////////////////////////

    system("cls");


    // PANTALLA GANADOR DEL JUEGO OFICIAL

    // MOSTRARÁ EL FONDO
    mostrar_cuadro_menu(0, 0);
    mostrar_cartas_fondo();

    // NUMERO DE PARTIDA
    cambiar_color_texto(14);
    cambiar_posicion(54, 6); cout << "PUNTAJES";
    cambiar_color_texto(15);

    cambiar_posicion(41, 11); cout << "PARTIDAS GANADAS DEL JUGADOR 1: " << puntos_partidas_ganadas;
    cambiar_posicion(41, 12); cout << "PARTIDAS GANADAS DEL JUGADOR 2: " << puntos_partidas_ganadas_2;

    cambiar_color_texto(14);
    if (puntos_partidas_ganadas > puntos_partidas_ganadas_2) {

        cambiar_posicion(42, 14); cout << char(173) << "FELICIDADES! GAN" << char(224) << " EL JUGADOR 1";
    }
    if (puntos_partidas_ganadas_2 > puntos_partidas_ganadas) {

        cambiar_posicion(42, 14); cout << char(173) << "FELICIDADES! GAN" << char(224) << " EL JUGADOR 2";
    }
    if (puntos_partidas_ganadas_2 == puntos_partidas_ganadas) {

        cambiar_posicion(46, 14); cout << char(173) << "WOW! ES UN GRAN EMPATE";
    }
    cambiar_color_texto(15);


    getch();

}


//FUNCION MAIN, DENTRO UTILIZAMOS LAS FUNCIONES CREADAS.
void main()
{
    srand(time(0));

    // DECLARAMOS VARIABLES
    int opcion;
    int mostrar_menu;
    int cantidad_partidas;

    // MOSTRAR MENU SIEMPRE QUE VALGA 1 MOSTRARÁ EL JUEGO, CUANDO CAMBIE DE VALOR SE ACABA EL WHILE DEL MENÚ.
    mostrar_menu = 1;

    while (mostrar_menu) {

        mostrar_cuadro_menu(0, 0);
        mostrar_cartas_fondo();
        mostrar_titulo_menu();

        opcion = seleccionar_menu_de_inicio();
        switch (opcion) {

        case 1:
            system("cls");
            mostrar_cuadro_menu(0, 0);
            mostrar_cartas_fondo();
            mostrar_titulo_menu();
            mostrar_informacion_cartas();


            // PEDIMOS AL USUARIO INGRESAR LA CANTIDAD DE PARTIDAS
            cantidad_partidas = ingresar_cantidad_partidas();
            // JUEGA EN LA CONSOLA
            jugar_partidas(cantidad_partidas);

            break;

        case 2:
            system("cls");
            mostrar_cuadro_menu(0, 0);
            mostrar_cartas_fondo();
            mostrar_titulo_instrucciones();
            mostrar_texto_instrucciones();
            getch();

            break;

        case 3:
            system("cls");
            mostrar_cuadro_menu(0, 0);
            mostrar_cartas_fondo();
            mostrar_titulo_creditos();
            mostrar_texto_creditos();
            getch();

            break;

        case 4:
            cambiar_posicion(0, 23);
            mostrar_menu = 0;
            break;
        }


    }


}
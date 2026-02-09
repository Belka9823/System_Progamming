# System_Progamming

# include <iostream>
# include <string>

int main ()
{
    int beadsOne[20] = {1, 0, 1, 1, 0, 0, 1, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0};
    int beadsTwo[20] = {1, 1, 0, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 0, 1, 0, 0, 1, 0, 0};
    int beadsThree[20] = {1, 0, 1, 0, 0, 0, 1, 0, 0, 1, 1, 0, 1, 0, 1, 0, 0, 0, 0, 0};
    int beadsFour[20] = {0, 0, 0, 1, 0, 1, 1, 0, 1, 0, 1, 1, 1, 0, 0, 1, 0, 0, 0, 1};
    int beadsFive[20] = {1, 0, 1, 0, 0, 0, 1, 1, 1, 0, 1, 1, 1, 0, 1, 0, 1, 1, 1, 0};
    int beadsSix[20] = {1, 1, 0, 1, 1, 0, 1, 0, 0, 0, 0, 1, 0, 1, 0, 1, 0, 0, 0, 1};
    int beadsSeven[20] = {0, 0, 1, 0, 0, 1, 0, 1, 1, 1, 1, 0, 1, 0, 1, 0, 1, 0, 0, 0};
    int beadsEight[20] = {0, 1, 0, 1, 0, 0, 1, 1, 1, 0, 0, 1, 0, 0, 0, 0, 1, 1, 0, 1};
    int beadsNine[20] = {0, 1, 0, 0, 0, 1, 1, 0, 0, 1, 1, 0, 1, 0, 0, 1, 0, 0, 0, 1};
    int beadsTen[20] = {0, 1, 1, 0, 0, 0, 1, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 1, 0, 1};
    int beads[20];

    bool isAlive = true;
    int UserInput = 0;
    int userBB = 0;
    int blackBeads = 0;
    int whiteBeads = 0;
    int blackBeadsR = 0;
    int whiteBeadsR = 0;

    // список
    std::cout << "1){1, 0, 1, 1, 0, 0, 1, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0}" << "\n";
    std::cout << "2){1, 1, 0, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 0, 1, 0, 0, 1, 0, 0}" << "\n";
    std::cout << "3){1, 0, 1, 0, 0, 0, 1, 0, 0, 1, 1, 0, 1, 0, 1, 0, 0, 0, 0, 0}" << "\n";
    std::cout << "4){0, 0, 0, 1, 0, 1, 1, 0, 1, 0, 1, 1, 1, 0, 0, 1, 0, 0, 0, 1}" << "\n";
    std::cout << "5){1, 0, 1, 0, 0, 0, 1, 1, 1, 0, 1, 1, 1, 0, 1, 0, 1, 1, 1, 0}" << "\n";
    std::cout << "6){1, 1, 0, 1, 1, 0, 1, 0, 0, 0, 0, 1, 0, 1, 0, 1, 0, 0, 0, 1}" << "\n";
    std::cout << "7){0, 0, 1, 0, 0, 1, 0, 1, 1, 1, 1, 0, 1, 0, 1, 0, 1, 0, 0, 0}" << "\n";
    std::cout << "8){0, 1, 0, 1, 0, 0, 1, 1, 1, 0, 0, 1, 0, 0, 0, 0, 1, 1, 0, 1}" << "\n";
    std::cout << "9){0, 1, 0, 0, 0, 1, 1, 0, 0, 1, 1, 0, 1, 0, 0, 1, 0, 0, 0, 1}" << "\n";
    std::cout << "10){0, 1, 1, 0, 0, 0, 1, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 1, 0, 1}" << "\n";
    // конец списка бус

    // выбор бус
    std::cout << "Введите прессет бус(чёрный - 1, белый - 0): ";
    std::cin >> UserInput;
    switch (UserInput)
    {
        case 1:
        for (int i = 0; i < 20; i++)   
    {
        beads[i] = beadsOne[i];
    }
        break;
        case 2:   
        for (int i = 0; i < 20; i++)
    {
        beads[i] = beadsTwo[i];
    }
        break;
        case 3:
            for (int i = 0; i < 20; i++)
    {
        beads[i] = beadsThree[i];
    }
        break;
        case 4:
            for (int i = 0; i < 20; i++)
    {
        beads[i] = beadsFour[i];
    }
        break;
        case 5:
            for (int i = 0; i < 20; i++)
    {
        beads[i] = beadsFive[i];
    }
        break;
        case 6:
            for (int i = 0; i < 20; i++)
    {
        beads[i] = beadsSix[i];
    }
        break;
        case 7:
        for (int i = 0; i < 20; i++)
    {
        beads[i] = beadsSeven[i];
    }
        break;
        case 8:
        for (int i = 0; i < 20; i++)
    {
        beads[i] = beadsEight[i];
    }
        break;
        case 9:
        for (int i = 0; i < 20; i++)
    {
        beads[i] = beadsNine[i];
    }
        break;
        case 10:
        for (int i = 0; i < 20; i++)
    {
        beads[i] = beadsTen[i];
    }
        break;
        default:
        isAlive = false;
        break;
}
    // конец выбора бус

    // ввод необходимых бусин
    if(isAlive == true)
    {
        std::cout << "Введите число необходимых чёрных бусин: ";
        std::cin >> userBB;
    }
    // конец ввода



    // рабочий алгорит - начало
    for (int i = 0; i < 20; i++)
    {
    if (userBB == blackBeads || userBB == 0)
    {
        break;
    }
    else if (beads[i] == 1)
    {
        blackBeads = blackBeads + 1;
    }
    else if (beads[i] == 0) 
    {
        whiteBeads = whiteBeads + 1;
    }
    }
    // конец стабильности

    // начало реверса
    for (int i = 19; i > -1; i--)
    {
    if (userBB == blackBeadsR || userBB == 0)
    {
        break;
    }
    else if (beads[i] == 1)
    {
        blackBeadsR = blackBeadsR + 1;
    }
    else if (beads[i] == 0) 
    {
        whiteBeadsR = whiteBeadsR + 1;
    }
    }
    // конец реверса

    // вывод ответа
    if (userBB != 0 && userBB <= blackBeads || userBB <= blackBeadsR && isAlive == true)
    {
        if (whiteBeads < whiteBeadsR)
        {
            std::cout << "чтобы взять " << userBB << " чёрных бусин необходимо взять минимум" << whiteBeads << " белых бусин" << std::endl;
        }
        else
        {
            std::cout << "чтобы взять " << userBB << " чёрных бусин необходимо взять минимум" << whiteBeadsR << " белых бусин" << std::endl;
        }
    }
    else
    {
        std::cerr << "ошибка программы!" << "\n";
    }
    // конец вывода ответа
   return 0;

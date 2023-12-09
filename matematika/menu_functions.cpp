#include "menu_functions.hpp"

#include <cstdlib>
#include <iostream>

const AAntonian::MenuItem* AAntonian::show_menu(const MenuItem* current) {
    std::cout << "Обучайка приветствует тебя, мой юный ученик!" << std::endl;
    for (int i = 1; i < current->children_count; i++) {
        std::cout << current->children[i]->title << std::endl;
    }
    std::cout << current->children[0]->title << std::endl;
    std::cout << "Обучайка > ";

    int user_input;
    std::cin >> user_input;
    std::cout << std::endl;

    return current->children[user_input];
}

const AAntonian::MenuItem* AAntonian::exit(const MenuItem* current) {
    std::exit(0);
}

const AAntonian::MenuItem* AAntonian::study_summ(const MenuItem* current) {
    int flag = 0;

    while(flag == 0) {
        srand(time(NULL));
        const int min = 1;
        const int max = 100;
        int a = min + rand() % (max - min + 1);
        int b = min + rand() % (max - min + 1);

        std::cout <<"Если хочешь выйти, введи -1" << std::endl;
        std::cout << a << "+" << b << std::endl << std::endl;

        int c;
        std::cin >> c;

        if (c == -1) {
            flag++;
        }

        if (a + b != c && c != -1) {
            while(c != a + b){

                if (std::cin.fail()) {
                    std::cin.clear();
                    std::cin.ignore(32767, '\n');
                    std::cout << "Введи число!" << std::endl;
                }
                else{
                    std::cout << "Решай правильно!" << std::endl;
                }

                std::cout <<"Для выхода введи -1"<< std::endl << std::endl;
                std::cout << a << "+" << b << std::endl << std::endl;
                std::cin >> c;

                if (c == -1) {
                    flag++;
                    break;
                }
            }

        }

    }

    std::cout << current->title << std::endl << std::endl;
    return current->parent;
}

const AAntonian::MenuItem* AAntonian::study_substract(const MenuItem* current) {
    int flag = 0;

    while(flag == 0) {
        srand(time(NULL));
        const int min = 1;
        const int max = 100;
        int a = min + rand() % (max - min + 1);
        int b = min + rand() % (max - min + 1);

        std::cout << "Если хочешь выйти, введи -1" << std::endl;
        std::cout << a << "-" << b << std::endl << std::endl;

        int c;
        std::cin >> c;

        if (c == -1) {
            flag++;
        }

        if (a - b != c && c != -1) {
            while (c != a - b) {

                if (std::cin.fail()) {
                    std::cin.clear();
                    std::cin.ignore(32767, '\n');
                    std::cout << "Введи число!" << std::endl;
                } else {
                    std::cout << "Решай правильно!" << std::endl;
                }

                std::cout << "Для выхода введи -1" << std::endl << std::endl;
                std::cout << a << "-" << b << std::endl << std::endl;
                std::cin >> c;

                if (c == -1) {
                    flag++;
                    break;
                }
            }

        }
    }
    std::cout << current->title << std::endl << std::endl;
    return current->parent;
}

const AAntonian::MenuItem* AAntonian::study_multiply(const MenuItem* current) {
    int flag = 0;

    while(flag == 0) {
        srand(time(NULL));
        const int min = 1;
        const int max = 100;
        int a = min + rand() % (max - min + 1);
        int b = min + rand() % (max - min + 1);

        std::cout << "Если хочешь выйти, введи -1" << std::endl;
        std::cout << a << "*" << b << std::endl << std::endl;

        int c;
        std::cin >> c;

        if (c == -1) {
            flag++;
        }

        if (a * b != c && c != -1) {
            while (c != a * b) {

                if (std::cin.fail()) {
                    std::cin.clear();
                    std::cin.ignore(32767, '\n');
                    std::cout << "Введи число!" << std::endl;
                } else {
                    std::cout << "Решай правильно!" << std::endl;
                }

                std::cout << "Для выхода введи -1" << std::endl << std::endl;
                std::cout << a << "*" << b << std::endl << std::endl;
                std::cin >> c;

                if (c == -1) {
                    flag++;
                    break;
                }
            }

        }
    }
    std::cout << current->title << std::endl << std::endl;
    return current->parent;
}

const AAntonian::MenuItem* AAntonian::study_divide(const MenuItem* current) {
    int flag = 0;

    while(flag == 0) {
        srand(time(NULL));
        const int min = 1;
        const int max = 100;
        int a = min + rand() % (max - min + 1);
        int b = min + rand() % (max - min + 1);

        std::cout << "Если хочешь выйти, введи -1" << std::endl;
        std::cout << a << "/" << b << std::endl << std::endl;

        int c;
        std::cin >> c;

        if (c == -1) {
            flag++;
        }

        if (a / b != c && c != -1) {
            while (c != a / b) {

                if (std::cin.fail()) {
                    std::cin.clear();
                    std::cin.ignore(32767, '\n');
                    std::cout << "Введи число!" << std::endl;
                } else {
                    std::cout << "Решай правильно!" << std::endl;
                }

                std::cout << "Для выхода введи -1" << std::endl << std::endl;
                std::cout << a << "/" << b << std::endl << std::endl;
                std::cin >> c;

                if (c == -1) {
                    flag++;
                    break;
                }
            }

        }
    }
    std::cout << current->title << std::endl << std::endl;
    return current->parent;
}

const AAntonian::MenuItem* AAntonian::go_back(const MenuItem* current) {
    // TODO
    std::cout << current->title << std::endl << std::endl;
    return current->parent->parent;
}

const AAntonian::MenuItem* AAntonian::study_diff(const AAntonian::MenuItem *current) {
    // TODO
    std::cout << current->title << std::endl << std::endl;
    return current->parent;
}

const AAntonian::MenuItem* AAntonian::study_int(const AAntonian::MenuItem *current) {
    // TODO
    std::cout << current->title << std::endl << std::endl;
    return current->parent;
}

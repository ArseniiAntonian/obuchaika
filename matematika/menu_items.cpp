#include "menu_items.hpp"


#include <cstddef>

#include "menu_functions.hpp"


const AAntonian::MenuItem AAntonian::ALGEBRA_SUMM = {
    "1 - Хочу научиться складывать!", AAntonian::study_summ, &AAntonian::ALGEBRA
};
const AAntonian::MenuItem AAntonian::ALGEBRA_SUBSTRACT = {
    "2 - Хочу научиться вычитать!", AAntonian::study_substract, &AAntonian::ALGEBRA
};
const AAntonian::MenuItem AAntonian::ALGEBRA_MULTIPLY = {
    "3 - Хочу научиться умножать!", AAntonian::study_multiply, &AAntonian::ALGEBRA
};
const AAntonian::MenuItem AAntonian::ALGEBRA_DIVIDE = {
    "4 - Хочу научиться делить!", AAntonian::study_divide, &AAntonian::ALGEBRA
};
const AAntonian::MenuItem AAntonian::ALGEBRA_GO_BACK = {
    "0 - Выйти в главное меню", AAntonian::go_back, &AAntonian::ALGEBRA
};



const AAntonian::MenuItem AAntonian::MATAN_DIFF = {
        "1 - Хочу научиться дифференцировать!", AAntonian::study_diff, &AAntonian::MATAN
};
const AAntonian::MenuItem AAntonian::MATAN_INT = {
        "2 - Хочу научиться считать интеграл!", AAntonian::study_int, &AAntonian::MATAN
};
const AAntonian::MenuItem AAntonian::MATAN_GO_BACK = {
        "0 - Выйти в главное меню", AAntonian::go_back, &AAntonian::MATAN
};



namespace {
    const AAntonian::MenuItem* const study_children[] = {
            &AAntonian::EXIT_TO_MENU,
            &AAntonian::ALGEBRA,
            &AAntonian::MATAN
    };
    const int study_size = sizeof(study_children) / sizeof(study_children[0]);
}
const AAntonian::MenuItem AAntonian::STUDY = {
        "1 - Хочу учиться математике!", AAntonian::show_menu, &AAntonian::MAIN, study_children, study_size
};

const AAntonian::MenuItem AAntonian::EXIT = {
        "0 - Я лучше пойду полежу...", AAntonian::exit, &AAntonian::MAIN
};

namespace {
    const AAntonian::MenuItem* const algebra_children[] = {
        &AAntonian::ALGEBRA_GO_BACK,
        &AAntonian::ALGEBRA_SUMM,
        &AAntonian::ALGEBRA_SUBSTRACT,
        &AAntonian::ALGEBRA_MULTIPLY,
        &AAntonian::ALGEBRA_DIVIDE
    };
    const int algebra_size = sizeof(algebra_children) / sizeof(algebra_children[0]);
}

namespace {
    const AAntonian::MenuItem* const matan_children[] = {
            &AAntonian::MATAN_GO_BACK,
            &AAntonian::MATAN_DIFF,
            &AAntonian::MATAN_INT
    };
    const int matan_size = sizeof(matan_children) / sizeof(matan_children[0]);
}



namespace {
    const AAntonian::MenuItem* const main_children[] = {
        &AAntonian::EXIT,
        &AAntonian::STUDY
    };
    const int main_size = sizeof(main_children) / sizeof(main_children[0]);
}

const AAntonian::MenuItem AAntonian::MAIN = {
    nullptr, AAntonian::show_menu, nullptr, main_children, main_size
};

const AAntonian::MenuItem AAntonian::ALGEBRA = {
        "1 - Хочу учить алгебру!", AAntonian::show_menu, &AAntonian::STUDY, algebra_children, algebra_size
};

const AAntonian::MenuItem AAntonian::MATAN = {
        "2 - Хочу учить мат анализ!", AAntonian::show_menu, &AAntonian::STUDY, matan_children, matan_size
};


const AAntonian::MenuItem AAntonian::EXIT_TO_MENU = {
        "0 - Вытйи в главное меню.", AAntonian::go_back, &AAntonian::STUDY
};

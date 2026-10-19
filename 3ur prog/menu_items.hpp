#pragma once
#include "menu.hpp"

namespace IBusko {
    extern const MenuItem MAIN;
    extern const MenuItem EXIT;

    extern const MenuItem STUDY;
    extern const MenuItem STUDY_GO_BACK;

    // Новые разделы второго уровня
    extern const MenuItem ALGEBRA;
    extern const MenuItem ANALYSIS;

    // Возврат из третьего уровня
    extern const MenuItem ALGEBRA_GO_BACK;
    extern const MenuItem ANALYSIS_GO_BACK;

    // Алгебра
    extern const MenuItem STUDY_SUMM;
    extern const MenuItem STUDY_SUBSTRACT;
    extern const MenuItem STUDY_MULTIPLY;
    extern const MenuItem STUDY_DIVIDE;

    // Математический анализ
    extern const MenuItem DIFFERENTIAL;
    extern const MenuItem INTEGRAL;
}

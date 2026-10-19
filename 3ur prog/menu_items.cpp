#include "menu_items.hpp"
#include "menu_func.hpp"
#include <cstdlib>


const IBusko::MenuItem IBusko::STUDY_SUMM = {
	"1 - Хочу складывать",
	IBusko::study_summ,
	&IBusko::ALGEBRA
};

const IBusko::MenuItem IBusko::STUDY_SUBSTRACT = {
	"2 - Хочу вычитать",
	IBusko::study_substract,
	&IBusko::ALGEBRA
};

const IBusko::MenuItem IBusko::STUDY_MULTIPLY = {
	"3 - Хочу вычитать",
	IBusko::study_multiply,
	&IBusko::ALGEBRA
};

const IBusko::MenuItem IBusko::STUDY_DIVIDE = {
	"4 - Хочу вычитать",
	IBusko::study_divide,
	&IBusko::ALGEBRA
};

const IBusko::MenuItem IBusko::ALGEBRA_GO_BACK = {
	"5 - Хочу вычитать",
	IBusko::algebra_go_back,
	&IBusko::ALGEBRA
};

const IBusko::MenuItem IBusko::ANALYSIS_GO_BACK = {
	"5 - Хочу вычитать",
	IBusko::analysis_go_back,
	&IBusko::ANALYSIS
};

const IBusko::MenuItem IBusko::STUDY_GO_BACK = {
	"5 - Хочу вычитать",
	IBusko::study_go_back,
	&IBusko::STUDY
};


const IBusko::MenuItem IBusko::DIFFERENTIAL = {
	"5 - Хочу вычитать",
	IBusko::differential,
	&IBusko::ANALYSIS
};


const IBusko::MenuItem IBusko::INTEGRAL = {
	"5 - Хочу вычитать",
	IBusko::integral,
	&IBusko::ANALYSIS
};


namespace {
	const IBusko::MenuItem* const alg_children[] = {
		&IBusko::ALGEBRA_GO_BACK,
		&IBusko::STUDY_SUMM,
		&IBusko::STUDY_SUBSTRACT,
		&IBusko::STUDY_MULTIPLY,
		&IBusko::STUDY_DIVIDE,
	};

	const int alg_size = sizeof(alg_children) / sizeof(alg_children[0]);
}

namespace {
	const IBusko::MenuItem* const anal_children[] = {
		&IBusko::DIFFERENTIAL,
		&IBusko::INTEGRAL,
		&IBusko::ANALYSIS_GO_BACK
	};

	const int anal_size = sizeof(anal_children) / sizeof(anal_children[0]);
}

namespace {
	const IBusko::MenuItem* const 
}

const IBusko::MenuItem IBusko::ALGEBRA = {
	"1 - Хочу учиться Алгебре!",
	IBusko::show_menu,
	&IBusko::STUDY,
	alg_children,
	alg_size
};


const IBusko::MenuItem IBusko::ANALYSIS = {
	"2 - Хочу учиться матану!",
	IBusko::show_menu,
	&IBusko::STUDY,
	anal_children,
	anal_size
};


const IBusko::MenuItem IBusko::EXIT = {
	"0 - Пойду лежать",
	IBusko::exit,
	&IBusko::MAIN
};



namespace {
	const IBusko::MenuItem* const main_children[] = {
		&IBusko::EXIT,
		&IBusko::STUDY
	};

	const int main_size =
		sizeof(main_children) /
		sizeof(main_children[0]);
}


const IBusko::MenuItem IBusko::MAIN = {
	nullptr,
	IBusko::show_menu,
	nullptr,
	main_children,
	main_size
};


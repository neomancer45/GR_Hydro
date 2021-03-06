#include "../headers/misc.h"

int P_offset(int cell[DIM_NUM-1], int comp) {
	return (2 * ghost_num + x2cellnum) * (2 * ghost_num + x3cellnum) * (2 + DIM_NUM) * cell[0] + 
		(2 * ghost_num + x3cellnum) * (2 + DIM_NUM) * cell[1] + (2 + DIM_NUM) * cell[2] + comp;
}

int U_offset(int cell[DIM_NUM-1], int comp) {
	return (2 * ghost_num + x2cellnum) * (2 * ghost_num + x3cellnum) * (1 + DIM_NUM) * cell[0] + 
		(2 * ghost_num + x3cellnum) * (1 + DIM_NUM) * cell[1] + (1 + DIM_NUM) * cell[2] + comp;
}


double sign(double a) {
	if(a > 0.) {
		return 1.;
	} else if(a < 0.) {
		return -1.;
	} else {
		return 0.;
	}
}
#pragma once

#include "config_common.h"

#define MATRIX_ROWS 8
#define MATRIX_COLUMNS 6

// Wiring pins
#define MATRIX_ROW_PINS { F7, B1, B3, B2 }
#define MATRIX_COL_PINS { D4, C6, D7, E6, B4, F6 }

// diodes form rows for the switches
#define DIODE_DIRECTION COL2ROW

#define SOFT_SERIAL_PIN D0


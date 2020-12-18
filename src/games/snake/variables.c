#include "cross_lib.h"
#include "settings.h"

#if !defined(USE_MEMORY_BUFFERS)
uint8_t snake_head_x;
uint8_t snake_head_y;
uint8_t speed_increase_counter;
uint8_t spawned_apples;
uint8_t remaining_apples;
uint8_t level;

uint8_t snake_x[MAX_SNAKE_LENGTH];
uint8_t snake_y[MAX_SNAKE_LENGTH];
uint8_t snake_copy_x[MAX_SNAKE_LENGTH];
uint8_t snake_copy_y[MAX_SNAKE_LENGTH];

uint16_t points;
uint16_t slow_down;
uint16_t record;
uint16_t level_bonus;


uint8_t horizontal_mine_x[MAX_NUMBER_OF_HORIZONTAL_MINES];
uint8_t horizontal_mine_y[MAX_NUMBER_OF_HORIZONTAL_MINES];
uint8_t horizontal_mine_direction[MAX_NUMBER_OF_HORIZONTAL_MINES];
uint8_t horizontal_mine_transition[MAX_NUMBER_OF_HORIZONTAL_MINES];

uint8_t vertical_mine_x[MAX_NUMBER_OF_VERTICAL_MINES];
uint8_t vertical_mine_y[MAX_NUMBER_OF_VERTICAL_MINES];
uint8_t vertical_mine_direction[MAX_NUMBER_OF_VERTICAL_MINES];
uint8_t vertical_mine_transition[MAX_NUMBER_OF_VERTICAL_MINES];


// It records if one extra life was taken in bonus/secret levels
uint8_t extra_life_achievement[9];

// It records if the magic wall was created in bonus/secret levels
uint8_t magic_wall_achievement[9];

// It records if the super coin was spawned in bonus/secret/levels
uint8_t super_coin_achievement[9];

uint8_t energy;

uint8_t lives;

uint8_t snake_length;
uint8_t snake_head;
uint8_t snake_direction;

uint8_t apples_on_screen_count;
uint8_t coin_count;
uint8_t extra_life_counter;
uint8_t active_mines;


uint8_t horizontal_mines_on_current_level;
uint8_t vertical_mines_on_current_level;
uint8_t transparent_vertical_wall_triggered;
uint8_t transparent_horizontal_wall_triggered;
uint8_t secret_level_active;
uint8_t secret_level_never_activated;
uint8_t next_level;
uint8_t transparent_vertical_wall_level_flag;
uint8_t transparent_horizontal_wall_level_flag;
uint8_t not_many_mines;
uint8_t total_mines_on_current_level;

#endif

#if !defined(NO_EXTRA_TITLE)

char strings[NUMBER_OF_STRINGS][MAX_STRING_SIZE] = 
{
    _XL_M _XL_i _XL_n _XL_e,
    _XL_F _XL_r _XL_e _XL_e _XL_z _XL_e,
    _XL_B _XL_o _XL_n _XL_u _XL_s,
    _XL_P _XL_o _XL_i _XL_n _XL_t _XL_s,
    _XL_A _XL_p _XL_p _XL_l _XL_e,
};
#endif


const Image *head_image_ptr;
uint8_t map[XSize][YSize];



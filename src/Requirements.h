//Terrain Builder
//Created by Jonathan Morelock 3/12/2021

#ifndef Requirements_h
#define Requirements_h

/**
 * \defgroup Terrain Terrain_Mods
 * @{
 */

/// Ref: Req. 11 & 12 Using speed (set in main.c "handle_movement" function at line 2441) adjusts the
/// x, y, z draw distances varying on the speed the user is moving.
///

/// \param[in] speed\imp\ref Req. 11 & 12 the speed the player is moving.
void get_draw_distance(float speed, float x, float y, float z);
void set_draw_distance(float speed, float x, float y, float z);

/**@}*/
#endif /* Requirements_h */
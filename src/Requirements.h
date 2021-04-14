//Terrain Builder
//Created by Jonathan Morelock 3/12/2021

#ifndef Requirements_h
#define Requirements_h
#define CHUNK_SIZE 32
/**
 * \defgroup Terrain Terrain_Mods
 * @{
 */

/// Ref: Req. 11 & 12 Using speed (set in main.c "handle_movement" function at line 2441) adjusts the
/// render_radius (set in main.c line 2715 & modified based on chunk size on line 1628).  
///

typedef struct {
    int render_radius;
} DrawSpeed;

/// \param[in] speed\imp\ref Req. 11 & 12 the speed the player is moving.
/// \param[in] DS\imp\ref Req. 11 & 12 DrawSpeed struct holds only render_radius.

void set_draw_distance(DrawSpeed *DS, float speed);

/// \param[in] render_radius\imp\ref Req. 11 & 12 the radius of the terrain to be rendered around player.

void get_draw_distance(DrawSpeed *DS, int *render_radius);

/**@}*/
#endif /* Requirements_h */
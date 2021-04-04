//Terrain Builder
//Created by Jonathan Morelock 3/12/2021
#include <GL/glew.h>
#include <gl/glut.h
#include <math.h>

#ifndef Requirements_h
#define Requirements_h
#define CHUNK_SIZE 32
#define SNOW 
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

/// Ref: Req. 19 Using x y and z vectors for setting the location of precipitation in the world.
///
typedef struct {
    float x;
    float y;
    float z;
}PrecipitationVectors;

/// Ref: Req. 10 & 19 Using render_radius for Req. 10 to adjust the draw distance during inclimate
/// weather. Using area as a size (in chunks) to create precipitation in the world. 
///
typedef struct {
    int render_radius;
    int area;
}Precipitation;

/// \param[in] speed\imp\ref Req. 11 & 12 the speed the player is moving.
/// \param[in] DS\imp\ref Req. 11 & 12 DrawSpeed struct holds only render_radius.
///
void set_draw_distance(DrawSpeed *DS, float speed);

/// \param[in] render_radius\imp\ref Req. 11 & 12 the radius of the terrain to be rendered around player.
///
void get_draw_distance(DrawSpeed *DS, int *render_radius);

///\param[in] render_radius\imp\ref Req. 10 the radius around the user to render precipitation.
///\param[in] precip_type\imp\ref Req. 19 the type of precipitation to be rendered 0 for none, 1 for rain, 2 for snow.
///
void render_precipitation(int render_radius, int precip_type);

///\param[in] area\imp\ref Req. 19 the area (in chunks) to generate precipitation inside of.
///
void set_precipitation_area(int area);

///\param[in] x\imp\ref Req. 19 the x vector the precipitation will be traversing while it falls.
///\param[in] y\imp\ref Req. 19 the y vector the precipitation will be traversing while it falls.
///\param[in] z\imp\ref Req. 19 the z vector the precipitation will be traversing while it falls.
///
void generate_precipitation_vectors(PrecipitationVectors * PV, float x, float y, float z);

///\param[in] precip_type\imp\ref Req. 19 the type of precipitation to be rendered 0 for none, 1 for rain, 2 for snow.
///
void set_precipitation_type(int precip_type);


/**@}*/
#endif /* Requirements_h */
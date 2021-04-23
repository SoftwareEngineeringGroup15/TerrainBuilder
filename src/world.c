#include "config.h"
#include "noise.h"
#include "world.h"

void create_world(int p, int q, world_func func, void *arg) {
    int pad = 1;
    for (int dx = -pad; dx < CHUNK_SIZE + pad; dx++) {
        for (int dz = -pad; dz < CHUNK_SIZE + pad; dz++) {
            int flag = 1;
            if (dx < 0 || dz < 0 || dx >= CHUNK_SIZE || dz >= CHUNK_SIZE) {
                flag = -1;
            }
            int x = p * CHUNK_SIZE + dx;
            int z = q * CHUNK_SIZE + dz;
            float f = simplex2(x * 0.01, z * 0.01, 4, 0.5, 2);
            float g = simplex2(-x * 0.01, -z * 0.01, 2, 0.9, 2);
			float b = simplex2(x * 0.01, -z * 0.01, 2, 0.9, 2);
            int mh = g * 32 + 16;
            int h = f * mh;
            int w = 1;
            int t = 12;
			int tc = 25;
			if (b >= 0.66) {
				w = 74;
			}
            if (h <= t) {
                h = t;
                w = 2;
            }
			if (h > tc) {
				w = 9;
			}
            
			if (w == 2) {
				// sand terrain
            	for (int y = 0; y < h; y++) {
                	func(x, y, z, w * flag, arg);
            	}
				if (SHOW_PLANTS) {
					// desert plants
					if (simplex2(-x * 0.1, z * 0.1, 3, 0.8, 2) > 0.8) {
						int w = 64 + simplex2(x * 0.1, z * 0.1, 4, 0.2, 2) * 3;
						func(x, h, z, w * flag, arg);
					}
				}
			}
			if (w == 9) {
				// tundra terrain
	            for (int y = 0; y < h; y++) {
					if (y < h - 1){
						w = 7;
					} else {
						w = 9;
					}
	                func(x, y, z, w * flag, arg);
	            }
				if (SHOW_PLANTS) {
					// tundra plants
					if (simplex2(-x * 0.1, z * 0.1, 3, 0.8, 2) > 0.7) {
						int w = 67 + simplex2(x * 0.1, z * 0.1, 4, 0.3, 2) * 3;
						func(x, h, z, w * flag, arg);
					}
				}
			}
			if (w == 74){
				// jungle terrain
	            for (int y = 0; y < h; y++) {
					if (y < h - 1){
						w = 83;
					} else {
						w = 74;
					}
	                func(x, y, z, w * flag, arg);
	            }
				if (SHOW_PLANTS) {
					// jungle plants
					if (simplex2(-x * 0.1, z * 0.1, 3, 0.8, 2) > .7) {
						int w = 70 + simplex2(x * 0.1, z * 0.1, 4, 0.1, 2) * 3;
						func(x, h, z, w * flag, arg);
					}
				}
			}
            if (w == 1) {
				// grass terrain
	            for (int y = 0; y < h; y++) {
					if (y < h - 1){
						w = 7;
					} else {
						w = 1;
					}
	                func(x, y, z, w * flag, arg);
	            }
                if (SHOW_PLANTS) {
                    // grass
                    if (simplex2(-x * 0.1, z * 0.1, 4, 0.8, 2) > 0.6) {
                        func(x, h, z, 17 * flag, arg);
                    }
                    // flowers
                    if (simplex2(x * 0.05, -z * 0.05, 4, 0.8, 2) > 0.7) {
                        int w = 18 + simplex2(x * 0.1, z * 0.1, 4, 0.8, 2) * 7;
                        func(x, h, z, w * flag, arg);
                    }
                }
                // trees
                int ok = SHOW_TREES;
                if (dx - 4 < 0 || dz - 4 < 0 ||
                    dx + 4 >= CHUNK_SIZE || dz + 4 >= CHUNK_SIZE)
                {
                    ok = 0;
                }
                if (ok && simplex2(x, z, 6, 0.5, 2) > 0.84) {
                    for (int y = h + 3; y < h + 8; y++) {
                        for (int ox = -3; ox <= 3; ox++) {
                            for (int oz = -3; oz <= 3; oz++) {
                                int d = (ox * ox) + (oz * oz) +
                                    (y - (h + 4)) * (y - (h + 4));
                                if (d < 11) {
                                    func(x + ox, y, z + oz, 15, arg);
                                }
                            }
                        }
                    }
                    for (int y = h; y < h + 7; y++) {
                        func(x, y, z, 5, arg);
                    }
                }
            }
            // clouds
            if (SHOW_CLOUDS) {
                for (int y = 64; y < 72; y++) {
                    if (simplex3(
                        x * 0.01, y * 0.1, z * 0.01, 8, 0.5, 2) > 0.75)
                    {
                        func(x, y, z, 16 * flag, arg);
                    }
                }
            }
        }
    }
}

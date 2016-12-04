#ifndef __UTILS_H
#define __UTILS_H
#include <stdint.h>
#include <cairo/cairo.h>
#include <lua.h>
#include <lauxlib.h>
#include <lualib.h>

#include "bar.h"
#include "config.h"

/*
 * Utility functions that can be used by any module.
 */

/*
 * Sets color values in a cairo_t object. This mixes up the fields, because
 * wlc and wavy's configuration use the RGBA format, while Cairo uses ARGB.
 */
void cr_set_argb_color(cairo_t *cr, uint32_t rgba);

/*
 * Builds a char ** from a lua table.
 */
const char **table_to_str_array(lua_State *L, int32_t index);

/*
 * Takes a string and decides which hook it corresponds to.
 */
enum hook_t hook_str_to_enum(const char *str);

/*
 * Takes a string and decides which layout it corresponds to.
 */
enum auto_tile_t tiling_layout_str_to_enum(const char *str);

#endif

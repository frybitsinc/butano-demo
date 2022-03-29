#ifndef BN_SPRITE_ITEMS_SPRITE_0003_H
#define BN_SPRITE_ITEMS_SPRITE_0003_H

#include "bn_sprite_item.h"

//{{BLOCK(sprite_0003_bn_gfx)

//======================================================================
//
//	sprite_0003_bn_gfx, 32x32@8, 
//	+ palette 32 entries, not compressed
//	+ 16 tiles not compressed
//	Total size: 64 + 1024 = 1088
//
//	Time-stamp: 2022-03-29, 17:42:23
//	Exported by Cearn's GBA Image Transmogrifier, v0.8.18
//	( http://www.coranac.com/projects/#grit )
//
//======================================================================

#ifndef GRIT_SPRITE_0003_BN_GFX_H
#define GRIT_SPRITE_0003_BN_GFX_H

#define sprite_0003_bn_gfxTilesLen 1024
extern const bn::tile sprite_0003_bn_gfxTiles[32];

#define sprite_0003_bn_gfxPalLen 64
extern const bn::color sprite_0003_bn_gfxPal[32];

#endif // GRIT_SPRITE_0003_BN_GFX_H

//}}BLOCK(sprite_0003_bn_gfx)

namespace bn::sprite_items
{
    constexpr inline sprite_item sprite_0003(sprite_shape_size(sprite_shape::SQUARE, sprite_size::BIG), 
            sprite_tiles_item(span<const tile>(sprite_0003_bn_gfxTiles, 32), bpp_mode::BPP_8, compression_type::NONE, 1), 
            sprite_palette_item(span<const color>(sprite_0003_bn_gfxPal, 32), bpp_mode::BPP_8, compression_type::NONE));
}

#endif


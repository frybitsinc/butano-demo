#include <bn_core.h>
#include <bn_sprite_ptr.h>
#include <bn_sprite_item.h>

#include "bn_sprite_actions.h"
#include "bn_sprite_builder.h"
#include "bn_bg_palettes.h"

#include "bn_sprite_items_sprite_0001.h"
#include "bn_sprite_items_sprite_0002.h"
#include "bn_sprite_items_sprite_0003.h"

int main()
{
    bn::core::init();
    bn::bg_palettes::set_transparent_color(bn::color(31, 31, 0));

    while(true)
    {
        bn::core::update();
        bn::sprite_ptr sprite1 = bn::sprite_items::sprite_0001.create_sprite(0, 0);
        sprite1.set_scale(1.5);
        sprite1.set_visible(true);
        bn::core::update();
        bn::sprite_ptr sprite2 = bn::sprite_items::sprite_0002.create_sprite(0, 0);
        sprite2.set_scale(1.7);
        bn::bg_palettes::set_transparent_color(bn::color(31, 0, 0));
        sprite2.set_visible(true);
        bn::core::update();
        bn::sprite_ptr sprite3 = bn::sprite_items::sprite_0003.create_sprite(0, 0);
        sprite3.set_scale(1.5);
        bn::bg_palettes::set_transparent_color(bn::color(31, 31, 0));
        sprite3.set_visible(true);
        bn::core::update();
    }
}

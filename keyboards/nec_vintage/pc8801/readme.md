# PC8801 
Type-A

![pc8801-model]()

Image TBA.

*Converting one of popular keyboard found in retro gaming pc from 1981. The type-a marked keyboard contains blue alps, space bar, locking fn + caps key, and keypad for quick maths.*

* Keyboard Maintainer: [steve](https://github.com/stev3bb)
* Hardware Supported: F401 blackpill or clone.
* Hardware Availability: aliexpress, ebay, or core electronics.

Make example for this keyboard (after setting up your build environment):
    `make pc8801:default`

Flashing example for this keyboard:
    `make pc8801:default:flash`

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).

### Bootloader

Enter the bootloader in 3 ways:

* **Bootmagic reset**: fn + stop.
* **Physical reset button**: fn + stop.
* **Keycode in layout**: Press the key mapped to `QK_BOOT`.

### Wiring instructions
On Blackpill boards, avoid using the following pins, since they will cause either USB enumeration or the DFU bootloader to not work correctly:

* USB-related pins: PA10, PA11, PA12
* BOOT1 pin: PB2

### Wiring
*Below are the wiring for board that uses the nec PD8049HC MCU*

![pc8801-pcb]()
Image TBA.


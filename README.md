# genQR #
![Icon](https://raw.githubusercontent.com/haecker-felix/genQR/master/data/genqr.png)
#### *A GTK3 QR Code generator* ####



[![Build Status](https://travis-ci.org/haecker-felix/genQR.svg?branch=master)](https://travis-ci.org/haecker-felix/genQR.svg?branch=master)

## Manual installation ##

### Requirements
 * libqrencode
 * cmake (>= 2.8.4)
 * valac (>= 0.20), valac-0.24 or valac-0.26 is recommended
 * pkg-config
 * gobject-2.0
 * glib-2.0
 * gtk+-3.0 (>= 3.10)
 * GNOME desktop icon theme (symbolic icons) (only required to display icons properly) (recommended)

On Debian based systems install following packages:

    sudo apt-get install build-essential libqrencode3 libqrencode-lib valac-0.24 libvala-0.24-dev cmake pkg-config intltool gnome-icon-theme-symbolic librsvg2-bin


### Building ###
 1. `mkdir build && cd build`
 2. `cmake ..`
 3. `make`

### Installation ###
 1. `sudo make install`

## License ##
genQR is distributed under the terms of the GNU General Public License version 3 or later and published by:
 * Felix Häcker

## Credits ##
libqrencode by Kentaro Fukuchi (https://github.com/fukuchi/libqrencode)

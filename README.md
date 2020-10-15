# Rocker Launcher

A Slingshot fork that works on Xfce without gala, granite and plank support.

![](https://git.mirko.pm/brombinmirko/xfce4-rocker-plugin/-/raw/master/screenshot.png)


### Dependencies 

```
libgnome-menu
libxfce4panel
libxfce4util
libxfconf
libgee
vala
```

### Build and install 
```
mkdir build
cd build
cmake .. -DCMAKE_INSTALL_PREFIX=/usr
make
sudo make install
./src/rocker
```

## Configuration
By default category view is disabled. Use `dconf` to enable, configs are stored in `pm.mirko.rocker`.

## Credits

Original work (slingshot_gnome) by Raster Software Vigo (rastersoft) 

Special thanks to Panther fork for initial xfce4 support.
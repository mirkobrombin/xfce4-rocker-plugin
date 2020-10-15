# Rocker Launcher

A Slingshot fork that works on Xfce without gala, granite and plank support.

![](https://git.mirko.pm/brombinmirko/rocker-launcher/-/raw/master/screenshot.png)


### Dependencies 

```
libgnome-menu-3-dev 
libxfce4panel-2.0-dev 
libxfce4util-dev
libxfconf-0-dev
```

### Build and install 
```
mkdir build
cd build
cmake .. -DCMAKE_INSTALL_PREFIX=/usr
make
sudo make install
./src/rocker_launcher
```

## Configuration
By default category view is disabled. Use `dconf` to enable, configs are stored in `pm.mirko.rocker`.

## Credits

Original work (slingshot_gnome) by Raster Software Vigo (rastersoft) 

Special thanks to Panther fork for initial xfce4 support.
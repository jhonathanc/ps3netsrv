# ps3netsrv

## Requirements

* A C/C++ compiler

* [Meson](https://mesonbuild.com/Getting-meson.html)

* [mbed TLS](https://tls.mbed.org/)
  * Is being searched for in system library directory (e.g. `/usr/lib`) and custom directories specified in `LIBRARY_PATH`.
  If using a custom directory, put the path to the headers in `C_INCLUDE_PATH`.

`Meson` and `mbed TLS` are available as packages for most posix environments.

`Meson` and `mbed TLS` are not needed if using the Alternate building method.


## Building
**Warning**: *If you get "buffer overflow" errors on Linux, try to use the Alternate building method*

First configure a build directory:

```bash
$ meson buildrelease --buildtype=release
```

Then build using ninja:

```bash
$ ninja -C buildrelease
```

For further information see [Running Meson](https://mesonbuild.com/Running-Meson.html).

## Alternate building
To build ps3netsrv using the bundled POLARSSL library instead of mbed TLS and without Meson:
* use `_make.bat` on Windows 
* use `Make.sh` on Linux

On Linux this will statically link ps3netsrv.

```
sudo apt-get update
sudo apt-get install make
sudo apt-get install g++
./Make.sh
```

## Docker Container
Docker Engine enables applications built in containers packages to run anywhere consistently on any infrastructure.

Docker container packages for ps3netsrv are available at:
https://hub.docker.com/search?q=ps3netsrv

# Other ports / forks
The ps3netsrv has been ported to multiple platforms (Windows, linux, FreeBSD, MacOS, PS3, Android, Java)<br>

ps3netsrv (webMAN MOD):<br>
https://github.com/aldostools/webMAN-MOD/tree/master/_Projects_/ps3netsrv

Docker container: https://github.com/shawly/docker-ps3netsrv

Java / Android: https://github.com/jhonathanc/ps3netsrv-android

OpenWrt<br>
All platforms (arm, arc, mips, mipsel, i386, powerpc, x86): https://github.com/jhonathanc/ps3netsrv/releases<br> 
SRC: https://github.com/jhonathanc/ps3netsrv-openwrt<br>

Xcode (macOS / Linux / FreeBSD 10):<br>
https://github.com/klahjn/ps3netsrvXCODE <br>
https://github.com/klahjn/macOSPS3NetServerGUI

Google Go: https://github.com/xakep666/ps3netsrv-go

ps3netsrv modified for encrypted (3k3y/redump) isos: http://forum.redump.org/topic/14472

ps3netsrv modified for multiMAN: http://deanbg.com/ps3netsrv.zip

Original ps3netsrv by Cobra for Linux / Windows:<br>
https://github.com/Joonie86/Cobra-7.00/tree/master/446/PC/ps3netsrv

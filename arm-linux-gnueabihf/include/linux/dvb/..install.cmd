cmd_/opt/gcc-7.2.0-rbp/arm-linux-gnueabihf/include/linux/dvb/.install := /bin/sh scripts/headers_install.sh /opt/gcc-7.2.0-rbp/arm-linux-gnueabihf/include/linux/dvb ./include/uapi/linux/dvb audio.h ca.h dmx.h frontend.h net.h osd.h version.h video.h; /bin/sh scripts/headers_install.sh /opt/gcc-7.2.0-rbp/arm-linux-gnueabihf/include/linux/dvb ./include/linux/dvb ; /bin/sh scripts/headers_install.sh /opt/gcc-7.2.0-rbp/arm-linux-gnueabihf/include/linux/dvb ./include/generated/uapi/linux/dvb ; for F in ; do echo "\#include <asm-generic/$$F>" > /opt/gcc-7.2.0-rbp/arm-linux-gnueabihf/include/linux/dvb/$$F; done; touch /opt/gcc-7.2.0-rbp/arm-linux-gnueabihf/include/linux/dvb/.install

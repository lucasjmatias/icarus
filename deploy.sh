#!/usr/bin/bash
sourcePath='/home/lucas/desenvolvimento/projetos/openwrt/source'
icarusPath='/home/lucas/desenvolvimento/projetos/openwrt/icarus'
scp -O "${sourcePath}/bin/packages/aarch64_cortex-a53/mypackages/icarus_1.0-1_aarch64_cortex-a53.ipk" root@192.168.1.1:/tmp/
ssh root@192.168.1.1 "opkg remove icarus"
ssh root@192.168.1.1 "opkg install /tmp/icarus_1.0-1_aarch64_cortex-a53.ipk"

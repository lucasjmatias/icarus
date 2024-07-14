#!/usr/bin/bash
sourcePath='/home/lucas/desenvolvimento/projetos/openwrt/source'
icarusPath='/home/lucas/desenvolvimento/projetos/openwrt/icarus'
cd "$sourcePath"
./scripts/feeds update mypackages
./scripts/feeds install -a -p mypackages
make package/icarus/{clean,compile}



#!/bin/bash
export PATH=$PATH:/home/moepda/dup/prebuilts/gcc/linux-x86/aarch64/aarch64-linux-android-4.9/bin
export CROSS_COMPILE=aarch64-linux-android-
export KBUILD_BUILD_HOST=unicornblood
mkdir out
make ARCH=arm64 O=out merge_kirin970_defconfig
make ARCH=arm64 O=out -j8

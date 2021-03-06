#!/bin/bash
set -ev
openssl aes-256-cbc -K $encrypted_498dac83364f_key -iv $encrypted_498dac83364f_iv -in dist/butler_creds.enc -out butler_creds -d
mkdir Tiled
mv Tiled-$TILED_VERSION-x86_64.AppImage Tiled/
wget https://dl.itch.ovh/butler/linux-amd64/head/butler
chmod +x ./butler
./butler -i butler_creds push Tiled thorbjorn/tiled:linux-64bit-snapshot

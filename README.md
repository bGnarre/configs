# configs

## Setup
```console
foo@bar: ~/configs$ # bootstrap:
foo@bar: ~$ git clone https://github.com/bGnarre/configs ~/configs
foo@bar: ~$ cd ~/configs
foo@bar: ~/configs$ yay --needed -S - < packages.txt
foo@bar: ~/configs$ systemctl --now --user enable pulseaudio
foo@bar: ~/configs$ # install dmenu, dwm, st and dwmblocks:
foo@bar: ~/configs$ cd dmenu-*.* && sudo make install
foo@bar: ~/configs/dmenu$ cd ../dwm-*.* && sudo make install
foo@bar: ~/configs/dwm$ cd ../st-*.* && sudo make install
foo@bar: ~/configs/st$ cd ../dwmblocks-* && sudo make install
```

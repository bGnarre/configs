#!/bin/sh

setxkbmap -layout se -variant nodeadkeys

xset r rate 300 20
xset b off
xset s off

dwmblocks &
xbanish &
pulseeffects --gapplication-service &

test -s ~/.Xresources && xrdb ~/.Xresources.my
test -s ~/.Xresources.my && xrdb -merge ~/.Xresources.my

exec dwm

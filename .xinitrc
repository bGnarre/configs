#!/bin/sh

setxkbmap -layout se -variant nodeadkeys

xset r rate 300 20
xset b off
xset s off

dwmblocks &

exec dwm

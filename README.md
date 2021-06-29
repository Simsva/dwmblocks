# dwmblocks
Modular status bar for dwm written in c.

## My Build
This is my personal build of dwmblocks, forked from [Luke Smith's build](https://github.com/LukeSmithxyz/dwmblocks).
It uses scripts from my own dotfiles.

## Modifying Blocks
The statusbar is made from text output from commandline programs.
Blocks are added and removed by editing the blocks.h header file.

## Update Blocks
Most blocks never update by themselves, i.e. they don't rerun scripts constantly.
Instead all blocks update on different signals sent to the dwmblocks process.

For example, updating a block with the defined update signal `10` would look like this:
`pkill -RTMIN+10 dwmblocks`.

You can also use `kill -44 $(pidof dwmblocks)` which runs faster, but does the same thing.
Just add 34 to the normal update signal.

For a list of update signals, the source code is the documentation! Praise suckless. ;)

## Clickable Blocks
To enable clickable blocks you need to [patch](https://dwm.suckless.org/patches/statuscmd/) your build of dwm.
Credits to Daniel Bylinka (daniel.bylinka@gmail.com) for that patch.

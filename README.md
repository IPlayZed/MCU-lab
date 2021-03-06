# MCU-lab

## Overview

This repository is a collection of my projects written in my university's lab. We use Silicon Lab's [low cost board](https://www.silabs.com/development-tools/mcu/8-bit/efm8bb1lck-starter-kit). The examples are mostly written for the [extension board](4x7-segments%20Arduino%20shield-Eagle/). However they can be built on breadboards as well, but in some cases the layout of the components may be better suited to be built in a different way than it is in the [extension board](4x7-segments%20Arduino%20shield-Eagle/), resulting in different setups.

## Development environment

The development environment used is Silicon Lab's [Simplicity Studio 5](https://www.silabs.com/developers/simplicity-studio). This is an Eclipse based IDE, runs on all major OS platforms. It can be installed not only on Debian based systems, but Arch based ones as well from the [AUR](https://aur.archlinux.org/packages/simplicitystudio/). If using the latter version, Wine must be installed to use the Keil C51 compiler toolchain in the IDE for 8-bit development.

If you clone the project, if all is well, you can navigate to the actual development subfolders, where you can import it into the IDE.

## Project structure

I intend to keep subfolders on a per-lab basis, but this might change in the future. For detailed information on the given subproject, read the **README**.

When opening the project inside *Simplicity Studio 5*, you might want to import it to the same directory where you imported it from (thus you can still keep working in the cloned repository as your workspace), so I added a global `.gitignore` to not track project import reports.

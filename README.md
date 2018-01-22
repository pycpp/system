# System

**Table of Contents**

- [Errno](#errno)
- [Windows](#windows)
- [Sys/Stat](#sys-stat)
- [Sys/Mman](#sys-mman)

## Errno

Defines reasonable defaults for non-standard constants in `<errno.h>`. See [errno.h](/errno.h) for more details.

## Windows

Defines reasonable defaults for non-standard Windows error codes, if `<windows.h>` is available. See [windows.h](/windows.h) for more details.

## Sys/Stat

Defines reasonable defaults for `<sys/stat.h>` constants when not defined by the operating system. See [sysstat.h](/sys/stat.h) for more details.

## Sys/Mman

Cross-platform port of `<sys/mman.h>` for Windows operating systems.

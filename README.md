# BL2CK OS Kernel

**Author:** BL2CK  
**Date:** 2016-2-16  
**OS Version:** 1.30.3  
**Fork maintainer:** reminon

## Credits

This project is based on and references the following open source projects:

| Author | Project | Description |
|--------|---------|-------------|
| Acekard | Acekard R.P.G | Homebrew |
| YWG (yellow wood goblin) & Taiju Yamada | WOOD & WAIO | Homebrew, Loader, libio, dldi |
| devkitPRO | devkitARM, libnds, libelm | Toolchain & libraries |

*BL2CK Software Co. Ltd. All Rights Reserved.*

---

## Fork Changes (reminon)

- Modernized build system for devkitARM r65 / GCC 14
- Replaced bundled libunds with system libnds
- Fixed newlib syscall API changes (void* file descriptors)
- Fixed C++17 compatibility issues
- Added DSpico DLDI support
- Translated Chinese source comments to English
- Renamed language folders for filesystem compatibility
- English and Japanese languages included by default

---

## Changelog

### BL2CK OS V1.30.3 — 2015-12-20
- Updated game database to v6554
- Optimized external linkconfig configuration
- Optimized language string definitions

### BL2CK OS V1.30.2 — 2015-11-01
- Added ability to exit the kernel by pressing X on the main menu
- Added ability to exit safemode
- Implemented GBA frame in SLOT-2 GBA mode
- Optimized language string definitions

### BL2CK OS V1.30.1 — 2015-10-30
- Added external linkconfig configuration
- Optimized romloader, romlauncher, mainwnd code
- Adopted external loader index
- Adopted external reset index
- Rebuilt kernel structure
- Fixed savelist crash

### BL2CK OS V1.30.0 — 2015-10-25
- Updated game database to v6536
- Fixed some UI issues

### BL2CK OS V1.00.0 — V1.20.0
- Changelog not available

---

*Powered by BL2CK Software*

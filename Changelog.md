# Changelog

---

## 0.1.0

### Features

* Add `HLFGL::Init_{glFunctionName}` functions to initialize individual functions easily
* Add `--config` parameter 

### Changes

* Rename `GetProcAddress` functions to `GetFunctionAddress`
* Rename `LoadLibrary` and `UnloadLibrary` (and similar API functions) to `InitLibrary` and `DeleteLibrary`
* Set default EGL Core version to 1.4
* Moved generator script and config files to `/scripts/` directory
* Moved generated headers to `/include/HLFGL/gen/` directory
* Remove version and extension-specific `HLFGL_ENABLE_*` definitions

### Fixes

* Fix instances of `GenerateHeaders.py` not generating all requirements for some versions / extensions
* Fix locations of `khrplatform.h` and `eglplatform.h`
* Fix missing shebang in `GenerateHeaders.py`
* Fix potential crash if a GL lib is not found

---

## 0.0.1

### Changes

* Default HLFGL_ENABLE_EGL to 1

### Fixes

* Fix generator adding empty namespaces

---

## 0.0.0

Release
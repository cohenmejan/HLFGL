# Changelog

---

## 0.1.0

### Changes

* Remove version and extension-specific `HLFGL_ENABLE_*` definitions
* Moved generator script and config files to `/scripts/` directory
* Moved generated headers to `/include/HLFGL/gen/` directory

### Fixes

* Fix instances of `GenerateHeaders.py` not generating all requirements for some versions / extensions
* Fix locations of `khrplatform.h` and `eglplatform.h`
* Fix missing shebang in `GenerateHeaders.py`

---

## 0.0.1

### Changes

* Default HLFGL_ENABLE_EGL to 1

### Fixes

* Fix generator adding empty namespaces

---

## 0.0.0

Release
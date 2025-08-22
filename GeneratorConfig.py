# --- <API>_ENABLED ---
# if True, <API> definitions will be generated
# example:
# GL_ENABLED = True

# --- <API>_CORE_VERSION ---
# the highest core <API> version that will be generated.
# core <API> versions 1.0 through '<API>_CORE_VERSION' will be generated.
# example:
# GL_CORE_VERSION = (4, 5)

# --- <API>_EXTENSIONS ---
# list of names of <API> extensions to be generated
# example:
# GL_EXTENSIONS = [
#     "GL_ARB_debug_output",
#     "GL_EXT_texture_filter_anisotropic"
# ]

# ----------------

# GL

GL_ENABLED = True
GL_CORE_VERSION = (3, 3)
GL_EXTENSIONS = [

]

# ----------------

# EGL

EGL_ENABLED = True
EGL_CORE_VERSION = (1, 4)
EGL_EXTENSIONS = [

]
// generated

#pragma once
extern "C" {
#define HLFGL_GL_ENABLED 1
// GL_VERSION_1_0
#ifndef GL_VERSION_1_0
#define GL_VERSION_1_0 1
typedef void GLvoid;
typedef unsigned int GLenum;
#include <KHR/khrplatform.h>
typedef khronos_float_t GLfloat;
typedef int GLint;
typedef int GLsizei;
typedef unsigned int GLbitfield;
typedef double GLdouble;
typedef unsigned int GLuint;
typedef unsigned char GLboolean;
typedef khronos_uint8_t GLubyte;
typedef khronos_int8_t GLbyte;
typedef khronos_int16_t GLshort;
typedef khronos_uint16_t GLushort;
#define GL_DEPTH_BUFFER_BIT 0x00000100
#define GL_STENCIL_BUFFER_BIT 0x00000400
#define GL_COLOR_BUFFER_BIT 0x00004000
#define GL_FALSE 0
#define GL_TRUE 1
#define GL_POINTS 0x0000
#define GL_LINES 0x0001
#define GL_LINE_LOOP 0x0002
#define GL_LINE_STRIP 0x0003
#define GL_TRIANGLES 0x0004
#define GL_TRIANGLE_STRIP 0x0005
#define GL_TRIANGLE_FAN 0x0006
#define GL_QUADS 0x0007
#define GL_NEVER 0x0200
#define GL_LESS 0x0201
#define GL_EQUAL 0x0202
#define GL_LEQUAL 0x0203
#define GL_GREATER 0x0204
#define GL_NOTEQUAL 0x0205
#define GL_GEQUAL 0x0206
#define GL_ALWAYS 0x0207
#define GL_ZERO 0
#define GL_ONE 1
#define GL_SRC_COLOR 0x0300
#define GL_ONE_MINUS_SRC_COLOR 0x0301
#define GL_SRC_ALPHA 0x0302
#define GL_ONE_MINUS_SRC_ALPHA 0x0303
#define GL_DST_ALPHA 0x0304
#define GL_ONE_MINUS_DST_ALPHA 0x0305
#define GL_DST_COLOR 0x0306
#define GL_ONE_MINUS_DST_COLOR 0x0307
#define GL_SRC_ALPHA_SATURATE 0x0308
#define GL_NONE 0
#define GL_FRONT_LEFT 0x0400
#define GL_FRONT_RIGHT 0x0401
#define GL_BACK_LEFT 0x0402
#define GL_BACK_RIGHT 0x0403
#define GL_FRONT 0x0404
#define GL_BACK 0x0405
#define GL_LEFT 0x0406
#define GL_RIGHT 0x0407
#define GL_FRONT_AND_BACK 0x0408
#define GL_NO_ERROR 0
#define GL_INVALID_ENUM 0x0500
#define GL_INVALID_VALUE 0x0501
#define GL_INVALID_OPERATION 0x0502
#define GL_OUT_OF_MEMORY 0x0505
#define GL_CW 0x0900
#define GL_CCW 0x0901
#define GL_POINT_SIZE 0x0B11
#define GL_POINT_SIZE_RANGE 0x0B12
#define GL_POINT_SIZE_GRANULARITY 0x0B13
#define GL_LINE_SMOOTH 0x0B20
#define GL_LINE_WIDTH 0x0B21
#define GL_LINE_WIDTH_RANGE 0x0B22
#define GL_LINE_WIDTH_GRANULARITY 0x0B23
#define GL_POLYGON_MODE 0x0B40
#define GL_POLYGON_SMOOTH 0x0B41
#define GL_CULL_FACE 0x0B44
#define GL_CULL_FACE_MODE 0x0B45
#define GL_FRONT_FACE 0x0B46
#define GL_DEPTH_RANGE 0x0B70
#define GL_DEPTH_TEST 0x0B71
#define GL_DEPTH_WRITEMASK 0x0B72
#define GL_DEPTH_CLEAR_VALUE 0x0B73
#define GL_DEPTH_FUNC 0x0B74
#define GL_STENCIL_TEST 0x0B90
#define GL_STENCIL_CLEAR_VALUE 0x0B91
#define GL_STENCIL_FUNC 0x0B92
#define GL_STENCIL_VALUE_MASK 0x0B93
#define GL_STENCIL_FAIL 0x0B94
#define GL_STENCIL_PASS_DEPTH_FAIL 0x0B95
#define GL_STENCIL_PASS_DEPTH_PASS 0x0B96
#define GL_STENCIL_REF 0x0B97
#define GL_STENCIL_WRITEMASK 0x0B98
#define GL_VIEWPORT 0x0BA2
#define GL_DITHER 0x0BD0
#define GL_BLEND_DST 0x0BE0
#define GL_BLEND_SRC 0x0BE1
#define GL_BLEND 0x0BE2
#define GL_LOGIC_OP_MODE 0x0BF0
#define GL_DRAW_BUFFER 0x0C01
#define GL_READ_BUFFER 0x0C02
#define GL_SCISSOR_BOX 0x0C10
#define GL_SCISSOR_TEST 0x0C11
#define GL_COLOR_CLEAR_VALUE 0x0C22
#define GL_COLOR_WRITEMASK 0x0C23
#define GL_DOUBLEBUFFER 0x0C32
#define GL_STEREO 0x0C33
#define GL_LINE_SMOOTH_HINT 0x0C52
#define GL_POLYGON_SMOOTH_HINT 0x0C53
#define GL_UNPACK_SWAP_BYTES 0x0CF0
#define GL_UNPACK_LSB_FIRST 0x0CF1
#define GL_UNPACK_ROW_LENGTH 0x0CF2
#define GL_UNPACK_SKIP_ROWS 0x0CF3
#define GL_UNPACK_SKIP_PIXELS 0x0CF4
#define GL_UNPACK_ALIGNMENT 0x0CF5
#define GL_PACK_SWAP_BYTES 0x0D00
#define GL_PACK_LSB_FIRST 0x0D01
#define GL_PACK_ROW_LENGTH 0x0D02
#define GL_PACK_SKIP_ROWS 0x0D03
#define GL_PACK_SKIP_PIXELS 0x0D04
#define GL_PACK_ALIGNMENT 0x0D05
#define GL_MAX_TEXTURE_SIZE 0x0D33
#define GL_MAX_VIEWPORT_DIMS 0x0D3A
#define GL_SUBPIXEL_BITS 0x0D50
#define GL_TEXTURE_1D 0x0DE0
#define GL_TEXTURE_2D 0x0DE1
#define GL_TEXTURE_WIDTH 0x1000
#define GL_TEXTURE_HEIGHT 0x1001
#define GL_TEXTURE_BORDER_COLOR 0x1004
#define GL_DONT_CARE 0x1100
#define GL_FASTEST 0x1101
#define GL_NICEST 0x1102
#define GL_BYTE 0x1400
#define GL_UNSIGNED_BYTE 0x1401
#define GL_SHORT 0x1402
#define GL_UNSIGNED_SHORT 0x1403
#define GL_INT 0x1404
#define GL_UNSIGNED_INT 0x1405
#define GL_FLOAT 0x1406
#define GL_STACK_OVERFLOW 0x0503
#define GL_STACK_UNDERFLOW 0x0504
#define GL_CLEAR 0x1500
#define GL_AND 0x1501
#define GL_AND_REVERSE 0x1502
#define GL_COPY 0x1503
#define GL_AND_INVERTED 0x1504
#define GL_NOOP 0x1505
#define GL_XOR 0x1506
#define GL_OR 0x1507
#define GL_NOR 0x1508
#define GL_EQUIV 0x1509
#define GL_INVERT 0x150A
#define GL_OR_REVERSE 0x150B
#define GL_COPY_INVERTED 0x150C
#define GL_OR_INVERTED 0x150D
#define GL_NAND 0x150E
#define GL_SET 0x150F
#define GL_TEXTURE 0x1702
#define GL_COLOR 0x1800
#define GL_DEPTH 0x1801
#define GL_STENCIL 0x1802
#define GL_STENCIL_INDEX 0x1901
#define GL_DEPTH_COMPONENT 0x1902
#define GL_RED 0x1903
#define GL_GREEN 0x1904
#define GL_BLUE 0x1905
#define GL_ALPHA 0x1906
#define GL_RGB 0x1907
#define GL_RGBA 0x1908
#define GL_POINT 0x1B00
#define GL_LINE 0x1B01
#define GL_FILL 0x1B02
#define GL_KEEP 0x1E00
#define GL_REPLACE 0x1E01
#define GL_INCR 0x1E02
#define GL_DECR 0x1E03
#define GL_VENDOR 0x1F00
#define GL_RENDERER 0x1F01
#define GL_VERSION 0x1F02
#define GL_EXTENSIONS 0x1F03
#define GL_NEAREST 0x2600
#define GL_LINEAR 0x2601
#define GL_NEAREST_MIPMAP_NEAREST 0x2700
#define GL_LINEAR_MIPMAP_NEAREST 0x2701
#define GL_NEAREST_MIPMAP_LINEAR 0x2702
#define GL_LINEAR_MIPMAP_LINEAR 0x2703
#define GL_TEXTURE_MAG_FILTER 0x2800
#define GL_TEXTURE_MIN_FILTER 0x2801
#define GL_TEXTURE_WRAP_S 0x2802
#define GL_TEXTURE_WRAP_T 0x2803
#define GL_REPEAT 0x2901
#define GL_CURRENT_BIT 0x00000001
#define GL_POINT_BIT 0x00000002
#define GL_LINE_BIT 0x00000004
#define GL_POLYGON_BIT 0x00000008
#define GL_POLYGON_STIPPLE_BIT 0x00000010
#define GL_PIXEL_MODE_BIT 0x00000020
#define GL_LIGHTING_BIT 0x00000040
#define GL_FOG_BIT 0x00000080
#define GL_ACCUM_BUFFER_BIT 0x00000200
#define GL_VIEWPORT_BIT 0x00000800
#define GL_TRANSFORM_BIT 0x00001000
#define GL_ENABLE_BIT 0x00002000
#define GL_HINT_BIT 0x00008000
#define GL_EVAL_BIT 0x00010000
#define GL_LIST_BIT 0x00020000
#define GL_TEXTURE_BIT 0x00040000
#define GL_SCISSOR_BIT 0x00080000
#define GL_ALL_ATTRIB_BITS 0xFFFFFFFF
#define GL_QUAD_STRIP 0x0008
#define GL_POLYGON 0x0009
#define GL_ACCUM 0x0100
#define GL_LOAD 0x0101
#define GL_RETURN 0x0102
#define GL_MULT 0x0103
#define GL_ADD 0x0104
#define GL_AUX0 0x0409
#define GL_AUX1 0x040A
#define GL_AUX2 0x040B
#define GL_AUX3 0x040C
#define GL_2D 0x0600
#define GL_3D 0x0601
#define GL_3D_COLOR 0x0602
#define GL_3D_COLOR_TEXTURE 0x0603
#define GL_4D_COLOR_TEXTURE 0x0604
#define GL_PASS_THROUGH_TOKEN 0x0700
#define GL_POINT_TOKEN 0x0701
#define GL_LINE_TOKEN 0x0702
#define GL_POLYGON_TOKEN 0x0703
#define GL_BITMAP_TOKEN 0x0704
#define GL_DRAW_PIXEL_TOKEN 0x0705
#define GL_COPY_PIXEL_TOKEN 0x0706
#define GL_LINE_RESET_TOKEN 0x0707
#define GL_EXP 0x0800
#define GL_EXP2 0x0801
#define GL_COEFF 0x0A00
#define GL_ORDER 0x0A01
#define GL_DOMAIN 0x0A02
#define GL_PIXEL_MAP_I_TO_I 0x0C70
#define GL_PIXEL_MAP_S_TO_S 0x0C71
#define GL_PIXEL_MAP_I_TO_R 0x0C72
#define GL_PIXEL_MAP_I_TO_G 0x0C73
#define GL_PIXEL_MAP_I_TO_B 0x0C74
#define GL_PIXEL_MAP_I_TO_A 0x0C75
#define GL_PIXEL_MAP_R_TO_R 0x0C76
#define GL_PIXEL_MAP_G_TO_G 0x0C77
#define GL_PIXEL_MAP_B_TO_B 0x0C78
#define GL_PIXEL_MAP_A_TO_A 0x0C79
#define GL_CURRENT_COLOR 0x0B00
#define GL_CURRENT_INDEX 0x0B01
#define GL_CURRENT_NORMAL 0x0B02
#define GL_CURRENT_TEXTURE_COORDS 0x0B03
#define GL_CURRENT_RASTER_COLOR 0x0B04
#define GL_CURRENT_RASTER_INDEX 0x0B05
#define GL_CURRENT_RASTER_TEXTURE_COORDS 0x0B06
#define GL_CURRENT_RASTER_POSITION 0x0B07
#define GL_CURRENT_RASTER_POSITION_VALID 0x0B08
#define GL_CURRENT_RASTER_DISTANCE 0x0B09
#define GL_POINT_SMOOTH 0x0B10
#define GL_LINE_STIPPLE 0x0B24
#define GL_LINE_STIPPLE_PATTERN 0x0B25
#define GL_LINE_STIPPLE_REPEAT 0x0B26
#define GL_LIST_MODE 0x0B30
#define GL_MAX_LIST_NESTING 0x0B31
#define GL_LIST_BASE 0x0B32
#define GL_LIST_INDEX 0x0B33
#define GL_POLYGON_STIPPLE 0x0B42
#define GL_EDGE_FLAG 0x0B43
#define GL_LIGHTING 0x0B50
#define GL_LIGHT_MODEL_LOCAL_VIEWER 0x0B51
#define GL_LIGHT_MODEL_TWO_SIDE 0x0B52
#define GL_LIGHT_MODEL_AMBIENT 0x0B53
#define GL_SHADE_MODEL 0x0B54
#define GL_COLOR_MATERIAL_FACE 0x0B55
#define GL_COLOR_MATERIAL_PARAMETER 0x0B56
#define GL_COLOR_MATERIAL 0x0B57
#define GL_FOG 0x0B60
#define GL_FOG_INDEX 0x0B61
#define GL_FOG_DENSITY 0x0B62
#define GL_FOG_START 0x0B63
#define GL_FOG_END 0x0B64
#define GL_FOG_MODE 0x0B65
#define GL_FOG_COLOR 0x0B66
#define GL_ACCUM_CLEAR_VALUE 0x0B80
#define GL_MATRIX_MODE 0x0BA0
#define GL_NORMALIZE 0x0BA1
#define GL_MODELVIEW_STACK_DEPTH 0x0BA3
#define GL_PROJECTION_STACK_DEPTH 0x0BA4
#define GL_TEXTURE_STACK_DEPTH 0x0BA5
#define GL_MODELVIEW_MATRIX 0x0BA6
#define GL_PROJECTION_MATRIX 0x0BA7
#define GL_TEXTURE_MATRIX 0x0BA8
#define GL_ATTRIB_STACK_DEPTH 0x0BB0
#define GL_ALPHA_TEST 0x0BC0
#define GL_ALPHA_TEST_FUNC 0x0BC1
#define GL_ALPHA_TEST_REF 0x0BC2
#define GL_LOGIC_OP 0x0BF1
#define GL_AUX_BUFFERS 0x0C00
#define GL_INDEX_CLEAR_VALUE 0x0C20
#define GL_INDEX_WRITEMASK 0x0C21
#define GL_INDEX_MODE 0x0C30
#define GL_RGBA_MODE 0x0C31
#define GL_RENDER_MODE 0x0C40
#define GL_PERSPECTIVE_CORRECTION_HINT 0x0C50
#define GL_POINT_SMOOTH_HINT 0x0C51
#define GL_FOG_HINT 0x0C54
#define GL_TEXTURE_GEN_S 0x0C60
#define GL_TEXTURE_GEN_T 0x0C61
#define GL_TEXTURE_GEN_R 0x0C62
#define GL_TEXTURE_GEN_Q 0x0C63
#define GL_PIXEL_MAP_I_TO_I_SIZE 0x0CB0
#define GL_PIXEL_MAP_S_TO_S_SIZE 0x0CB1
#define GL_PIXEL_MAP_I_TO_R_SIZE 0x0CB2
#define GL_PIXEL_MAP_I_TO_G_SIZE 0x0CB3
#define GL_PIXEL_MAP_I_TO_B_SIZE 0x0CB4
#define GL_PIXEL_MAP_I_TO_A_SIZE 0x0CB5
#define GL_PIXEL_MAP_R_TO_R_SIZE 0x0CB6
#define GL_PIXEL_MAP_G_TO_G_SIZE 0x0CB7
#define GL_PIXEL_MAP_B_TO_B_SIZE 0x0CB8
#define GL_PIXEL_MAP_A_TO_A_SIZE 0x0CB9
#define GL_MAP_COLOR 0x0D10
#define GL_MAP_STENCIL 0x0D11
#define GL_INDEX_SHIFT 0x0D12
#define GL_INDEX_OFFSET 0x0D13
#define GL_RED_SCALE 0x0D14
#define GL_RED_BIAS 0x0D15
#define GL_ZOOM_X 0x0D16
#define GL_ZOOM_Y 0x0D17
#define GL_GREEN_SCALE 0x0D18
#define GL_GREEN_BIAS 0x0D19
#define GL_BLUE_SCALE 0x0D1A
#define GL_BLUE_BIAS 0x0D1B
#define GL_ALPHA_SCALE 0x0D1C
#define GL_ALPHA_BIAS 0x0D1D
#define GL_DEPTH_SCALE 0x0D1E
#define GL_DEPTH_BIAS 0x0D1F
#define GL_MAX_EVAL_ORDER 0x0D30
#define GL_MAX_LIGHTS 0x0D31
#define GL_MAX_CLIP_PLANES 0x0D32
#define GL_MAX_PIXEL_MAP_TABLE 0x0D34
#define GL_MAX_ATTRIB_STACK_DEPTH 0x0D35
#define GL_MAX_MODELVIEW_STACK_DEPTH 0x0D36
#define GL_MAX_NAME_STACK_DEPTH 0x0D37
#define GL_MAX_PROJECTION_STACK_DEPTH 0x0D38
#define GL_MAX_TEXTURE_STACK_DEPTH 0x0D39
#define GL_INDEX_BITS 0x0D51
#define GL_RED_BITS 0x0D52
#define GL_GREEN_BITS 0x0D53
#define GL_BLUE_BITS 0x0D54
#define GL_ALPHA_BITS 0x0D55
#define GL_DEPTH_BITS 0x0D56
#define GL_STENCIL_BITS 0x0D57
#define GL_ACCUM_RED_BITS 0x0D58
#define GL_ACCUM_GREEN_BITS 0x0D59
#define GL_ACCUM_BLUE_BITS 0x0D5A
#define GL_ACCUM_ALPHA_BITS 0x0D5B
#define GL_NAME_STACK_DEPTH 0x0D70
#define GL_AUTO_NORMAL 0x0D80
#define GL_MAP1_COLOR_4 0x0D90
#define GL_MAP1_INDEX 0x0D91
#define GL_MAP1_NORMAL 0x0D92
#define GL_MAP1_TEXTURE_COORD_1 0x0D93
#define GL_MAP1_TEXTURE_COORD_2 0x0D94
#define GL_MAP1_TEXTURE_COORD_3 0x0D95
#define GL_MAP1_TEXTURE_COORD_4 0x0D96
#define GL_MAP1_VERTEX_3 0x0D97
#define GL_MAP1_VERTEX_4 0x0D98
#define GL_MAP2_COLOR_4 0x0DB0
#define GL_MAP2_INDEX 0x0DB1
#define GL_MAP2_NORMAL 0x0DB2
#define GL_MAP2_TEXTURE_COORD_1 0x0DB3
#define GL_MAP2_TEXTURE_COORD_2 0x0DB4
#define GL_MAP2_TEXTURE_COORD_3 0x0DB5
#define GL_MAP2_TEXTURE_COORD_4 0x0DB6
#define GL_MAP2_VERTEX_3 0x0DB7
#define GL_MAP2_VERTEX_4 0x0DB8
#define GL_MAP1_GRID_DOMAIN 0x0DD0
#define GL_MAP1_GRID_SEGMENTS 0x0DD1
#define GL_MAP2_GRID_DOMAIN 0x0DD2
#define GL_MAP2_GRID_SEGMENTS 0x0DD3
#define GL_TEXTURE_COMPONENTS 0x1003
#define GL_TEXTURE_BORDER 0x1005
#define GL_AMBIENT 0x1200
#define GL_DIFFUSE 0x1201
#define GL_SPECULAR 0x1202
#define GL_POSITION 0x1203
#define GL_SPOT_DIRECTION 0x1204
#define GL_SPOT_EXPONENT 0x1205
#define GL_SPOT_CUTOFF 0x1206
#define GL_CONSTANT_ATTENUATION 0x1207
#define GL_LINEAR_ATTENUATION 0x1208
#define GL_QUADRATIC_ATTENUATION 0x1209
#define GL_COMPILE 0x1300
#define GL_COMPILE_AND_EXECUTE 0x1301
#define GL_2_BYTES 0x1407
#define GL_3_BYTES 0x1408
#define GL_4_BYTES 0x1409
#define GL_EMISSION 0x1600
#define GL_SHININESS 0x1601
#define GL_AMBIENT_AND_DIFFUSE 0x1602
#define GL_COLOR_INDEXES 0x1603
#define GL_MODELVIEW 0x1700
#define GL_PROJECTION 0x1701
#define GL_COLOR_INDEX 0x1900
#define GL_LUMINANCE 0x1909
#define GL_LUMINANCE_ALPHA 0x190A
#define GL_BITMAP 0x1A00
#define GL_RENDER 0x1C00
#define GL_FEEDBACK 0x1C01
#define GL_SELECT 0x1C02
#define GL_FLAT 0x1D00
#define GL_SMOOTH 0x1D01
#define GL_S 0x2000
#define GL_T 0x2001
#define GL_R 0x2002
#define GL_Q 0x2003
#define GL_MODULATE 0x2100
#define GL_DECAL 0x2101
#define GL_TEXTURE_ENV_MODE 0x2200
#define GL_TEXTURE_ENV_COLOR 0x2201
#define GL_TEXTURE_ENV 0x2300
#define GL_EYE_LINEAR 0x2400
#define GL_OBJECT_LINEAR 0x2401
#define GL_SPHERE_MAP 0x2402
#define GL_TEXTURE_GEN_MODE 0x2500
#define GL_OBJECT_PLANE 0x2501
#define GL_EYE_PLANE 0x2502
#define GL_CLAMP 0x2900
#define GL_CLIP_PLANE0 0x3000
#define GL_CLIP_PLANE1 0x3001
#define GL_CLIP_PLANE2 0x3002
#define GL_CLIP_PLANE3 0x3003
#define GL_CLIP_PLANE4 0x3004
#define GL_CLIP_PLANE5 0x3005
#define GL_LIGHT0 0x4000
#define GL_LIGHT1 0x4001
#define GL_LIGHT2 0x4002
#define GL_LIGHT3 0x4003
#define GL_LIGHT4 0x4004
#define GL_LIGHT5 0x4005
#define GL_LIGHT6 0x4006
#define GL_LIGHT7 0x4007
namespace HLFGL::Functions {
	typedef void(GLAPIENTRY *Fn_glCullFace)(GLenum mode);
	inline Fn_glCullFace s_fn_glCullFace {};
	typedef void(GLAPIENTRY *Fn_glFrontFace)(GLenum mode);
	inline Fn_glFrontFace s_fn_glFrontFace {};
	typedef void(GLAPIENTRY *Fn_glHint)(GLenum target, GLenum mode);
	inline Fn_glHint s_fn_glHint {};
	typedef void(GLAPIENTRY *Fn_glLineWidth)(GLfloat width);
	inline Fn_glLineWidth s_fn_glLineWidth {};
	typedef void(GLAPIENTRY *Fn_glPointSize)(GLfloat size);
	inline Fn_glPointSize s_fn_glPointSize {};
	typedef void(GLAPIENTRY *Fn_glPolygonMode)(GLenum face, GLenum mode);
	inline Fn_glPolygonMode s_fn_glPolygonMode {};
	typedef void(GLAPIENTRY *Fn_glScissor)(GLint x, GLint y, GLsizei width, GLsizei height);
	inline Fn_glScissor s_fn_glScissor {};
	typedef void(GLAPIENTRY *Fn_glTexParameterf)(GLenum target, GLenum pname, GLfloat param);
	inline Fn_glTexParameterf s_fn_glTexParameterf {};
	typedef void(GLAPIENTRY *Fn_glTexParameterfv)(GLenum target, GLenum pname, const GLfloat * params);
	inline Fn_glTexParameterfv s_fn_glTexParameterfv {};
	typedef void(GLAPIENTRY *Fn_glTexParameteri)(GLenum target, GLenum pname, GLint param);
	inline Fn_glTexParameteri s_fn_glTexParameteri {};
	typedef void(GLAPIENTRY *Fn_glTexParameteriv)(GLenum target, GLenum pname, const GLint * params);
	inline Fn_glTexParameteriv s_fn_glTexParameteriv {};
	typedef void(GLAPIENTRY *Fn_glTexImage1D)(GLenum target, GLint level, GLint internalformat, GLsizei width, GLint border, GLenum format, GLenum type, const void * pixels);
	inline Fn_glTexImage1D s_fn_glTexImage1D {};
	typedef void(GLAPIENTRY *Fn_glTexImage2D)(GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum type, const void * pixels);
	inline Fn_glTexImage2D s_fn_glTexImage2D {};
	typedef void(GLAPIENTRY *Fn_glDrawBuffer)(GLenum buf);
	inline Fn_glDrawBuffer s_fn_glDrawBuffer {};
	typedef void(GLAPIENTRY *Fn_glClear)(GLbitfield mask);
	inline Fn_glClear s_fn_glClear {};
	typedef void(GLAPIENTRY *Fn_glClearColor)(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha);
	inline Fn_glClearColor s_fn_glClearColor {};
	typedef void(GLAPIENTRY *Fn_glClearStencil)(GLint s);
	inline Fn_glClearStencil s_fn_glClearStencil {};
	typedef void(GLAPIENTRY *Fn_glClearDepth)(GLdouble depth);
	inline Fn_glClearDepth s_fn_glClearDepth {};
	typedef void(GLAPIENTRY *Fn_glStencilMask)(GLuint mask);
	inline Fn_glStencilMask s_fn_glStencilMask {};
	typedef void(GLAPIENTRY *Fn_glColorMask)(GLboolean red, GLboolean green, GLboolean blue, GLboolean alpha);
	inline Fn_glColorMask s_fn_glColorMask {};
	typedef void(GLAPIENTRY *Fn_glDepthMask)(GLboolean flag);
	inline Fn_glDepthMask s_fn_glDepthMask {};
	typedef void(GLAPIENTRY *Fn_glDisable)(GLenum cap);
	inline Fn_glDisable s_fn_glDisable {};
	typedef void(GLAPIENTRY *Fn_glEnable)(GLenum cap);
	inline Fn_glEnable s_fn_glEnable {};
	typedef void(GLAPIENTRY *Fn_glFinish)();
	inline Fn_glFinish s_fn_glFinish {};
	typedef void(GLAPIENTRY *Fn_glFlush)();
	inline Fn_glFlush s_fn_glFlush {};
	typedef void(GLAPIENTRY *Fn_glBlendFunc)(GLenum sfactor, GLenum dfactor);
	inline Fn_glBlendFunc s_fn_glBlendFunc {};
	typedef void(GLAPIENTRY *Fn_glLogicOp)(GLenum opcode);
	inline Fn_glLogicOp s_fn_glLogicOp {};
	typedef void(GLAPIENTRY *Fn_glStencilFunc)(GLenum func, GLint ref, GLuint mask);
	inline Fn_glStencilFunc s_fn_glStencilFunc {};
	typedef void(GLAPIENTRY *Fn_glStencilOp)(GLenum fail, GLenum zfail, GLenum zpass);
	inline Fn_glStencilOp s_fn_glStencilOp {};
	typedef void(GLAPIENTRY *Fn_glDepthFunc)(GLenum func);
	inline Fn_glDepthFunc s_fn_glDepthFunc {};
	typedef void(GLAPIENTRY *Fn_glPixelStoref)(GLenum pname, GLfloat param);
	inline Fn_glPixelStoref s_fn_glPixelStoref {};
	typedef void(GLAPIENTRY *Fn_glPixelStorei)(GLenum pname, GLint param);
	inline Fn_glPixelStorei s_fn_glPixelStorei {};
	typedef void(GLAPIENTRY *Fn_glReadBuffer)(GLenum src);
	inline Fn_glReadBuffer s_fn_glReadBuffer {};
	typedef void(GLAPIENTRY *Fn_glReadPixels)(GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, void * pixels);
	inline Fn_glReadPixels s_fn_glReadPixels {};
	typedef void(GLAPIENTRY *Fn_glGetBooleanv)(GLenum pname, GLboolean * data);
	inline Fn_glGetBooleanv s_fn_glGetBooleanv {};
	typedef void(GLAPIENTRY *Fn_glGetDoublev)(GLenum pname, GLdouble * data);
	inline Fn_glGetDoublev s_fn_glGetDoublev {};
	typedef GLenum(GLAPIENTRY *Fn_glGetError)();
	inline Fn_glGetError s_fn_glGetError {};
	typedef void(GLAPIENTRY *Fn_glGetFloatv)(GLenum pname, GLfloat * data);
	inline Fn_glGetFloatv s_fn_glGetFloatv {};
	typedef void(GLAPIENTRY *Fn_glGetIntegerv)(GLenum pname, GLint * data);
	inline Fn_glGetIntegerv s_fn_glGetIntegerv {};
	typedef const GLubyte *(GLAPIENTRY *Fn_glGetString)(GLenum name);
	inline Fn_glGetString s_fn_glGetString {};
	typedef void(GLAPIENTRY *Fn_glGetTexImage)(GLenum target, GLint level, GLenum format, GLenum type, void * pixels);
	inline Fn_glGetTexImage s_fn_glGetTexImage {};
	typedef void(GLAPIENTRY *Fn_glGetTexParameterfv)(GLenum target, GLenum pname, GLfloat * params);
	inline Fn_glGetTexParameterfv s_fn_glGetTexParameterfv {};
	typedef void(GLAPIENTRY *Fn_glGetTexParameteriv)(GLenum target, GLenum pname, GLint * params);
	inline Fn_glGetTexParameteriv s_fn_glGetTexParameteriv {};
	typedef void(GLAPIENTRY *Fn_glGetTexLevelParameterfv)(GLenum target, GLint level, GLenum pname, GLfloat * params);
	inline Fn_glGetTexLevelParameterfv s_fn_glGetTexLevelParameterfv {};
	typedef void(GLAPIENTRY *Fn_glGetTexLevelParameteriv)(GLenum target, GLint level, GLenum pname, GLint * params);
	inline Fn_glGetTexLevelParameteriv s_fn_glGetTexLevelParameteriv {};
	typedef GLboolean(GLAPIENTRY *Fn_glIsEnabled)(GLenum cap);
	inline Fn_glIsEnabled s_fn_glIsEnabled {};
	typedef void(GLAPIENTRY *Fn_glDepthRange)(GLdouble n, GLdouble f);
	inline Fn_glDepthRange s_fn_glDepthRange {};
	typedef void(GLAPIENTRY *Fn_glViewport)(GLint x, GLint y, GLsizei width, GLsizei height);
	inline Fn_glViewport s_fn_glViewport {};
	typedef void(GLAPIENTRY *Fn_glNewList)(GLuint list, GLenum mode);
	inline Fn_glNewList s_fn_glNewList {};
	typedef void(GLAPIENTRY *Fn_glEndList)();
	inline Fn_glEndList s_fn_glEndList {};
	typedef void(GLAPIENTRY *Fn_glCallList)(GLuint list);
	inline Fn_glCallList s_fn_glCallList {};
	typedef void(GLAPIENTRY *Fn_glCallLists)(GLsizei n, GLenum type, const void * lists);
	inline Fn_glCallLists s_fn_glCallLists {};
	typedef void(GLAPIENTRY *Fn_glDeleteLists)(GLuint list, GLsizei range);
	inline Fn_glDeleteLists s_fn_glDeleteLists {};
	typedef GLuint(GLAPIENTRY *Fn_glGenLists)(GLsizei range);
	inline Fn_glGenLists s_fn_glGenLists {};
	typedef void(GLAPIENTRY *Fn_glListBase)(GLuint base);
	inline Fn_glListBase s_fn_glListBase {};
	typedef void(GLAPIENTRY *Fn_glBegin)(GLenum mode);
	inline Fn_glBegin s_fn_glBegin {};
	typedef void(GLAPIENTRY *Fn_glBitmap)(GLsizei width, GLsizei height, GLfloat xorig, GLfloat yorig, GLfloat xmove, GLfloat ymove, const GLubyte * bitmap);
	inline Fn_glBitmap s_fn_glBitmap {};
	typedef void(GLAPIENTRY *Fn_glColor3b)(GLbyte red, GLbyte green, GLbyte blue);
	inline Fn_glColor3b s_fn_glColor3b {};
	typedef void(GLAPIENTRY *Fn_glColor3bv)(const GLbyte * v);
	inline Fn_glColor3bv s_fn_glColor3bv {};
	typedef void(GLAPIENTRY *Fn_glColor3d)(GLdouble red, GLdouble green, GLdouble blue);
	inline Fn_glColor3d s_fn_glColor3d {};
	typedef void(GLAPIENTRY *Fn_glColor3dv)(const GLdouble * v);
	inline Fn_glColor3dv s_fn_glColor3dv {};
	typedef void(GLAPIENTRY *Fn_glColor3f)(GLfloat red, GLfloat green, GLfloat blue);
	inline Fn_glColor3f s_fn_glColor3f {};
	typedef void(GLAPIENTRY *Fn_glColor3fv)(const GLfloat * v);
	inline Fn_glColor3fv s_fn_glColor3fv {};
	typedef void(GLAPIENTRY *Fn_glColor3i)(GLint red, GLint green, GLint blue);
	inline Fn_glColor3i s_fn_glColor3i {};
	typedef void(GLAPIENTRY *Fn_glColor3iv)(const GLint * v);
	inline Fn_glColor3iv s_fn_glColor3iv {};
	typedef void(GLAPIENTRY *Fn_glColor3s)(GLshort red, GLshort green, GLshort blue);
	inline Fn_glColor3s s_fn_glColor3s {};
	typedef void(GLAPIENTRY *Fn_glColor3sv)(const GLshort * v);
	inline Fn_glColor3sv s_fn_glColor3sv {};
	typedef void(GLAPIENTRY *Fn_glColor3ub)(GLubyte red, GLubyte green, GLubyte blue);
	inline Fn_glColor3ub s_fn_glColor3ub {};
	typedef void(GLAPIENTRY *Fn_glColor3ubv)(const GLubyte * v);
	inline Fn_glColor3ubv s_fn_glColor3ubv {};
	typedef void(GLAPIENTRY *Fn_glColor3ui)(GLuint red, GLuint green, GLuint blue);
	inline Fn_glColor3ui s_fn_glColor3ui {};
	typedef void(GLAPIENTRY *Fn_glColor3uiv)(const GLuint * v);
	inline Fn_glColor3uiv s_fn_glColor3uiv {};
	typedef void(GLAPIENTRY *Fn_glColor3us)(GLushort red, GLushort green, GLushort blue);
	inline Fn_glColor3us s_fn_glColor3us {};
	typedef void(GLAPIENTRY *Fn_glColor3usv)(const GLushort * v);
	inline Fn_glColor3usv s_fn_glColor3usv {};
	typedef void(GLAPIENTRY *Fn_glColor4b)(GLbyte red, GLbyte green, GLbyte blue, GLbyte alpha);
	inline Fn_glColor4b s_fn_glColor4b {};
	typedef void(GLAPIENTRY *Fn_glColor4bv)(const GLbyte * v);
	inline Fn_glColor4bv s_fn_glColor4bv {};
	typedef void(GLAPIENTRY *Fn_glColor4d)(GLdouble red, GLdouble green, GLdouble blue, GLdouble alpha);
	inline Fn_glColor4d s_fn_glColor4d {};
	typedef void(GLAPIENTRY *Fn_glColor4dv)(const GLdouble * v);
	inline Fn_glColor4dv s_fn_glColor4dv {};
	typedef void(GLAPIENTRY *Fn_glColor4f)(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha);
	inline Fn_glColor4f s_fn_glColor4f {};
	typedef void(GLAPIENTRY *Fn_glColor4fv)(const GLfloat * v);
	inline Fn_glColor4fv s_fn_glColor4fv {};
	typedef void(GLAPIENTRY *Fn_glColor4i)(GLint red, GLint green, GLint blue, GLint alpha);
	inline Fn_glColor4i s_fn_glColor4i {};
	typedef void(GLAPIENTRY *Fn_glColor4iv)(const GLint * v);
	inline Fn_glColor4iv s_fn_glColor4iv {};
	typedef void(GLAPIENTRY *Fn_glColor4s)(GLshort red, GLshort green, GLshort blue, GLshort alpha);
	inline Fn_glColor4s s_fn_glColor4s {};
	typedef void(GLAPIENTRY *Fn_glColor4sv)(const GLshort * v);
	inline Fn_glColor4sv s_fn_glColor4sv {};
	typedef void(GLAPIENTRY *Fn_glColor4ub)(GLubyte red, GLubyte green, GLubyte blue, GLubyte alpha);
	inline Fn_glColor4ub s_fn_glColor4ub {};
	typedef void(GLAPIENTRY *Fn_glColor4ubv)(const GLubyte * v);
	inline Fn_glColor4ubv s_fn_glColor4ubv {};
	typedef void(GLAPIENTRY *Fn_glColor4ui)(GLuint red, GLuint green, GLuint blue, GLuint alpha);
	inline Fn_glColor4ui s_fn_glColor4ui {};
	typedef void(GLAPIENTRY *Fn_glColor4uiv)(const GLuint * v);
	inline Fn_glColor4uiv s_fn_glColor4uiv {};
	typedef void(GLAPIENTRY *Fn_glColor4us)(GLushort red, GLushort green, GLushort blue, GLushort alpha);
	inline Fn_glColor4us s_fn_glColor4us {};
	typedef void(GLAPIENTRY *Fn_glColor4usv)(const GLushort * v);
	inline Fn_glColor4usv s_fn_glColor4usv {};
	typedef void(GLAPIENTRY *Fn_glEdgeFlag)(GLboolean flag);
	inline Fn_glEdgeFlag s_fn_glEdgeFlag {};
	typedef void(GLAPIENTRY *Fn_glEdgeFlagv)(const GLboolean * flag);
	inline Fn_glEdgeFlagv s_fn_glEdgeFlagv {};
	typedef void(GLAPIENTRY *Fn_glEnd)();
	inline Fn_glEnd s_fn_glEnd {};
	typedef void(GLAPIENTRY *Fn_glIndexd)(GLdouble c);
	inline Fn_glIndexd s_fn_glIndexd {};
	typedef void(GLAPIENTRY *Fn_glIndexdv)(const GLdouble * c);
	inline Fn_glIndexdv s_fn_glIndexdv {};
	typedef void(GLAPIENTRY *Fn_glIndexf)(GLfloat c);
	inline Fn_glIndexf s_fn_glIndexf {};
	typedef void(GLAPIENTRY *Fn_glIndexfv)(const GLfloat * c);
	inline Fn_glIndexfv s_fn_glIndexfv {};
	typedef void(GLAPIENTRY *Fn_glIndexi)(GLint c);
	inline Fn_glIndexi s_fn_glIndexi {};
	typedef void(GLAPIENTRY *Fn_glIndexiv)(const GLint * c);
	inline Fn_glIndexiv s_fn_glIndexiv {};
	typedef void(GLAPIENTRY *Fn_glIndexs)(GLshort c);
	inline Fn_glIndexs s_fn_glIndexs {};
	typedef void(GLAPIENTRY *Fn_glIndexsv)(const GLshort * c);
	inline Fn_glIndexsv s_fn_glIndexsv {};
	typedef void(GLAPIENTRY *Fn_glNormal3b)(GLbyte nx, GLbyte ny, GLbyte nz);
	inline Fn_glNormal3b s_fn_glNormal3b {};
	typedef void(GLAPIENTRY *Fn_glNormal3bv)(const GLbyte * v);
	inline Fn_glNormal3bv s_fn_glNormal3bv {};
	typedef void(GLAPIENTRY *Fn_glNormal3d)(GLdouble nx, GLdouble ny, GLdouble nz);
	inline Fn_glNormal3d s_fn_glNormal3d {};
	typedef void(GLAPIENTRY *Fn_glNormal3dv)(const GLdouble * v);
	inline Fn_glNormal3dv s_fn_glNormal3dv {};
	typedef void(GLAPIENTRY *Fn_glNormal3f)(GLfloat nx, GLfloat ny, GLfloat nz);
	inline Fn_glNormal3f s_fn_glNormal3f {};
	typedef void(GLAPIENTRY *Fn_glNormal3fv)(const GLfloat * v);
	inline Fn_glNormal3fv s_fn_glNormal3fv {};
	typedef void(GLAPIENTRY *Fn_glNormal3i)(GLint nx, GLint ny, GLint nz);
	inline Fn_glNormal3i s_fn_glNormal3i {};
	typedef void(GLAPIENTRY *Fn_glNormal3iv)(const GLint * v);
	inline Fn_glNormal3iv s_fn_glNormal3iv {};
	typedef void(GLAPIENTRY *Fn_glNormal3s)(GLshort nx, GLshort ny, GLshort nz);
	inline Fn_glNormal3s s_fn_glNormal3s {};
	typedef void(GLAPIENTRY *Fn_glNormal3sv)(const GLshort * v);
	inline Fn_glNormal3sv s_fn_glNormal3sv {};
	typedef void(GLAPIENTRY *Fn_glRasterPos2d)(GLdouble x, GLdouble y);
	inline Fn_glRasterPos2d s_fn_glRasterPos2d {};
	typedef void(GLAPIENTRY *Fn_glRasterPos2dv)(const GLdouble * v);
	inline Fn_glRasterPos2dv s_fn_glRasterPos2dv {};
	typedef void(GLAPIENTRY *Fn_glRasterPos2f)(GLfloat x, GLfloat y);
	inline Fn_glRasterPos2f s_fn_glRasterPos2f {};
	typedef void(GLAPIENTRY *Fn_glRasterPos2fv)(const GLfloat * v);
	inline Fn_glRasterPos2fv s_fn_glRasterPos2fv {};
	typedef void(GLAPIENTRY *Fn_glRasterPos2i)(GLint x, GLint y);
	inline Fn_glRasterPos2i s_fn_glRasterPos2i {};
	typedef void(GLAPIENTRY *Fn_glRasterPos2iv)(const GLint * v);
	inline Fn_glRasterPos2iv s_fn_glRasterPos2iv {};
	typedef void(GLAPIENTRY *Fn_glRasterPos2s)(GLshort x, GLshort y);
	inline Fn_glRasterPos2s s_fn_glRasterPos2s {};
	typedef void(GLAPIENTRY *Fn_glRasterPos2sv)(const GLshort * v);
	inline Fn_glRasterPos2sv s_fn_glRasterPos2sv {};
	typedef void(GLAPIENTRY *Fn_glRasterPos3d)(GLdouble x, GLdouble y, GLdouble z);
	inline Fn_glRasterPos3d s_fn_glRasterPos3d {};
	typedef void(GLAPIENTRY *Fn_glRasterPos3dv)(const GLdouble * v);
	inline Fn_glRasterPos3dv s_fn_glRasterPos3dv {};
	typedef void(GLAPIENTRY *Fn_glRasterPos3f)(GLfloat x, GLfloat y, GLfloat z);
	inline Fn_glRasterPos3f s_fn_glRasterPos3f {};
	typedef void(GLAPIENTRY *Fn_glRasterPos3fv)(const GLfloat * v);
	inline Fn_glRasterPos3fv s_fn_glRasterPos3fv {};
	typedef void(GLAPIENTRY *Fn_glRasterPos3i)(GLint x, GLint y, GLint z);
	inline Fn_glRasterPos3i s_fn_glRasterPos3i {};
	typedef void(GLAPIENTRY *Fn_glRasterPos3iv)(const GLint * v);
	inline Fn_glRasterPos3iv s_fn_glRasterPos3iv {};
	typedef void(GLAPIENTRY *Fn_glRasterPos3s)(GLshort x, GLshort y, GLshort z);
	inline Fn_glRasterPos3s s_fn_glRasterPos3s {};
	typedef void(GLAPIENTRY *Fn_glRasterPos3sv)(const GLshort * v);
	inline Fn_glRasterPos3sv s_fn_glRasterPos3sv {};
	typedef void(GLAPIENTRY *Fn_glRasterPos4d)(GLdouble x, GLdouble y, GLdouble z, GLdouble w);
	inline Fn_glRasterPos4d s_fn_glRasterPos4d {};
	typedef void(GLAPIENTRY *Fn_glRasterPos4dv)(const GLdouble * v);
	inline Fn_glRasterPos4dv s_fn_glRasterPos4dv {};
	typedef void(GLAPIENTRY *Fn_glRasterPos4f)(GLfloat x, GLfloat y, GLfloat z, GLfloat w);
	inline Fn_glRasterPos4f s_fn_glRasterPos4f {};
	typedef void(GLAPIENTRY *Fn_glRasterPos4fv)(const GLfloat * v);
	inline Fn_glRasterPos4fv s_fn_glRasterPos4fv {};
	typedef void(GLAPIENTRY *Fn_glRasterPos4i)(GLint x, GLint y, GLint z, GLint w);
	inline Fn_glRasterPos4i s_fn_glRasterPos4i {};
	typedef void(GLAPIENTRY *Fn_glRasterPos4iv)(const GLint * v);
	inline Fn_glRasterPos4iv s_fn_glRasterPos4iv {};
	typedef void(GLAPIENTRY *Fn_glRasterPos4s)(GLshort x, GLshort y, GLshort z, GLshort w);
	inline Fn_glRasterPos4s s_fn_glRasterPos4s {};
	typedef void(GLAPIENTRY *Fn_glRasterPos4sv)(const GLshort * v);
	inline Fn_glRasterPos4sv s_fn_glRasterPos4sv {};
	typedef void(GLAPIENTRY *Fn_glRectd)(GLdouble x1, GLdouble y1, GLdouble x2, GLdouble y2);
	inline Fn_glRectd s_fn_glRectd {};
	typedef void(GLAPIENTRY *Fn_glRectdv)(const GLdouble * v1, const GLdouble * v2);
	inline Fn_glRectdv s_fn_glRectdv {};
	typedef void(GLAPIENTRY *Fn_glRectf)(GLfloat x1, GLfloat y1, GLfloat x2, GLfloat y2);
	inline Fn_glRectf s_fn_glRectf {};
	typedef void(GLAPIENTRY *Fn_glRectfv)(const GLfloat * v1, const GLfloat * v2);
	inline Fn_glRectfv s_fn_glRectfv {};
	typedef void(GLAPIENTRY *Fn_glRecti)(GLint x1, GLint y1, GLint x2, GLint y2);
	inline Fn_glRecti s_fn_glRecti {};
	typedef void(GLAPIENTRY *Fn_glRectiv)(const GLint * v1, const GLint * v2);
	inline Fn_glRectiv s_fn_glRectiv {};
	typedef void(GLAPIENTRY *Fn_glRects)(GLshort x1, GLshort y1, GLshort x2, GLshort y2);
	inline Fn_glRects s_fn_glRects {};
	typedef void(GLAPIENTRY *Fn_glRectsv)(const GLshort * v1, const GLshort * v2);
	inline Fn_glRectsv s_fn_glRectsv {};
	typedef void(GLAPIENTRY *Fn_glTexCoord1d)(GLdouble s);
	inline Fn_glTexCoord1d s_fn_glTexCoord1d {};
	typedef void(GLAPIENTRY *Fn_glTexCoord1dv)(const GLdouble * v);
	inline Fn_glTexCoord1dv s_fn_glTexCoord1dv {};
	typedef void(GLAPIENTRY *Fn_glTexCoord1f)(GLfloat s);
	inline Fn_glTexCoord1f s_fn_glTexCoord1f {};
	typedef void(GLAPIENTRY *Fn_glTexCoord1fv)(const GLfloat * v);
	inline Fn_glTexCoord1fv s_fn_glTexCoord1fv {};
	typedef void(GLAPIENTRY *Fn_glTexCoord1i)(GLint s);
	inline Fn_glTexCoord1i s_fn_glTexCoord1i {};
	typedef void(GLAPIENTRY *Fn_glTexCoord1iv)(const GLint * v);
	inline Fn_glTexCoord1iv s_fn_glTexCoord1iv {};
	typedef void(GLAPIENTRY *Fn_glTexCoord1s)(GLshort s);
	inline Fn_glTexCoord1s s_fn_glTexCoord1s {};
	typedef void(GLAPIENTRY *Fn_glTexCoord1sv)(const GLshort * v);
	inline Fn_glTexCoord1sv s_fn_glTexCoord1sv {};
	typedef void(GLAPIENTRY *Fn_glTexCoord2d)(GLdouble s, GLdouble t);
	inline Fn_glTexCoord2d s_fn_glTexCoord2d {};
	typedef void(GLAPIENTRY *Fn_glTexCoord2dv)(const GLdouble * v);
	inline Fn_glTexCoord2dv s_fn_glTexCoord2dv {};
	typedef void(GLAPIENTRY *Fn_glTexCoord2f)(GLfloat s, GLfloat t);
	inline Fn_glTexCoord2f s_fn_glTexCoord2f {};
	typedef void(GLAPIENTRY *Fn_glTexCoord2fv)(const GLfloat * v);
	inline Fn_glTexCoord2fv s_fn_glTexCoord2fv {};
	typedef void(GLAPIENTRY *Fn_glTexCoord2i)(GLint s, GLint t);
	inline Fn_glTexCoord2i s_fn_glTexCoord2i {};
	typedef void(GLAPIENTRY *Fn_glTexCoord2iv)(const GLint * v);
	inline Fn_glTexCoord2iv s_fn_glTexCoord2iv {};
	typedef void(GLAPIENTRY *Fn_glTexCoord2s)(GLshort s, GLshort t);
	inline Fn_glTexCoord2s s_fn_glTexCoord2s {};
	typedef void(GLAPIENTRY *Fn_glTexCoord2sv)(const GLshort * v);
	inline Fn_glTexCoord2sv s_fn_glTexCoord2sv {};
	typedef void(GLAPIENTRY *Fn_glTexCoord3d)(GLdouble s, GLdouble t, GLdouble r);
	inline Fn_glTexCoord3d s_fn_glTexCoord3d {};
	typedef void(GLAPIENTRY *Fn_glTexCoord3dv)(const GLdouble * v);
	inline Fn_glTexCoord3dv s_fn_glTexCoord3dv {};
	typedef void(GLAPIENTRY *Fn_glTexCoord3f)(GLfloat s, GLfloat t, GLfloat r);
	inline Fn_glTexCoord3f s_fn_glTexCoord3f {};
	typedef void(GLAPIENTRY *Fn_glTexCoord3fv)(const GLfloat * v);
	inline Fn_glTexCoord3fv s_fn_glTexCoord3fv {};
	typedef void(GLAPIENTRY *Fn_glTexCoord3i)(GLint s, GLint t, GLint r);
	inline Fn_glTexCoord3i s_fn_glTexCoord3i {};
	typedef void(GLAPIENTRY *Fn_glTexCoord3iv)(const GLint * v);
	inline Fn_glTexCoord3iv s_fn_glTexCoord3iv {};
	typedef void(GLAPIENTRY *Fn_glTexCoord3s)(GLshort s, GLshort t, GLshort r);
	inline Fn_glTexCoord3s s_fn_glTexCoord3s {};
	typedef void(GLAPIENTRY *Fn_glTexCoord3sv)(const GLshort * v);
	inline Fn_glTexCoord3sv s_fn_glTexCoord3sv {};
	typedef void(GLAPIENTRY *Fn_glTexCoord4d)(GLdouble s, GLdouble t, GLdouble r, GLdouble q);
	inline Fn_glTexCoord4d s_fn_glTexCoord4d {};
	typedef void(GLAPIENTRY *Fn_glTexCoord4dv)(const GLdouble * v);
	inline Fn_glTexCoord4dv s_fn_glTexCoord4dv {};
	typedef void(GLAPIENTRY *Fn_glTexCoord4f)(GLfloat s, GLfloat t, GLfloat r, GLfloat q);
	inline Fn_glTexCoord4f s_fn_glTexCoord4f {};
	typedef void(GLAPIENTRY *Fn_glTexCoord4fv)(const GLfloat * v);
	inline Fn_glTexCoord4fv s_fn_glTexCoord4fv {};
	typedef void(GLAPIENTRY *Fn_glTexCoord4i)(GLint s, GLint t, GLint r, GLint q);
	inline Fn_glTexCoord4i s_fn_glTexCoord4i {};
	typedef void(GLAPIENTRY *Fn_glTexCoord4iv)(const GLint * v);
	inline Fn_glTexCoord4iv s_fn_glTexCoord4iv {};
	typedef void(GLAPIENTRY *Fn_glTexCoord4s)(GLshort s, GLshort t, GLshort r, GLshort q);
	inline Fn_glTexCoord4s s_fn_glTexCoord4s {};
	typedef void(GLAPIENTRY *Fn_glTexCoord4sv)(const GLshort * v);
	inline Fn_glTexCoord4sv s_fn_glTexCoord4sv {};
	typedef void(GLAPIENTRY *Fn_glVertex2d)(GLdouble x, GLdouble y);
	inline Fn_glVertex2d s_fn_glVertex2d {};
	typedef void(GLAPIENTRY *Fn_glVertex2dv)(const GLdouble * v);
	inline Fn_glVertex2dv s_fn_glVertex2dv {};
	typedef void(GLAPIENTRY *Fn_glVertex2f)(GLfloat x, GLfloat y);
	inline Fn_glVertex2f s_fn_glVertex2f {};
	typedef void(GLAPIENTRY *Fn_glVertex2fv)(const GLfloat * v);
	inline Fn_glVertex2fv s_fn_glVertex2fv {};
	typedef void(GLAPIENTRY *Fn_glVertex2i)(GLint x, GLint y);
	inline Fn_glVertex2i s_fn_glVertex2i {};
	typedef void(GLAPIENTRY *Fn_glVertex2iv)(const GLint * v);
	inline Fn_glVertex2iv s_fn_glVertex2iv {};
	typedef void(GLAPIENTRY *Fn_glVertex2s)(GLshort x, GLshort y);
	inline Fn_glVertex2s s_fn_glVertex2s {};
	typedef void(GLAPIENTRY *Fn_glVertex2sv)(const GLshort * v);
	inline Fn_glVertex2sv s_fn_glVertex2sv {};
	typedef void(GLAPIENTRY *Fn_glVertex3d)(GLdouble x, GLdouble y, GLdouble z);
	inline Fn_glVertex3d s_fn_glVertex3d {};
	typedef void(GLAPIENTRY *Fn_glVertex3dv)(const GLdouble * v);
	inline Fn_glVertex3dv s_fn_glVertex3dv {};
	typedef void(GLAPIENTRY *Fn_glVertex3f)(GLfloat x, GLfloat y, GLfloat z);
	inline Fn_glVertex3f s_fn_glVertex3f {};
	typedef void(GLAPIENTRY *Fn_glVertex3fv)(const GLfloat * v);
	inline Fn_glVertex3fv s_fn_glVertex3fv {};
	typedef void(GLAPIENTRY *Fn_glVertex3i)(GLint x, GLint y, GLint z);
	inline Fn_glVertex3i s_fn_glVertex3i {};
	typedef void(GLAPIENTRY *Fn_glVertex3iv)(const GLint * v);
	inline Fn_glVertex3iv s_fn_glVertex3iv {};
	typedef void(GLAPIENTRY *Fn_glVertex3s)(GLshort x, GLshort y, GLshort z);
	inline Fn_glVertex3s s_fn_glVertex3s {};
	typedef void(GLAPIENTRY *Fn_glVertex3sv)(const GLshort * v);
	inline Fn_glVertex3sv s_fn_glVertex3sv {};
	typedef void(GLAPIENTRY *Fn_glVertex4d)(GLdouble x, GLdouble y, GLdouble z, GLdouble w);
	inline Fn_glVertex4d s_fn_glVertex4d {};
	typedef void(GLAPIENTRY *Fn_glVertex4dv)(const GLdouble * v);
	inline Fn_glVertex4dv s_fn_glVertex4dv {};
	typedef void(GLAPIENTRY *Fn_glVertex4f)(GLfloat x, GLfloat y, GLfloat z, GLfloat w);
	inline Fn_glVertex4f s_fn_glVertex4f {};
	typedef void(GLAPIENTRY *Fn_glVertex4fv)(const GLfloat * v);
	inline Fn_glVertex4fv s_fn_glVertex4fv {};
	typedef void(GLAPIENTRY *Fn_glVertex4i)(GLint x, GLint y, GLint z, GLint w);
	inline Fn_glVertex4i s_fn_glVertex4i {};
	typedef void(GLAPIENTRY *Fn_glVertex4iv)(const GLint * v);
	inline Fn_glVertex4iv s_fn_glVertex4iv {};
	typedef void(GLAPIENTRY *Fn_glVertex4s)(GLshort x, GLshort y, GLshort z, GLshort w);
	inline Fn_glVertex4s s_fn_glVertex4s {};
	typedef void(GLAPIENTRY *Fn_glVertex4sv)(const GLshort * v);
	inline Fn_glVertex4sv s_fn_glVertex4sv {};
	typedef void(GLAPIENTRY *Fn_glClipPlane)(GLenum plane, const GLdouble * equation);
	inline Fn_glClipPlane s_fn_glClipPlane {};
	typedef void(GLAPIENTRY *Fn_glColorMaterial)(GLenum face, GLenum mode);
	inline Fn_glColorMaterial s_fn_glColorMaterial {};
	typedef void(GLAPIENTRY *Fn_glFogf)(GLenum pname, GLfloat param);
	inline Fn_glFogf s_fn_glFogf {};
	typedef void(GLAPIENTRY *Fn_glFogfv)(GLenum pname, const GLfloat * params);
	inline Fn_glFogfv s_fn_glFogfv {};
	typedef void(GLAPIENTRY *Fn_glFogi)(GLenum pname, GLint param);
	inline Fn_glFogi s_fn_glFogi {};
	typedef void(GLAPIENTRY *Fn_glFogiv)(GLenum pname, const GLint * params);
	inline Fn_glFogiv s_fn_glFogiv {};
	typedef void(GLAPIENTRY *Fn_glLightf)(GLenum light, GLenum pname, GLfloat param);
	inline Fn_glLightf s_fn_glLightf {};
	typedef void(GLAPIENTRY *Fn_glLightfv)(GLenum light, GLenum pname, const GLfloat * params);
	inline Fn_glLightfv s_fn_glLightfv {};
	typedef void(GLAPIENTRY *Fn_glLighti)(GLenum light, GLenum pname, GLint param);
	inline Fn_glLighti s_fn_glLighti {};
	typedef void(GLAPIENTRY *Fn_glLightiv)(GLenum light, GLenum pname, const GLint * params);
	inline Fn_glLightiv s_fn_glLightiv {};
	typedef void(GLAPIENTRY *Fn_glLightModelf)(GLenum pname, GLfloat param);
	inline Fn_glLightModelf s_fn_glLightModelf {};
	typedef void(GLAPIENTRY *Fn_glLightModelfv)(GLenum pname, const GLfloat * params);
	inline Fn_glLightModelfv s_fn_glLightModelfv {};
	typedef void(GLAPIENTRY *Fn_glLightModeli)(GLenum pname, GLint param);
	inline Fn_glLightModeli s_fn_glLightModeli {};
	typedef void(GLAPIENTRY *Fn_glLightModeliv)(GLenum pname, const GLint * params);
	inline Fn_glLightModeliv s_fn_glLightModeliv {};
	typedef void(GLAPIENTRY *Fn_glLineStipple)(GLint factor, GLushort pattern);
	inline Fn_glLineStipple s_fn_glLineStipple {};
	typedef void(GLAPIENTRY *Fn_glMaterialf)(GLenum face, GLenum pname, GLfloat param);
	inline Fn_glMaterialf s_fn_glMaterialf {};
	typedef void(GLAPIENTRY *Fn_glMaterialfv)(GLenum face, GLenum pname, const GLfloat * params);
	inline Fn_glMaterialfv s_fn_glMaterialfv {};
	typedef void(GLAPIENTRY *Fn_glMateriali)(GLenum face, GLenum pname, GLint param);
	inline Fn_glMateriali s_fn_glMateriali {};
	typedef void(GLAPIENTRY *Fn_glMaterialiv)(GLenum face, GLenum pname, const GLint * params);
	inline Fn_glMaterialiv s_fn_glMaterialiv {};
	typedef void(GLAPIENTRY *Fn_glPolygonStipple)(const GLubyte * mask);
	inline Fn_glPolygonStipple s_fn_glPolygonStipple {};
	typedef void(GLAPIENTRY *Fn_glShadeModel)(GLenum mode);
	inline Fn_glShadeModel s_fn_glShadeModel {};
	typedef void(GLAPIENTRY *Fn_glTexEnvf)(GLenum target, GLenum pname, GLfloat param);
	inline Fn_glTexEnvf s_fn_glTexEnvf {};
	typedef void(GLAPIENTRY *Fn_glTexEnvfv)(GLenum target, GLenum pname, const GLfloat * params);
	inline Fn_glTexEnvfv s_fn_glTexEnvfv {};
	typedef void(GLAPIENTRY *Fn_glTexEnvi)(GLenum target, GLenum pname, GLint param);
	inline Fn_glTexEnvi s_fn_glTexEnvi {};
	typedef void(GLAPIENTRY *Fn_glTexEnviv)(GLenum target, GLenum pname, const GLint * params);
	inline Fn_glTexEnviv s_fn_glTexEnviv {};
	typedef void(GLAPIENTRY *Fn_glTexGend)(GLenum coord, GLenum pname, GLdouble param);
	inline Fn_glTexGend s_fn_glTexGend {};
	typedef void(GLAPIENTRY *Fn_glTexGendv)(GLenum coord, GLenum pname, const GLdouble * params);
	inline Fn_glTexGendv s_fn_glTexGendv {};
	typedef void(GLAPIENTRY *Fn_glTexGenf)(GLenum coord, GLenum pname, GLfloat param);
	inline Fn_glTexGenf s_fn_glTexGenf {};
	typedef void(GLAPIENTRY *Fn_glTexGenfv)(GLenum coord, GLenum pname, const GLfloat * params);
	inline Fn_glTexGenfv s_fn_glTexGenfv {};
	typedef void(GLAPIENTRY *Fn_glTexGeni)(GLenum coord, GLenum pname, GLint param);
	inline Fn_glTexGeni s_fn_glTexGeni {};
	typedef void(GLAPIENTRY *Fn_glTexGeniv)(GLenum coord, GLenum pname, const GLint * params);
	inline Fn_glTexGeniv s_fn_glTexGeniv {};
	typedef void(GLAPIENTRY *Fn_glFeedbackBuffer)(GLsizei size, GLenum type, GLfloat * buffer);
	inline Fn_glFeedbackBuffer s_fn_glFeedbackBuffer {};
	typedef void(GLAPIENTRY *Fn_glSelectBuffer)(GLsizei size, GLuint * buffer);
	inline Fn_glSelectBuffer s_fn_glSelectBuffer {};
	typedef GLint(GLAPIENTRY *Fn_glRenderMode)(GLenum mode);
	inline Fn_glRenderMode s_fn_glRenderMode {};
	typedef void(GLAPIENTRY *Fn_glInitNames)();
	inline Fn_glInitNames s_fn_glInitNames {};
	typedef void(GLAPIENTRY *Fn_glLoadName)(GLuint name);
	inline Fn_glLoadName s_fn_glLoadName {};
	typedef void(GLAPIENTRY *Fn_glPassThrough)(GLfloat token);
	inline Fn_glPassThrough s_fn_glPassThrough {};
	typedef void(GLAPIENTRY *Fn_glPopName)();
	inline Fn_glPopName s_fn_glPopName {};
	typedef void(GLAPIENTRY *Fn_glPushName)(GLuint name);
	inline Fn_glPushName s_fn_glPushName {};
	typedef void(GLAPIENTRY *Fn_glClearAccum)(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha);
	inline Fn_glClearAccum s_fn_glClearAccum {};
	typedef void(GLAPIENTRY *Fn_glClearIndex)(GLfloat c);
	inline Fn_glClearIndex s_fn_glClearIndex {};
	typedef void(GLAPIENTRY *Fn_glIndexMask)(GLuint mask);
	inline Fn_glIndexMask s_fn_glIndexMask {};
	typedef void(GLAPIENTRY *Fn_glAccum)(GLenum op, GLfloat value);
	inline Fn_glAccum s_fn_glAccum {};
	typedef void(GLAPIENTRY *Fn_glPopAttrib)();
	inline Fn_glPopAttrib s_fn_glPopAttrib {};
	typedef void(GLAPIENTRY *Fn_glPushAttrib)(GLbitfield mask);
	inline Fn_glPushAttrib s_fn_glPushAttrib {};
	typedef void(GLAPIENTRY *Fn_glMap1d)(GLenum target, GLdouble u1, GLdouble u2, GLint stride, GLint order, const GLdouble * points);
	inline Fn_glMap1d s_fn_glMap1d {};
	typedef void(GLAPIENTRY *Fn_glMap1f)(GLenum target, GLfloat u1, GLfloat u2, GLint stride, GLint order, const GLfloat * points);
	inline Fn_glMap1f s_fn_glMap1f {};
	typedef void(GLAPIENTRY *Fn_glMap2d)(GLenum target, GLdouble u1, GLdouble u2, GLint ustride, GLint uorder, GLdouble v1, GLdouble v2, GLint vstride, GLint vorder, const GLdouble * points);
	inline Fn_glMap2d s_fn_glMap2d {};
	typedef void(GLAPIENTRY *Fn_glMap2f)(GLenum target, GLfloat u1, GLfloat u2, GLint ustride, GLint uorder, GLfloat v1, GLfloat v2, GLint vstride, GLint vorder, const GLfloat * points);
	inline Fn_glMap2f s_fn_glMap2f {};
	typedef void(GLAPIENTRY *Fn_glMapGrid1d)(GLint un, GLdouble u1, GLdouble u2);
	inline Fn_glMapGrid1d s_fn_glMapGrid1d {};
	typedef void(GLAPIENTRY *Fn_glMapGrid1f)(GLint un, GLfloat u1, GLfloat u2);
	inline Fn_glMapGrid1f s_fn_glMapGrid1f {};
	typedef void(GLAPIENTRY *Fn_glMapGrid2d)(GLint un, GLdouble u1, GLdouble u2, GLint vn, GLdouble v1, GLdouble v2);
	inline Fn_glMapGrid2d s_fn_glMapGrid2d {};
	typedef void(GLAPIENTRY *Fn_glMapGrid2f)(GLint un, GLfloat u1, GLfloat u2, GLint vn, GLfloat v1, GLfloat v2);
	inline Fn_glMapGrid2f s_fn_glMapGrid2f {};
	typedef void(GLAPIENTRY *Fn_glEvalCoord1d)(GLdouble u);
	inline Fn_glEvalCoord1d s_fn_glEvalCoord1d {};
	typedef void(GLAPIENTRY *Fn_glEvalCoord1dv)(const GLdouble * u);
	inline Fn_glEvalCoord1dv s_fn_glEvalCoord1dv {};
	typedef void(GLAPIENTRY *Fn_glEvalCoord1f)(GLfloat u);
	inline Fn_glEvalCoord1f s_fn_glEvalCoord1f {};
	typedef void(GLAPIENTRY *Fn_glEvalCoord1fv)(const GLfloat * u);
	inline Fn_glEvalCoord1fv s_fn_glEvalCoord1fv {};
	typedef void(GLAPIENTRY *Fn_glEvalCoord2d)(GLdouble u, GLdouble v);
	inline Fn_glEvalCoord2d s_fn_glEvalCoord2d {};
	typedef void(GLAPIENTRY *Fn_glEvalCoord2dv)(const GLdouble * u);
	inline Fn_glEvalCoord2dv s_fn_glEvalCoord2dv {};
	typedef void(GLAPIENTRY *Fn_glEvalCoord2f)(GLfloat u, GLfloat v);
	inline Fn_glEvalCoord2f s_fn_glEvalCoord2f {};
	typedef void(GLAPIENTRY *Fn_glEvalCoord2fv)(const GLfloat * u);
	inline Fn_glEvalCoord2fv s_fn_glEvalCoord2fv {};
	typedef void(GLAPIENTRY *Fn_glEvalMesh1)(GLenum mode, GLint i1, GLint i2);
	inline Fn_glEvalMesh1 s_fn_glEvalMesh1 {};
	typedef void(GLAPIENTRY *Fn_glEvalPoint1)(GLint i);
	inline Fn_glEvalPoint1 s_fn_glEvalPoint1 {};
	typedef void(GLAPIENTRY *Fn_glEvalMesh2)(GLenum mode, GLint i1, GLint i2, GLint j1, GLint j2);
	inline Fn_glEvalMesh2 s_fn_glEvalMesh2 {};
	typedef void(GLAPIENTRY *Fn_glEvalPoint2)(GLint i, GLint j);
	inline Fn_glEvalPoint2 s_fn_glEvalPoint2 {};
	typedef void(GLAPIENTRY *Fn_glAlphaFunc)(GLenum func, GLfloat ref);
	inline Fn_glAlphaFunc s_fn_glAlphaFunc {};
	typedef void(GLAPIENTRY *Fn_glPixelZoom)(GLfloat xfactor, GLfloat yfactor);
	inline Fn_glPixelZoom s_fn_glPixelZoom {};
	typedef void(GLAPIENTRY *Fn_glPixelTransferf)(GLenum pname, GLfloat param);
	inline Fn_glPixelTransferf s_fn_glPixelTransferf {};
	typedef void(GLAPIENTRY *Fn_glPixelTransferi)(GLenum pname, GLint param);
	inline Fn_glPixelTransferi s_fn_glPixelTransferi {};
	typedef void(GLAPIENTRY *Fn_glPixelMapfv)(GLenum map, GLsizei mapsize, const GLfloat * values);
	inline Fn_glPixelMapfv s_fn_glPixelMapfv {};
	typedef void(GLAPIENTRY *Fn_glPixelMapuiv)(GLenum map, GLsizei mapsize, const GLuint * values);
	inline Fn_glPixelMapuiv s_fn_glPixelMapuiv {};
	typedef void(GLAPIENTRY *Fn_glPixelMapusv)(GLenum map, GLsizei mapsize, const GLushort * values);
	inline Fn_glPixelMapusv s_fn_glPixelMapusv {};
	typedef void(GLAPIENTRY *Fn_glCopyPixels)(GLint x, GLint y, GLsizei width, GLsizei height, GLenum type);
	inline Fn_glCopyPixels s_fn_glCopyPixels {};
	typedef void(GLAPIENTRY *Fn_glDrawPixels)(GLsizei width, GLsizei height, GLenum format, GLenum type, const void * pixels);
	inline Fn_glDrawPixels s_fn_glDrawPixels {};
	typedef void(GLAPIENTRY *Fn_glGetClipPlane)(GLenum plane, GLdouble * equation);
	inline Fn_glGetClipPlane s_fn_glGetClipPlane {};
	typedef void(GLAPIENTRY *Fn_glGetLightfv)(GLenum light, GLenum pname, GLfloat * params);
	inline Fn_glGetLightfv s_fn_glGetLightfv {};
	typedef void(GLAPIENTRY *Fn_glGetLightiv)(GLenum light, GLenum pname, GLint * params);
	inline Fn_glGetLightiv s_fn_glGetLightiv {};
	typedef void(GLAPIENTRY *Fn_glGetMapdv)(GLenum target, GLenum query, GLdouble * v);
	inline Fn_glGetMapdv s_fn_glGetMapdv {};
	typedef void(GLAPIENTRY *Fn_glGetMapfv)(GLenum target, GLenum query, GLfloat * v);
	inline Fn_glGetMapfv s_fn_glGetMapfv {};
	typedef void(GLAPIENTRY *Fn_glGetMapiv)(GLenum target, GLenum query, GLint * v);
	inline Fn_glGetMapiv s_fn_glGetMapiv {};
	typedef void(GLAPIENTRY *Fn_glGetMaterialfv)(GLenum face, GLenum pname, GLfloat * params);
	inline Fn_glGetMaterialfv s_fn_glGetMaterialfv {};
	typedef void(GLAPIENTRY *Fn_glGetMaterialiv)(GLenum face, GLenum pname, GLint * params);
	inline Fn_glGetMaterialiv s_fn_glGetMaterialiv {};
	typedef void(GLAPIENTRY *Fn_glGetPixelMapfv)(GLenum map, GLfloat * values);
	inline Fn_glGetPixelMapfv s_fn_glGetPixelMapfv {};
	typedef void(GLAPIENTRY *Fn_glGetPixelMapuiv)(GLenum map, GLuint * values);
	inline Fn_glGetPixelMapuiv s_fn_glGetPixelMapuiv {};
	typedef void(GLAPIENTRY *Fn_glGetPixelMapusv)(GLenum map, GLushort * values);
	inline Fn_glGetPixelMapusv s_fn_glGetPixelMapusv {};
	typedef void(GLAPIENTRY *Fn_glGetPolygonStipple)(GLubyte * mask);
	inline Fn_glGetPolygonStipple s_fn_glGetPolygonStipple {};
	typedef void(GLAPIENTRY *Fn_glGetTexEnvfv)(GLenum target, GLenum pname, GLfloat * params);
	inline Fn_glGetTexEnvfv s_fn_glGetTexEnvfv {};
	typedef void(GLAPIENTRY *Fn_glGetTexEnviv)(GLenum target, GLenum pname, GLint * params);
	inline Fn_glGetTexEnviv s_fn_glGetTexEnviv {};
	typedef void(GLAPIENTRY *Fn_glGetTexGendv)(GLenum coord, GLenum pname, GLdouble * params);
	inline Fn_glGetTexGendv s_fn_glGetTexGendv {};
	typedef void(GLAPIENTRY *Fn_glGetTexGenfv)(GLenum coord, GLenum pname, GLfloat * params);
	inline Fn_glGetTexGenfv s_fn_glGetTexGenfv {};
	typedef void(GLAPIENTRY *Fn_glGetTexGeniv)(GLenum coord, GLenum pname, GLint * params);
	inline Fn_glGetTexGeniv s_fn_glGetTexGeniv {};
	typedef GLboolean(GLAPIENTRY *Fn_glIsList)(GLuint list);
	inline Fn_glIsList s_fn_glIsList {};
	typedef void(GLAPIENTRY *Fn_glFrustum)(GLdouble left, GLdouble right, GLdouble bottom, GLdouble top, GLdouble zNear, GLdouble zFar);
	inline Fn_glFrustum s_fn_glFrustum {};
	typedef void(GLAPIENTRY *Fn_glLoadIdentity)();
	inline Fn_glLoadIdentity s_fn_glLoadIdentity {};
	typedef void(GLAPIENTRY *Fn_glLoadMatrixf)(const GLfloat * m);
	inline Fn_glLoadMatrixf s_fn_glLoadMatrixf {};
	typedef void(GLAPIENTRY *Fn_glLoadMatrixd)(const GLdouble * m);
	inline Fn_glLoadMatrixd s_fn_glLoadMatrixd {};
	typedef void(GLAPIENTRY *Fn_glMatrixMode)(GLenum mode);
	inline Fn_glMatrixMode s_fn_glMatrixMode {};
	typedef void(GLAPIENTRY *Fn_glMultMatrixf)(const GLfloat * m);
	inline Fn_glMultMatrixf s_fn_glMultMatrixf {};
	typedef void(GLAPIENTRY *Fn_glMultMatrixd)(const GLdouble * m);
	inline Fn_glMultMatrixd s_fn_glMultMatrixd {};
	typedef void(GLAPIENTRY *Fn_glOrtho)(GLdouble left, GLdouble right, GLdouble bottom, GLdouble top, GLdouble zNear, GLdouble zFar);
	inline Fn_glOrtho s_fn_glOrtho {};
	typedef void(GLAPIENTRY *Fn_glPopMatrix)();
	inline Fn_glPopMatrix s_fn_glPopMatrix {};
	typedef void(GLAPIENTRY *Fn_glPushMatrix)();
	inline Fn_glPushMatrix s_fn_glPushMatrix {};
	typedef void(GLAPIENTRY *Fn_glRotated)(GLdouble angle, GLdouble x, GLdouble y, GLdouble z);
	inline Fn_glRotated s_fn_glRotated {};
	typedef void(GLAPIENTRY *Fn_glRotatef)(GLfloat angle, GLfloat x, GLfloat y, GLfloat z);
	inline Fn_glRotatef s_fn_glRotatef {};
	typedef void(GLAPIENTRY *Fn_glScaled)(GLdouble x, GLdouble y, GLdouble z);
	inline Fn_glScaled s_fn_glScaled {};
	typedef void(GLAPIENTRY *Fn_glScalef)(GLfloat x, GLfloat y, GLfloat z);
	inline Fn_glScalef s_fn_glScalef {};
	typedef void(GLAPIENTRY *Fn_glTranslated)(GLdouble x, GLdouble y, GLdouble z);
	inline Fn_glTranslated s_fn_glTranslated {};
	typedef void(GLAPIENTRY *Fn_glTranslatef)(GLfloat x, GLfloat y, GLfloat z);
	inline Fn_glTranslatef s_fn_glTranslatef {};
}
inline void glCullFace(GLenum mode) { return HLFGL::Functions::s_fn_glCullFace(mode); }
inline void glFrontFace(GLenum mode) { return HLFGL::Functions::s_fn_glFrontFace(mode); }
inline void glHint(GLenum target, GLenum mode) { return HLFGL::Functions::s_fn_glHint(target, mode); }
inline void glLineWidth(GLfloat width) { return HLFGL::Functions::s_fn_glLineWidth(width); }
inline void glPointSize(GLfloat size) { return HLFGL::Functions::s_fn_glPointSize(size); }
inline void glPolygonMode(GLenum face, GLenum mode) { return HLFGL::Functions::s_fn_glPolygonMode(face, mode); }
inline void glScissor(GLint x, GLint y, GLsizei width, GLsizei height) { return HLFGL::Functions::s_fn_glScissor(x, y, width, height); }
inline void glTexParameterf(GLenum target, GLenum pname, GLfloat param) { return HLFGL::Functions::s_fn_glTexParameterf(target, pname, param); }
inline void glTexParameterfv(GLenum target, GLenum pname, const GLfloat * params) { return HLFGL::Functions::s_fn_glTexParameterfv(target, pname, params); }
inline void glTexParameteri(GLenum target, GLenum pname, GLint param) { return HLFGL::Functions::s_fn_glTexParameteri(target, pname, param); }
inline void glTexParameteriv(GLenum target, GLenum pname, const GLint * params) { return HLFGL::Functions::s_fn_glTexParameteriv(target, pname, params); }
inline void glTexImage1D(GLenum target, GLint level, GLint internalformat, GLsizei width, GLint border, GLenum format, GLenum type, const void * pixels) { return HLFGL::Functions::s_fn_glTexImage1D(target, level, internalformat, width, border, format, type, pixels); }
inline void glTexImage2D(GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum type, const void * pixels) { return HLFGL::Functions::s_fn_glTexImage2D(target, level, internalformat, width, height, border, format, type, pixels); }
inline void glDrawBuffer(GLenum buf) { return HLFGL::Functions::s_fn_glDrawBuffer(buf); }
inline void glClear(GLbitfield mask) { return HLFGL::Functions::s_fn_glClear(mask); }
inline void glClearColor(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha) { return HLFGL::Functions::s_fn_glClearColor(red, green, blue, alpha); }
inline void glClearStencil(GLint s) { return HLFGL::Functions::s_fn_glClearStencil(s); }
inline void glClearDepth(GLdouble depth) { return HLFGL::Functions::s_fn_glClearDepth(depth); }
inline void glStencilMask(GLuint mask) { return HLFGL::Functions::s_fn_glStencilMask(mask); }
inline void glColorMask(GLboolean red, GLboolean green, GLboolean blue, GLboolean alpha) { return HLFGL::Functions::s_fn_glColorMask(red, green, blue, alpha); }
inline void glDepthMask(GLboolean flag) { return HLFGL::Functions::s_fn_glDepthMask(flag); }
inline void glDisable(GLenum cap) { return HLFGL::Functions::s_fn_glDisable(cap); }
inline void glEnable(GLenum cap) { return HLFGL::Functions::s_fn_glEnable(cap); }
inline void glFinish() { return HLFGL::Functions::s_fn_glFinish(); }
inline void glFlush() { return HLFGL::Functions::s_fn_glFlush(); }
inline void glBlendFunc(GLenum sfactor, GLenum dfactor) { return HLFGL::Functions::s_fn_glBlendFunc(sfactor, dfactor); }
inline void glLogicOp(GLenum opcode) { return HLFGL::Functions::s_fn_glLogicOp(opcode); }
inline void glStencilFunc(GLenum func, GLint ref, GLuint mask) { return HLFGL::Functions::s_fn_glStencilFunc(func, ref, mask); }
inline void glStencilOp(GLenum fail, GLenum zfail, GLenum zpass) { return HLFGL::Functions::s_fn_glStencilOp(fail, zfail, zpass); }
inline void glDepthFunc(GLenum func) { return HLFGL::Functions::s_fn_glDepthFunc(func); }
inline void glPixelStoref(GLenum pname, GLfloat param) { return HLFGL::Functions::s_fn_glPixelStoref(pname, param); }
inline void glPixelStorei(GLenum pname, GLint param) { return HLFGL::Functions::s_fn_glPixelStorei(pname, param); }
inline void glReadBuffer(GLenum src) { return HLFGL::Functions::s_fn_glReadBuffer(src); }
inline void glReadPixels(GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, void * pixels) { return HLFGL::Functions::s_fn_glReadPixels(x, y, width, height, format, type, pixels); }
inline void glGetBooleanv(GLenum pname, GLboolean * data) { return HLFGL::Functions::s_fn_glGetBooleanv(pname, data); }
inline void glGetDoublev(GLenum pname, GLdouble * data) { return HLFGL::Functions::s_fn_glGetDoublev(pname, data); }
inline GLenum glGetError() { return HLFGL::Functions::s_fn_glGetError(); }
inline void glGetFloatv(GLenum pname, GLfloat * data) { return HLFGL::Functions::s_fn_glGetFloatv(pname, data); }
inline void glGetIntegerv(GLenum pname, GLint * data) { return HLFGL::Functions::s_fn_glGetIntegerv(pname, data); }
inline const GLubyte * glGetString(GLenum name) { return HLFGL::Functions::s_fn_glGetString(name); }
inline void glGetTexImage(GLenum target, GLint level, GLenum format, GLenum type, void * pixels) { return HLFGL::Functions::s_fn_glGetTexImage(target, level, format, type, pixels); }
inline void glGetTexParameterfv(GLenum target, GLenum pname, GLfloat * params) { return HLFGL::Functions::s_fn_glGetTexParameterfv(target, pname, params); }
inline void glGetTexParameteriv(GLenum target, GLenum pname, GLint * params) { return HLFGL::Functions::s_fn_glGetTexParameteriv(target, pname, params); }
inline void glGetTexLevelParameterfv(GLenum target, GLint level, GLenum pname, GLfloat * params) { return HLFGL::Functions::s_fn_glGetTexLevelParameterfv(target, level, pname, params); }
inline void glGetTexLevelParameteriv(GLenum target, GLint level, GLenum pname, GLint * params) { return HLFGL::Functions::s_fn_glGetTexLevelParameteriv(target, level, pname, params); }
inline GLboolean glIsEnabled(GLenum cap) { return HLFGL::Functions::s_fn_glIsEnabled(cap); }
inline void glDepthRange(GLdouble n, GLdouble f) { return HLFGL::Functions::s_fn_glDepthRange(n, f); }
inline void glViewport(GLint x, GLint y, GLsizei width, GLsizei height) { return HLFGL::Functions::s_fn_glViewport(x, y, width, height); }
inline void glNewList(GLuint list, GLenum mode) { return HLFGL::Functions::s_fn_glNewList(list, mode); }
inline void glEndList() { return HLFGL::Functions::s_fn_glEndList(); }
inline void glCallList(GLuint list) { return HLFGL::Functions::s_fn_glCallList(list); }
inline void glCallLists(GLsizei n, GLenum type, const void * lists) { return HLFGL::Functions::s_fn_glCallLists(n, type, lists); }
inline void glDeleteLists(GLuint list, GLsizei range) { return HLFGL::Functions::s_fn_glDeleteLists(list, range); }
inline GLuint glGenLists(GLsizei range) { return HLFGL::Functions::s_fn_glGenLists(range); }
inline void glListBase(GLuint base) { return HLFGL::Functions::s_fn_glListBase(base); }
inline void glBegin(GLenum mode) { return HLFGL::Functions::s_fn_glBegin(mode); }
inline void glBitmap(GLsizei width, GLsizei height, GLfloat xorig, GLfloat yorig, GLfloat xmove, GLfloat ymove, const GLubyte * bitmap) { return HLFGL::Functions::s_fn_glBitmap(width, height, xorig, yorig, xmove, ymove, bitmap); }
inline void glColor3b(GLbyte red, GLbyte green, GLbyte blue) { return HLFGL::Functions::s_fn_glColor3b(red, green, blue); }
inline void glColor3bv(const GLbyte * v) { return HLFGL::Functions::s_fn_glColor3bv(v); }
inline void glColor3d(GLdouble red, GLdouble green, GLdouble blue) { return HLFGL::Functions::s_fn_glColor3d(red, green, blue); }
inline void glColor3dv(const GLdouble * v) { return HLFGL::Functions::s_fn_glColor3dv(v); }
inline void glColor3f(GLfloat red, GLfloat green, GLfloat blue) { return HLFGL::Functions::s_fn_glColor3f(red, green, blue); }
inline void glColor3fv(const GLfloat * v) { return HLFGL::Functions::s_fn_glColor3fv(v); }
inline void glColor3i(GLint red, GLint green, GLint blue) { return HLFGL::Functions::s_fn_glColor3i(red, green, blue); }
inline void glColor3iv(const GLint * v) { return HLFGL::Functions::s_fn_glColor3iv(v); }
inline void glColor3s(GLshort red, GLshort green, GLshort blue) { return HLFGL::Functions::s_fn_glColor3s(red, green, blue); }
inline void glColor3sv(const GLshort * v) { return HLFGL::Functions::s_fn_glColor3sv(v); }
inline void glColor3ub(GLubyte red, GLubyte green, GLubyte blue) { return HLFGL::Functions::s_fn_glColor3ub(red, green, blue); }
inline void glColor3ubv(const GLubyte * v) { return HLFGL::Functions::s_fn_glColor3ubv(v); }
inline void glColor3ui(GLuint red, GLuint green, GLuint blue) { return HLFGL::Functions::s_fn_glColor3ui(red, green, blue); }
inline void glColor3uiv(const GLuint * v) { return HLFGL::Functions::s_fn_glColor3uiv(v); }
inline void glColor3us(GLushort red, GLushort green, GLushort blue) { return HLFGL::Functions::s_fn_glColor3us(red, green, blue); }
inline void glColor3usv(const GLushort * v) { return HLFGL::Functions::s_fn_glColor3usv(v); }
inline void glColor4b(GLbyte red, GLbyte green, GLbyte blue, GLbyte alpha) { return HLFGL::Functions::s_fn_glColor4b(red, green, blue, alpha); }
inline void glColor4bv(const GLbyte * v) { return HLFGL::Functions::s_fn_glColor4bv(v); }
inline void glColor4d(GLdouble red, GLdouble green, GLdouble blue, GLdouble alpha) { return HLFGL::Functions::s_fn_glColor4d(red, green, blue, alpha); }
inline void glColor4dv(const GLdouble * v) { return HLFGL::Functions::s_fn_glColor4dv(v); }
inline void glColor4f(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha) { return HLFGL::Functions::s_fn_glColor4f(red, green, blue, alpha); }
inline void glColor4fv(const GLfloat * v) { return HLFGL::Functions::s_fn_glColor4fv(v); }
inline void glColor4i(GLint red, GLint green, GLint blue, GLint alpha) { return HLFGL::Functions::s_fn_glColor4i(red, green, blue, alpha); }
inline void glColor4iv(const GLint * v) { return HLFGL::Functions::s_fn_glColor4iv(v); }
inline void glColor4s(GLshort red, GLshort green, GLshort blue, GLshort alpha) { return HLFGL::Functions::s_fn_glColor4s(red, green, blue, alpha); }
inline void glColor4sv(const GLshort * v) { return HLFGL::Functions::s_fn_glColor4sv(v); }
inline void glColor4ub(GLubyte red, GLubyte green, GLubyte blue, GLubyte alpha) { return HLFGL::Functions::s_fn_glColor4ub(red, green, blue, alpha); }
inline void glColor4ubv(const GLubyte * v) { return HLFGL::Functions::s_fn_glColor4ubv(v); }
inline void glColor4ui(GLuint red, GLuint green, GLuint blue, GLuint alpha) { return HLFGL::Functions::s_fn_glColor4ui(red, green, blue, alpha); }
inline void glColor4uiv(const GLuint * v) { return HLFGL::Functions::s_fn_glColor4uiv(v); }
inline void glColor4us(GLushort red, GLushort green, GLushort blue, GLushort alpha) { return HLFGL::Functions::s_fn_glColor4us(red, green, blue, alpha); }
inline void glColor4usv(const GLushort * v) { return HLFGL::Functions::s_fn_glColor4usv(v); }
inline void glEdgeFlag(GLboolean flag) { return HLFGL::Functions::s_fn_glEdgeFlag(flag); }
inline void glEdgeFlagv(const GLboolean * flag) { return HLFGL::Functions::s_fn_glEdgeFlagv(flag); }
inline void glEnd() { return HLFGL::Functions::s_fn_glEnd(); }
inline void glIndexd(GLdouble c) { return HLFGL::Functions::s_fn_glIndexd(c); }
inline void glIndexdv(const GLdouble * c) { return HLFGL::Functions::s_fn_glIndexdv(c); }
inline void glIndexf(GLfloat c) { return HLFGL::Functions::s_fn_glIndexf(c); }
inline void glIndexfv(const GLfloat * c) { return HLFGL::Functions::s_fn_glIndexfv(c); }
inline void glIndexi(GLint c) { return HLFGL::Functions::s_fn_glIndexi(c); }
inline void glIndexiv(const GLint * c) { return HLFGL::Functions::s_fn_glIndexiv(c); }
inline void glIndexs(GLshort c) { return HLFGL::Functions::s_fn_glIndexs(c); }
inline void glIndexsv(const GLshort * c) { return HLFGL::Functions::s_fn_glIndexsv(c); }
inline void glNormal3b(GLbyte nx, GLbyte ny, GLbyte nz) { return HLFGL::Functions::s_fn_glNormal3b(nx, ny, nz); }
inline void glNormal3bv(const GLbyte * v) { return HLFGL::Functions::s_fn_glNormal3bv(v); }
inline void glNormal3d(GLdouble nx, GLdouble ny, GLdouble nz) { return HLFGL::Functions::s_fn_glNormal3d(nx, ny, nz); }
inline void glNormal3dv(const GLdouble * v) { return HLFGL::Functions::s_fn_glNormal3dv(v); }
inline void glNormal3f(GLfloat nx, GLfloat ny, GLfloat nz) { return HLFGL::Functions::s_fn_glNormal3f(nx, ny, nz); }
inline void glNormal3fv(const GLfloat * v) { return HLFGL::Functions::s_fn_glNormal3fv(v); }
inline void glNormal3i(GLint nx, GLint ny, GLint nz) { return HLFGL::Functions::s_fn_glNormal3i(nx, ny, nz); }
inline void glNormal3iv(const GLint * v) { return HLFGL::Functions::s_fn_glNormal3iv(v); }
inline void glNormal3s(GLshort nx, GLshort ny, GLshort nz) { return HLFGL::Functions::s_fn_glNormal3s(nx, ny, nz); }
inline void glNormal3sv(const GLshort * v) { return HLFGL::Functions::s_fn_glNormal3sv(v); }
inline void glRasterPos2d(GLdouble x, GLdouble y) { return HLFGL::Functions::s_fn_glRasterPos2d(x, y); }
inline void glRasterPos2dv(const GLdouble * v) { return HLFGL::Functions::s_fn_glRasterPos2dv(v); }
inline void glRasterPos2f(GLfloat x, GLfloat y) { return HLFGL::Functions::s_fn_glRasterPos2f(x, y); }
inline void glRasterPos2fv(const GLfloat * v) { return HLFGL::Functions::s_fn_glRasterPos2fv(v); }
inline void glRasterPos2i(GLint x, GLint y) { return HLFGL::Functions::s_fn_glRasterPos2i(x, y); }
inline void glRasterPos2iv(const GLint * v) { return HLFGL::Functions::s_fn_glRasterPos2iv(v); }
inline void glRasterPos2s(GLshort x, GLshort y) { return HLFGL::Functions::s_fn_glRasterPos2s(x, y); }
inline void glRasterPos2sv(const GLshort * v) { return HLFGL::Functions::s_fn_glRasterPos2sv(v); }
inline void glRasterPos3d(GLdouble x, GLdouble y, GLdouble z) { return HLFGL::Functions::s_fn_glRasterPos3d(x, y, z); }
inline void glRasterPos3dv(const GLdouble * v) { return HLFGL::Functions::s_fn_glRasterPos3dv(v); }
inline void glRasterPos3f(GLfloat x, GLfloat y, GLfloat z) { return HLFGL::Functions::s_fn_glRasterPos3f(x, y, z); }
inline void glRasterPos3fv(const GLfloat * v) { return HLFGL::Functions::s_fn_glRasterPos3fv(v); }
inline void glRasterPos3i(GLint x, GLint y, GLint z) { return HLFGL::Functions::s_fn_glRasterPos3i(x, y, z); }
inline void glRasterPos3iv(const GLint * v) { return HLFGL::Functions::s_fn_glRasterPos3iv(v); }
inline void glRasterPos3s(GLshort x, GLshort y, GLshort z) { return HLFGL::Functions::s_fn_glRasterPos3s(x, y, z); }
inline void glRasterPos3sv(const GLshort * v) { return HLFGL::Functions::s_fn_glRasterPos3sv(v); }
inline void glRasterPos4d(GLdouble x, GLdouble y, GLdouble z, GLdouble w) { return HLFGL::Functions::s_fn_glRasterPos4d(x, y, z, w); }
inline void glRasterPos4dv(const GLdouble * v) { return HLFGL::Functions::s_fn_glRasterPos4dv(v); }
inline void glRasterPos4f(GLfloat x, GLfloat y, GLfloat z, GLfloat w) { return HLFGL::Functions::s_fn_glRasterPos4f(x, y, z, w); }
inline void glRasterPos4fv(const GLfloat * v) { return HLFGL::Functions::s_fn_glRasterPos4fv(v); }
inline void glRasterPos4i(GLint x, GLint y, GLint z, GLint w) { return HLFGL::Functions::s_fn_glRasterPos4i(x, y, z, w); }
inline void glRasterPos4iv(const GLint * v) { return HLFGL::Functions::s_fn_glRasterPos4iv(v); }
inline void glRasterPos4s(GLshort x, GLshort y, GLshort z, GLshort w) { return HLFGL::Functions::s_fn_glRasterPos4s(x, y, z, w); }
inline void glRasterPos4sv(const GLshort * v) { return HLFGL::Functions::s_fn_glRasterPos4sv(v); }
inline void glRectd(GLdouble x1, GLdouble y1, GLdouble x2, GLdouble y2) { return HLFGL::Functions::s_fn_glRectd(x1, y1, x2, y2); }
inline void glRectdv(const GLdouble * v1, const GLdouble * v2) { return HLFGL::Functions::s_fn_glRectdv(v1, v2); }
inline void glRectf(GLfloat x1, GLfloat y1, GLfloat x2, GLfloat y2) { return HLFGL::Functions::s_fn_glRectf(x1, y1, x2, y2); }
inline void glRectfv(const GLfloat * v1, const GLfloat * v2) { return HLFGL::Functions::s_fn_glRectfv(v1, v2); }
inline void glRecti(GLint x1, GLint y1, GLint x2, GLint y2) { return HLFGL::Functions::s_fn_glRecti(x1, y1, x2, y2); }
inline void glRectiv(const GLint * v1, const GLint * v2) { return HLFGL::Functions::s_fn_glRectiv(v1, v2); }
inline void glRects(GLshort x1, GLshort y1, GLshort x2, GLshort y2) { return HLFGL::Functions::s_fn_glRects(x1, y1, x2, y2); }
inline void glRectsv(const GLshort * v1, const GLshort * v2) { return HLFGL::Functions::s_fn_glRectsv(v1, v2); }
inline void glTexCoord1d(GLdouble s) { return HLFGL::Functions::s_fn_glTexCoord1d(s); }
inline void glTexCoord1dv(const GLdouble * v) { return HLFGL::Functions::s_fn_glTexCoord1dv(v); }
inline void glTexCoord1f(GLfloat s) { return HLFGL::Functions::s_fn_glTexCoord1f(s); }
inline void glTexCoord1fv(const GLfloat * v) { return HLFGL::Functions::s_fn_glTexCoord1fv(v); }
inline void glTexCoord1i(GLint s) { return HLFGL::Functions::s_fn_glTexCoord1i(s); }
inline void glTexCoord1iv(const GLint * v) { return HLFGL::Functions::s_fn_glTexCoord1iv(v); }
inline void glTexCoord1s(GLshort s) { return HLFGL::Functions::s_fn_glTexCoord1s(s); }
inline void glTexCoord1sv(const GLshort * v) { return HLFGL::Functions::s_fn_glTexCoord1sv(v); }
inline void glTexCoord2d(GLdouble s, GLdouble t) { return HLFGL::Functions::s_fn_glTexCoord2d(s, t); }
inline void glTexCoord2dv(const GLdouble * v) { return HLFGL::Functions::s_fn_glTexCoord2dv(v); }
inline void glTexCoord2f(GLfloat s, GLfloat t) { return HLFGL::Functions::s_fn_glTexCoord2f(s, t); }
inline void glTexCoord2fv(const GLfloat * v) { return HLFGL::Functions::s_fn_glTexCoord2fv(v); }
inline void glTexCoord2i(GLint s, GLint t) { return HLFGL::Functions::s_fn_glTexCoord2i(s, t); }
inline void glTexCoord2iv(const GLint * v) { return HLFGL::Functions::s_fn_glTexCoord2iv(v); }
inline void glTexCoord2s(GLshort s, GLshort t) { return HLFGL::Functions::s_fn_glTexCoord2s(s, t); }
inline void glTexCoord2sv(const GLshort * v) { return HLFGL::Functions::s_fn_glTexCoord2sv(v); }
inline void glTexCoord3d(GLdouble s, GLdouble t, GLdouble r) { return HLFGL::Functions::s_fn_glTexCoord3d(s, t, r); }
inline void glTexCoord3dv(const GLdouble * v) { return HLFGL::Functions::s_fn_glTexCoord3dv(v); }
inline void glTexCoord3f(GLfloat s, GLfloat t, GLfloat r) { return HLFGL::Functions::s_fn_glTexCoord3f(s, t, r); }
inline void glTexCoord3fv(const GLfloat * v) { return HLFGL::Functions::s_fn_glTexCoord3fv(v); }
inline void glTexCoord3i(GLint s, GLint t, GLint r) { return HLFGL::Functions::s_fn_glTexCoord3i(s, t, r); }
inline void glTexCoord3iv(const GLint * v) { return HLFGL::Functions::s_fn_glTexCoord3iv(v); }
inline void glTexCoord3s(GLshort s, GLshort t, GLshort r) { return HLFGL::Functions::s_fn_glTexCoord3s(s, t, r); }
inline void glTexCoord3sv(const GLshort * v) { return HLFGL::Functions::s_fn_glTexCoord3sv(v); }
inline void glTexCoord4d(GLdouble s, GLdouble t, GLdouble r, GLdouble q) { return HLFGL::Functions::s_fn_glTexCoord4d(s, t, r, q); }
inline void glTexCoord4dv(const GLdouble * v) { return HLFGL::Functions::s_fn_glTexCoord4dv(v); }
inline void glTexCoord4f(GLfloat s, GLfloat t, GLfloat r, GLfloat q) { return HLFGL::Functions::s_fn_glTexCoord4f(s, t, r, q); }
inline void glTexCoord4fv(const GLfloat * v) { return HLFGL::Functions::s_fn_glTexCoord4fv(v); }
inline void glTexCoord4i(GLint s, GLint t, GLint r, GLint q) { return HLFGL::Functions::s_fn_glTexCoord4i(s, t, r, q); }
inline void glTexCoord4iv(const GLint * v) { return HLFGL::Functions::s_fn_glTexCoord4iv(v); }
inline void glTexCoord4s(GLshort s, GLshort t, GLshort r, GLshort q) { return HLFGL::Functions::s_fn_glTexCoord4s(s, t, r, q); }
inline void glTexCoord4sv(const GLshort * v) { return HLFGL::Functions::s_fn_glTexCoord4sv(v); }
inline void glVertex2d(GLdouble x, GLdouble y) { return HLFGL::Functions::s_fn_glVertex2d(x, y); }
inline void glVertex2dv(const GLdouble * v) { return HLFGL::Functions::s_fn_glVertex2dv(v); }
inline void glVertex2f(GLfloat x, GLfloat y) { return HLFGL::Functions::s_fn_glVertex2f(x, y); }
inline void glVertex2fv(const GLfloat * v) { return HLFGL::Functions::s_fn_glVertex2fv(v); }
inline void glVertex2i(GLint x, GLint y) { return HLFGL::Functions::s_fn_glVertex2i(x, y); }
inline void glVertex2iv(const GLint * v) { return HLFGL::Functions::s_fn_glVertex2iv(v); }
inline void glVertex2s(GLshort x, GLshort y) { return HLFGL::Functions::s_fn_glVertex2s(x, y); }
inline void glVertex2sv(const GLshort * v) { return HLFGL::Functions::s_fn_glVertex2sv(v); }
inline void glVertex3d(GLdouble x, GLdouble y, GLdouble z) { return HLFGL::Functions::s_fn_glVertex3d(x, y, z); }
inline void glVertex3dv(const GLdouble * v) { return HLFGL::Functions::s_fn_glVertex3dv(v); }
inline void glVertex3f(GLfloat x, GLfloat y, GLfloat z) { return HLFGL::Functions::s_fn_glVertex3f(x, y, z); }
inline void glVertex3fv(const GLfloat * v) { return HLFGL::Functions::s_fn_glVertex3fv(v); }
inline void glVertex3i(GLint x, GLint y, GLint z) { return HLFGL::Functions::s_fn_glVertex3i(x, y, z); }
inline void glVertex3iv(const GLint * v) { return HLFGL::Functions::s_fn_glVertex3iv(v); }
inline void glVertex3s(GLshort x, GLshort y, GLshort z) { return HLFGL::Functions::s_fn_glVertex3s(x, y, z); }
inline void glVertex3sv(const GLshort * v) { return HLFGL::Functions::s_fn_glVertex3sv(v); }
inline void glVertex4d(GLdouble x, GLdouble y, GLdouble z, GLdouble w) { return HLFGL::Functions::s_fn_glVertex4d(x, y, z, w); }
inline void glVertex4dv(const GLdouble * v) { return HLFGL::Functions::s_fn_glVertex4dv(v); }
inline void glVertex4f(GLfloat x, GLfloat y, GLfloat z, GLfloat w) { return HLFGL::Functions::s_fn_glVertex4f(x, y, z, w); }
inline void glVertex4fv(const GLfloat * v) { return HLFGL::Functions::s_fn_glVertex4fv(v); }
inline void glVertex4i(GLint x, GLint y, GLint z, GLint w) { return HLFGL::Functions::s_fn_glVertex4i(x, y, z, w); }
inline void glVertex4iv(const GLint * v) { return HLFGL::Functions::s_fn_glVertex4iv(v); }
inline void glVertex4s(GLshort x, GLshort y, GLshort z, GLshort w) { return HLFGL::Functions::s_fn_glVertex4s(x, y, z, w); }
inline void glVertex4sv(const GLshort * v) { return HLFGL::Functions::s_fn_glVertex4sv(v); }
inline void glClipPlane(GLenum plane, const GLdouble * equation) { return HLFGL::Functions::s_fn_glClipPlane(plane, equation); }
inline void glColorMaterial(GLenum face, GLenum mode) { return HLFGL::Functions::s_fn_glColorMaterial(face, mode); }
inline void glFogf(GLenum pname, GLfloat param) { return HLFGL::Functions::s_fn_glFogf(pname, param); }
inline void glFogfv(GLenum pname, const GLfloat * params) { return HLFGL::Functions::s_fn_glFogfv(pname, params); }
inline void glFogi(GLenum pname, GLint param) { return HLFGL::Functions::s_fn_glFogi(pname, param); }
inline void glFogiv(GLenum pname, const GLint * params) { return HLFGL::Functions::s_fn_glFogiv(pname, params); }
inline void glLightf(GLenum light, GLenum pname, GLfloat param) { return HLFGL::Functions::s_fn_glLightf(light, pname, param); }
inline void glLightfv(GLenum light, GLenum pname, const GLfloat * params) { return HLFGL::Functions::s_fn_glLightfv(light, pname, params); }
inline void glLighti(GLenum light, GLenum pname, GLint param) { return HLFGL::Functions::s_fn_glLighti(light, pname, param); }
inline void glLightiv(GLenum light, GLenum pname, const GLint * params) { return HLFGL::Functions::s_fn_glLightiv(light, pname, params); }
inline void glLightModelf(GLenum pname, GLfloat param) { return HLFGL::Functions::s_fn_glLightModelf(pname, param); }
inline void glLightModelfv(GLenum pname, const GLfloat * params) { return HLFGL::Functions::s_fn_glLightModelfv(pname, params); }
inline void glLightModeli(GLenum pname, GLint param) { return HLFGL::Functions::s_fn_glLightModeli(pname, param); }
inline void glLightModeliv(GLenum pname, const GLint * params) { return HLFGL::Functions::s_fn_glLightModeliv(pname, params); }
inline void glLineStipple(GLint factor, GLushort pattern) { return HLFGL::Functions::s_fn_glLineStipple(factor, pattern); }
inline void glMaterialf(GLenum face, GLenum pname, GLfloat param) { return HLFGL::Functions::s_fn_glMaterialf(face, pname, param); }
inline void glMaterialfv(GLenum face, GLenum pname, const GLfloat * params) { return HLFGL::Functions::s_fn_glMaterialfv(face, pname, params); }
inline void glMateriali(GLenum face, GLenum pname, GLint param) { return HLFGL::Functions::s_fn_glMateriali(face, pname, param); }
inline void glMaterialiv(GLenum face, GLenum pname, const GLint * params) { return HLFGL::Functions::s_fn_glMaterialiv(face, pname, params); }
inline void glPolygonStipple(const GLubyte * mask) { return HLFGL::Functions::s_fn_glPolygonStipple(mask); }
inline void glShadeModel(GLenum mode) { return HLFGL::Functions::s_fn_glShadeModel(mode); }
inline void glTexEnvf(GLenum target, GLenum pname, GLfloat param) { return HLFGL::Functions::s_fn_glTexEnvf(target, pname, param); }
inline void glTexEnvfv(GLenum target, GLenum pname, const GLfloat * params) { return HLFGL::Functions::s_fn_glTexEnvfv(target, pname, params); }
inline void glTexEnvi(GLenum target, GLenum pname, GLint param) { return HLFGL::Functions::s_fn_glTexEnvi(target, pname, param); }
inline void glTexEnviv(GLenum target, GLenum pname, const GLint * params) { return HLFGL::Functions::s_fn_glTexEnviv(target, pname, params); }
inline void glTexGend(GLenum coord, GLenum pname, GLdouble param) { return HLFGL::Functions::s_fn_glTexGend(coord, pname, param); }
inline void glTexGendv(GLenum coord, GLenum pname, const GLdouble * params) { return HLFGL::Functions::s_fn_glTexGendv(coord, pname, params); }
inline void glTexGenf(GLenum coord, GLenum pname, GLfloat param) { return HLFGL::Functions::s_fn_glTexGenf(coord, pname, param); }
inline void glTexGenfv(GLenum coord, GLenum pname, const GLfloat * params) { return HLFGL::Functions::s_fn_glTexGenfv(coord, pname, params); }
inline void glTexGeni(GLenum coord, GLenum pname, GLint param) { return HLFGL::Functions::s_fn_glTexGeni(coord, pname, param); }
inline void glTexGeniv(GLenum coord, GLenum pname, const GLint * params) { return HLFGL::Functions::s_fn_glTexGeniv(coord, pname, params); }
inline void glFeedbackBuffer(GLsizei size, GLenum type, GLfloat * buffer) { return HLFGL::Functions::s_fn_glFeedbackBuffer(size, type, buffer); }
inline void glSelectBuffer(GLsizei size, GLuint * buffer) { return HLFGL::Functions::s_fn_glSelectBuffer(size, buffer); }
inline GLint glRenderMode(GLenum mode) { return HLFGL::Functions::s_fn_glRenderMode(mode); }
inline void glInitNames() { return HLFGL::Functions::s_fn_glInitNames(); }
inline void glLoadName(GLuint name) { return HLFGL::Functions::s_fn_glLoadName(name); }
inline void glPassThrough(GLfloat token) { return HLFGL::Functions::s_fn_glPassThrough(token); }
inline void glPopName() { return HLFGL::Functions::s_fn_glPopName(); }
inline void glPushName(GLuint name) { return HLFGL::Functions::s_fn_glPushName(name); }
inline void glClearAccum(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha) { return HLFGL::Functions::s_fn_glClearAccum(red, green, blue, alpha); }
inline void glClearIndex(GLfloat c) { return HLFGL::Functions::s_fn_glClearIndex(c); }
inline void glIndexMask(GLuint mask) { return HLFGL::Functions::s_fn_glIndexMask(mask); }
inline void glAccum(GLenum op, GLfloat value) { return HLFGL::Functions::s_fn_glAccum(op, value); }
inline void glPopAttrib() { return HLFGL::Functions::s_fn_glPopAttrib(); }
inline void glPushAttrib(GLbitfield mask) { return HLFGL::Functions::s_fn_glPushAttrib(mask); }
inline void glMap1d(GLenum target, GLdouble u1, GLdouble u2, GLint stride, GLint order, const GLdouble * points) { return HLFGL::Functions::s_fn_glMap1d(target, u1, u2, stride, order, points); }
inline void glMap1f(GLenum target, GLfloat u1, GLfloat u2, GLint stride, GLint order, const GLfloat * points) { return HLFGL::Functions::s_fn_glMap1f(target, u1, u2, stride, order, points); }
inline void glMap2d(GLenum target, GLdouble u1, GLdouble u2, GLint ustride, GLint uorder, GLdouble v1, GLdouble v2, GLint vstride, GLint vorder, const GLdouble * points) { return HLFGL::Functions::s_fn_glMap2d(target, u1, u2, ustride, uorder, v1, v2, vstride, vorder, points); }
inline void glMap2f(GLenum target, GLfloat u1, GLfloat u2, GLint ustride, GLint uorder, GLfloat v1, GLfloat v2, GLint vstride, GLint vorder, const GLfloat * points) { return HLFGL::Functions::s_fn_glMap2f(target, u1, u2, ustride, uorder, v1, v2, vstride, vorder, points); }
inline void glMapGrid1d(GLint un, GLdouble u1, GLdouble u2) { return HLFGL::Functions::s_fn_glMapGrid1d(un, u1, u2); }
inline void glMapGrid1f(GLint un, GLfloat u1, GLfloat u2) { return HLFGL::Functions::s_fn_glMapGrid1f(un, u1, u2); }
inline void glMapGrid2d(GLint un, GLdouble u1, GLdouble u2, GLint vn, GLdouble v1, GLdouble v2) { return HLFGL::Functions::s_fn_glMapGrid2d(un, u1, u2, vn, v1, v2); }
inline void glMapGrid2f(GLint un, GLfloat u1, GLfloat u2, GLint vn, GLfloat v1, GLfloat v2) { return HLFGL::Functions::s_fn_glMapGrid2f(un, u1, u2, vn, v1, v2); }
inline void glEvalCoord1d(GLdouble u) { return HLFGL::Functions::s_fn_glEvalCoord1d(u); }
inline void glEvalCoord1dv(const GLdouble * u) { return HLFGL::Functions::s_fn_glEvalCoord1dv(u); }
inline void glEvalCoord1f(GLfloat u) { return HLFGL::Functions::s_fn_glEvalCoord1f(u); }
inline void glEvalCoord1fv(const GLfloat * u) { return HLFGL::Functions::s_fn_glEvalCoord1fv(u); }
inline void glEvalCoord2d(GLdouble u, GLdouble v) { return HLFGL::Functions::s_fn_glEvalCoord2d(u, v); }
inline void glEvalCoord2dv(const GLdouble * u) { return HLFGL::Functions::s_fn_glEvalCoord2dv(u); }
inline void glEvalCoord2f(GLfloat u, GLfloat v) { return HLFGL::Functions::s_fn_glEvalCoord2f(u, v); }
inline void glEvalCoord2fv(const GLfloat * u) { return HLFGL::Functions::s_fn_glEvalCoord2fv(u); }
inline void glEvalMesh1(GLenum mode, GLint i1, GLint i2) { return HLFGL::Functions::s_fn_glEvalMesh1(mode, i1, i2); }
inline void glEvalPoint1(GLint i) { return HLFGL::Functions::s_fn_glEvalPoint1(i); }
inline void glEvalMesh2(GLenum mode, GLint i1, GLint i2, GLint j1, GLint j2) { return HLFGL::Functions::s_fn_glEvalMesh2(mode, i1, i2, j1, j2); }
inline void glEvalPoint2(GLint i, GLint j) { return HLFGL::Functions::s_fn_glEvalPoint2(i, j); }
inline void glAlphaFunc(GLenum func, GLfloat ref) { return HLFGL::Functions::s_fn_glAlphaFunc(func, ref); }
inline void glPixelZoom(GLfloat xfactor, GLfloat yfactor) { return HLFGL::Functions::s_fn_glPixelZoom(xfactor, yfactor); }
inline void glPixelTransferf(GLenum pname, GLfloat param) { return HLFGL::Functions::s_fn_glPixelTransferf(pname, param); }
inline void glPixelTransferi(GLenum pname, GLint param) { return HLFGL::Functions::s_fn_glPixelTransferi(pname, param); }
inline void glPixelMapfv(GLenum map, GLsizei mapsize, const GLfloat * values) { return HLFGL::Functions::s_fn_glPixelMapfv(map, mapsize, values); }
inline void glPixelMapuiv(GLenum map, GLsizei mapsize, const GLuint * values) { return HLFGL::Functions::s_fn_glPixelMapuiv(map, mapsize, values); }
inline void glPixelMapusv(GLenum map, GLsizei mapsize, const GLushort * values) { return HLFGL::Functions::s_fn_glPixelMapusv(map, mapsize, values); }
inline void glCopyPixels(GLint x, GLint y, GLsizei width, GLsizei height, GLenum type) { return HLFGL::Functions::s_fn_glCopyPixels(x, y, width, height, type); }
inline void glDrawPixels(GLsizei width, GLsizei height, GLenum format, GLenum type, const void * pixels) { return HLFGL::Functions::s_fn_glDrawPixels(width, height, format, type, pixels); }
inline void glGetClipPlane(GLenum plane, GLdouble * equation) { return HLFGL::Functions::s_fn_glGetClipPlane(plane, equation); }
inline void glGetLightfv(GLenum light, GLenum pname, GLfloat * params) { return HLFGL::Functions::s_fn_glGetLightfv(light, pname, params); }
inline void glGetLightiv(GLenum light, GLenum pname, GLint * params) { return HLFGL::Functions::s_fn_glGetLightiv(light, pname, params); }
inline void glGetMapdv(GLenum target, GLenum query, GLdouble * v) { return HLFGL::Functions::s_fn_glGetMapdv(target, query, v); }
inline void glGetMapfv(GLenum target, GLenum query, GLfloat * v) { return HLFGL::Functions::s_fn_glGetMapfv(target, query, v); }
inline void glGetMapiv(GLenum target, GLenum query, GLint * v) { return HLFGL::Functions::s_fn_glGetMapiv(target, query, v); }
inline void glGetMaterialfv(GLenum face, GLenum pname, GLfloat * params) { return HLFGL::Functions::s_fn_glGetMaterialfv(face, pname, params); }
inline void glGetMaterialiv(GLenum face, GLenum pname, GLint * params) { return HLFGL::Functions::s_fn_glGetMaterialiv(face, pname, params); }
inline void glGetPixelMapfv(GLenum map, GLfloat * values) { return HLFGL::Functions::s_fn_glGetPixelMapfv(map, values); }
inline void glGetPixelMapuiv(GLenum map, GLuint * values) { return HLFGL::Functions::s_fn_glGetPixelMapuiv(map, values); }
inline void glGetPixelMapusv(GLenum map, GLushort * values) { return HLFGL::Functions::s_fn_glGetPixelMapusv(map, values); }
inline void glGetPolygonStipple(GLubyte * mask) { return HLFGL::Functions::s_fn_glGetPolygonStipple(mask); }
inline void glGetTexEnvfv(GLenum target, GLenum pname, GLfloat * params) { return HLFGL::Functions::s_fn_glGetTexEnvfv(target, pname, params); }
inline void glGetTexEnviv(GLenum target, GLenum pname, GLint * params) { return HLFGL::Functions::s_fn_glGetTexEnviv(target, pname, params); }
inline void glGetTexGendv(GLenum coord, GLenum pname, GLdouble * params) { return HLFGL::Functions::s_fn_glGetTexGendv(coord, pname, params); }
inline void glGetTexGenfv(GLenum coord, GLenum pname, GLfloat * params) { return HLFGL::Functions::s_fn_glGetTexGenfv(coord, pname, params); }
inline void glGetTexGeniv(GLenum coord, GLenum pname, GLint * params) { return HLFGL::Functions::s_fn_glGetTexGeniv(coord, pname, params); }
inline GLboolean glIsList(GLuint list) { return HLFGL::Functions::s_fn_glIsList(list); }
inline void glFrustum(GLdouble left, GLdouble right, GLdouble bottom, GLdouble top, GLdouble zNear, GLdouble zFar) { return HLFGL::Functions::s_fn_glFrustum(left, right, bottom, top, zNear, zFar); }
inline void glLoadIdentity() { return HLFGL::Functions::s_fn_glLoadIdentity(); }
inline void glLoadMatrixf(const GLfloat * m) { return HLFGL::Functions::s_fn_glLoadMatrixf(m); }
inline void glLoadMatrixd(const GLdouble * m) { return HLFGL::Functions::s_fn_glLoadMatrixd(m); }
inline void glMatrixMode(GLenum mode) { return HLFGL::Functions::s_fn_glMatrixMode(mode); }
inline void glMultMatrixf(const GLfloat * m) { return HLFGL::Functions::s_fn_glMultMatrixf(m); }
inline void glMultMatrixd(const GLdouble * m) { return HLFGL::Functions::s_fn_glMultMatrixd(m); }
inline void glOrtho(GLdouble left, GLdouble right, GLdouble bottom, GLdouble top, GLdouble zNear, GLdouble zFar) { return HLFGL::Functions::s_fn_glOrtho(left, right, bottom, top, zNear, zFar); }
inline void glPopMatrix() { return HLFGL::Functions::s_fn_glPopMatrix(); }
inline void glPushMatrix() { return HLFGL::Functions::s_fn_glPushMatrix(); }
inline void glRotated(GLdouble angle, GLdouble x, GLdouble y, GLdouble z) { return HLFGL::Functions::s_fn_glRotated(angle, x, y, z); }
inline void glRotatef(GLfloat angle, GLfloat x, GLfloat y, GLfloat z) { return HLFGL::Functions::s_fn_glRotatef(angle, x, y, z); }
inline void glScaled(GLdouble x, GLdouble y, GLdouble z) { return HLFGL::Functions::s_fn_glScaled(x, y, z); }
inline void glScalef(GLfloat x, GLfloat y, GLfloat z) { return HLFGL::Functions::s_fn_glScalef(x, y, z); }
inline void glTranslated(GLdouble x, GLdouble y, GLdouble z) { return HLFGL::Functions::s_fn_glTranslated(x, y, z); }
inline void glTranslatef(GLfloat x, GLfloat y, GLfloat z) { return HLFGL::Functions::s_fn_glTranslatef(x, y, z); }
#endif // GL_VERSION_1_0

// GL_VERSION_1_1
#ifndef GL_VERSION_1_1
#define GL_VERSION_1_1 1
typedef khronos_float_t GLclampf;
typedef double GLclampd;
#define GL_COLOR_LOGIC_OP 0x0BF2
#define GL_POLYGON_OFFSET_UNITS 0x2A00
#define GL_POLYGON_OFFSET_POINT 0x2A01
#define GL_POLYGON_OFFSET_LINE 0x2A02
#define GL_POLYGON_OFFSET_FILL 0x8037
#define GL_POLYGON_OFFSET_FACTOR 0x8038
#define GL_TEXTURE_BINDING_1D 0x8068
#define GL_TEXTURE_BINDING_2D 0x8069
#define GL_TEXTURE_INTERNAL_FORMAT 0x1003
#define GL_TEXTURE_RED_SIZE 0x805C
#define GL_TEXTURE_GREEN_SIZE 0x805D
#define GL_TEXTURE_BLUE_SIZE 0x805E
#define GL_TEXTURE_ALPHA_SIZE 0x805F
#define GL_DOUBLE 0x140A
#define GL_PROXY_TEXTURE_1D 0x8063
#define GL_PROXY_TEXTURE_2D 0x8064
#define GL_R3_G3_B2 0x2A10
#define GL_RGB4 0x804F
#define GL_RGB5 0x8050
#define GL_RGB8 0x8051
#define GL_RGB10 0x8052
#define GL_RGB12 0x8053
#define GL_RGB16 0x8054
#define GL_RGBA2 0x8055
#define GL_RGBA4 0x8056
#define GL_RGB5_A1 0x8057
#define GL_RGBA8 0x8058
#define GL_RGB10_A2 0x8059
#define GL_RGBA12 0x805A
#define GL_RGBA16 0x805B
#define GL_CLIENT_PIXEL_STORE_BIT 0x00000001
#define GL_CLIENT_VERTEX_ARRAY_BIT 0x00000002
#define GL_CLIENT_ALL_ATTRIB_BITS 0xFFFFFFFF
#define GL_VERTEX_ARRAY_POINTER 0x808E
#define GL_NORMAL_ARRAY_POINTER 0x808F
#define GL_COLOR_ARRAY_POINTER 0x8090
#define GL_INDEX_ARRAY_POINTER 0x8091
#define GL_TEXTURE_COORD_ARRAY_POINTER 0x8092
#define GL_EDGE_FLAG_ARRAY_POINTER 0x8093
#define GL_FEEDBACK_BUFFER_POINTER 0x0DF0
#define GL_SELECTION_BUFFER_POINTER 0x0DF3
#define GL_CLIENT_ATTRIB_STACK_DEPTH 0x0BB1
#define GL_INDEX_LOGIC_OP 0x0BF1
#define GL_MAX_CLIENT_ATTRIB_STACK_DEPTH 0x0D3B
#define GL_FEEDBACK_BUFFER_SIZE 0x0DF1
#define GL_FEEDBACK_BUFFER_TYPE 0x0DF2
#define GL_SELECTION_BUFFER_SIZE 0x0DF4
#define GL_VERTEX_ARRAY 0x8074
#define GL_NORMAL_ARRAY 0x8075
#define GL_COLOR_ARRAY 0x8076
#define GL_INDEX_ARRAY 0x8077
#define GL_TEXTURE_COORD_ARRAY 0x8078
#define GL_EDGE_FLAG_ARRAY 0x8079
#define GL_VERTEX_ARRAY_SIZE 0x807A
#define GL_VERTEX_ARRAY_TYPE 0x807B
#define GL_VERTEX_ARRAY_STRIDE 0x807C
#define GL_NORMAL_ARRAY_TYPE 0x807E
#define GL_NORMAL_ARRAY_STRIDE 0x807F
#define GL_COLOR_ARRAY_SIZE 0x8081
#define GL_COLOR_ARRAY_TYPE 0x8082
#define GL_COLOR_ARRAY_STRIDE 0x8083
#define GL_INDEX_ARRAY_TYPE 0x8085
#define GL_INDEX_ARRAY_STRIDE 0x8086
#define GL_TEXTURE_COORD_ARRAY_SIZE 0x8088
#define GL_TEXTURE_COORD_ARRAY_TYPE 0x8089
#define GL_TEXTURE_COORD_ARRAY_STRIDE 0x808A
#define GL_EDGE_FLAG_ARRAY_STRIDE 0x808C
#define GL_TEXTURE_LUMINANCE_SIZE 0x8060
#define GL_TEXTURE_INTENSITY_SIZE 0x8061
#define GL_TEXTURE_PRIORITY 0x8066
#define GL_TEXTURE_RESIDENT 0x8067
#define GL_ALPHA4 0x803B
#define GL_ALPHA8 0x803C
#define GL_ALPHA12 0x803D
#define GL_ALPHA16 0x803E
#define GL_LUMINANCE4 0x803F
#define GL_LUMINANCE8 0x8040
#define GL_LUMINANCE12 0x8041
#define GL_LUMINANCE16 0x8042
#define GL_LUMINANCE4_ALPHA4 0x8043
#define GL_LUMINANCE6_ALPHA2 0x8044
#define GL_LUMINANCE8_ALPHA8 0x8045
#define GL_LUMINANCE12_ALPHA4 0x8046
#define GL_LUMINANCE12_ALPHA12 0x8047
#define GL_LUMINANCE16_ALPHA16 0x8048
#define GL_INTENSITY 0x8049
#define GL_INTENSITY4 0x804A
#define GL_INTENSITY8 0x804B
#define GL_INTENSITY12 0x804C
#define GL_INTENSITY16 0x804D
#define GL_V2F 0x2A20
#define GL_V3F 0x2A21
#define GL_C4UB_V2F 0x2A22
#define GL_C4UB_V3F 0x2A23
#define GL_C3F_V3F 0x2A24
#define GL_N3F_V3F 0x2A25
#define GL_C4F_N3F_V3F 0x2A26
#define GL_T2F_V3F 0x2A27
#define GL_T4F_V4F 0x2A28
#define GL_T2F_C4UB_V3F 0x2A29
#define GL_T2F_C3F_V3F 0x2A2A
#define GL_T2F_N3F_V3F 0x2A2B
#define GL_T2F_C4F_N3F_V3F 0x2A2C
#define GL_T4F_C4F_N3F_V4F 0x2A2D
namespace HLFGL::Functions {
	typedef void(GLAPIENTRY *Fn_glDrawArrays)(GLenum mode, GLint first, GLsizei count);
	inline Fn_glDrawArrays s_fn_glDrawArrays {};
	typedef void(GLAPIENTRY *Fn_glDrawElements)(GLenum mode, GLsizei count, GLenum type, const void * indices);
	inline Fn_glDrawElements s_fn_glDrawElements {};
	typedef void(GLAPIENTRY *Fn_glGetPointerv)(GLenum pname, void ** params);
	inline Fn_glGetPointerv s_fn_glGetPointerv {};
	typedef void(GLAPIENTRY *Fn_glPolygonOffset)(GLfloat factor, GLfloat units);
	inline Fn_glPolygonOffset s_fn_glPolygonOffset {};
	typedef void(GLAPIENTRY *Fn_glCopyTexImage1D)(GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLint border);
	inline Fn_glCopyTexImage1D s_fn_glCopyTexImage1D {};
	typedef void(GLAPIENTRY *Fn_glCopyTexImage2D)(GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border);
	inline Fn_glCopyTexImage2D s_fn_glCopyTexImage2D {};
	typedef void(GLAPIENTRY *Fn_glCopyTexSubImage1D)(GLenum target, GLint level, GLint xoffset, GLint x, GLint y, GLsizei width);
	inline Fn_glCopyTexSubImage1D s_fn_glCopyTexSubImage1D {};
	typedef void(GLAPIENTRY *Fn_glCopyTexSubImage2D)(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height);
	inline Fn_glCopyTexSubImage2D s_fn_glCopyTexSubImage2D {};
	typedef void(GLAPIENTRY *Fn_glTexSubImage1D)(GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLenum type, const void * pixels);
	inline Fn_glTexSubImage1D s_fn_glTexSubImage1D {};
	typedef void(GLAPIENTRY *Fn_glTexSubImage2D)(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const void * pixels);
	inline Fn_glTexSubImage2D s_fn_glTexSubImage2D {};
	typedef void(GLAPIENTRY *Fn_glBindTexture)(GLenum target, GLuint texture);
	inline Fn_glBindTexture s_fn_glBindTexture {};
	typedef void(GLAPIENTRY *Fn_glDeleteTextures)(GLsizei n, const GLuint * textures);
	inline Fn_glDeleteTextures s_fn_glDeleteTextures {};
	typedef void(GLAPIENTRY *Fn_glGenTextures)(GLsizei n, GLuint * textures);
	inline Fn_glGenTextures s_fn_glGenTextures {};
	typedef GLboolean(GLAPIENTRY *Fn_glIsTexture)(GLuint texture);
	inline Fn_glIsTexture s_fn_glIsTexture {};
	typedef void(GLAPIENTRY *Fn_glArrayElement)(GLint i);
	inline Fn_glArrayElement s_fn_glArrayElement {};
	typedef void(GLAPIENTRY *Fn_glColorPointer)(GLint size, GLenum type, GLsizei stride, const void * pointer);
	inline Fn_glColorPointer s_fn_glColorPointer {};
	typedef void(GLAPIENTRY *Fn_glDisableClientState)(GLenum array);
	inline Fn_glDisableClientState s_fn_glDisableClientState {};
	typedef void(GLAPIENTRY *Fn_glEdgeFlagPointer)(GLsizei stride, const void * pointer);
	inline Fn_glEdgeFlagPointer s_fn_glEdgeFlagPointer {};
	typedef void(GLAPIENTRY *Fn_glEnableClientState)(GLenum array);
	inline Fn_glEnableClientState s_fn_glEnableClientState {};
	typedef void(GLAPIENTRY *Fn_glIndexPointer)(GLenum type, GLsizei stride, const void * pointer);
	inline Fn_glIndexPointer s_fn_glIndexPointer {};
	typedef void(GLAPIENTRY *Fn_glInterleavedArrays)(GLenum format, GLsizei stride, const void * pointer);
	inline Fn_glInterleavedArrays s_fn_glInterleavedArrays {};
	typedef void(GLAPIENTRY *Fn_glNormalPointer)(GLenum type, GLsizei stride, const void * pointer);
	inline Fn_glNormalPointer s_fn_glNormalPointer {};
	typedef void(GLAPIENTRY *Fn_glTexCoordPointer)(GLint size, GLenum type, GLsizei stride, const void * pointer);
	inline Fn_glTexCoordPointer s_fn_glTexCoordPointer {};
	typedef void(GLAPIENTRY *Fn_glVertexPointer)(GLint size, GLenum type, GLsizei stride, const void * pointer);
	inline Fn_glVertexPointer s_fn_glVertexPointer {};
	typedef GLboolean(GLAPIENTRY *Fn_glAreTexturesResident)(GLsizei n, const GLuint * textures, GLboolean * residences);
	inline Fn_glAreTexturesResident s_fn_glAreTexturesResident {};
	typedef void(GLAPIENTRY *Fn_glPrioritizeTextures)(GLsizei n, const GLuint * textures, const GLfloat * priorities);
	inline Fn_glPrioritizeTextures s_fn_glPrioritizeTextures {};
	typedef void(GLAPIENTRY *Fn_glIndexub)(GLubyte c);
	inline Fn_glIndexub s_fn_glIndexub {};
	typedef void(GLAPIENTRY *Fn_glIndexubv)(const GLubyte * c);
	inline Fn_glIndexubv s_fn_glIndexubv {};
	typedef void(GLAPIENTRY *Fn_glPopClientAttrib)();
	inline Fn_glPopClientAttrib s_fn_glPopClientAttrib {};
	typedef void(GLAPIENTRY *Fn_glPushClientAttrib)(GLbitfield mask);
	inline Fn_glPushClientAttrib s_fn_glPushClientAttrib {};
}
inline void glDrawArrays(GLenum mode, GLint first, GLsizei count) { return HLFGL::Functions::s_fn_glDrawArrays(mode, first, count); }
inline void glDrawElements(GLenum mode, GLsizei count, GLenum type, const void * indices) { return HLFGL::Functions::s_fn_glDrawElements(mode, count, type, indices); }
inline void glGetPointerv(GLenum pname, void ** params) { return HLFGL::Functions::s_fn_glGetPointerv(pname, params); }
inline void glPolygonOffset(GLfloat factor, GLfloat units) { return HLFGL::Functions::s_fn_glPolygonOffset(factor, units); }
inline void glCopyTexImage1D(GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLint border) { return HLFGL::Functions::s_fn_glCopyTexImage1D(target, level, internalformat, x, y, width, border); }
inline void glCopyTexImage2D(GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border) { return HLFGL::Functions::s_fn_glCopyTexImage2D(target, level, internalformat, x, y, width, height, border); }
inline void glCopyTexSubImage1D(GLenum target, GLint level, GLint xoffset, GLint x, GLint y, GLsizei width) { return HLFGL::Functions::s_fn_glCopyTexSubImage1D(target, level, xoffset, x, y, width); }
inline void glCopyTexSubImage2D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height) { return HLFGL::Functions::s_fn_glCopyTexSubImage2D(target, level, xoffset, yoffset, x, y, width, height); }
inline void glTexSubImage1D(GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLenum type, const void * pixels) { return HLFGL::Functions::s_fn_glTexSubImage1D(target, level, xoffset, width, format, type, pixels); }
inline void glTexSubImage2D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const void * pixels) { return HLFGL::Functions::s_fn_glTexSubImage2D(target, level, xoffset, yoffset, width, height, format, type, pixels); }
inline void glBindTexture(GLenum target, GLuint texture) { return HLFGL::Functions::s_fn_glBindTexture(target, texture); }
inline void glDeleteTextures(GLsizei n, const GLuint * textures) { return HLFGL::Functions::s_fn_glDeleteTextures(n, textures); }
inline void glGenTextures(GLsizei n, GLuint * textures) { return HLFGL::Functions::s_fn_glGenTextures(n, textures); }
inline GLboolean glIsTexture(GLuint texture) { return HLFGL::Functions::s_fn_glIsTexture(texture); }
inline void glArrayElement(GLint i) { return HLFGL::Functions::s_fn_glArrayElement(i); }
inline void glColorPointer(GLint size, GLenum type, GLsizei stride, const void * pointer) { return HLFGL::Functions::s_fn_glColorPointer(size, type, stride, pointer); }
inline void glDisableClientState(GLenum array) { return HLFGL::Functions::s_fn_glDisableClientState(array); }
inline void glEdgeFlagPointer(GLsizei stride, const void * pointer) { return HLFGL::Functions::s_fn_glEdgeFlagPointer(stride, pointer); }
inline void glEnableClientState(GLenum array) { return HLFGL::Functions::s_fn_glEnableClientState(array); }
inline void glIndexPointer(GLenum type, GLsizei stride, const void * pointer) { return HLFGL::Functions::s_fn_glIndexPointer(type, stride, pointer); }
inline void glInterleavedArrays(GLenum format, GLsizei stride, const void * pointer) { return HLFGL::Functions::s_fn_glInterleavedArrays(format, stride, pointer); }
inline void glNormalPointer(GLenum type, GLsizei stride, const void * pointer) { return HLFGL::Functions::s_fn_glNormalPointer(type, stride, pointer); }
inline void glTexCoordPointer(GLint size, GLenum type, GLsizei stride, const void * pointer) { return HLFGL::Functions::s_fn_glTexCoordPointer(size, type, stride, pointer); }
inline void glVertexPointer(GLint size, GLenum type, GLsizei stride, const void * pointer) { return HLFGL::Functions::s_fn_glVertexPointer(size, type, stride, pointer); }
inline GLboolean glAreTexturesResident(GLsizei n, const GLuint * textures, GLboolean * residences) { return HLFGL::Functions::s_fn_glAreTexturesResident(n, textures, residences); }
inline void glPrioritizeTextures(GLsizei n, const GLuint * textures, const GLfloat * priorities) { return HLFGL::Functions::s_fn_glPrioritizeTextures(n, textures, priorities); }
inline void glIndexub(GLubyte c) { return HLFGL::Functions::s_fn_glIndexub(c); }
inline void glIndexubv(const GLubyte * c) { return HLFGL::Functions::s_fn_glIndexubv(c); }
inline void glPopClientAttrib() { return HLFGL::Functions::s_fn_glPopClientAttrib(); }
inline void glPushClientAttrib(GLbitfield mask) { return HLFGL::Functions::s_fn_glPushClientAttrib(mask); }
#endif // GL_VERSION_1_1

// GL_VERSION_1_2
#ifndef GL_VERSION_1_2
#define GL_VERSION_1_2 1
#define GL_UNSIGNED_BYTE_3_3_2 0x8032
#define GL_UNSIGNED_SHORT_4_4_4_4 0x8033
#define GL_UNSIGNED_SHORT_5_5_5_1 0x8034
#define GL_UNSIGNED_INT_8_8_8_8 0x8035
#define GL_UNSIGNED_INT_10_10_10_2 0x8036
#define GL_TEXTURE_BINDING_3D 0x806A
#define GL_PACK_SKIP_IMAGES 0x806B
#define GL_PACK_IMAGE_HEIGHT 0x806C
#define GL_UNPACK_SKIP_IMAGES 0x806D
#define GL_UNPACK_IMAGE_HEIGHT 0x806E
#define GL_TEXTURE_3D 0x806F
#define GL_PROXY_TEXTURE_3D 0x8070
#define GL_TEXTURE_DEPTH 0x8071
#define GL_TEXTURE_WRAP_R 0x8072
#define GL_MAX_3D_TEXTURE_SIZE 0x8073
#define GL_UNSIGNED_BYTE_2_3_3_REV 0x8362
#define GL_UNSIGNED_SHORT_5_6_5 0x8363
#define GL_UNSIGNED_SHORT_5_6_5_REV 0x8364
#define GL_UNSIGNED_SHORT_4_4_4_4_REV 0x8365
#define GL_UNSIGNED_SHORT_1_5_5_5_REV 0x8366
#define GL_UNSIGNED_INT_8_8_8_8_REV 0x8367
#define GL_UNSIGNED_INT_2_10_10_10_REV 0x8368
#define GL_BGR 0x80E0
#define GL_BGRA 0x80E1
#define GL_MAX_ELEMENTS_VERTICES 0x80E8
#define GL_MAX_ELEMENTS_INDICES 0x80E9
#define GL_CLAMP_TO_EDGE 0x812F
#define GL_TEXTURE_MIN_LOD 0x813A
#define GL_TEXTURE_MAX_LOD 0x813B
#define GL_TEXTURE_BASE_LEVEL 0x813C
#define GL_TEXTURE_MAX_LEVEL 0x813D
#define GL_SMOOTH_POINT_SIZE_RANGE 0x0B12
#define GL_SMOOTH_POINT_SIZE_GRANULARITY 0x0B13
#define GL_SMOOTH_LINE_WIDTH_RANGE 0x0B22
#define GL_SMOOTH_LINE_WIDTH_GRANULARITY 0x0B23
#define GL_ALIASED_LINE_WIDTH_RANGE 0x846E
#define GL_RESCALE_NORMAL 0x803A
#define GL_LIGHT_MODEL_COLOR_CONTROL 0x81F8
#define GL_SINGLE_COLOR 0x81F9
#define GL_SEPARATE_SPECULAR_COLOR 0x81FA
#define GL_ALIASED_POINT_SIZE_RANGE 0x846D
namespace HLFGL::Functions {
	typedef void(GLAPIENTRY *Fn_glDrawRangeElements)(GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const void * indices);
	inline Fn_glDrawRangeElements s_fn_glDrawRangeElements {};
	typedef void(GLAPIENTRY *Fn_glTexImage3D)(GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum type, const void * pixels);
	inline Fn_glTexImage3D s_fn_glTexImage3D {};
	typedef void(GLAPIENTRY *Fn_glTexSubImage3D)(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const void * pixels);
	inline Fn_glTexSubImage3D s_fn_glTexSubImage3D {};
	typedef void(GLAPIENTRY *Fn_glCopyTexSubImage3D)(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height);
	inline Fn_glCopyTexSubImage3D s_fn_glCopyTexSubImage3D {};
}
inline void glDrawRangeElements(GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const void * indices) { return HLFGL::Functions::s_fn_glDrawRangeElements(mode, start, end, count, type, indices); }
inline void glTexImage3D(GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum type, const void * pixels) { return HLFGL::Functions::s_fn_glTexImage3D(target, level, internalformat, width, height, depth, border, format, type, pixels); }
inline void glTexSubImage3D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const void * pixels) { return HLFGL::Functions::s_fn_glTexSubImage3D(target, level, xoffset, yoffset, zoffset, width, height, depth, format, type, pixels); }
inline void glCopyTexSubImage3D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height) { return HLFGL::Functions::s_fn_glCopyTexSubImage3D(target, level, xoffset, yoffset, zoffset, x, y, width, height); }
#endif // GL_VERSION_1_2

// GL_VERSION_1_3
#ifndef GL_VERSION_1_3
#define GL_VERSION_1_3 1
#define GL_TEXTURE0 0x84C0
#define GL_TEXTURE1 0x84C1
#define GL_TEXTURE2 0x84C2
#define GL_TEXTURE3 0x84C3
#define GL_TEXTURE4 0x84C4
#define GL_TEXTURE5 0x84C5
#define GL_TEXTURE6 0x84C6
#define GL_TEXTURE7 0x84C7
#define GL_TEXTURE8 0x84C8
#define GL_TEXTURE9 0x84C9
#define GL_TEXTURE10 0x84CA
#define GL_TEXTURE11 0x84CB
#define GL_TEXTURE12 0x84CC
#define GL_TEXTURE13 0x84CD
#define GL_TEXTURE14 0x84CE
#define GL_TEXTURE15 0x84CF
#define GL_TEXTURE16 0x84D0
#define GL_TEXTURE17 0x84D1
#define GL_TEXTURE18 0x84D2
#define GL_TEXTURE19 0x84D3
#define GL_TEXTURE20 0x84D4
#define GL_TEXTURE21 0x84D5
#define GL_TEXTURE22 0x84D6
#define GL_TEXTURE23 0x84D7
#define GL_TEXTURE24 0x84D8
#define GL_TEXTURE25 0x84D9
#define GL_TEXTURE26 0x84DA
#define GL_TEXTURE27 0x84DB
#define GL_TEXTURE28 0x84DC
#define GL_TEXTURE29 0x84DD
#define GL_TEXTURE30 0x84DE
#define GL_TEXTURE31 0x84DF
#define GL_ACTIVE_TEXTURE 0x84E0
#define GL_MULTISAMPLE 0x809D
#define GL_SAMPLE_ALPHA_TO_COVERAGE 0x809E
#define GL_SAMPLE_ALPHA_TO_ONE 0x809F
#define GL_SAMPLE_COVERAGE 0x80A0
#define GL_SAMPLE_BUFFERS 0x80A8
#define GL_SAMPLES 0x80A9
#define GL_SAMPLE_COVERAGE_VALUE 0x80AA
#define GL_SAMPLE_COVERAGE_INVERT 0x80AB
#define GL_TEXTURE_CUBE_MAP 0x8513
#define GL_TEXTURE_BINDING_CUBE_MAP 0x8514
#define GL_TEXTURE_CUBE_MAP_POSITIVE_X 0x8515
#define GL_TEXTURE_CUBE_MAP_NEGATIVE_X 0x8516
#define GL_TEXTURE_CUBE_MAP_POSITIVE_Y 0x8517
#define GL_TEXTURE_CUBE_MAP_NEGATIVE_Y 0x8518
#define GL_TEXTURE_CUBE_MAP_POSITIVE_Z 0x8519
#define GL_TEXTURE_CUBE_MAP_NEGATIVE_Z 0x851A
#define GL_PROXY_TEXTURE_CUBE_MAP 0x851B
#define GL_MAX_CUBE_MAP_TEXTURE_SIZE 0x851C
#define GL_COMPRESSED_RGB 0x84ED
#define GL_COMPRESSED_RGBA 0x84EE
#define GL_TEXTURE_COMPRESSION_HINT 0x84EF
#define GL_TEXTURE_COMPRESSED_IMAGE_SIZE 0x86A0
#define GL_TEXTURE_COMPRESSED 0x86A1
#define GL_NUM_COMPRESSED_TEXTURE_FORMATS 0x86A2
#define GL_COMPRESSED_TEXTURE_FORMATS 0x86A3
#define GL_CLAMP_TO_BORDER 0x812D
#define GL_CLIENT_ACTIVE_TEXTURE 0x84E1
#define GL_MAX_TEXTURE_UNITS 0x84E2
#define GL_TRANSPOSE_MODELVIEW_MATRIX 0x84E3
#define GL_TRANSPOSE_PROJECTION_MATRIX 0x84E4
#define GL_TRANSPOSE_TEXTURE_MATRIX 0x84E5
#define GL_TRANSPOSE_COLOR_MATRIX 0x84E6
#define GL_MULTISAMPLE_BIT 0x20000000
#define GL_NORMAL_MAP 0x8511
#define GL_REFLECTION_MAP 0x8512
#define GL_COMPRESSED_ALPHA 0x84E9
#define GL_COMPRESSED_LUMINANCE 0x84EA
#define GL_COMPRESSED_LUMINANCE_ALPHA 0x84EB
#define GL_COMPRESSED_INTENSITY 0x84EC
#define GL_COMBINE 0x8570
#define GL_COMBINE_RGB 0x8571
#define GL_COMBINE_ALPHA 0x8572
#define GL_SOURCE0_RGB 0x8580
#define GL_SOURCE1_RGB 0x8581
#define GL_SOURCE2_RGB 0x8582
#define GL_SOURCE0_ALPHA 0x8588
#define GL_SOURCE1_ALPHA 0x8589
#define GL_SOURCE2_ALPHA 0x858A
#define GL_OPERAND0_RGB 0x8590
#define GL_OPERAND1_RGB 0x8591
#define GL_OPERAND2_RGB 0x8592
#define GL_OPERAND0_ALPHA 0x8598
#define GL_OPERAND1_ALPHA 0x8599
#define GL_OPERAND2_ALPHA 0x859A
#define GL_RGB_SCALE 0x8573
#define GL_ADD_SIGNED 0x8574
#define GL_INTERPOLATE 0x8575
#define GL_SUBTRACT 0x84E7
#define GL_CONSTANT 0x8576
#define GL_PRIMARY_COLOR 0x8577
#define GL_PREVIOUS 0x8578
#define GL_DOT3_RGB 0x86AE
#define GL_DOT3_RGBA 0x86AF
namespace HLFGL::Functions {
	typedef void(GLAPIENTRY *Fn_glActiveTexture)(GLenum texture);
	inline Fn_glActiveTexture s_fn_glActiveTexture {};
	typedef void(GLAPIENTRY *Fn_glSampleCoverage)(GLfloat value, GLboolean invert);
	inline Fn_glSampleCoverage s_fn_glSampleCoverage {};
	typedef void(GLAPIENTRY *Fn_glCompressedTexImage3D)(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLsizei imageSize, const void * data);
	inline Fn_glCompressedTexImage3D s_fn_glCompressedTexImage3D {};
	typedef void(GLAPIENTRY *Fn_glCompressedTexImage2D)(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const void * data);
	inline Fn_glCompressedTexImage2D s_fn_glCompressedTexImage2D {};
	typedef void(GLAPIENTRY *Fn_glCompressedTexImage1D)(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLint border, GLsizei imageSize, const void * data);
	inline Fn_glCompressedTexImage1D s_fn_glCompressedTexImage1D {};
	typedef void(GLAPIENTRY *Fn_glCompressedTexSubImage3D)(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const void * data);
	inline Fn_glCompressedTexSubImage3D s_fn_glCompressedTexSubImage3D {};
	typedef void(GLAPIENTRY *Fn_glCompressedTexSubImage2D)(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const void * data);
	inline Fn_glCompressedTexSubImage2D s_fn_glCompressedTexSubImage2D {};
	typedef void(GLAPIENTRY *Fn_glCompressedTexSubImage1D)(GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLsizei imageSize, const void * data);
	inline Fn_glCompressedTexSubImage1D s_fn_glCompressedTexSubImage1D {};
	typedef void(GLAPIENTRY *Fn_glGetCompressedTexImage)(GLenum target, GLint level, void * img);
	inline Fn_glGetCompressedTexImage s_fn_glGetCompressedTexImage {};
	typedef void(GLAPIENTRY *Fn_glClientActiveTexture)(GLenum texture);
	inline Fn_glClientActiveTexture s_fn_glClientActiveTexture {};
	typedef void(GLAPIENTRY *Fn_glMultiTexCoord1d)(GLenum target, GLdouble s);
	inline Fn_glMultiTexCoord1d s_fn_glMultiTexCoord1d {};
	typedef void(GLAPIENTRY *Fn_glMultiTexCoord1dv)(GLenum target, const GLdouble * v);
	inline Fn_glMultiTexCoord1dv s_fn_glMultiTexCoord1dv {};
	typedef void(GLAPIENTRY *Fn_glMultiTexCoord1f)(GLenum target, GLfloat s);
	inline Fn_glMultiTexCoord1f s_fn_glMultiTexCoord1f {};
	typedef void(GLAPIENTRY *Fn_glMultiTexCoord1fv)(GLenum target, const GLfloat * v);
	inline Fn_glMultiTexCoord1fv s_fn_glMultiTexCoord1fv {};
	typedef void(GLAPIENTRY *Fn_glMultiTexCoord1i)(GLenum target, GLint s);
	inline Fn_glMultiTexCoord1i s_fn_glMultiTexCoord1i {};
	typedef void(GLAPIENTRY *Fn_glMultiTexCoord1iv)(GLenum target, const GLint * v);
	inline Fn_glMultiTexCoord1iv s_fn_glMultiTexCoord1iv {};
	typedef void(GLAPIENTRY *Fn_glMultiTexCoord1s)(GLenum target, GLshort s);
	inline Fn_glMultiTexCoord1s s_fn_glMultiTexCoord1s {};
	typedef void(GLAPIENTRY *Fn_glMultiTexCoord1sv)(GLenum target, const GLshort * v);
	inline Fn_glMultiTexCoord1sv s_fn_glMultiTexCoord1sv {};
	typedef void(GLAPIENTRY *Fn_glMultiTexCoord2d)(GLenum target, GLdouble s, GLdouble t);
	inline Fn_glMultiTexCoord2d s_fn_glMultiTexCoord2d {};
	typedef void(GLAPIENTRY *Fn_glMultiTexCoord2dv)(GLenum target, const GLdouble * v);
	inline Fn_glMultiTexCoord2dv s_fn_glMultiTexCoord2dv {};
	typedef void(GLAPIENTRY *Fn_glMultiTexCoord2f)(GLenum target, GLfloat s, GLfloat t);
	inline Fn_glMultiTexCoord2f s_fn_glMultiTexCoord2f {};
	typedef void(GLAPIENTRY *Fn_glMultiTexCoord2fv)(GLenum target, const GLfloat * v);
	inline Fn_glMultiTexCoord2fv s_fn_glMultiTexCoord2fv {};
	typedef void(GLAPIENTRY *Fn_glMultiTexCoord2i)(GLenum target, GLint s, GLint t);
	inline Fn_glMultiTexCoord2i s_fn_glMultiTexCoord2i {};
	typedef void(GLAPIENTRY *Fn_glMultiTexCoord2iv)(GLenum target, const GLint * v);
	inline Fn_glMultiTexCoord2iv s_fn_glMultiTexCoord2iv {};
	typedef void(GLAPIENTRY *Fn_glMultiTexCoord2s)(GLenum target, GLshort s, GLshort t);
	inline Fn_glMultiTexCoord2s s_fn_glMultiTexCoord2s {};
	typedef void(GLAPIENTRY *Fn_glMultiTexCoord2sv)(GLenum target, const GLshort * v);
	inline Fn_glMultiTexCoord2sv s_fn_glMultiTexCoord2sv {};
	typedef void(GLAPIENTRY *Fn_glMultiTexCoord3d)(GLenum target, GLdouble s, GLdouble t, GLdouble r);
	inline Fn_glMultiTexCoord3d s_fn_glMultiTexCoord3d {};
	typedef void(GLAPIENTRY *Fn_glMultiTexCoord3dv)(GLenum target, const GLdouble * v);
	inline Fn_glMultiTexCoord3dv s_fn_glMultiTexCoord3dv {};
	typedef void(GLAPIENTRY *Fn_glMultiTexCoord3f)(GLenum target, GLfloat s, GLfloat t, GLfloat r);
	inline Fn_glMultiTexCoord3f s_fn_glMultiTexCoord3f {};
	typedef void(GLAPIENTRY *Fn_glMultiTexCoord3fv)(GLenum target, const GLfloat * v);
	inline Fn_glMultiTexCoord3fv s_fn_glMultiTexCoord3fv {};
	typedef void(GLAPIENTRY *Fn_glMultiTexCoord3i)(GLenum target, GLint s, GLint t, GLint r);
	inline Fn_glMultiTexCoord3i s_fn_glMultiTexCoord3i {};
	typedef void(GLAPIENTRY *Fn_glMultiTexCoord3iv)(GLenum target, const GLint * v);
	inline Fn_glMultiTexCoord3iv s_fn_glMultiTexCoord3iv {};
	typedef void(GLAPIENTRY *Fn_glMultiTexCoord3s)(GLenum target, GLshort s, GLshort t, GLshort r);
	inline Fn_glMultiTexCoord3s s_fn_glMultiTexCoord3s {};
	typedef void(GLAPIENTRY *Fn_glMultiTexCoord3sv)(GLenum target, const GLshort * v);
	inline Fn_glMultiTexCoord3sv s_fn_glMultiTexCoord3sv {};
	typedef void(GLAPIENTRY *Fn_glMultiTexCoord4d)(GLenum target, GLdouble s, GLdouble t, GLdouble r, GLdouble q);
	inline Fn_glMultiTexCoord4d s_fn_glMultiTexCoord4d {};
	typedef void(GLAPIENTRY *Fn_glMultiTexCoord4dv)(GLenum target, const GLdouble * v);
	inline Fn_glMultiTexCoord4dv s_fn_glMultiTexCoord4dv {};
	typedef void(GLAPIENTRY *Fn_glMultiTexCoord4f)(GLenum target, GLfloat s, GLfloat t, GLfloat r, GLfloat q);
	inline Fn_glMultiTexCoord4f s_fn_glMultiTexCoord4f {};
	typedef void(GLAPIENTRY *Fn_glMultiTexCoord4fv)(GLenum target, const GLfloat * v);
	inline Fn_glMultiTexCoord4fv s_fn_glMultiTexCoord4fv {};
	typedef void(GLAPIENTRY *Fn_glMultiTexCoord4i)(GLenum target, GLint s, GLint t, GLint r, GLint q);
	inline Fn_glMultiTexCoord4i s_fn_glMultiTexCoord4i {};
	typedef void(GLAPIENTRY *Fn_glMultiTexCoord4iv)(GLenum target, const GLint * v);
	inline Fn_glMultiTexCoord4iv s_fn_glMultiTexCoord4iv {};
	typedef void(GLAPIENTRY *Fn_glMultiTexCoord4s)(GLenum target, GLshort s, GLshort t, GLshort r, GLshort q);
	inline Fn_glMultiTexCoord4s s_fn_glMultiTexCoord4s {};
	typedef void(GLAPIENTRY *Fn_glMultiTexCoord4sv)(GLenum target, const GLshort * v);
	inline Fn_glMultiTexCoord4sv s_fn_glMultiTexCoord4sv {};
	typedef void(GLAPIENTRY *Fn_glLoadTransposeMatrixf)(const GLfloat * m);
	inline Fn_glLoadTransposeMatrixf s_fn_glLoadTransposeMatrixf {};
	typedef void(GLAPIENTRY *Fn_glLoadTransposeMatrixd)(const GLdouble * m);
	inline Fn_glLoadTransposeMatrixd s_fn_glLoadTransposeMatrixd {};
	typedef void(GLAPIENTRY *Fn_glMultTransposeMatrixf)(const GLfloat * m);
	inline Fn_glMultTransposeMatrixf s_fn_glMultTransposeMatrixf {};
	typedef void(GLAPIENTRY *Fn_glMultTransposeMatrixd)(const GLdouble * m);
	inline Fn_glMultTransposeMatrixd s_fn_glMultTransposeMatrixd {};
}
inline void glActiveTexture(GLenum texture) { return HLFGL::Functions::s_fn_glActiveTexture(texture); }
inline void glSampleCoverage(GLfloat value, GLboolean invert) { return HLFGL::Functions::s_fn_glSampleCoverage(value, invert); }
inline void glCompressedTexImage3D(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLsizei imageSize, const void * data) { return HLFGL::Functions::s_fn_glCompressedTexImage3D(target, level, internalformat, width, height, depth, border, imageSize, data); }
inline void glCompressedTexImage2D(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const void * data) { return HLFGL::Functions::s_fn_glCompressedTexImage2D(target, level, internalformat, width, height, border, imageSize, data); }
inline void glCompressedTexImage1D(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLint border, GLsizei imageSize, const void * data) { return HLFGL::Functions::s_fn_glCompressedTexImage1D(target, level, internalformat, width, border, imageSize, data); }
inline void glCompressedTexSubImage3D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const void * data) { return HLFGL::Functions::s_fn_glCompressedTexSubImage3D(target, level, xoffset, yoffset, zoffset, width, height, depth, format, imageSize, data); }
inline void glCompressedTexSubImage2D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const void * data) { return HLFGL::Functions::s_fn_glCompressedTexSubImage2D(target, level, xoffset, yoffset, width, height, format, imageSize, data); }
inline void glCompressedTexSubImage1D(GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLsizei imageSize, const void * data) { return HLFGL::Functions::s_fn_glCompressedTexSubImage1D(target, level, xoffset, width, format, imageSize, data); }
inline void glGetCompressedTexImage(GLenum target, GLint level, void * img) { return HLFGL::Functions::s_fn_glGetCompressedTexImage(target, level, img); }
inline void glClientActiveTexture(GLenum texture) { return HLFGL::Functions::s_fn_glClientActiveTexture(texture); }
inline void glMultiTexCoord1d(GLenum target, GLdouble s) { return HLFGL::Functions::s_fn_glMultiTexCoord1d(target, s); }
inline void glMultiTexCoord1dv(GLenum target, const GLdouble * v) { return HLFGL::Functions::s_fn_glMultiTexCoord1dv(target, v); }
inline void glMultiTexCoord1f(GLenum target, GLfloat s) { return HLFGL::Functions::s_fn_glMultiTexCoord1f(target, s); }
inline void glMultiTexCoord1fv(GLenum target, const GLfloat * v) { return HLFGL::Functions::s_fn_glMultiTexCoord1fv(target, v); }
inline void glMultiTexCoord1i(GLenum target, GLint s) { return HLFGL::Functions::s_fn_glMultiTexCoord1i(target, s); }
inline void glMultiTexCoord1iv(GLenum target, const GLint * v) { return HLFGL::Functions::s_fn_glMultiTexCoord1iv(target, v); }
inline void glMultiTexCoord1s(GLenum target, GLshort s) { return HLFGL::Functions::s_fn_glMultiTexCoord1s(target, s); }
inline void glMultiTexCoord1sv(GLenum target, const GLshort * v) { return HLFGL::Functions::s_fn_glMultiTexCoord1sv(target, v); }
inline void glMultiTexCoord2d(GLenum target, GLdouble s, GLdouble t) { return HLFGL::Functions::s_fn_glMultiTexCoord2d(target, s, t); }
inline void glMultiTexCoord2dv(GLenum target, const GLdouble * v) { return HLFGL::Functions::s_fn_glMultiTexCoord2dv(target, v); }
inline void glMultiTexCoord2f(GLenum target, GLfloat s, GLfloat t) { return HLFGL::Functions::s_fn_glMultiTexCoord2f(target, s, t); }
inline void glMultiTexCoord2fv(GLenum target, const GLfloat * v) { return HLFGL::Functions::s_fn_glMultiTexCoord2fv(target, v); }
inline void glMultiTexCoord2i(GLenum target, GLint s, GLint t) { return HLFGL::Functions::s_fn_glMultiTexCoord2i(target, s, t); }
inline void glMultiTexCoord2iv(GLenum target, const GLint * v) { return HLFGL::Functions::s_fn_glMultiTexCoord2iv(target, v); }
inline void glMultiTexCoord2s(GLenum target, GLshort s, GLshort t) { return HLFGL::Functions::s_fn_glMultiTexCoord2s(target, s, t); }
inline void glMultiTexCoord2sv(GLenum target, const GLshort * v) { return HLFGL::Functions::s_fn_glMultiTexCoord2sv(target, v); }
inline void glMultiTexCoord3d(GLenum target, GLdouble s, GLdouble t, GLdouble r) { return HLFGL::Functions::s_fn_glMultiTexCoord3d(target, s, t, r); }
inline void glMultiTexCoord3dv(GLenum target, const GLdouble * v) { return HLFGL::Functions::s_fn_glMultiTexCoord3dv(target, v); }
inline void glMultiTexCoord3f(GLenum target, GLfloat s, GLfloat t, GLfloat r) { return HLFGL::Functions::s_fn_glMultiTexCoord3f(target, s, t, r); }
inline void glMultiTexCoord3fv(GLenum target, const GLfloat * v) { return HLFGL::Functions::s_fn_glMultiTexCoord3fv(target, v); }
inline void glMultiTexCoord3i(GLenum target, GLint s, GLint t, GLint r) { return HLFGL::Functions::s_fn_glMultiTexCoord3i(target, s, t, r); }
inline void glMultiTexCoord3iv(GLenum target, const GLint * v) { return HLFGL::Functions::s_fn_glMultiTexCoord3iv(target, v); }
inline void glMultiTexCoord3s(GLenum target, GLshort s, GLshort t, GLshort r) { return HLFGL::Functions::s_fn_glMultiTexCoord3s(target, s, t, r); }
inline void glMultiTexCoord3sv(GLenum target, const GLshort * v) { return HLFGL::Functions::s_fn_glMultiTexCoord3sv(target, v); }
inline void glMultiTexCoord4d(GLenum target, GLdouble s, GLdouble t, GLdouble r, GLdouble q) { return HLFGL::Functions::s_fn_glMultiTexCoord4d(target, s, t, r, q); }
inline void glMultiTexCoord4dv(GLenum target, const GLdouble * v) { return HLFGL::Functions::s_fn_glMultiTexCoord4dv(target, v); }
inline void glMultiTexCoord4f(GLenum target, GLfloat s, GLfloat t, GLfloat r, GLfloat q) { return HLFGL::Functions::s_fn_glMultiTexCoord4f(target, s, t, r, q); }
inline void glMultiTexCoord4fv(GLenum target, const GLfloat * v) { return HLFGL::Functions::s_fn_glMultiTexCoord4fv(target, v); }
inline void glMultiTexCoord4i(GLenum target, GLint s, GLint t, GLint r, GLint q) { return HLFGL::Functions::s_fn_glMultiTexCoord4i(target, s, t, r, q); }
inline void glMultiTexCoord4iv(GLenum target, const GLint * v) { return HLFGL::Functions::s_fn_glMultiTexCoord4iv(target, v); }
inline void glMultiTexCoord4s(GLenum target, GLshort s, GLshort t, GLshort r, GLshort q) { return HLFGL::Functions::s_fn_glMultiTexCoord4s(target, s, t, r, q); }
inline void glMultiTexCoord4sv(GLenum target, const GLshort * v) { return HLFGL::Functions::s_fn_glMultiTexCoord4sv(target, v); }
inline void glLoadTransposeMatrixf(const GLfloat * m) { return HLFGL::Functions::s_fn_glLoadTransposeMatrixf(m); }
inline void glLoadTransposeMatrixd(const GLdouble * m) { return HLFGL::Functions::s_fn_glLoadTransposeMatrixd(m); }
inline void glMultTransposeMatrixf(const GLfloat * m) { return HLFGL::Functions::s_fn_glMultTransposeMatrixf(m); }
inline void glMultTransposeMatrixd(const GLdouble * m) { return HLFGL::Functions::s_fn_glMultTransposeMatrixd(m); }
#endif // GL_VERSION_1_3

// GL_VERSION_1_4
#ifndef GL_VERSION_1_4
#define GL_VERSION_1_4 1
#define GL_BLEND_DST_RGB 0x80C8
#define GL_BLEND_SRC_RGB 0x80C9
#define GL_BLEND_DST_ALPHA 0x80CA
#define GL_BLEND_SRC_ALPHA 0x80CB
#define GL_POINT_FADE_THRESHOLD_SIZE 0x8128
#define GL_DEPTH_COMPONENT16 0x81A5
#define GL_DEPTH_COMPONENT24 0x81A6
#define GL_DEPTH_COMPONENT32 0x81A7
#define GL_MIRRORED_REPEAT 0x8370
#define GL_MAX_TEXTURE_LOD_BIAS 0x84FD
#define GL_TEXTURE_LOD_BIAS 0x8501
#define GL_INCR_WRAP 0x8507
#define GL_DECR_WRAP 0x8508
#define GL_TEXTURE_DEPTH_SIZE 0x884A
#define GL_TEXTURE_COMPARE_MODE 0x884C
#define GL_TEXTURE_COMPARE_FUNC 0x884D
#define GL_POINT_SIZE_MIN 0x8126
#define GL_POINT_SIZE_MAX 0x8127
#define GL_POINT_DISTANCE_ATTENUATION 0x8129
#define GL_GENERATE_MIPMAP 0x8191
#define GL_GENERATE_MIPMAP_HINT 0x8192
#define GL_FOG_COORDINATE_SOURCE 0x8450
#define GL_FOG_COORDINATE 0x8451
#define GL_FRAGMENT_DEPTH 0x8452
#define GL_CURRENT_FOG_COORDINATE 0x8453
#define GL_FOG_COORDINATE_ARRAY_TYPE 0x8454
#define GL_FOG_COORDINATE_ARRAY_STRIDE 0x8455
#define GL_FOG_COORDINATE_ARRAY_POINTER 0x8456
#define GL_FOG_COORDINATE_ARRAY 0x8457
#define GL_COLOR_SUM 0x8458
#define GL_CURRENT_SECONDARY_COLOR 0x8459
#define GL_SECONDARY_COLOR_ARRAY_SIZE 0x845A
#define GL_SECONDARY_COLOR_ARRAY_TYPE 0x845B
#define GL_SECONDARY_COLOR_ARRAY_STRIDE 0x845C
#define GL_SECONDARY_COLOR_ARRAY_POINTER 0x845D
#define GL_SECONDARY_COLOR_ARRAY 0x845E
#define GL_TEXTURE_FILTER_CONTROL 0x8500
#define GL_DEPTH_TEXTURE_MODE 0x884B
#define GL_COMPARE_R_TO_TEXTURE 0x884E
#define GL_BLEND_COLOR 0x8005
#define GL_BLEND_EQUATION 0x8009
#define GL_CONSTANT_COLOR 0x8001
#define GL_ONE_MINUS_CONSTANT_COLOR 0x8002
#define GL_CONSTANT_ALPHA 0x8003
#define GL_ONE_MINUS_CONSTANT_ALPHA 0x8004
#define GL_FUNC_ADD 0x8006
#define GL_FUNC_REVERSE_SUBTRACT 0x800B
#define GL_FUNC_SUBTRACT 0x800A
#define GL_MIN 0x8007
#define GL_MAX 0x8008
namespace HLFGL::Functions {
	typedef void(GLAPIENTRY *Fn_glBlendFuncSeparate)(GLenum sfactorRGB, GLenum dfactorRGB, GLenum sfactorAlpha, GLenum dfactorAlpha);
	inline Fn_glBlendFuncSeparate s_fn_glBlendFuncSeparate {};
	typedef void(GLAPIENTRY *Fn_glMultiDrawArrays)(GLenum mode, const GLint * first, const GLsizei * count, GLsizei drawcount);
	inline Fn_glMultiDrawArrays s_fn_glMultiDrawArrays {};
	typedef void(GLAPIENTRY *Fn_glMultiDrawElements)(GLenum mode, const GLsizei * count, GLenum type, const void *const* indices, GLsizei drawcount);
	inline Fn_glMultiDrawElements s_fn_glMultiDrawElements {};
	typedef void(GLAPIENTRY *Fn_glPointParameterf)(GLenum pname, GLfloat param);
	inline Fn_glPointParameterf s_fn_glPointParameterf {};
	typedef void(GLAPIENTRY *Fn_glPointParameterfv)(GLenum pname, const GLfloat * params);
	inline Fn_glPointParameterfv s_fn_glPointParameterfv {};
	typedef void(GLAPIENTRY *Fn_glPointParameteri)(GLenum pname, GLint param);
	inline Fn_glPointParameteri s_fn_glPointParameteri {};
	typedef void(GLAPIENTRY *Fn_glPointParameteriv)(GLenum pname, const GLint * params);
	inline Fn_glPointParameteriv s_fn_glPointParameteriv {};
	typedef void(GLAPIENTRY *Fn_glFogCoordf)(GLfloat coord);
	inline Fn_glFogCoordf s_fn_glFogCoordf {};
	typedef void(GLAPIENTRY *Fn_glFogCoordfv)(const GLfloat * coord);
	inline Fn_glFogCoordfv s_fn_glFogCoordfv {};
	typedef void(GLAPIENTRY *Fn_glFogCoordd)(GLdouble coord);
	inline Fn_glFogCoordd s_fn_glFogCoordd {};
	typedef void(GLAPIENTRY *Fn_glFogCoorddv)(const GLdouble * coord);
	inline Fn_glFogCoorddv s_fn_glFogCoorddv {};
	typedef void(GLAPIENTRY *Fn_glFogCoordPointer)(GLenum type, GLsizei stride, const void * pointer);
	inline Fn_glFogCoordPointer s_fn_glFogCoordPointer {};
	typedef void(GLAPIENTRY *Fn_glSecondaryColor3b)(GLbyte red, GLbyte green, GLbyte blue);
	inline Fn_glSecondaryColor3b s_fn_glSecondaryColor3b {};
	typedef void(GLAPIENTRY *Fn_glSecondaryColor3bv)(const GLbyte * v);
	inline Fn_glSecondaryColor3bv s_fn_glSecondaryColor3bv {};
	typedef void(GLAPIENTRY *Fn_glSecondaryColor3d)(GLdouble red, GLdouble green, GLdouble blue);
	inline Fn_glSecondaryColor3d s_fn_glSecondaryColor3d {};
	typedef void(GLAPIENTRY *Fn_glSecondaryColor3dv)(const GLdouble * v);
	inline Fn_glSecondaryColor3dv s_fn_glSecondaryColor3dv {};
	typedef void(GLAPIENTRY *Fn_glSecondaryColor3f)(GLfloat red, GLfloat green, GLfloat blue);
	inline Fn_glSecondaryColor3f s_fn_glSecondaryColor3f {};
	typedef void(GLAPIENTRY *Fn_glSecondaryColor3fv)(const GLfloat * v);
	inline Fn_glSecondaryColor3fv s_fn_glSecondaryColor3fv {};
	typedef void(GLAPIENTRY *Fn_glSecondaryColor3i)(GLint red, GLint green, GLint blue);
	inline Fn_glSecondaryColor3i s_fn_glSecondaryColor3i {};
	typedef void(GLAPIENTRY *Fn_glSecondaryColor3iv)(const GLint * v);
	inline Fn_glSecondaryColor3iv s_fn_glSecondaryColor3iv {};
	typedef void(GLAPIENTRY *Fn_glSecondaryColor3s)(GLshort red, GLshort green, GLshort blue);
	inline Fn_glSecondaryColor3s s_fn_glSecondaryColor3s {};
	typedef void(GLAPIENTRY *Fn_glSecondaryColor3sv)(const GLshort * v);
	inline Fn_glSecondaryColor3sv s_fn_glSecondaryColor3sv {};
	typedef void(GLAPIENTRY *Fn_glSecondaryColor3ub)(GLubyte red, GLubyte green, GLubyte blue);
	inline Fn_glSecondaryColor3ub s_fn_glSecondaryColor3ub {};
	typedef void(GLAPIENTRY *Fn_glSecondaryColor3ubv)(const GLubyte * v);
	inline Fn_glSecondaryColor3ubv s_fn_glSecondaryColor3ubv {};
	typedef void(GLAPIENTRY *Fn_glSecondaryColor3ui)(GLuint red, GLuint green, GLuint blue);
	inline Fn_glSecondaryColor3ui s_fn_glSecondaryColor3ui {};
	typedef void(GLAPIENTRY *Fn_glSecondaryColor3uiv)(const GLuint * v);
	inline Fn_glSecondaryColor3uiv s_fn_glSecondaryColor3uiv {};
	typedef void(GLAPIENTRY *Fn_glSecondaryColor3us)(GLushort red, GLushort green, GLushort blue);
	inline Fn_glSecondaryColor3us s_fn_glSecondaryColor3us {};
	typedef void(GLAPIENTRY *Fn_glSecondaryColor3usv)(const GLushort * v);
	inline Fn_glSecondaryColor3usv s_fn_glSecondaryColor3usv {};
	typedef void(GLAPIENTRY *Fn_glSecondaryColorPointer)(GLint size, GLenum type, GLsizei stride, const void * pointer);
	inline Fn_glSecondaryColorPointer s_fn_glSecondaryColorPointer {};
	typedef void(GLAPIENTRY *Fn_glWindowPos2d)(GLdouble x, GLdouble y);
	inline Fn_glWindowPos2d s_fn_glWindowPos2d {};
	typedef void(GLAPIENTRY *Fn_glWindowPos2dv)(const GLdouble * v);
	inline Fn_glWindowPos2dv s_fn_glWindowPos2dv {};
	typedef void(GLAPIENTRY *Fn_glWindowPos2f)(GLfloat x, GLfloat y);
	inline Fn_glWindowPos2f s_fn_glWindowPos2f {};
	typedef void(GLAPIENTRY *Fn_glWindowPos2fv)(const GLfloat * v);
	inline Fn_glWindowPos2fv s_fn_glWindowPos2fv {};
	typedef void(GLAPIENTRY *Fn_glWindowPos2i)(GLint x, GLint y);
	inline Fn_glWindowPos2i s_fn_glWindowPos2i {};
	typedef void(GLAPIENTRY *Fn_glWindowPos2iv)(const GLint * v);
	inline Fn_glWindowPos2iv s_fn_glWindowPos2iv {};
	typedef void(GLAPIENTRY *Fn_glWindowPos2s)(GLshort x, GLshort y);
	inline Fn_glWindowPos2s s_fn_glWindowPos2s {};
	typedef void(GLAPIENTRY *Fn_glWindowPos2sv)(const GLshort * v);
	inline Fn_glWindowPos2sv s_fn_glWindowPos2sv {};
	typedef void(GLAPIENTRY *Fn_glWindowPos3d)(GLdouble x, GLdouble y, GLdouble z);
	inline Fn_glWindowPos3d s_fn_glWindowPos3d {};
	typedef void(GLAPIENTRY *Fn_glWindowPos3dv)(const GLdouble * v);
	inline Fn_glWindowPos3dv s_fn_glWindowPos3dv {};
	typedef void(GLAPIENTRY *Fn_glWindowPos3f)(GLfloat x, GLfloat y, GLfloat z);
	inline Fn_glWindowPos3f s_fn_glWindowPos3f {};
	typedef void(GLAPIENTRY *Fn_glWindowPos3fv)(const GLfloat * v);
	inline Fn_glWindowPos3fv s_fn_glWindowPos3fv {};
	typedef void(GLAPIENTRY *Fn_glWindowPos3i)(GLint x, GLint y, GLint z);
	inline Fn_glWindowPos3i s_fn_glWindowPos3i {};
	typedef void(GLAPIENTRY *Fn_glWindowPos3iv)(const GLint * v);
	inline Fn_glWindowPos3iv s_fn_glWindowPos3iv {};
	typedef void(GLAPIENTRY *Fn_glWindowPos3s)(GLshort x, GLshort y, GLshort z);
	inline Fn_glWindowPos3s s_fn_glWindowPos3s {};
	typedef void(GLAPIENTRY *Fn_glWindowPos3sv)(const GLshort * v);
	inline Fn_glWindowPos3sv s_fn_glWindowPos3sv {};
	typedef void(GLAPIENTRY *Fn_glBlendColor)(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha);
	inline Fn_glBlendColor s_fn_glBlendColor {};
	typedef void(GLAPIENTRY *Fn_glBlendEquation)(GLenum mode);
	inline Fn_glBlendEquation s_fn_glBlendEquation {};
}
inline void glBlendFuncSeparate(GLenum sfactorRGB, GLenum dfactorRGB, GLenum sfactorAlpha, GLenum dfactorAlpha) { return HLFGL::Functions::s_fn_glBlendFuncSeparate(sfactorRGB, dfactorRGB, sfactorAlpha, dfactorAlpha); }
inline void glMultiDrawArrays(GLenum mode, const GLint * first, const GLsizei * count, GLsizei drawcount) { return HLFGL::Functions::s_fn_glMultiDrawArrays(mode, first, count, drawcount); }
inline void glMultiDrawElements(GLenum mode, const GLsizei * count, GLenum type, const void *const* indices, GLsizei drawcount) { return HLFGL::Functions::s_fn_glMultiDrawElements(mode, count, type, indices, drawcount); }
inline void glPointParameterf(GLenum pname, GLfloat param) { return HLFGL::Functions::s_fn_glPointParameterf(pname, param); }
inline void glPointParameterfv(GLenum pname, const GLfloat * params) { return HLFGL::Functions::s_fn_glPointParameterfv(pname, params); }
inline void glPointParameteri(GLenum pname, GLint param) { return HLFGL::Functions::s_fn_glPointParameteri(pname, param); }
inline void glPointParameteriv(GLenum pname, const GLint * params) { return HLFGL::Functions::s_fn_glPointParameteriv(pname, params); }
inline void glFogCoordf(GLfloat coord) { return HLFGL::Functions::s_fn_glFogCoordf(coord); }
inline void glFogCoordfv(const GLfloat * coord) { return HLFGL::Functions::s_fn_glFogCoordfv(coord); }
inline void glFogCoordd(GLdouble coord) { return HLFGL::Functions::s_fn_glFogCoordd(coord); }
inline void glFogCoorddv(const GLdouble * coord) { return HLFGL::Functions::s_fn_glFogCoorddv(coord); }
inline void glFogCoordPointer(GLenum type, GLsizei stride, const void * pointer) { return HLFGL::Functions::s_fn_glFogCoordPointer(type, stride, pointer); }
inline void glSecondaryColor3b(GLbyte red, GLbyte green, GLbyte blue) { return HLFGL::Functions::s_fn_glSecondaryColor3b(red, green, blue); }
inline void glSecondaryColor3bv(const GLbyte * v) { return HLFGL::Functions::s_fn_glSecondaryColor3bv(v); }
inline void glSecondaryColor3d(GLdouble red, GLdouble green, GLdouble blue) { return HLFGL::Functions::s_fn_glSecondaryColor3d(red, green, blue); }
inline void glSecondaryColor3dv(const GLdouble * v) { return HLFGL::Functions::s_fn_glSecondaryColor3dv(v); }
inline void glSecondaryColor3f(GLfloat red, GLfloat green, GLfloat blue) { return HLFGL::Functions::s_fn_glSecondaryColor3f(red, green, blue); }
inline void glSecondaryColor3fv(const GLfloat * v) { return HLFGL::Functions::s_fn_glSecondaryColor3fv(v); }
inline void glSecondaryColor3i(GLint red, GLint green, GLint blue) { return HLFGL::Functions::s_fn_glSecondaryColor3i(red, green, blue); }
inline void glSecondaryColor3iv(const GLint * v) { return HLFGL::Functions::s_fn_glSecondaryColor3iv(v); }
inline void glSecondaryColor3s(GLshort red, GLshort green, GLshort blue) { return HLFGL::Functions::s_fn_glSecondaryColor3s(red, green, blue); }
inline void glSecondaryColor3sv(const GLshort * v) { return HLFGL::Functions::s_fn_glSecondaryColor3sv(v); }
inline void glSecondaryColor3ub(GLubyte red, GLubyte green, GLubyte blue) { return HLFGL::Functions::s_fn_glSecondaryColor3ub(red, green, blue); }
inline void glSecondaryColor3ubv(const GLubyte * v) { return HLFGL::Functions::s_fn_glSecondaryColor3ubv(v); }
inline void glSecondaryColor3ui(GLuint red, GLuint green, GLuint blue) { return HLFGL::Functions::s_fn_glSecondaryColor3ui(red, green, blue); }
inline void glSecondaryColor3uiv(const GLuint * v) { return HLFGL::Functions::s_fn_glSecondaryColor3uiv(v); }
inline void glSecondaryColor3us(GLushort red, GLushort green, GLushort blue) { return HLFGL::Functions::s_fn_glSecondaryColor3us(red, green, blue); }
inline void glSecondaryColor3usv(const GLushort * v) { return HLFGL::Functions::s_fn_glSecondaryColor3usv(v); }
inline void glSecondaryColorPointer(GLint size, GLenum type, GLsizei stride, const void * pointer) { return HLFGL::Functions::s_fn_glSecondaryColorPointer(size, type, stride, pointer); }
inline void glWindowPos2d(GLdouble x, GLdouble y) { return HLFGL::Functions::s_fn_glWindowPos2d(x, y); }
inline void glWindowPos2dv(const GLdouble * v) { return HLFGL::Functions::s_fn_glWindowPos2dv(v); }
inline void glWindowPos2f(GLfloat x, GLfloat y) { return HLFGL::Functions::s_fn_glWindowPos2f(x, y); }
inline void glWindowPos2fv(const GLfloat * v) { return HLFGL::Functions::s_fn_glWindowPos2fv(v); }
inline void glWindowPos2i(GLint x, GLint y) { return HLFGL::Functions::s_fn_glWindowPos2i(x, y); }
inline void glWindowPos2iv(const GLint * v) { return HLFGL::Functions::s_fn_glWindowPos2iv(v); }
inline void glWindowPos2s(GLshort x, GLshort y) { return HLFGL::Functions::s_fn_glWindowPos2s(x, y); }
inline void glWindowPos2sv(const GLshort * v) { return HLFGL::Functions::s_fn_glWindowPos2sv(v); }
inline void glWindowPos3d(GLdouble x, GLdouble y, GLdouble z) { return HLFGL::Functions::s_fn_glWindowPos3d(x, y, z); }
inline void glWindowPos3dv(const GLdouble * v) { return HLFGL::Functions::s_fn_glWindowPos3dv(v); }
inline void glWindowPos3f(GLfloat x, GLfloat y, GLfloat z) { return HLFGL::Functions::s_fn_glWindowPos3f(x, y, z); }
inline void glWindowPos3fv(const GLfloat * v) { return HLFGL::Functions::s_fn_glWindowPos3fv(v); }
inline void glWindowPos3i(GLint x, GLint y, GLint z) { return HLFGL::Functions::s_fn_glWindowPos3i(x, y, z); }
inline void glWindowPos3iv(const GLint * v) { return HLFGL::Functions::s_fn_glWindowPos3iv(v); }
inline void glWindowPos3s(GLshort x, GLshort y, GLshort z) { return HLFGL::Functions::s_fn_glWindowPos3s(x, y, z); }
inline void glWindowPos3sv(const GLshort * v) { return HLFGL::Functions::s_fn_glWindowPos3sv(v); }
inline void glBlendColor(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha) { return HLFGL::Functions::s_fn_glBlendColor(red, green, blue, alpha); }
inline void glBlendEquation(GLenum mode) { return HLFGL::Functions::s_fn_glBlendEquation(mode); }
#endif // GL_VERSION_1_4

// GL_VERSION_1_5
#ifndef GL_VERSION_1_5
#define GL_VERSION_1_5 1
typedef khronos_ssize_t GLsizeiptr;
typedef khronos_intptr_t GLintptr;
#define GL_BUFFER_SIZE 0x8764
#define GL_BUFFER_USAGE 0x8765
#define GL_QUERY_COUNTER_BITS 0x8864
#define GL_CURRENT_QUERY 0x8865
#define GL_QUERY_RESULT 0x8866
#define GL_QUERY_RESULT_AVAILABLE 0x8867
#define GL_ARRAY_BUFFER 0x8892
#define GL_ELEMENT_ARRAY_BUFFER 0x8893
#define GL_ARRAY_BUFFER_BINDING 0x8894
#define GL_ELEMENT_ARRAY_BUFFER_BINDING 0x8895
#define GL_VERTEX_ATTRIB_ARRAY_BUFFER_BINDING 0x889F
#define GL_READ_ONLY 0x88B8
#define GL_WRITE_ONLY 0x88B9
#define GL_READ_WRITE 0x88BA
#define GL_BUFFER_ACCESS 0x88BB
#define GL_BUFFER_MAPPED 0x88BC
#define GL_BUFFER_MAP_POINTER 0x88BD
#define GL_STREAM_DRAW 0x88E0
#define GL_STREAM_READ 0x88E1
#define GL_STREAM_COPY 0x88E2
#define GL_STATIC_DRAW 0x88E4
#define GL_STATIC_READ 0x88E5
#define GL_STATIC_COPY 0x88E6
#define GL_DYNAMIC_DRAW 0x88E8
#define GL_DYNAMIC_READ 0x88E9
#define GL_DYNAMIC_COPY 0x88EA
#define GL_SAMPLES_PASSED 0x8914
#define GL_SRC1_ALPHA 0x8589
#define GL_VERTEX_ARRAY_BUFFER_BINDING 0x8896
#define GL_NORMAL_ARRAY_BUFFER_BINDING 0x8897
#define GL_COLOR_ARRAY_BUFFER_BINDING 0x8898
#define GL_INDEX_ARRAY_BUFFER_BINDING 0x8899
#define GL_TEXTURE_COORD_ARRAY_BUFFER_BINDING 0x889A
#define GL_EDGE_FLAG_ARRAY_BUFFER_BINDING 0x889B
#define GL_SECONDARY_COLOR_ARRAY_BUFFER_BINDING 0x889C
#define GL_FOG_COORDINATE_ARRAY_BUFFER_BINDING 0x889D
#define GL_WEIGHT_ARRAY_BUFFER_BINDING 0x889E
#define GL_FOG_COORD_SRC 0x8450
#define GL_FOG_COORD 0x8451
#define GL_CURRENT_FOG_COORD 0x8453
#define GL_FOG_COORD_ARRAY_TYPE 0x8454
#define GL_FOG_COORD_ARRAY_STRIDE 0x8455
#define GL_FOG_COORD_ARRAY_POINTER 0x8456
#define GL_FOG_COORD_ARRAY 0x8457
#define GL_FOG_COORD_ARRAY_BUFFER_BINDING 0x889D
#define GL_SRC0_RGB 0x8580
#define GL_SRC1_RGB 0x8581
#define GL_SRC2_RGB 0x8582
#define GL_SRC0_ALPHA 0x8588
#define GL_SRC2_ALPHA 0x858A
namespace HLFGL::Functions {
	typedef void(GLAPIENTRY *Fn_glGenQueries)(GLsizei n, GLuint * ids);
	inline Fn_glGenQueries s_fn_glGenQueries {};
	typedef void(GLAPIENTRY *Fn_glDeleteQueries)(GLsizei n, const GLuint * ids);
	inline Fn_glDeleteQueries s_fn_glDeleteQueries {};
	typedef GLboolean(GLAPIENTRY *Fn_glIsQuery)(GLuint id);
	inline Fn_glIsQuery s_fn_glIsQuery {};
	typedef void(GLAPIENTRY *Fn_glBeginQuery)(GLenum target, GLuint id);
	inline Fn_glBeginQuery s_fn_glBeginQuery {};
	typedef void(GLAPIENTRY *Fn_glEndQuery)(GLenum target);
	inline Fn_glEndQuery s_fn_glEndQuery {};
	typedef void(GLAPIENTRY *Fn_glGetQueryiv)(GLenum target, GLenum pname, GLint * params);
	inline Fn_glGetQueryiv s_fn_glGetQueryiv {};
	typedef void(GLAPIENTRY *Fn_glGetQueryObjectiv)(GLuint id, GLenum pname, GLint * params);
	inline Fn_glGetQueryObjectiv s_fn_glGetQueryObjectiv {};
	typedef void(GLAPIENTRY *Fn_glGetQueryObjectuiv)(GLuint id, GLenum pname, GLuint * params);
	inline Fn_glGetQueryObjectuiv s_fn_glGetQueryObjectuiv {};
	typedef void(GLAPIENTRY *Fn_glBindBuffer)(GLenum target, GLuint buffer);
	inline Fn_glBindBuffer s_fn_glBindBuffer {};
	typedef void(GLAPIENTRY *Fn_glDeleteBuffers)(GLsizei n, const GLuint * buffers);
	inline Fn_glDeleteBuffers s_fn_glDeleteBuffers {};
	typedef void(GLAPIENTRY *Fn_glGenBuffers)(GLsizei n, GLuint * buffers);
	inline Fn_glGenBuffers s_fn_glGenBuffers {};
	typedef GLboolean(GLAPIENTRY *Fn_glIsBuffer)(GLuint buffer);
	inline Fn_glIsBuffer s_fn_glIsBuffer {};
	typedef void(GLAPIENTRY *Fn_glBufferData)(GLenum target, GLsizeiptr size, const void * data, GLenum usage);
	inline Fn_glBufferData s_fn_glBufferData {};
	typedef void(GLAPIENTRY *Fn_glBufferSubData)(GLenum target, GLintptr offset, GLsizeiptr size, const void * data);
	inline Fn_glBufferSubData s_fn_glBufferSubData {};
	typedef void(GLAPIENTRY *Fn_glGetBufferSubData)(GLenum target, GLintptr offset, GLsizeiptr size, void * data);
	inline Fn_glGetBufferSubData s_fn_glGetBufferSubData {};
	typedef void *(GLAPIENTRY *Fn_glMapBuffer)(GLenum target, GLenum access);
	inline Fn_glMapBuffer s_fn_glMapBuffer {};
	typedef GLboolean(GLAPIENTRY *Fn_glUnmapBuffer)(GLenum target);
	inline Fn_glUnmapBuffer s_fn_glUnmapBuffer {};
	typedef void(GLAPIENTRY *Fn_glGetBufferParameteriv)(GLenum target, GLenum pname, GLint * params);
	inline Fn_glGetBufferParameteriv s_fn_glGetBufferParameteriv {};
	typedef void(GLAPIENTRY *Fn_glGetBufferPointerv)(GLenum target, GLenum pname, void ** params);
	inline Fn_glGetBufferPointerv s_fn_glGetBufferPointerv {};
}
inline void glGenQueries(GLsizei n, GLuint * ids) { return HLFGL::Functions::s_fn_glGenQueries(n, ids); }
inline void glDeleteQueries(GLsizei n, const GLuint * ids) { return HLFGL::Functions::s_fn_glDeleteQueries(n, ids); }
inline GLboolean glIsQuery(GLuint id) { return HLFGL::Functions::s_fn_glIsQuery(id); }
inline void glBeginQuery(GLenum target, GLuint id) { return HLFGL::Functions::s_fn_glBeginQuery(target, id); }
inline void glEndQuery(GLenum target) { return HLFGL::Functions::s_fn_glEndQuery(target); }
inline void glGetQueryiv(GLenum target, GLenum pname, GLint * params) { return HLFGL::Functions::s_fn_glGetQueryiv(target, pname, params); }
inline void glGetQueryObjectiv(GLuint id, GLenum pname, GLint * params) { return HLFGL::Functions::s_fn_glGetQueryObjectiv(id, pname, params); }
inline void glGetQueryObjectuiv(GLuint id, GLenum pname, GLuint * params) { return HLFGL::Functions::s_fn_glGetQueryObjectuiv(id, pname, params); }
inline void glBindBuffer(GLenum target, GLuint buffer) { return HLFGL::Functions::s_fn_glBindBuffer(target, buffer); }
inline void glDeleteBuffers(GLsizei n, const GLuint * buffers) { return HLFGL::Functions::s_fn_glDeleteBuffers(n, buffers); }
inline void glGenBuffers(GLsizei n, GLuint * buffers) { return HLFGL::Functions::s_fn_glGenBuffers(n, buffers); }
inline GLboolean glIsBuffer(GLuint buffer) { return HLFGL::Functions::s_fn_glIsBuffer(buffer); }
inline void glBufferData(GLenum target, GLsizeiptr size, const void * data, GLenum usage) { return HLFGL::Functions::s_fn_glBufferData(target, size, data, usage); }
inline void glBufferSubData(GLenum target, GLintptr offset, GLsizeiptr size, const void * data) { return HLFGL::Functions::s_fn_glBufferSubData(target, offset, size, data); }
inline void glGetBufferSubData(GLenum target, GLintptr offset, GLsizeiptr size, void * data) { return HLFGL::Functions::s_fn_glGetBufferSubData(target, offset, size, data); }
inline void * glMapBuffer(GLenum target, GLenum access) { return HLFGL::Functions::s_fn_glMapBuffer(target, access); }
inline GLboolean glUnmapBuffer(GLenum target) { return HLFGL::Functions::s_fn_glUnmapBuffer(target); }
inline void glGetBufferParameteriv(GLenum target, GLenum pname, GLint * params) { return HLFGL::Functions::s_fn_glGetBufferParameteriv(target, pname, params); }
inline void glGetBufferPointerv(GLenum target, GLenum pname, void ** params) { return HLFGL::Functions::s_fn_glGetBufferPointerv(target, pname, params); }
#endif // GL_VERSION_1_5

// GL_VERSION_2_0
#ifndef GL_VERSION_2_0
#define GL_VERSION_2_0 1
typedef char GLchar;
#define GL_BLEND_EQUATION_RGB 0x8009
#define GL_VERTEX_ATTRIB_ARRAY_ENABLED 0x8622
#define GL_VERTEX_ATTRIB_ARRAY_SIZE 0x8623
#define GL_VERTEX_ATTRIB_ARRAY_STRIDE 0x8624
#define GL_VERTEX_ATTRIB_ARRAY_TYPE 0x8625
#define GL_CURRENT_VERTEX_ATTRIB 0x8626
#define GL_VERTEX_PROGRAM_POINT_SIZE 0x8642
#define GL_VERTEX_ATTRIB_ARRAY_POINTER 0x8645
#define GL_STENCIL_BACK_FUNC 0x8800
#define GL_STENCIL_BACK_FAIL 0x8801
#define GL_STENCIL_BACK_PASS_DEPTH_FAIL 0x8802
#define GL_STENCIL_BACK_PASS_DEPTH_PASS 0x8803
#define GL_MAX_DRAW_BUFFERS 0x8824
#define GL_DRAW_BUFFER0 0x8825
#define GL_DRAW_BUFFER1 0x8826
#define GL_DRAW_BUFFER2 0x8827
#define GL_DRAW_BUFFER3 0x8828
#define GL_DRAW_BUFFER4 0x8829
#define GL_DRAW_BUFFER5 0x882A
#define GL_DRAW_BUFFER6 0x882B
#define GL_DRAW_BUFFER7 0x882C
#define GL_DRAW_BUFFER8 0x882D
#define GL_DRAW_BUFFER9 0x882E
#define GL_DRAW_BUFFER10 0x882F
#define GL_DRAW_BUFFER11 0x8830
#define GL_DRAW_BUFFER12 0x8831
#define GL_DRAW_BUFFER13 0x8832
#define GL_DRAW_BUFFER14 0x8833
#define GL_DRAW_BUFFER15 0x8834
#define GL_BLEND_EQUATION_ALPHA 0x883D
#define GL_MAX_VERTEX_ATTRIBS 0x8869
#define GL_VERTEX_ATTRIB_ARRAY_NORMALIZED 0x886A
#define GL_MAX_TEXTURE_IMAGE_UNITS 0x8872
#define GL_FRAGMENT_SHADER 0x8B30
#define GL_VERTEX_SHADER 0x8B31
#define GL_MAX_FRAGMENT_UNIFORM_COMPONENTS 0x8B49
#define GL_MAX_VERTEX_UNIFORM_COMPONENTS 0x8B4A
#define GL_MAX_VARYING_FLOATS 0x8B4B
#define GL_MAX_VERTEX_TEXTURE_IMAGE_UNITS 0x8B4C
#define GL_MAX_COMBINED_TEXTURE_IMAGE_UNITS 0x8B4D
#define GL_SHADER_TYPE 0x8B4F
#define GL_FLOAT_VEC2 0x8B50
#define GL_FLOAT_VEC3 0x8B51
#define GL_FLOAT_VEC4 0x8B52
#define GL_INT_VEC2 0x8B53
#define GL_INT_VEC3 0x8B54
#define GL_INT_VEC4 0x8B55
#define GL_BOOL 0x8B56
#define GL_BOOL_VEC2 0x8B57
#define GL_BOOL_VEC3 0x8B58
#define GL_BOOL_VEC4 0x8B59
#define GL_FLOAT_MAT2 0x8B5A
#define GL_FLOAT_MAT3 0x8B5B
#define GL_FLOAT_MAT4 0x8B5C
#define GL_SAMPLER_1D 0x8B5D
#define GL_SAMPLER_2D 0x8B5E
#define GL_SAMPLER_3D 0x8B5F
#define GL_SAMPLER_CUBE 0x8B60
#define GL_SAMPLER_1D_SHADOW 0x8B61
#define GL_SAMPLER_2D_SHADOW 0x8B62
#define GL_DELETE_STATUS 0x8B80
#define GL_COMPILE_STATUS 0x8B81
#define GL_LINK_STATUS 0x8B82
#define GL_VALIDATE_STATUS 0x8B83
#define GL_INFO_LOG_LENGTH 0x8B84
#define GL_ATTACHED_SHADERS 0x8B85
#define GL_ACTIVE_UNIFORMS 0x8B86
#define GL_ACTIVE_UNIFORM_MAX_LENGTH 0x8B87
#define GL_SHADER_SOURCE_LENGTH 0x8B88
#define GL_ACTIVE_ATTRIBUTES 0x8B89
#define GL_ACTIVE_ATTRIBUTE_MAX_LENGTH 0x8B8A
#define GL_FRAGMENT_SHADER_DERIVATIVE_HINT 0x8B8B
#define GL_SHADING_LANGUAGE_VERSION 0x8B8C
#define GL_CURRENT_PROGRAM 0x8B8D
#define GL_POINT_SPRITE_COORD_ORIGIN 0x8CA0
#define GL_LOWER_LEFT 0x8CA1
#define GL_UPPER_LEFT 0x8CA2
#define GL_STENCIL_BACK_REF 0x8CA3
#define GL_STENCIL_BACK_VALUE_MASK 0x8CA4
#define GL_STENCIL_BACK_WRITEMASK 0x8CA5
#define GL_VERTEX_PROGRAM_TWO_SIDE 0x8643
#define GL_POINT_SPRITE 0x8861
#define GL_COORD_REPLACE 0x8862
#define GL_MAX_TEXTURE_COORDS 0x8871
namespace HLFGL::Functions {
	typedef void(GLAPIENTRY *Fn_glBlendEquationSeparate)(GLenum modeRGB, GLenum modeAlpha);
	inline Fn_glBlendEquationSeparate s_fn_glBlendEquationSeparate {};
	typedef void(GLAPIENTRY *Fn_glDrawBuffers)(GLsizei n, const GLenum * bufs);
	inline Fn_glDrawBuffers s_fn_glDrawBuffers {};
	typedef void(GLAPIENTRY *Fn_glStencilOpSeparate)(GLenum face, GLenum sfail, GLenum dpfail, GLenum dppass);
	inline Fn_glStencilOpSeparate s_fn_glStencilOpSeparate {};
	typedef void(GLAPIENTRY *Fn_glStencilFuncSeparate)(GLenum face, GLenum func, GLint ref, GLuint mask);
	inline Fn_glStencilFuncSeparate s_fn_glStencilFuncSeparate {};
	typedef void(GLAPIENTRY *Fn_glStencilMaskSeparate)(GLenum face, GLuint mask);
	inline Fn_glStencilMaskSeparate s_fn_glStencilMaskSeparate {};
	typedef void(GLAPIENTRY *Fn_glAttachShader)(GLuint program, GLuint shader);
	inline Fn_glAttachShader s_fn_glAttachShader {};
	typedef void(GLAPIENTRY *Fn_glBindAttribLocation)(GLuint program, GLuint index, const GLchar * name);
	inline Fn_glBindAttribLocation s_fn_glBindAttribLocation {};
	typedef void(GLAPIENTRY *Fn_glCompileShader)(GLuint shader);
	inline Fn_glCompileShader s_fn_glCompileShader {};
	typedef GLuint(GLAPIENTRY *Fn_glCreateProgram)();
	inline Fn_glCreateProgram s_fn_glCreateProgram {};
	typedef GLuint(GLAPIENTRY *Fn_glCreateShader)(GLenum type);
	inline Fn_glCreateShader s_fn_glCreateShader {};
	typedef void(GLAPIENTRY *Fn_glDeleteProgram)(GLuint program);
	inline Fn_glDeleteProgram s_fn_glDeleteProgram {};
	typedef void(GLAPIENTRY *Fn_glDeleteShader)(GLuint shader);
	inline Fn_glDeleteShader s_fn_glDeleteShader {};
	typedef void(GLAPIENTRY *Fn_glDetachShader)(GLuint program, GLuint shader);
	inline Fn_glDetachShader s_fn_glDetachShader {};
	typedef void(GLAPIENTRY *Fn_glDisableVertexAttribArray)(GLuint index);
	inline Fn_glDisableVertexAttribArray s_fn_glDisableVertexAttribArray {};
	typedef void(GLAPIENTRY *Fn_glEnableVertexAttribArray)(GLuint index);
	inline Fn_glEnableVertexAttribArray s_fn_glEnableVertexAttribArray {};
	typedef void(GLAPIENTRY *Fn_glGetActiveAttrib)(GLuint program, GLuint index, GLsizei bufSize, GLsizei * length, GLint * size, GLenum * type, GLchar * name);
	inline Fn_glGetActiveAttrib s_fn_glGetActiveAttrib {};
	typedef void(GLAPIENTRY *Fn_glGetActiveUniform)(GLuint program, GLuint index, GLsizei bufSize, GLsizei * length, GLint * size, GLenum * type, GLchar * name);
	inline Fn_glGetActiveUniform s_fn_glGetActiveUniform {};
	typedef void(GLAPIENTRY *Fn_glGetAttachedShaders)(GLuint program, GLsizei maxCount, GLsizei * count, GLuint * shaders);
	inline Fn_glGetAttachedShaders s_fn_glGetAttachedShaders {};
	typedef GLint(GLAPIENTRY *Fn_glGetAttribLocation)(GLuint program, const GLchar * name);
	inline Fn_glGetAttribLocation s_fn_glGetAttribLocation {};
	typedef void(GLAPIENTRY *Fn_glGetProgramiv)(GLuint program, GLenum pname, GLint * params);
	inline Fn_glGetProgramiv s_fn_glGetProgramiv {};
	typedef void(GLAPIENTRY *Fn_glGetProgramInfoLog)(GLuint program, GLsizei bufSize, GLsizei * length, GLchar * infoLog);
	inline Fn_glGetProgramInfoLog s_fn_glGetProgramInfoLog {};
	typedef void(GLAPIENTRY *Fn_glGetShaderiv)(GLuint shader, GLenum pname, GLint * params);
	inline Fn_glGetShaderiv s_fn_glGetShaderiv {};
	typedef void(GLAPIENTRY *Fn_glGetShaderInfoLog)(GLuint shader, GLsizei bufSize, GLsizei * length, GLchar * infoLog);
	inline Fn_glGetShaderInfoLog s_fn_glGetShaderInfoLog {};
	typedef void(GLAPIENTRY *Fn_glGetShaderSource)(GLuint shader, GLsizei bufSize, GLsizei * length, GLchar * source);
	inline Fn_glGetShaderSource s_fn_glGetShaderSource {};
	typedef GLint(GLAPIENTRY *Fn_glGetUniformLocation)(GLuint program, const GLchar * name);
	inline Fn_glGetUniformLocation s_fn_glGetUniformLocation {};
	typedef void(GLAPIENTRY *Fn_glGetUniformfv)(GLuint program, GLint location, GLfloat * params);
	inline Fn_glGetUniformfv s_fn_glGetUniformfv {};
	typedef void(GLAPIENTRY *Fn_glGetUniformiv)(GLuint program, GLint location, GLint * params);
	inline Fn_glGetUniformiv s_fn_glGetUniformiv {};
	typedef void(GLAPIENTRY *Fn_glGetVertexAttribdv)(GLuint index, GLenum pname, GLdouble * params);
	inline Fn_glGetVertexAttribdv s_fn_glGetVertexAttribdv {};
	typedef void(GLAPIENTRY *Fn_glGetVertexAttribfv)(GLuint index, GLenum pname, GLfloat * params);
	inline Fn_glGetVertexAttribfv s_fn_glGetVertexAttribfv {};
	typedef void(GLAPIENTRY *Fn_glGetVertexAttribiv)(GLuint index, GLenum pname, GLint * params);
	inline Fn_glGetVertexAttribiv s_fn_glGetVertexAttribiv {};
	typedef void(GLAPIENTRY *Fn_glGetVertexAttribPointerv)(GLuint index, GLenum pname, void ** pointer);
	inline Fn_glGetVertexAttribPointerv s_fn_glGetVertexAttribPointerv {};
	typedef GLboolean(GLAPIENTRY *Fn_glIsProgram)(GLuint program);
	inline Fn_glIsProgram s_fn_glIsProgram {};
	typedef GLboolean(GLAPIENTRY *Fn_glIsShader)(GLuint shader);
	inline Fn_glIsShader s_fn_glIsShader {};
	typedef void(GLAPIENTRY *Fn_glLinkProgram)(GLuint program);
	inline Fn_glLinkProgram s_fn_glLinkProgram {};
	typedef void(GLAPIENTRY *Fn_glShaderSource)(GLuint shader, GLsizei count, const GLchar *const* string, const GLint * length);
	inline Fn_glShaderSource s_fn_glShaderSource {};
	typedef void(GLAPIENTRY *Fn_glUseProgram)(GLuint program);
	inline Fn_glUseProgram s_fn_glUseProgram {};
	typedef void(GLAPIENTRY *Fn_glUniform1f)(GLint location, GLfloat v0);
	inline Fn_glUniform1f s_fn_glUniform1f {};
	typedef void(GLAPIENTRY *Fn_glUniform2f)(GLint location, GLfloat v0, GLfloat v1);
	inline Fn_glUniform2f s_fn_glUniform2f {};
	typedef void(GLAPIENTRY *Fn_glUniform3f)(GLint location, GLfloat v0, GLfloat v1, GLfloat v2);
	inline Fn_glUniform3f s_fn_glUniform3f {};
	typedef void(GLAPIENTRY *Fn_glUniform4f)(GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3);
	inline Fn_glUniform4f s_fn_glUniform4f {};
	typedef void(GLAPIENTRY *Fn_glUniform1i)(GLint location, GLint v0);
	inline Fn_glUniform1i s_fn_glUniform1i {};
	typedef void(GLAPIENTRY *Fn_glUniform2i)(GLint location, GLint v0, GLint v1);
	inline Fn_glUniform2i s_fn_glUniform2i {};
	typedef void(GLAPIENTRY *Fn_glUniform3i)(GLint location, GLint v0, GLint v1, GLint v2);
	inline Fn_glUniform3i s_fn_glUniform3i {};
	typedef void(GLAPIENTRY *Fn_glUniform4i)(GLint location, GLint v0, GLint v1, GLint v2, GLint v3);
	inline Fn_glUniform4i s_fn_glUniform4i {};
	typedef void(GLAPIENTRY *Fn_glUniform1fv)(GLint location, GLsizei count, const GLfloat * value);
	inline Fn_glUniform1fv s_fn_glUniform1fv {};
	typedef void(GLAPIENTRY *Fn_glUniform2fv)(GLint location, GLsizei count, const GLfloat * value);
	inline Fn_glUniform2fv s_fn_glUniform2fv {};
	typedef void(GLAPIENTRY *Fn_glUniform3fv)(GLint location, GLsizei count, const GLfloat * value);
	inline Fn_glUniform3fv s_fn_glUniform3fv {};
	typedef void(GLAPIENTRY *Fn_glUniform4fv)(GLint location, GLsizei count, const GLfloat * value);
	inline Fn_glUniform4fv s_fn_glUniform4fv {};
	typedef void(GLAPIENTRY *Fn_glUniform1iv)(GLint location, GLsizei count, const GLint * value);
	inline Fn_glUniform1iv s_fn_glUniform1iv {};
	typedef void(GLAPIENTRY *Fn_glUniform2iv)(GLint location, GLsizei count, const GLint * value);
	inline Fn_glUniform2iv s_fn_glUniform2iv {};
	typedef void(GLAPIENTRY *Fn_glUniform3iv)(GLint location, GLsizei count, const GLint * value);
	inline Fn_glUniform3iv s_fn_glUniform3iv {};
	typedef void(GLAPIENTRY *Fn_glUniform4iv)(GLint location, GLsizei count, const GLint * value);
	inline Fn_glUniform4iv s_fn_glUniform4iv {};
	typedef void(GLAPIENTRY *Fn_glUniformMatrix2fv)(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);
	inline Fn_glUniformMatrix2fv s_fn_glUniformMatrix2fv {};
	typedef void(GLAPIENTRY *Fn_glUniformMatrix3fv)(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);
	inline Fn_glUniformMatrix3fv s_fn_glUniformMatrix3fv {};
	typedef void(GLAPIENTRY *Fn_glUniformMatrix4fv)(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);
	inline Fn_glUniformMatrix4fv s_fn_glUniformMatrix4fv {};
	typedef void(GLAPIENTRY *Fn_glValidateProgram)(GLuint program);
	inline Fn_glValidateProgram s_fn_glValidateProgram {};
	typedef void(GLAPIENTRY *Fn_glVertexAttrib1d)(GLuint index, GLdouble x);
	inline Fn_glVertexAttrib1d s_fn_glVertexAttrib1d {};
	typedef void(GLAPIENTRY *Fn_glVertexAttrib1dv)(GLuint index, const GLdouble * v);
	inline Fn_glVertexAttrib1dv s_fn_glVertexAttrib1dv {};
	typedef void(GLAPIENTRY *Fn_glVertexAttrib1f)(GLuint index, GLfloat x);
	inline Fn_glVertexAttrib1f s_fn_glVertexAttrib1f {};
	typedef void(GLAPIENTRY *Fn_glVertexAttrib1fv)(GLuint index, const GLfloat * v);
	inline Fn_glVertexAttrib1fv s_fn_glVertexAttrib1fv {};
	typedef void(GLAPIENTRY *Fn_glVertexAttrib1s)(GLuint index, GLshort x);
	inline Fn_glVertexAttrib1s s_fn_glVertexAttrib1s {};
	typedef void(GLAPIENTRY *Fn_glVertexAttrib1sv)(GLuint index, const GLshort * v);
	inline Fn_glVertexAttrib1sv s_fn_glVertexAttrib1sv {};
	typedef void(GLAPIENTRY *Fn_glVertexAttrib2d)(GLuint index, GLdouble x, GLdouble y);
	inline Fn_glVertexAttrib2d s_fn_glVertexAttrib2d {};
	typedef void(GLAPIENTRY *Fn_glVertexAttrib2dv)(GLuint index, const GLdouble * v);
	inline Fn_glVertexAttrib2dv s_fn_glVertexAttrib2dv {};
	typedef void(GLAPIENTRY *Fn_glVertexAttrib2f)(GLuint index, GLfloat x, GLfloat y);
	inline Fn_glVertexAttrib2f s_fn_glVertexAttrib2f {};
	typedef void(GLAPIENTRY *Fn_glVertexAttrib2fv)(GLuint index, const GLfloat * v);
	inline Fn_glVertexAttrib2fv s_fn_glVertexAttrib2fv {};
	typedef void(GLAPIENTRY *Fn_glVertexAttrib2s)(GLuint index, GLshort x, GLshort y);
	inline Fn_glVertexAttrib2s s_fn_glVertexAttrib2s {};
	typedef void(GLAPIENTRY *Fn_glVertexAttrib2sv)(GLuint index, const GLshort * v);
	inline Fn_glVertexAttrib2sv s_fn_glVertexAttrib2sv {};
	typedef void(GLAPIENTRY *Fn_glVertexAttrib3d)(GLuint index, GLdouble x, GLdouble y, GLdouble z);
	inline Fn_glVertexAttrib3d s_fn_glVertexAttrib3d {};
	typedef void(GLAPIENTRY *Fn_glVertexAttrib3dv)(GLuint index, const GLdouble * v);
	inline Fn_glVertexAttrib3dv s_fn_glVertexAttrib3dv {};
	typedef void(GLAPIENTRY *Fn_glVertexAttrib3f)(GLuint index, GLfloat x, GLfloat y, GLfloat z);
	inline Fn_glVertexAttrib3f s_fn_glVertexAttrib3f {};
	typedef void(GLAPIENTRY *Fn_glVertexAttrib3fv)(GLuint index, const GLfloat * v);
	inline Fn_glVertexAttrib3fv s_fn_glVertexAttrib3fv {};
	typedef void(GLAPIENTRY *Fn_glVertexAttrib3s)(GLuint index, GLshort x, GLshort y, GLshort z);
	inline Fn_glVertexAttrib3s s_fn_glVertexAttrib3s {};
	typedef void(GLAPIENTRY *Fn_glVertexAttrib3sv)(GLuint index, const GLshort * v);
	inline Fn_glVertexAttrib3sv s_fn_glVertexAttrib3sv {};
	typedef void(GLAPIENTRY *Fn_glVertexAttrib4Nbv)(GLuint index, const GLbyte * v);
	inline Fn_glVertexAttrib4Nbv s_fn_glVertexAttrib4Nbv {};
	typedef void(GLAPIENTRY *Fn_glVertexAttrib4Niv)(GLuint index, const GLint * v);
	inline Fn_glVertexAttrib4Niv s_fn_glVertexAttrib4Niv {};
	typedef void(GLAPIENTRY *Fn_glVertexAttrib4Nsv)(GLuint index, const GLshort * v);
	inline Fn_glVertexAttrib4Nsv s_fn_glVertexAttrib4Nsv {};
	typedef void(GLAPIENTRY *Fn_glVertexAttrib4Nub)(GLuint index, GLubyte x, GLubyte y, GLubyte z, GLubyte w);
	inline Fn_glVertexAttrib4Nub s_fn_glVertexAttrib4Nub {};
	typedef void(GLAPIENTRY *Fn_glVertexAttrib4Nubv)(GLuint index, const GLubyte * v);
	inline Fn_glVertexAttrib4Nubv s_fn_glVertexAttrib4Nubv {};
	typedef void(GLAPIENTRY *Fn_glVertexAttrib4Nuiv)(GLuint index, const GLuint * v);
	inline Fn_glVertexAttrib4Nuiv s_fn_glVertexAttrib4Nuiv {};
	typedef void(GLAPIENTRY *Fn_glVertexAttrib4Nusv)(GLuint index, const GLushort * v);
	inline Fn_glVertexAttrib4Nusv s_fn_glVertexAttrib4Nusv {};
	typedef void(GLAPIENTRY *Fn_glVertexAttrib4bv)(GLuint index, const GLbyte * v);
	inline Fn_glVertexAttrib4bv s_fn_glVertexAttrib4bv {};
	typedef void(GLAPIENTRY *Fn_glVertexAttrib4d)(GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w);
	inline Fn_glVertexAttrib4d s_fn_glVertexAttrib4d {};
	typedef void(GLAPIENTRY *Fn_glVertexAttrib4dv)(GLuint index, const GLdouble * v);
	inline Fn_glVertexAttrib4dv s_fn_glVertexAttrib4dv {};
	typedef void(GLAPIENTRY *Fn_glVertexAttrib4f)(GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w);
	inline Fn_glVertexAttrib4f s_fn_glVertexAttrib4f {};
	typedef void(GLAPIENTRY *Fn_glVertexAttrib4fv)(GLuint index, const GLfloat * v);
	inline Fn_glVertexAttrib4fv s_fn_glVertexAttrib4fv {};
	typedef void(GLAPIENTRY *Fn_glVertexAttrib4iv)(GLuint index, const GLint * v);
	inline Fn_glVertexAttrib4iv s_fn_glVertexAttrib4iv {};
	typedef void(GLAPIENTRY *Fn_glVertexAttrib4s)(GLuint index, GLshort x, GLshort y, GLshort z, GLshort w);
	inline Fn_glVertexAttrib4s s_fn_glVertexAttrib4s {};
	typedef void(GLAPIENTRY *Fn_glVertexAttrib4sv)(GLuint index, const GLshort * v);
	inline Fn_glVertexAttrib4sv s_fn_glVertexAttrib4sv {};
	typedef void(GLAPIENTRY *Fn_glVertexAttrib4ubv)(GLuint index, const GLubyte * v);
	inline Fn_glVertexAttrib4ubv s_fn_glVertexAttrib4ubv {};
	typedef void(GLAPIENTRY *Fn_glVertexAttrib4uiv)(GLuint index, const GLuint * v);
	inline Fn_glVertexAttrib4uiv s_fn_glVertexAttrib4uiv {};
	typedef void(GLAPIENTRY *Fn_glVertexAttrib4usv)(GLuint index, const GLushort * v);
	inline Fn_glVertexAttrib4usv s_fn_glVertexAttrib4usv {};
	typedef void(GLAPIENTRY *Fn_glVertexAttribPointer)(GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride, const void * pointer);
	inline Fn_glVertexAttribPointer s_fn_glVertexAttribPointer {};
}
inline void glBlendEquationSeparate(GLenum modeRGB, GLenum modeAlpha) { return HLFGL::Functions::s_fn_glBlendEquationSeparate(modeRGB, modeAlpha); }
inline void glDrawBuffers(GLsizei n, const GLenum * bufs) { return HLFGL::Functions::s_fn_glDrawBuffers(n, bufs); }
inline void glStencilOpSeparate(GLenum face, GLenum sfail, GLenum dpfail, GLenum dppass) { return HLFGL::Functions::s_fn_glStencilOpSeparate(face, sfail, dpfail, dppass); }
inline void glStencilFuncSeparate(GLenum face, GLenum func, GLint ref, GLuint mask) { return HLFGL::Functions::s_fn_glStencilFuncSeparate(face, func, ref, mask); }
inline void glStencilMaskSeparate(GLenum face, GLuint mask) { return HLFGL::Functions::s_fn_glStencilMaskSeparate(face, mask); }
inline void glAttachShader(GLuint program, GLuint shader) { return HLFGL::Functions::s_fn_glAttachShader(program, shader); }
inline void glBindAttribLocation(GLuint program, GLuint index, const GLchar * name) { return HLFGL::Functions::s_fn_glBindAttribLocation(program, index, name); }
inline void glCompileShader(GLuint shader) { return HLFGL::Functions::s_fn_glCompileShader(shader); }
inline GLuint glCreateProgram() { return HLFGL::Functions::s_fn_glCreateProgram(); }
inline GLuint glCreateShader(GLenum type) { return HLFGL::Functions::s_fn_glCreateShader(type); }
inline void glDeleteProgram(GLuint program) { return HLFGL::Functions::s_fn_glDeleteProgram(program); }
inline void glDeleteShader(GLuint shader) { return HLFGL::Functions::s_fn_glDeleteShader(shader); }
inline void glDetachShader(GLuint program, GLuint shader) { return HLFGL::Functions::s_fn_glDetachShader(program, shader); }
inline void glDisableVertexAttribArray(GLuint index) { return HLFGL::Functions::s_fn_glDisableVertexAttribArray(index); }
inline void glEnableVertexAttribArray(GLuint index) { return HLFGL::Functions::s_fn_glEnableVertexAttribArray(index); }
inline void glGetActiveAttrib(GLuint program, GLuint index, GLsizei bufSize, GLsizei * length, GLint * size, GLenum * type, GLchar * name) { return HLFGL::Functions::s_fn_glGetActiveAttrib(program, index, bufSize, length, size, type, name); }
inline void glGetActiveUniform(GLuint program, GLuint index, GLsizei bufSize, GLsizei * length, GLint * size, GLenum * type, GLchar * name) { return HLFGL::Functions::s_fn_glGetActiveUniform(program, index, bufSize, length, size, type, name); }
inline void glGetAttachedShaders(GLuint program, GLsizei maxCount, GLsizei * count, GLuint * shaders) { return HLFGL::Functions::s_fn_glGetAttachedShaders(program, maxCount, count, shaders); }
inline GLint glGetAttribLocation(GLuint program, const GLchar * name) { return HLFGL::Functions::s_fn_glGetAttribLocation(program, name); }
inline void glGetProgramiv(GLuint program, GLenum pname, GLint * params) { return HLFGL::Functions::s_fn_glGetProgramiv(program, pname, params); }
inline void glGetProgramInfoLog(GLuint program, GLsizei bufSize, GLsizei * length, GLchar * infoLog) { return HLFGL::Functions::s_fn_glGetProgramInfoLog(program, bufSize, length, infoLog); }
inline void glGetShaderiv(GLuint shader, GLenum pname, GLint * params) { return HLFGL::Functions::s_fn_glGetShaderiv(shader, pname, params); }
inline void glGetShaderInfoLog(GLuint shader, GLsizei bufSize, GLsizei * length, GLchar * infoLog) { return HLFGL::Functions::s_fn_glGetShaderInfoLog(shader, bufSize, length, infoLog); }
inline void glGetShaderSource(GLuint shader, GLsizei bufSize, GLsizei * length, GLchar * source) { return HLFGL::Functions::s_fn_glGetShaderSource(shader, bufSize, length, source); }
inline GLint glGetUniformLocation(GLuint program, const GLchar * name) { return HLFGL::Functions::s_fn_glGetUniformLocation(program, name); }
inline void glGetUniformfv(GLuint program, GLint location, GLfloat * params) { return HLFGL::Functions::s_fn_glGetUniformfv(program, location, params); }
inline void glGetUniformiv(GLuint program, GLint location, GLint * params) { return HLFGL::Functions::s_fn_glGetUniformiv(program, location, params); }
inline void glGetVertexAttribdv(GLuint index, GLenum pname, GLdouble * params) { return HLFGL::Functions::s_fn_glGetVertexAttribdv(index, pname, params); }
inline void glGetVertexAttribfv(GLuint index, GLenum pname, GLfloat * params) { return HLFGL::Functions::s_fn_glGetVertexAttribfv(index, pname, params); }
inline void glGetVertexAttribiv(GLuint index, GLenum pname, GLint * params) { return HLFGL::Functions::s_fn_glGetVertexAttribiv(index, pname, params); }
inline void glGetVertexAttribPointerv(GLuint index, GLenum pname, void ** pointer) { return HLFGL::Functions::s_fn_glGetVertexAttribPointerv(index, pname, pointer); }
inline GLboolean glIsProgram(GLuint program) { return HLFGL::Functions::s_fn_glIsProgram(program); }
inline GLboolean glIsShader(GLuint shader) { return HLFGL::Functions::s_fn_glIsShader(shader); }
inline void glLinkProgram(GLuint program) { return HLFGL::Functions::s_fn_glLinkProgram(program); }
inline void glShaderSource(GLuint shader, GLsizei count, const GLchar *const* string, const GLint * length) { return HLFGL::Functions::s_fn_glShaderSource(shader, count, string, length); }
inline void glUseProgram(GLuint program) { return HLFGL::Functions::s_fn_glUseProgram(program); }
inline void glUniform1f(GLint location, GLfloat v0) { return HLFGL::Functions::s_fn_glUniform1f(location, v0); }
inline void glUniform2f(GLint location, GLfloat v0, GLfloat v1) { return HLFGL::Functions::s_fn_glUniform2f(location, v0, v1); }
inline void glUniform3f(GLint location, GLfloat v0, GLfloat v1, GLfloat v2) { return HLFGL::Functions::s_fn_glUniform3f(location, v0, v1, v2); }
inline void glUniform4f(GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3) { return HLFGL::Functions::s_fn_glUniform4f(location, v0, v1, v2, v3); }
inline void glUniform1i(GLint location, GLint v0) { return HLFGL::Functions::s_fn_glUniform1i(location, v0); }
inline void glUniform2i(GLint location, GLint v0, GLint v1) { return HLFGL::Functions::s_fn_glUniform2i(location, v0, v1); }
inline void glUniform3i(GLint location, GLint v0, GLint v1, GLint v2) { return HLFGL::Functions::s_fn_glUniform3i(location, v0, v1, v2); }
inline void glUniform4i(GLint location, GLint v0, GLint v1, GLint v2, GLint v3) { return HLFGL::Functions::s_fn_glUniform4i(location, v0, v1, v2, v3); }
inline void glUniform1fv(GLint location, GLsizei count, const GLfloat * value) { return HLFGL::Functions::s_fn_glUniform1fv(location, count, value); }
inline void glUniform2fv(GLint location, GLsizei count, const GLfloat * value) { return HLFGL::Functions::s_fn_glUniform2fv(location, count, value); }
inline void glUniform3fv(GLint location, GLsizei count, const GLfloat * value) { return HLFGL::Functions::s_fn_glUniform3fv(location, count, value); }
inline void glUniform4fv(GLint location, GLsizei count, const GLfloat * value) { return HLFGL::Functions::s_fn_glUniform4fv(location, count, value); }
inline void glUniform1iv(GLint location, GLsizei count, const GLint * value) { return HLFGL::Functions::s_fn_glUniform1iv(location, count, value); }
inline void glUniform2iv(GLint location, GLsizei count, const GLint * value) { return HLFGL::Functions::s_fn_glUniform2iv(location, count, value); }
inline void glUniform3iv(GLint location, GLsizei count, const GLint * value) { return HLFGL::Functions::s_fn_glUniform3iv(location, count, value); }
inline void glUniform4iv(GLint location, GLsizei count, const GLint * value) { return HLFGL::Functions::s_fn_glUniform4iv(location, count, value); }
inline void glUniformMatrix2fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value) { return HLFGL::Functions::s_fn_glUniformMatrix2fv(location, count, transpose, value); }
inline void glUniformMatrix3fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value) { return HLFGL::Functions::s_fn_glUniformMatrix3fv(location, count, transpose, value); }
inline void glUniformMatrix4fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value) { return HLFGL::Functions::s_fn_glUniformMatrix4fv(location, count, transpose, value); }
inline void glValidateProgram(GLuint program) { return HLFGL::Functions::s_fn_glValidateProgram(program); }
inline void glVertexAttrib1d(GLuint index, GLdouble x) { return HLFGL::Functions::s_fn_glVertexAttrib1d(index, x); }
inline void glVertexAttrib1dv(GLuint index, const GLdouble * v) { return HLFGL::Functions::s_fn_glVertexAttrib1dv(index, v); }
inline void glVertexAttrib1f(GLuint index, GLfloat x) { return HLFGL::Functions::s_fn_glVertexAttrib1f(index, x); }
inline void glVertexAttrib1fv(GLuint index, const GLfloat * v) { return HLFGL::Functions::s_fn_glVertexAttrib1fv(index, v); }
inline void glVertexAttrib1s(GLuint index, GLshort x) { return HLFGL::Functions::s_fn_glVertexAttrib1s(index, x); }
inline void glVertexAttrib1sv(GLuint index, const GLshort * v) { return HLFGL::Functions::s_fn_glVertexAttrib1sv(index, v); }
inline void glVertexAttrib2d(GLuint index, GLdouble x, GLdouble y) { return HLFGL::Functions::s_fn_glVertexAttrib2d(index, x, y); }
inline void glVertexAttrib2dv(GLuint index, const GLdouble * v) { return HLFGL::Functions::s_fn_glVertexAttrib2dv(index, v); }
inline void glVertexAttrib2f(GLuint index, GLfloat x, GLfloat y) { return HLFGL::Functions::s_fn_glVertexAttrib2f(index, x, y); }
inline void glVertexAttrib2fv(GLuint index, const GLfloat * v) { return HLFGL::Functions::s_fn_glVertexAttrib2fv(index, v); }
inline void glVertexAttrib2s(GLuint index, GLshort x, GLshort y) { return HLFGL::Functions::s_fn_glVertexAttrib2s(index, x, y); }
inline void glVertexAttrib2sv(GLuint index, const GLshort * v) { return HLFGL::Functions::s_fn_glVertexAttrib2sv(index, v); }
inline void glVertexAttrib3d(GLuint index, GLdouble x, GLdouble y, GLdouble z) { return HLFGL::Functions::s_fn_glVertexAttrib3d(index, x, y, z); }
inline void glVertexAttrib3dv(GLuint index, const GLdouble * v) { return HLFGL::Functions::s_fn_glVertexAttrib3dv(index, v); }
inline void glVertexAttrib3f(GLuint index, GLfloat x, GLfloat y, GLfloat z) { return HLFGL::Functions::s_fn_glVertexAttrib3f(index, x, y, z); }
inline void glVertexAttrib3fv(GLuint index, const GLfloat * v) { return HLFGL::Functions::s_fn_glVertexAttrib3fv(index, v); }
inline void glVertexAttrib3s(GLuint index, GLshort x, GLshort y, GLshort z) { return HLFGL::Functions::s_fn_glVertexAttrib3s(index, x, y, z); }
inline void glVertexAttrib3sv(GLuint index, const GLshort * v) { return HLFGL::Functions::s_fn_glVertexAttrib3sv(index, v); }
inline void glVertexAttrib4Nbv(GLuint index, const GLbyte * v) { return HLFGL::Functions::s_fn_glVertexAttrib4Nbv(index, v); }
inline void glVertexAttrib4Niv(GLuint index, const GLint * v) { return HLFGL::Functions::s_fn_glVertexAttrib4Niv(index, v); }
inline void glVertexAttrib4Nsv(GLuint index, const GLshort * v) { return HLFGL::Functions::s_fn_glVertexAttrib4Nsv(index, v); }
inline void glVertexAttrib4Nub(GLuint index, GLubyte x, GLubyte y, GLubyte z, GLubyte w) { return HLFGL::Functions::s_fn_glVertexAttrib4Nub(index, x, y, z, w); }
inline void glVertexAttrib4Nubv(GLuint index, const GLubyte * v) { return HLFGL::Functions::s_fn_glVertexAttrib4Nubv(index, v); }
inline void glVertexAttrib4Nuiv(GLuint index, const GLuint * v) { return HLFGL::Functions::s_fn_glVertexAttrib4Nuiv(index, v); }
inline void glVertexAttrib4Nusv(GLuint index, const GLushort * v) { return HLFGL::Functions::s_fn_glVertexAttrib4Nusv(index, v); }
inline void glVertexAttrib4bv(GLuint index, const GLbyte * v) { return HLFGL::Functions::s_fn_glVertexAttrib4bv(index, v); }
inline void glVertexAttrib4d(GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w) { return HLFGL::Functions::s_fn_glVertexAttrib4d(index, x, y, z, w); }
inline void glVertexAttrib4dv(GLuint index, const GLdouble * v) { return HLFGL::Functions::s_fn_glVertexAttrib4dv(index, v); }
inline void glVertexAttrib4f(GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w) { return HLFGL::Functions::s_fn_glVertexAttrib4f(index, x, y, z, w); }
inline void glVertexAttrib4fv(GLuint index, const GLfloat * v) { return HLFGL::Functions::s_fn_glVertexAttrib4fv(index, v); }
inline void glVertexAttrib4iv(GLuint index, const GLint * v) { return HLFGL::Functions::s_fn_glVertexAttrib4iv(index, v); }
inline void glVertexAttrib4s(GLuint index, GLshort x, GLshort y, GLshort z, GLshort w) { return HLFGL::Functions::s_fn_glVertexAttrib4s(index, x, y, z, w); }
inline void glVertexAttrib4sv(GLuint index, const GLshort * v) { return HLFGL::Functions::s_fn_glVertexAttrib4sv(index, v); }
inline void glVertexAttrib4ubv(GLuint index, const GLubyte * v) { return HLFGL::Functions::s_fn_glVertexAttrib4ubv(index, v); }
inline void glVertexAttrib4uiv(GLuint index, const GLuint * v) { return HLFGL::Functions::s_fn_glVertexAttrib4uiv(index, v); }
inline void glVertexAttrib4usv(GLuint index, const GLushort * v) { return HLFGL::Functions::s_fn_glVertexAttrib4usv(index, v); }
inline void glVertexAttribPointer(GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride, const void * pointer) { return HLFGL::Functions::s_fn_glVertexAttribPointer(index, size, type, normalized, stride, pointer); }
#endif // GL_VERSION_2_0

// GL_VERSION_2_1
#ifndef GL_VERSION_2_1
#define GL_VERSION_2_1 1
#define GL_PIXEL_PACK_BUFFER 0x88EB
#define GL_PIXEL_UNPACK_BUFFER 0x88EC
#define GL_PIXEL_PACK_BUFFER_BINDING 0x88ED
#define GL_PIXEL_UNPACK_BUFFER_BINDING 0x88EF
#define GL_FLOAT_MAT2x3 0x8B65
#define GL_FLOAT_MAT2x4 0x8B66
#define GL_FLOAT_MAT3x2 0x8B67
#define GL_FLOAT_MAT3x4 0x8B68
#define GL_FLOAT_MAT4x2 0x8B69
#define GL_FLOAT_MAT4x3 0x8B6A
#define GL_SRGB 0x8C40
#define GL_SRGB8 0x8C41
#define GL_SRGB_ALPHA 0x8C42
#define GL_SRGB8_ALPHA8 0x8C43
#define GL_COMPRESSED_SRGB 0x8C48
#define GL_COMPRESSED_SRGB_ALPHA 0x8C49
#define GL_CURRENT_RASTER_SECONDARY_COLOR 0x845F
#define GL_SLUMINANCE_ALPHA 0x8C44
#define GL_SLUMINANCE8_ALPHA8 0x8C45
#define GL_SLUMINANCE 0x8C46
#define GL_SLUMINANCE8 0x8C47
#define GL_COMPRESSED_SLUMINANCE 0x8C4A
#define GL_COMPRESSED_SLUMINANCE_ALPHA 0x8C4B
namespace HLFGL::Functions {
	typedef void(GLAPIENTRY *Fn_glUniformMatrix2x3fv)(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);
	inline Fn_glUniformMatrix2x3fv s_fn_glUniformMatrix2x3fv {};
	typedef void(GLAPIENTRY *Fn_glUniformMatrix3x2fv)(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);
	inline Fn_glUniformMatrix3x2fv s_fn_glUniformMatrix3x2fv {};
	typedef void(GLAPIENTRY *Fn_glUniformMatrix2x4fv)(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);
	inline Fn_glUniformMatrix2x4fv s_fn_glUniformMatrix2x4fv {};
	typedef void(GLAPIENTRY *Fn_glUniformMatrix4x2fv)(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);
	inline Fn_glUniformMatrix4x2fv s_fn_glUniformMatrix4x2fv {};
	typedef void(GLAPIENTRY *Fn_glUniformMatrix3x4fv)(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);
	inline Fn_glUniformMatrix3x4fv s_fn_glUniformMatrix3x4fv {};
	typedef void(GLAPIENTRY *Fn_glUniformMatrix4x3fv)(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);
	inline Fn_glUniformMatrix4x3fv s_fn_glUniformMatrix4x3fv {};
}
inline void glUniformMatrix2x3fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value) { return HLFGL::Functions::s_fn_glUniformMatrix2x3fv(location, count, transpose, value); }
inline void glUniformMatrix3x2fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value) { return HLFGL::Functions::s_fn_glUniformMatrix3x2fv(location, count, transpose, value); }
inline void glUniformMatrix2x4fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value) { return HLFGL::Functions::s_fn_glUniformMatrix2x4fv(location, count, transpose, value); }
inline void glUniformMatrix4x2fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value) { return HLFGL::Functions::s_fn_glUniformMatrix4x2fv(location, count, transpose, value); }
inline void glUniformMatrix3x4fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value) { return HLFGL::Functions::s_fn_glUniformMatrix3x4fv(location, count, transpose, value); }
inline void glUniformMatrix4x3fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value) { return HLFGL::Functions::s_fn_glUniformMatrix4x3fv(location, count, transpose, value); }
#endif // GL_VERSION_2_1

// GL_VERSION_3_0
#ifndef GL_VERSION_3_0
#define GL_VERSION_3_0 1
typedef khronos_uint16_t GLhalf;
#define GL_COMPARE_REF_TO_TEXTURE 0x884E
#define GL_CLIP_DISTANCE0 0x3000
#define GL_CLIP_DISTANCE1 0x3001
#define GL_CLIP_DISTANCE2 0x3002
#define GL_CLIP_DISTANCE3 0x3003
#define GL_CLIP_DISTANCE4 0x3004
#define GL_CLIP_DISTANCE5 0x3005
#define GL_CLIP_DISTANCE6 0x3006
#define GL_CLIP_DISTANCE7 0x3007
#define GL_MAX_CLIP_DISTANCES 0x0D32
#define GL_MAJOR_VERSION 0x821B
#define GL_MINOR_VERSION 0x821C
#define GL_NUM_EXTENSIONS 0x821D
#define GL_CONTEXT_FLAGS 0x821E
#define GL_COMPRESSED_RED 0x8225
#define GL_COMPRESSED_RG 0x8226
#define GL_CONTEXT_FLAG_FORWARD_COMPATIBLE_BIT 0x00000001
#define GL_RGBA32F 0x8814
#define GL_RGB32F 0x8815
#define GL_RGBA16F 0x881A
#define GL_RGB16F 0x881B
#define GL_VERTEX_ATTRIB_ARRAY_INTEGER 0x88FD
#define GL_MAX_ARRAY_TEXTURE_LAYERS 0x88FF
#define GL_MIN_PROGRAM_TEXEL_OFFSET 0x8904
#define GL_MAX_PROGRAM_TEXEL_OFFSET 0x8905
#define GL_CLAMP_READ_COLOR 0x891C
#define GL_FIXED_ONLY 0x891D
#define GL_MAX_VARYING_COMPONENTS 0x8B4B
#define GL_TEXTURE_1D_ARRAY 0x8C18
#define GL_PROXY_TEXTURE_1D_ARRAY 0x8C19
#define GL_TEXTURE_2D_ARRAY 0x8C1A
#define GL_PROXY_TEXTURE_2D_ARRAY 0x8C1B
#define GL_TEXTURE_BINDING_1D_ARRAY 0x8C1C
#define GL_TEXTURE_BINDING_2D_ARRAY 0x8C1D
#define GL_R11F_G11F_B10F 0x8C3A
#define GL_UNSIGNED_INT_10F_11F_11F_REV 0x8C3B
#define GL_RGB9_E5 0x8C3D
#define GL_UNSIGNED_INT_5_9_9_9_REV 0x8C3E
#define GL_TEXTURE_SHARED_SIZE 0x8C3F
#define GL_TRANSFORM_FEEDBACK_VARYING_MAX_LENGTH 0x8C76
#define GL_TRANSFORM_FEEDBACK_BUFFER_MODE 0x8C7F
#define GL_MAX_TRANSFORM_FEEDBACK_SEPARATE_COMPONENTS 0x8C80
#define GL_TRANSFORM_FEEDBACK_VARYINGS 0x8C83
#define GL_TRANSFORM_FEEDBACK_BUFFER_START 0x8C84
#define GL_TRANSFORM_FEEDBACK_BUFFER_SIZE 0x8C85
#define GL_PRIMITIVES_GENERATED 0x8C87
#define GL_TRANSFORM_FEEDBACK_PRIMITIVES_WRITTEN 0x8C88
#define GL_RASTERIZER_DISCARD 0x8C89
#define GL_MAX_TRANSFORM_FEEDBACK_INTERLEAVED_COMPONENTS 0x8C8A
#define GL_MAX_TRANSFORM_FEEDBACK_SEPARATE_ATTRIBS 0x8C8B
#define GL_INTERLEAVED_ATTRIBS 0x8C8C
#define GL_SEPARATE_ATTRIBS 0x8C8D
#define GL_TRANSFORM_FEEDBACK_BUFFER 0x8C8E
#define GL_TRANSFORM_FEEDBACK_BUFFER_BINDING 0x8C8F
#define GL_RGBA32UI 0x8D70
#define GL_RGB32UI 0x8D71
#define GL_RGBA16UI 0x8D76
#define GL_RGB16UI 0x8D77
#define GL_RGBA8UI 0x8D7C
#define GL_RGB8UI 0x8D7D
#define GL_RGBA32I 0x8D82
#define GL_RGB32I 0x8D83
#define GL_RGBA16I 0x8D88
#define GL_RGB16I 0x8D89
#define GL_RGBA8I 0x8D8E
#define GL_RGB8I 0x8D8F
#define GL_RED_INTEGER 0x8D94
#define GL_GREEN_INTEGER 0x8D95
#define GL_BLUE_INTEGER 0x8D96
#define GL_RGB_INTEGER 0x8D98
#define GL_RGBA_INTEGER 0x8D99
#define GL_BGR_INTEGER 0x8D9A
#define GL_BGRA_INTEGER 0x8D9B
#define GL_SAMPLER_1D_ARRAY 0x8DC0
#define GL_SAMPLER_2D_ARRAY 0x8DC1
#define GL_SAMPLER_1D_ARRAY_SHADOW 0x8DC3
#define GL_SAMPLER_2D_ARRAY_SHADOW 0x8DC4
#define GL_SAMPLER_CUBE_SHADOW 0x8DC5
#define GL_UNSIGNED_INT_VEC2 0x8DC6
#define GL_UNSIGNED_INT_VEC3 0x8DC7
#define GL_UNSIGNED_INT_VEC4 0x8DC8
#define GL_INT_SAMPLER_1D 0x8DC9
#define GL_INT_SAMPLER_2D 0x8DCA
#define GL_INT_SAMPLER_3D 0x8DCB
#define GL_INT_SAMPLER_CUBE 0x8DCC
#define GL_INT_SAMPLER_1D_ARRAY 0x8DCE
#define GL_INT_SAMPLER_2D_ARRAY 0x8DCF
#define GL_UNSIGNED_INT_SAMPLER_1D 0x8DD1
#define GL_UNSIGNED_INT_SAMPLER_2D 0x8DD2
#define GL_UNSIGNED_INT_SAMPLER_3D 0x8DD3
#define GL_UNSIGNED_INT_SAMPLER_CUBE 0x8DD4
#define GL_UNSIGNED_INT_SAMPLER_1D_ARRAY 0x8DD6
#define GL_UNSIGNED_INT_SAMPLER_2D_ARRAY 0x8DD7
#define GL_QUERY_WAIT 0x8E13
#define GL_QUERY_NO_WAIT 0x8E14
#define GL_QUERY_BY_REGION_WAIT 0x8E15
#define GL_QUERY_BY_REGION_NO_WAIT 0x8E16
#define GL_BUFFER_ACCESS_FLAGS 0x911F
#define GL_BUFFER_MAP_LENGTH 0x9120
#define GL_BUFFER_MAP_OFFSET 0x9121
#define GL_DEPTH_COMPONENT32F 0x8CAC
#define GL_DEPTH32F_STENCIL8 0x8CAD
#define GL_FLOAT_32_UNSIGNED_INT_24_8_REV 0x8DAD
#define GL_INVALID_FRAMEBUFFER_OPERATION 0x0506
#define GL_FRAMEBUFFER_ATTACHMENT_COLOR_ENCODING 0x8210
#define GL_FRAMEBUFFER_ATTACHMENT_COMPONENT_TYPE 0x8211
#define GL_FRAMEBUFFER_ATTACHMENT_RED_SIZE 0x8212
#define GL_FRAMEBUFFER_ATTACHMENT_GREEN_SIZE 0x8213
#define GL_FRAMEBUFFER_ATTACHMENT_BLUE_SIZE 0x8214
#define GL_FRAMEBUFFER_ATTACHMENT_ALPHA_SIZE 0x8215
#define GL_FRAMEBUFFER_ATTACHMENT_DEPTH_SIZE 0x8216
#define GL_FRAMEBUFFER_ATTACHMENT_STENCIL_SIZE 0x8217
#define GL_FRAMEBUFFER_DEFAULT 0x8218
#define GL_FRAMEBUFFER_UNDEFINED 0x8219
#define GL_DEPTH_STENCIL_ATTACHMENT 0x821A
#define GL_MAX_RENDERBUFFER_SIZE 0x84E8
#define GL_DEPTH_STENCIL 0x84F9
#define GL_UNSIGNED_INT_24_8 0x84FA
#define GL_DEPTH24_STENCIL8 0x88F0
#define GL_TEXTURE_STENCIL_SIZE 0x88F1
#define GL_TEXTURE_RED_TYPE 0x8C10
#define GL_TEXTURE_GREEN_TYPE 0x8C11
#define GL_TEXTURE_BLUE_TYPE 0x8C12
#define GL_TEXTURE_ALPHA_TYPE 0x8C13
#define GL_TEXTURE_DEPTH_TYPE 0x8C16
#define GL_UNSIGNED_NORMALIZED 0x8C17
#define GL_FRAMEBUFFER_BINDING 0x8CA6
#define GL_DRAW_FRAMEBUFFER_BINDING 0x8CA6
#define GL_RENDERBUFFER_BINDING 0x8CA7
#define GL_READ_FRAMEBUFFER 0x8CA8
#define GL_DRAW_FRAMEBUFFER 0x8CA9
#define GL_READ_FRAMEBUFFER_BINDING 0x8CAA
#define GL_RENDERBUFFER_SAMPLES 0x8CAB
#define GL_FRAMEBUFFER_ATTACHMENT_OBJECT_TYPE 0x8CD0
#define GL_FRAMEBUFFER_ATTACHMENT_OBJECT_NAME 0x8CD1
#define GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_LEVEL 0x8CD2
#define GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_CUBE_MAP_FACE 0x8CD3
#define GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_LAYER 0x8CD4
#define GL_FRAMEBUFFER_COMPLETE 0x8CD5
#define GL_FRAMEBUFFER_INCOMPLETE_ATTACHMENT 0x8CD6
#define GL_FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT 0x8CD7
#define GL_FRAMEBUFFER_INCOMPLETE_DRAW_BUFFER 0x8CDB
#define GL_FRAMEBUFFER_INCOMPLETE_READ_BUFFER 0x8CDC
#define GL_FRAMEBUFFER_UNSUPPORTED 0x8CDD
#define GL_MAX_COLOR_ATTACHMENTS 0x8CDF
#define GL_COLOR_ATTACHMENT0 0x8CE0
#define GL_COLOR_ATTACHMENT1 0x8CE1
#define GL_COLOR_ATTACHMENT2 0x8CE2
#define GL_COLOR_ATTACHMENT3 0x8CE3
#define GL_COLOR_ATTACHMENT4 0x8CE4
#define GL_COLOR_ATTACHMENT5 0x8CE5
#define GL_COLOR_ATTACHMENT6 0x8CE6
#define GL_COLOR_ATTACHMENT7 0x8CE7
#define GL_COLOR_ATTACHMENT8 0x8CE8
#define GL_COLOR_ATTACHMENT9 0x8CE9
#define GL_COLOR_ATTACHMENT10 0x8CEA
#define GL_COLOR_ATTACHMENT11 0x8CEB
#define GL_COLOR_ATTACHMENT12 0x8CEC
#define GL_COLOR_ATTACHMENT13 0x8CED
#define GL_COLOR_ATTACHMENT14 0x8CEE
#define GL_COLOR_ATTACHMENT15 0x8CEF
#define GL_COLOR_ATTACHMENT16 0x8CF0
#define GL_COLOR_ATTACHMENT17 0x8CF1
#define GL_COLOR_ATTACHMENT18 0x8CF2
#define GL_COLOR_ATTACHMENT19 0x8CF3
#define GL_COLOR_ATTACHMENT20 0x8CF4
#define GL_COLOR_ATTACHMENT21 0x8CF5
#define GL_COLOR_ATTACHMENT22 0x8CF6
#define GL_COLOR_ATTACHMENT23 0x8CF7
#define GL_COLOR_ATTACHMENT24 0x8CF8
#define GL_COLOR_ATTACHMENT25 0x8CF9
#define GL_COLOR_ATTACHMENT26 0x8CFA
#define GL_COLOR_ATTACHMENT27 0x8CFB
#define GL_COLOR_ATTACHMENT28 0x8CFC
#define GL_COLOR_ATTACHMENT29 0x8CFD
#define GL_COLOR_ATTACHMENT30 0x8CFE
#define GL_COLOR_ATTACHMENT31 0x8CFF
#define GL_DEPTH_ATTACHMENT 0x8D00
#define GL_STENCIL_ATTACHMENT 0x8D20
#define GL_FRAMEBUFFER 0x8D40
#define GL_RENDERBUFFER 0x8D41
#define GL_RENDERBUFFER_WIDTH 0x8D42
#define GL_RENDERBUFFER_HEIGHT 0x8D43
#define GL_RENDERBUFFER_INTERNAL_FORMAT 0x8D44
#define GL_STENCIL_INDEX1 0x8D46
#define GL_STENCIL_INDEX4 0x8D47
#define GL_STENCIL_INDEX8 0x8D48
#define GL_STENCIL_INDEX16 0x8D49
#define GL_RENDERBUFFER_RED_SIZE 0x8D50
#define GL_RENDERBUFFER_GREEN_SIZE 0x8D51
#define GL_RENDERBUFFER_BLUE_SIZE 0x8D52
#define GL_RENDERBUFFER_ALPHA_SIZE 0x8D53
#define GL_RENDERBUFFER_DEPTH_SIZE 0x8D54
#define GL_RENDERBUFFER_STENCIL_SIZE 0x8D55
#define GL_FRAMEBUFFER_INCOMPLETE_MULTISAMPLE 0x8D56
#define GL_MAX_SAMPLES 0x8D57
#define GL_INDEX 0x8222
#define GL_TEXTURE_LUMINANCE_TYPE 0x8C14
#define GL_TEXTURE_INTENSITY_TYPE 0x8C15
#define GL_FRAMEBUFFER_SRGB 0x8DB9
#define GL_HALF_FLOAT 0x140B
#define GL_MAP_READ_BIT 0x0001
#define GL_MAP_WRITE_BIT 0x0002
#define GL_MAP_INVALIDATE_RANGE_BIT 0x0004
#define GL_MAP_INVALIDATE_BUFFER_BIT 0x0008
#define GL_MAP_FLUSH_EXPLICIT_BIT 0x0010
#define GL_MAP_UNSYNCHRONIZED_BIT 0x0020
#define GL_COMPRESSED_RED_RGTC1 0x8DBB
#define GL_COMPRESSED_SIGNED_RED_RGTC1 0x8DBC
#define GL_COMPRESSED_RG_RGTC2 0x8DBD
#define GL_COMPRESSED_SIGNED_RG_RGTC2 0x8DBE
#define GL_RG 0x8227
#define GL_RG_INTEGER 0x8228
#define GL_R8 0x8229
#define GL_R16 0x822A
#define GL_RG8 0x822B
#define GL_RG16 0x822C
#define GL_R16F 0x822D
#define GL_R32F 0x822E
#define GL_RG16F 0x822F
#define GL_RG32F 0x8230
#define GL_R8I 0x8231
#define GL_R8UI 0x8232
#define GL_R16I 0x8233
#define GL_R16UI 0x8234
#define GL_R32I 0x8235
#define GL_R32UI 0x8236
#define GL_RG8I 0x8237
#define GL_RG8UI 0x8238
#define GL_RG16I 0x8239
#define GL_RG16UI 0x823A
#define GL_RG32I 0x823B
#define GL_RG32UI 0x823C
#define GL_VERTEX_ARRAY_BINDING 0x85B5
#define GL_CLAMP_VERTEX_COLOR 0x891A
#define GL_CLAMP_FRAGMENT_COLOR 0x891B
#define GL_ALPHA_INTEGER 0x8D97
namespace HLFGL::Functions {
	typedef void(GLAPIENTRY *Fn_glColorMaski)(GLuint index, GLboolean r, GLboolean g, GLboolean b, GLboolean a);
	inline Fn_glColorMaski s_fn_glColorMaski {};
	typedef void(GLAPIENTRY *Fn_glGetBooleani_v)(GLenum target, GLuint index, GLboolean * data);
	inline Fn_glGetBooleani_v s_fn_glGetBooleani_v {};
	typedef void(GLAPIENTRY *Fn_glGetIntegeri_v)(GLenum target, GLuint index, GLint * data);
	inline Fn_glGetIntegeri_v s_fn_glGetIntegeri_v {};
	typedef void(GLAPIENTRY *Fn_glEnablei)(GLenum target, GLuint index);
	inline Fn_glEnablei s_fn_glEnablei {};
	typedef void(GLAPIENTRY *Fn_glDisablei)(GLenum target, GLuint index);
	inline Fn_glDisablei s_fn_glDisablei {};
	typedef GLboolean(GLAPIENTRY *Fn_glIsEnabledi)(GLenum target, GLuint index);
	inline Fn_glIsEnabledi s_fn_glIsEnabledi {};
	typedef void(GLAPIENTRY *Fn_glBeginTransformFeedback)(GLenum primitiveMode);
	inline Fn_glBeginTransformFeedback s_fn_glBeginTransformFeedback {};
	typedef void(GLAPIENTRY *Fn_glEndTransformFeedback)();
	inline Fn_glEndTransformFeedback s_fn_glEndTransformFeedback {};
	typedef void(GLAPIENTRY *Fn_glBindBufferRange)(GLenum target, GLuint index, GLuint buffer, GLintptr offset, GLsizeiptr size);
	inline Fn_glBindBufferRange s_fn_glBindBufferRange {};
	typedef void(GLAPIENTRY *Fn_glBindBufferBase)(GLenum target, GLuint index, GLuint buffer);
	inline Fn_glBindBufferBase s_fn_glBindBufferBase {};
	typedef void(GLAPIENTRY *Fn_glTransformFeedbackVaryings)(GLuint program, GLsizei count, const GLchar *const* varyings, GLenum bufferMode);
	inline Fn_glTransformFeedbackVaryings s_fn_glTransformFeedbackVaryings {};
	typedef void(GLAPIENTRY *Fn_glGetTransformFeedbackVarying)(GLuint program, GLuint index, GLsizei bufSize, GLsizei * length, GLsizei * size, GLenum * type, GLchar * name);
	inline Fn_glGetTransformFeedbackVarying s_fn_glGetTransformFeedbackVarying {};
	typedef void(GLAPIENTRY *Fn_glClampColor)(GLenum target, GLenum clamp);
	inline Fn_glClampColor s_fn_glClampColor {};
	typedef void(GLAPIENTRY *Fn_glBeginConditionalRender)(GLuint id, GLenum mode);
	inline Fn_glBeginConditionalRender s_fn_glBeginConditionalRender {};
	typedef void(GLAPIENTRY *Fn_glEndConditionalRender)();
	inline Fn_glEndConditionalRender s_fn_glEndConditionalRender {};
	typedef void(GLAPIENTRY *Fn_glVertexAttribIPointer)(GLuint index, GLint size, GLenum type, GLsizei stride, const void * pointer);
	inline Fn_glVertexAttribIPointer s_fn_glVertexAttribIPointer {};
	typedef void(GLAPIENTRY *Fn_glGetVertexAttribIiv)(GLuint index, GLenum pname, GLint * params);
	inline Fn_glGetVertexAttribIiv s_fn_glGetVertexAttribIiv {};
	typedef void(GLAPIENTRY *Fn_glGetVertexAttribIuiv)(GLuint index, GLenum pname, GLuint * params);
	inline Fn_glGetVertexAttribIuiv s_fn_glGetVertexAttribIuiv {};
	typedef void(GLAPIENTRY *Fn_glVertexAttribI1i)(GLuint index, GLint x);
	inline Fn_glVertexAttribI1i s_fn_glVertexAttribI1i {};
	typedef void(GLAPIENTRY *Fn_glVertexAttribI2i)(GLuint index, GLint x, GLint y);
	inline Fn_glVertexAttribI2i s_fn_glVertexAttribI2i {};
	typedef void(GLAPIENTRY *Fn_glVertexAttribI3i)(GLuint index, GLint x, GLint y, GLint z);
	inline Fn_glVertexAttribI3i s_fn_glVertexAttribI3i {};
	typedef void(GLAPIENTRY *Fn_glVertexAttribI4i)(GLuint index, GLint x, GLint y, GLint z, GLint w);
	inline Fn_glVertexAttribI4i s_fn_glVertexAttribI4i {};
	typedef void(GLAPIENTRY *Fn_glVertexAttribI1ui)(GLuint index, GLuint x);
	inline Fn_glVertexAttribI1ui s_fn_glVertexAttribI1ui {};
	typedef void(GLAPIENTRY *Fn_glVertexAttribI2ui)(GLuint index, GLuint x, GLuint y);
	inline Fn_glVertexAttribI2ui s_fn_glVertexAttribI2ui {};
	typedef void(GLAPIENTRY *Fn_glVertexAttribI3ui)(GLuint index, GLuint x, GLuint y, GLuint z);
	inline Fn_glVertexAttribI3ui s_fn_glVertexAttribI3ui {};
	typedef void(GLAPIENTRY *Fn_glVertexAttribI4ui)(GLuint index, GLuint x, GLuint y, GLuint z, GLuint w);
	inline Fn_glVertexAttribI4ui s_fn_glVertexAttribI4ui {};
	typedef void(GLAPIENTRY *Fn_glVertexAttribI1iv)(GLuint index, const GLint * v);
	inline Fn_glVertexAttribI1iv s_fn_glVertexAttribI1iv {};
	typedef void(GLAPIENTRY *Fn_glVertexAttribI2iv)(GLuint index, const GLint * v);
	inline Fn_glVertexAttribI2iv s_fn_glVertexAttribI2iv {};
	typedef void(GLAPIENTRY *Fn_glVertexAttribI3iv)(GLuint index, const GLint * v);
	inline Fn_glVertexAttribI3iv s_fn_glVertexAttribI3iv {};
	typedef void(GLAPIENTRY *Fn_glVertexAttribI4iv)(GLuint index, const GLint * v);
	inline Fn_glVertexAttribI4iv s_fn_glVertexAttribI4iv {};
	typedef void(GLAPIENTRY *Fn_glVertexAttribI1uiv)(GLuint index, const GLuint * v);
	inline Fn_glVertexAttribI1uiv s_fn_glVertexAttribI1uiv {};
	typedef void(GLAPIENTRY *Fn_glVertexAttribI2uiv)(GLuint index, const GLuint * v);
	inline Fn_glVertexAttribI2uiv s_fn_glVertexAttribI2uiv {};
	typedef void(GLAPIENTRY *Fn_glVertexAttribI3uiv)(GLuint index, const GLuint * v);
	inline Fn_glVertexAttribI3uiv s_fn_glVertexAttribI3uiv {};
	typedef void(GLAPIENTRY *Fn_glVertexAttribI4uiv)(GLuint index, const GLuint * v);
	inline Fn_glVertexAttribI4uiv s_fn_glVertexAttribI4uiv {};
	typedef void(GLAPIENTRY *Fn_glVertexAttribI4bv)(GLuint index, const GLbyte * v);
	inline Fn_glVertexAttribI4bv s_fn_glVertexAttribI4bv {};
	typedef void(GLAPIENTRY *Fn_glVertexAttribI4sv)(GLuint index, const GLshort * v);
	inline Fn_glVertexAttribI4sv s_fn_glVertexAttribI4sv {};
	typedef void(GLAPIENTRY *Fn_glVertexAttribI4ubv)(GLuint index, const GLubyte * v);
	inline Fn_glVertexAttribI4ubv s_fn_glVertexAttribI4ubv {};
	typedef void(GLAPIENTRY *Fn_glVertexAttribI4usv)(GLuint index, const GLushort * v);
	inline Fn_glVertexAttribI4usv s_fn_glVertexAttribI4usv {};
	typedef void(GLAPIENTRY *Fn_glGetUniformuiv)(GLuint program, GLint location, GLuint * params);
	inline Fn_glGetUniformuiv s_fn_glGetUniformuiv {};
	typedef void(GLAPIENTRY *Fn_glBindFragDataLocation)(GLuint program, GLuint color, const GLchar * name);
	inline Fn_glBindFragDataLocation s_fn_glBindFragDataLocation {};
	typedef GLint(GLAPIENTRY *Fn_glGetFragDataLocation)(GLuint program, const GLchar * name);
	inline Fn_glGetFragDataLocation s_fn_glGetFragDataLocation {};
	typedef void(GLAPIENTRY *Fn_glUniform1ui)(GLint location, GLuint v0);
	inline Fn_glUniform1ui s_fn_glUniform1ui {};
	typedef void(GLAPIENTRY *Fn_glUniform2ui)(GLint location, GLuint v0, GLuint v1);
	inline Fn_glUniform2ui s_fn_glUniform2ui {};
	typedef void(GLAPIENTRY *Fn_glUniform3ui)(GLint location, GLuint v0, GLuint v1, GLuint v2);
	inline Fn_glUniform3ui s_fn_glUniform3ui {};
	typedef void(GLAPIENTRY *Fn_glUniform4ui)(GLint location, GLuint v0, GLuint v1, GLuint v2, GLuint v3);
	inline Fn_glUniform4ui s_fn_glUniform4ui {};
	typedef void(GLAPIENTRY *Fn_glUniform1uiv)(GLint location, GLsizei count, const GLuint * value);
	inline Fn_glUniform1uiv s_fn_glUniform1uiv {};
	typedef void(GLAPIENTRY *Fn_glUniform2uiv)(GLint location, GLsizei count, const GLuint * value);
	inline Fn_glUniform2uiv s_fn_glUniform2uiv {};
	typedef void(GLAPIENTRY *Fn_glUniform3uiv)(GLint location, GLsizei count, const GLuint * value);
	inline Fn_glUniform3uiv s_fn_glUniform3uiv {};
	typedef void(GLAPIENTRY *Fn_glUniform4uiv)(GLint location, GLsizei count, const GLuint * value);
	inline Fn_glUniform4uiv s_fn_glUniform4uiv {};
	typedef void(GLAPIENTRY *Fn_glTexParameterIiv)(GLenum target, GLenum pname, const GLint * params);
	inline Fn_glTexParameterIiv s_fn_glTexParameterIiv {};
	typedef void(GLAPIENTRY *Fn_glTexParameterIuiv)(GLenum target, GLenum pname, const GLuint * params);
	inline Fn_glTexParameterIuiv s_fn_glTexParameterIuiv {};
	typedef void(GLAPIENTRY *Fn_glGetTexParameterIiv)(GLenum target, GLenum pname, GLint * params);
	inline Fn_glGetTexParameterIiv s_fn_glGetTexParameterIiv {};
	typedef void(GLAPIENTRY *Fn_glGetTexParameterIuiv)(GLenum target, GLenum pname, GLuint * params);
	inline Fn_glGetTexParameterIuiv s_fn_glGetTexParameterIuiv {};
	typedef void(GLAPIENTRY *Fn_glClearBufferiv)(GLenum buffer, GLint drawbuffer, const GLint * value);
	inline Fn_glClearBufferiv s_fn_glClearBufferiv {};
	typedef void(GLAPIENTRY *Fn_glClearBufferuiv)(GLenum buffer, GLint drawbuffer, const GLuint * value);
	inline Fn_glClearBufferuiv s_fn_glClearBufferuiv {};
	typedef void(GLAPIENTRY *Fn_glClearBufferfv)(GLenum buffer, GLint drawbuffer, const GLfloat * value);
	inline Fn_glClearBufferfv s_fn_glClearBufferfv {};
	typedef void(GLAPIENTRY *Fn_glClearBufferfi)(GLenum buffer, GLint drawbuffer, GLfloat depth, GLint stencil);
	inline Fn_glClearBufferfi s_fn_glClearBufferfi {};
	typedef const GLubyte *(GLAPIENTRY *Fn_glGetStringi)(GLenum name, GLuint index);
	inline Fn_glGetStringi s_fn_glGetStringi {};
	typedef GLboolean(GLAPIENTRY *Fn_glIsRenderbuffer)(GLuint renderbuffer);
	inline Fn_glIsRenderbuffer s_fn_glIsRenderbuffer {};
	typedef void(GLAPIENTRY *Fn_glBindRenderbuffer)(GLenum target, GLuint renderbuffer);
	inline Fn_glBindRenderbuffer s_fn_glBindRenderbuffer {};
	typedef void(GLAPIENTRY *Fn_glDeleteRenderbuffers)(GLsizei n, const GLuint * renderbuffers);
	inline Fn_glDeleteRenderbuffers s_fn_glDeleteRenderbuffers {};
	typedef void(GLAPIENTRY *Fn_glGenRenderbuffers)(GLsizei n, GLuint * renderbuffers);
	inline Fn_glGenRenderbuffers s_fn_glGenRenderbuffers {};
	typedef void(GLAPIENTRY *Fn_glRenderbufferStorage)(GLenum target, GLenum internalformat, GLsizei width, GLsizei height);
	inline Fn_glRenderbufferStorage s_fn_glRenderbufferStorage {};
	typedef void(GLAPIENTRY *Fn_glGetRenderbufferParameteriv)(GLenum target, GLenum pname, GLint * params);
	inline Fn_glGetRenderbufferParameteriv s_fn_glGetRenderbufferParameteriv {};
	typedef GLboolean(GLAPIENTRY *Fn_glIsFramebuffer)(GLuint framebuffer);
	inline Fn_glIsFramebuffer s_fn_glIsFramebuffer {};
	typedef void(GLAPIENTRY *Fn_glBindFramebuffer)(GLenum target, GLuint framebuffer);
	inline Fn_glBindFramebuffer s_fn_glBindFramebuffer {};
	typedef void(GLAPIENTRY *Fn_glDeleteFramebuffers)(GLsizei n, const GLuint * framebuffers);
	inline Fn_glDeleteFramebuffers s_fn_glDeleteFramebuffers {};
	typedef void(GLAPIENTRY *Fn_glGenFramebuffers)(GLsizei n, GLuint * framebuffers);
	inline Fn_glGenFramebuffers s_fn_glGenFramebuffers {};
	typedef GLenum(GLAPIENTRY *Fn_glCheckFramebufferStatus)(GLenum target);
	inline Fn_glCheckFramebufferStatus s_fn_glCheckFramebufferStatus {};
	typedef void(GLAPIENTRY *Fn_glFramebufferTexture1D)(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level);
	inline Fn_glFramebufferTexture1D s_fn_glFramebufferTexture1D {};
	typedef void(GLAPIENTRY *Fn_glFramebufferTexture2D)(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level);
	inline Fn_glFramebufferTexture2D s_fn_glFramebufferTexture2D {};
	typedef void(GLAPIENTRY *Fn_glFramebufferTexture3D)(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level, GLint zoffset);
	inline Fn_glFramebufferTexture3D s_fn_glFramebufferTexture3D {};
	typedef void(GLAPIENTRY *Fn_glFramebufferRenderbuffer)(GLenum target, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer);
	inline Fn_glFramebufferRenderbuffer s_fn_glFramebufferRenderbuffer {};
	typedef void(GLAPIENTRY *Fn_glGetFramebufferAttachmentParameteriv)(GLenum target, GLenum attachment, GLenum pname, GLint * params);
	inline Fn_glGetFramebufferAttachmentParameteriv s_fn_glGetFramebufferAttachmentParameteriv {};
	typedef void(GLAPIENTRY *Fn_glGenerateMipmap)(GLenum target);
	inline Fn_glGenerateMipmap s_fn_glGenerateMipmap {};
	typedef void(GLAPIENTRY *Fn_glBlitFramebuffer)(GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, GLbitfield mask, GLenum filter);
	inline Fn_glBlitFramebuffer s_fn_glBlitFramebuffer {};
	typedef void(GLAPIENTRY *Fn_glRenderbufferStorageMultisample)(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height);
	inline Fn_glRenderbufferStorageMultisample s_fn_glRenderbufferStorageMultisample {};
	typedef void(GLAPIENTRY *Fn_glFramebufferTextureLayer)(GLenum target, GLenum attachment, GLuint texture, GLint level, GLint layer);
	inline Fn_glFramebufferTextureLayer s_fn_glFramebufferTextureLayer {};
	typedef void *(GLAPIENTRY *Fn_glMapBufferRange)(GLenum target, GLintptr offset, GLsizeiptr length, GLbitfield access);
	inline Fn_glMapBufferRange s_fn_glMapBufferRange {};
	typedef void(GLAPIENTRY *Fn_glFlushMappedBufferRange)(GLenum target, GLintptr offset, GLsizeiptr length);
	inline Fn_glFlushMappedBufferRange s_fn_glFlushMappedBufferRange {};
	typedef void(GLAPIENTRY *Fn_glBindVertexArray)(GLuint array);
	inline Fn_glBindVertexArray s_fn_glBindVertexArray {};
	typedef void(GLAPIENTRY *Fn_glDeleteVertexArrays)(GLsizei n, const GLuint * arrays);
	inline Fn_glDeleteVertexArrays s_fn_glDeleteVertexArrays {};
	typedef void(GLAPIENTRY *Fn_glGenVertexArrays)(GLsizei n, GLuint * arrays);
	inline Fn_glGenVertexArrays s_fn_glGenVertexArrays {};
	typedef GLboolean(GLAPIENTRY *Fn_glIsVertexArray)(GLuint array);
	inline Fn_glIsVertexArray s_fn_glIsVertexArray {};
}
inline void glColorMaski(GLuint index, GLboolean r, GLboolean g, GLboolean b, GLboolean a) { return HLFGL::Functions::s_fn_glColorMaski(index, r, g, b, a); }
inline void glGetBooleani_v(GLenum target, GLuint index, GLboolean * data) { return HLFGL::Functions::s_fn_glGetBooleani_v(target, index, data); }
inline void glGetIntegeri_v(GLenum target, GLuint index, GLint * data) { return HLFGL::Functions::s_fn_glGetIntegeri_v(target, index, data); }
inline void glEnablei(GLenum target, GLuint index) { return HLFGL::Functions::s_fn_glEnablei(target, index); }
inline void glDisablei(GLenum target, GLuint index) { return HLFGL::Functions::s_fn_glDisablei(target, index); }
inline GLboolean glIsEnabledi(GLenum target, GLuint index) { return HLFGL::Functions::s_fn_glIsEnabledi(target, index); }
inline void glBeginTransformFeedback(GLenum primitiveMode) { return HLFGL::Functions::s_fn_glBeginTransformFeedback(primitiveMode); }
inline void glEndTransformFeedback() { return HLFGL::Functions::s_fn_glEndTransformFeedback(); }
inline void glBindBufferRange(GLenum target, GLuint index, GLuint buffer, GLintptr offset, GLsizeiptr size) { return HLFGL::Functions::s_fn_glBindBufferRange(target, index, buffer, offset, size); }
inline void glBindBufferBase(GLenum target, GLuint index, GLuint buffer) { return HLFGL::Functions::s_fn_glBindBufferBase(target, index, buffer); }
inline void glTransformFeedbackVaryings(GLuint program, GLsizei count, const GLchar *const* varyings, GLenum bufferMode) { return HLFGL::Functions::s_fn_glTransformFeedbackVaryings(program, count, varyings, bufferMode); }
inline void glGetTransformFeedbackVarying(GLuint program, GLuint index, GLsizei bufSize, GLsizei * length, GLsizei * size, GLenum * type, GLchar * name) { return HLFGL::Functions::s_fn_glGetTransformFeedbackVarying(program, index, bufSize, length, size, type, name); }
inline void glClampColor(GLenum target, GLenum clamp) { return HLFGL::Functions::s_fn_glClampColor(target, clamp); }
inline void glBeginConditionalRender(GLuint id, GLenum mode) { return HLFGL::Functions::s_fn_glBeginConditionalRender(id, mode); }
inline void glEndConditionalRender() { return HLFGL::Functions::s_fn_glEndConditionalRender(); }
inline void glVertexAttribIPointer(GLuint index, GLint size, GLenum type, GLsizei stride, const void * pointer) { return HLFGL::Functions::s_fn_glVertexAttribIPointer(index, size, type, stride, pointer); }
inline void glGetVertexAttribIiv(GLuint index, GLenum pname, GLint * params) { return HLFGL::Functions::s_fn_glGetVertexAttribIiv(index, pname, params); }
inline void glGetVertexAttribIuiv(GLuint index, GLenum pname, GLuint * params) { return HLFGL::Functions::s_fn_glGetVertexAttribIuiv(index, pname, params); }
inline void glVertexAttribI1i(GLuint index, GLint x) { return HLFGL::Functions::s_fn_glVertexAttribI1i(index, x); }
inline void glVertexAttribI2i(GLuint index, GLint x, GLint y) { return HLFGL::Functions::s_fn_glVertexAttribI2i(index, x, y); }
inline void glVertexAttribI3i(GLuint index, GLint x, GLint y, GLint z) { return HLFGL::Functions::s_fn_glVertexAttribI3i(index, x, y, z); }
inline void glVertexAttribI4i(GLuint index, GLint x, GLint y, GLint z, GLint w) { return HLFGL::Functions::s_fn_glVertexAttribI4i(index, x, y, z, w); }
inline void glVertexAttribI1ui(GLuint index, GLuint x) { return HLFGL::Functions::s_fn_glVertexAttribI1ui(index, x); }
inline void glVertexAttribI2ui(GLuint index, GLuint x, GLuint y) { return HLFGL::Functions::s_fn_glVertexAttribI2ui(index, x, y); }
inline void glVertexAttribI3ui(GLuint index, GLuint x, GLuint y, GLuint z) { return HLFGL::Functions::s_fn_glVertexAttribI3ui(index, x, y, z); }
inline void glVertexAttribI4ui(GLuint index, GLuint x, GLuint y, GLuint z, GLuint w) { return HLFGL::Functions::s_fn_glVertexAttribI4ui(index, x, y, z, w); }
inline void glVertexAttribI1iv(GLuint index, const GLint * v) { return HLFGL::Functions::s_fn_glVertexAttribI1iv(index, v); }
inline void glVertexAttribI2iv(GLuint index, const GLint * v) { return HLFGL::Functions::s_fn_glVertexAttribI2iv(index, v); }
inline void glVertexAttribI3iv(GLuint index, const GLint * v) { return HLFGL::Functions::s_fn_glVertexAttribI3iv(index, v); }
inline void glVertexAttribI4iv(GLuint index, const GLint * v) { return HLFGL::Functions::s_fn_glVertexAttribI4iv(index, v); }
inline void glVertexAttribI1uiv(GLuint index, const GLuint * v) { return HLFGL::Functions::s_fn_glVertexAttribI1uiv(index, v); }
inline void glVertexAttribI2uiv(GLuint index, const GLuint * v) { return HLFGL::Functions::s_fn_glVertexAttribI2uiv(index, v); }
inline void glVertexAttribI3uiv(GLuint index, const GLuint * v) { return HLFGL::Functions::s_fn_glVertexAttribI3uiv(index, v); }
inline void glVertexAttribI4uiv(GLuint index, const GLuint * v) { return HLFGL::Functions::s_fn_glVertexAttribI4uiv(index, v); }
inline void glVertexAttribI4bv(GLuint index, const GLbyte * v) { return HLFGL::Functions::s_fn_glVertexAttribI4bv(index, v); }
inline void glVertexAttribI4sv(GLuint index, const GLshort * v) { return HLFGL::Functions::s_fn_glVertexAttribI4sv(index, v); }
inline void glVertexAttribI4ubv(GLuint index, const GLubyte * v) { return HLFGL::Functions::s_fn_glVertexAttribI4ubv(index, v); }
inline void glVertexAttribI4usv(GLuint index, const GLushort * v) { return HLFGL::Functions::s_fn_glVertexAttribI4usv(index, v); }
inline void glGetUniformuiv(GLuint program, GLint location, GLuint * params) { return HLFGL::Functions::s_fn_glGetUniformuiv(program, location, params); }
inline void glBindFragDataLocation(GLuint program, GLuint color, const GLchar * name) { return HLFGL::Functions::s_fn_glBindFragDataLocation(program, color, name); }
inline GLint glGetFragDataLocation(GLuint program, const GLchar * name) { return HLFGL::Functions::s_fn_glGetFragDataLocation(program, name); }
inline void glUniform1ui(GLint location, GLuint v0) { return HLFGL::Functions::s_fn_glUniform1ui(location, v0); }
inline void glUniform2ui(GLint location, GLuint v0, GLuint v1) { return HLFGL::Functions::s_fn_glUniform2ui(location, v0, v1); }
inline void glUniform3ui(GLint location, GLuint v0, GLuint v1, GLuint v2) { return HLFGL::Functions::s_fn_glUniform3ui(location, v0, v1, v2); }
inline void glUniform4ui(GLint location, GLuint v0, GLuint v1, GLuint v2, GLuint v3) { return HLFGL::Functions::s_fn_glUniform4ui(location, v0, v1, v2, v3); }
inline void glUniform1uiv(GLint location, GLsizei count, const GLuint * value) { return HLFGL::Functions::s_fn_glUniform1uiv(location, count, value); }
inline void glUniform2uiv(GLint location, GLsizei count, const GLuint * value) { return HLFGL::Functions::s_fn_glUniform2uiv(location, count, value); }
inline void glUniform3uiv(GLint location, GLsizei count, const GLuint * value) { return HLFGL::Functions::s_fn_glUniform3uiv(location, count, value); }
inline void glUniform4uiv(GLint location, GLsizei count, const GLuint * value) { return HLFGL::Functions::s_fn_glUniform4uiv(location, count, value); }
inline void glTexParameterIiv(GLenum target, GLenum pname, const GLint * params) { return HLFGL::Functions::s_fn_glTexParameterIiv(target, pname, params); }
inline void glTexParameterIuiv(GLenum target, GLenum pname, const GLuint * params) { return HLFGL::Functions::s_fn_glTexParameterIuiv(target, pname, params); }
inline void glGetTexParameterIiv(GLenum target, GLenum pname, GLint * params) { return HLFGL::Functions::s_fn_glGetTexParameterIiv(target, pname, params); }
inline void glGetTexParameterIuiv(GLenum target, GLenum pname, GLuint * params) { return HLFGL::Functions::s_fn_glGetTexParameterIuiv(target, pname, params); }
inline void glClearBufferiv(GLenum buffer, GLint drawbuffer, const GLint * value) { return HLFGL::Functions::s_fn_glClearBufferiv(buffer, drawbuffer, value); }
inline void glClearBufferuiv(GLenum buffer, GLint drawbuffer, const GLuint * value) { return HLFGL::Functions::s_fn_glClearBufferuiv(buffer, drawbuffer, value); }
inline void glClearBufferfv(GLenum buffer, GLint drawbuffer, const GLfloat * value) { return HLFGL::Functions::s_fn_glClearBufferfv(buffer, drawbuffer, value); }
inline void glClearBufferfi(GLenum buffer, GLint drawbuffer, GLfloat depth, GLint stencil) { return HLFGL::Functions::s_fn_glClearBufferfi(buffer, drawbuffer, depth, stencil); }
inline const GLubyte * glGetStringi(GLenum name, GLuint index) { return HLFGL::Functions::s_fn_glGetStringi(name, index); }
inline GLboolean glIsRenderbuffer(GLuint renderbuffer) { return HLFGL::Functions::s_fn_glIsRenderbuffer(renderbuffer); }
inline void glBindRenderbuffer(GLenum target, GLuint renderbuffer) { return HLFGL::Functions::s_fn_glBindRenderbuffer(target, renderbuffer); }
inline void glDeleteRenderbuffers(GLsizei n, const GLuint * renderbuffers) { return HLFGL::Functions::s_fn_glDeleteRenderbuffers(n, renderbuffers); }
inline void glGenRenderbuffers(GLsizei n, GLuint * renderbuffers) { return HLFGL::Functions::s_fn_glGenRenderbuffers(n, renderbuffers); }
inline void glRenderbufferStorage(GLenum target, GLenum internalformat, GLsizei width, GLsizei height) { return HLFGL::Functions::s_fn_glRenderbufferStorage(target, internalformat, width, height); }
inline void glGetRenderbufferParameteriv(GLenum target, GLenum pname, GLint * params) { return HLFGL::Functions::s_fn_glGetRenderbufferParameteriv(target, pname, params); }
inline GLboolean glIsFramebuffer(GLuint framebuffer) { return HLFGL::Functions::s_fn_glIsFramebuffer(framebuffer); }
inline void glBindFramebuffer(GLenum target, GLuint framebuffer) { return HLFGL::Functions::s_fn_glBindFramebuffer(target, framebuffer); }
inline void glDeleteFramebuffers(GLsizei n, const GLuint * framebuffers) { return HLFGL::Functions::s_fn_glDeleteFramebuffers(n, framebuffers); }
inline void glGenFramebuffers(GLsizei n, GLuint * framebuffers) { return HLFGL::Functions::s_fn_glGenFramebuffers(n, framebuffers); }
inline GLenum glCheckFramebufferStatus(GLenum target) { return HLFGL::Functions::s_fn_glCheckFramebufferStatus(target); }
inline void glFramebufferTexture1D(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level) { return HLFGL::Functions::s_fn_glFramebufferTexture1D(target, attachment, textarget, texture, level); }
inline void glFramebufferTexture2D(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level) { return HLFGL::Functions::s_fn_glFramebufferTexture2D(target, attachment, textarget, texture, level); }
inline void glFramebufferTexture3D(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level, GLint zoffset) { return HLFGL::Functions::s_fn_glFramebufferTexture3D(target, attachment, textarget, texture, level, zoffset); }
inline void glFramebufferRenderbuffer(GLenum target, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer) { return HLFGL::Functions::s_fn_glFramebufferRenderbuffer(target, attachment, renderbuffertarget, renderbuffer); }
inline void glGetFramebufferAttachmentParameteriv(GLenum target, GLenum attachment, GLenum pname, GLint * params) { return HLFGL::Functions::s_fn_glGetFramebufferAttachmentParameteriv(target, attachment, pname, params); }
inline void glGenerateMipmap(GLenum target) { return HLFGL::Functions::s_fn_glGenerateMipmap(target); }
inline void glBlitFramebuffer(GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, GLbitfield mask, GLenum filter) { return HLFGL::Functions::s_fn_glBlitFramebuffer(srcX0, srcY0, srcX1, srcY1, dstX0, dstY0, dstX1, dstY1, mask, filter); }
inline void glRenderbufferStorageMultisample(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height) { return HLFGL::Functions::s_fn_glRenderbufferStorageMultisample(target, samples, internalformat, width, height); }
inline void glFramebufferTextureLayer(GLenum target, GLenum attachment, GLuint texture, GLint level, GLint layer) { return HLFGL::Functions::s_fn_glFramebufferTextureLayer(target, attachment, texture, level, layer); }
inline void * glMapBufferRange(GLenum target, GLintptr offset, GLsizeiptr length, GLbitfield access) { return HLFGL::Functions::s_fn_glMapBufferRange(target, offset, length, access); }
inline void glFlushMappedBufferRange(GLenum target, GLintptr offset, GLsizeiptr length) { return HLFGL::Functions::s_fn_glFlushMappedBufferRange(target, offset, length); }
inline void glBindVertexArray(GLuint array) { return HLFGL::Functions::s_fn_glBindVertexArray(array); }
inline void glDeleteVertexArrays(GLsizei n, const GLuint * arrays) { return HLFGL::Functions::s_fn_glDeleteVertexArrays(n, arrays); }
inline void glGenVertexArrays(GLsizei n, GLuint * arrays) { return HLFGL::Functions::s_fn_glGenVertexArrays(n, arrays); }
inline GLboolean glIsVertexArray(GLuint array) { return HLFGL::Functions::s_fn_glIsVertexArray(array); }
#endif // GL_VERSION_3_0

// GL_VERSION_3_1
#ifndef GL_VERSION_3_1
#define GL_VERSION_3_1 1
#define GL_SAMPLER_2D_RECT 0x8B63
#define GL_SAMPLER_2D_RECT_SHADOW 0x8B64
#define GL_SAMPLER_BUFFER 0x8DC2
#define GL_INT_SAMPLER_2D_RECT 0x8DCD
#define GL_INT_SAMPLER_BUFFER 0x8DD0
#define GL_UNSIGNED_INT_SAMPLER_2D_RECT 0x8DD5
#define GL_UNSIGNED_INT_SAMPLER_BUFFER 0x8DD8
#define GL_TEXTURE_BUFFER 0x8C2A
#define GL_MAX_TEXTURE_BUFFER_SIZE 0x8C2B
#define GL_TEXTURE_BINDING_BUFFER 0x8C2C
#define GL_TEXTURE_BUFFER_DATA_STORE_BINDING 0x8C2D
#define GL_TEXTURE_RECTANGLE 0x84F5
#define GL_TEXTURE_BINDING_RECTANGLE 0x84F6
#define GL_PROXY_TEXTURE_RECTANGLE 0x84F7
#define GL_MAX_RECTANGLE_TEXTURE_SIZE 0x84F8
#define GL_R8_SNORM 0x8F94
#define GL_RG8_SNORM 0x8F95
#define GL_RGB8_SNORM 0x8F96
#define GL_RGBA8_SNORM 0x8F97
#define GL_R16_SNORM 0x8F98
#define GL_RG16_SNORM 0x8F99
#define GL_RGB16_SNORM 0x8F9A
#define GL_RGBA16_SNORM 0x8F9B
#define GL_SIGNED_NORMALIZED 0x8F9C
#define GL_PRIMITIVE_RESTART 0x8F9D
#define GL_PRIMITIVE_RESTART_INDEX 0x8F9E
#define GL_COPY_READ_BUFFER 0x8F36
#define GL_COPY_WRITE_BUFFER 0x8F37
#define GL_UNIFORM_BUFFER 0x8A11
#define GL_UNIFORM_BUFFER_BINDING 0x8A28
#define GL_UNIFORM_BUFFER_START 0x8A29
#define GL_UNIFORM_BUFFER_SIZE 0x8A2A
#define GL_MAX_VERTEX_UNIFORM_BLOCKS 0x8A2B
#define GL_MAX_GEOMETRY_UNIFORM_BLOCKS 0x8A2C
#define GL_MAX_FRAGMENT_UNIFORM_BLOCKS 0x8A2D
#define GL_MAX_COMBINED_UNIFORM_BLOCKS 0x8A2E
#define GL_MAX_UNIFORM_BUFFER_BINDINGS 0x8A2F
#define GL_MAX_UNIFORM_BLOCK_SIZE 0x8A30
#define GL_MAX_COMBINED_VERTEX_UNIFORM_COMPONENTS 0x8A31
#define GL_MAX_COMBINED_GEOMETRY_UNIFORM_COMPONENTS 0x8A32
#define GL_MAX_COMBINED_FRAGMENT_UNIFORM_COMPONENTS 0x8A33
#define GL_UNIFORM_BUFFER_OFFSET_ALIGNMENT 0x8A34
#define GL_ACTIVE_UNIFORM_BLOCK_MAX_NAME_LENGTH 0x8A35
#define GL_ACTIVE_UNIFORM_BLOCKS 0x8A36
#define GL_UNIFORM_TYPE 0x8A37
#define GL_UNIFORM_SIZE 0x8A38
#define GL_UNIFORM_NAME_LENGTH 0x8A39
#define GL_UNIFORM_BLOCK_INDEX 0x8A3A
#define GL_UNIFORM_OFFSET 0x8A3B
#define GL_UNIFORM_ARRAY_STRIDE 0x8A3C
#define GL_UNIFORM_MATRIX_STRIDE 0x8A3D
#define GL_UNIFORM_IS_ROW_MAJOR 0x8A3E
#define GL_UNIFORM_BLOCK_BINDING 0x8A3F
#define GL_UNIFORM_BLOCK_DATA_SIZE 0x8A40
#define GL_UNIFORM_BLOCK_NAME_LENGTH 0x8A41
#define GL_UNIFORM_BLOCK_ACTIVE_UNIFORMS 0x8A42
#define GL_UNIFORM_BLOCK_ACTIVE_UNIFORM_INDICES 0x8A43
#define GL_UNIFORM_BLOCK_REFERENCED_BY_VERTEX_SHADER 0x8A44
#define GL_UNIFORM_BLOCK_REFERENCED_BY_GEOMETRY_SHADER 0x8A45
#define GL_UNIFORM_BLOCK_REFERENCED_BY_FRAGMENT_SHADER 0x8A46
#define GL_INVALID_INDEX 0xFFFFFFFF
namespace HLFGL::Functions {
	typedef void(GLAPIENTRY *Fn_glDrawArraysInstanced)(GLenum mode, GLint first, GLsizei count, GLsizei instancecount);
	inline Fn_glDrawArraysInstanced s_fn_glDrawArraysInstanced {};
	typedef void(GLAPIENTRY *Fn_glDrawElementsInstanced)(GLenum mode, GLsizei count, GLenum type, const void * indices, GLsizei instancecount);
	inline Fn_glDrawElementsInstanced s_fn_glDrawElementsInstanced {};
	typedef void(GLAPIENTRY *Fn_glTexBuffer)(GLenum target, GLenum internalformat, GLuint buffer);
	inline Fn_glTexBuffer s_fn_glTexBuffer {};
	typedef void(GLAPIENTRY *Fn_glPrimitiveRestartIndex)(GLuint index);
	inline Fn_glPrimitiveRestartIndex s_fn_glPrimitiveRestartIndex {};
	typedef void(GLAPIENTRY *Fn_glCopyBufferSubData)(GLenum readTarget, GLenum writeTarget, GLintptr readOffset, GLintptr writeOffset, GLsizeiptr size);
	inline Fn_glCopyBufferSubData s_fn_glCopyBufferSubData {};
	typedef void(GLAPIENTRY *Fn_glGetUniformIndices)(GLuint program, GLsizei uniformCount, const GLchar *const* uniformNames, GLuint * uniformIndices);
	inline Fn_glGetUniformIndices s_fn_glGetUniformIndices {};
	typedef void(GLAPIENTRY *Fn_glGetActiveUniformsiv)(GLuint program, GLsizei uniformCount, const GLuint * uniformIndices, GLenum pname, GLint * params);
	inline Fn_glGetActiveUniformsiv s_fn_glGetActiveUniformsiv {};
	typedef void(GLAPIENTRY *Fn_glGetActiveUniformName)(GLuint program, GLuint uniformIndex, GLsizei bufSize, GLsizei * length, GLchar * uniformName);
	inline Fn_glGetActiveUniformName s_fn_glGetActiveUniformName {};
	typedef GLuint(GLAPIENTRY *Fn_glGetUniformBlockIndex)(GLuint program, const GLchar * uniformBlockName);
	inline Fn_glGetUniformBlockIndex s_fn_glGetUniformBlockIndex {};
	typedef void(GLAPIENTRY *Fn_glGetActiveUniformBlockiv)(GLuint program, GLuint uniformBlockIndex, GLenum pname, GLint * params);
	inline Fn_glGetActiveUniformBlockiv s_fn_glGetActiveUniformBlockiv {};
	typedef void(GLAPIENTRY *Fn_glGetActiveUniformBlockName)(GLuint program, GLuint uniformBlockIndex, GLsizei bufSize, GLsizei * length, GLchar * uniformBlockName);
	inline Fn_glGetActiveUniformBlockName s_fn_glGetActiveUniformBlockName {};
	typedef void(GLAPIENTRY *Fn_glUniformBlockBinding)(GLuint program, GLuint uniformBlockIndex, GLuint uniformBlockBinding);
	inline Fn_glUniformBlockBinding s_fn_glUniformBlockBinding {};
}
inline void glDrawArraysInstanced(GLenum mode, GLint first, GLsizei count, GLsizei instancecount) { return HLFGL::Functions::s_fn_glDrawArraysInstanced(mode, first, count, instancecount); }
inline void glDrawElementsInstanced(GLenum mode, GLsizei count, GLenum type, const void * indices, GLsizei instancecount) { return HLFGL::Functions::s_fn_glDrawElementsInstanced(mode, count, type, indices, instancecount); }
inline void glTexBuffer(GLenum target, GLenum internalformat, GLuint buffer) { return HLFGL::Functions::s_fn_glTexBuffer(target, internalformat, buffer); }
inline void glPrimitiveRestartIndex(GLuint index) { return HLFGL::Functions::s_fn_glPrimitiveRestartIndex(index); }
inline void glCopyBufferSubData(GLenum readTarget, GLenum writeTarget, GLintptr readOffset, GLintptr writeOffset, GLsizeiptr size) { return HLFGL::Functions::s_fn_glCopyBufferSubData(readTarget, writeTarget, readOffset, writeOffset, size); }
inline void glGetUniformIndices(GLuint program, GLsizei uniformCount, const GLchar *const* uniformNames, GLuint * uniformIndices) { return HLFGL::Functions::s_fn_glGetUniformIndices(program, uniformCount, uniformNames, uniformIndices); }
inline void glGetActiveUniformsiv(GLuint program, GLsizei uniformCount, const GLuint * uniformIndices, GLenum pname, GLint * params) { return HLFGL::Functions::s_fn_glGetActiveUniformsiv(program, uniformCount, uniformIndices, pname, params); }
inline void glGetActiveUniformName(GLuint program, GLuint uniformIndex, GLsizei bufSize, GLsizei * length, GLchar * uniformName) { return HLFGL::Functions::s_fn_glGetActiveUniformName(program, uniformIndex, bufSize, length, uniformName); }
inline GLuint glGetUniformBlockIndex(GLuint program, const GLchar * uniformBlockName) { return HLFGL::Functions::s_fn_glGetUniformBlockIndex(program, uniformBlockName); }
inline void glGetActiveUniformBlockiv(GLuint program, GLuint uniformBlockIndex, GLenum pname, GLint * params) { return HLFGL::Functions::s_fn_glGetActiveUniformBlockiv(program, uniformBlockIndex, pname, params); }
inline void glGetActiveUniformBlockName(GLuint program, GLuint uniformBlockIndex, GLsizei bufSize, GLsizei * length, GLchar * uniformBlockName) { return HLFGL::Functions::s_fn_glGetActiveUniformBlockName(program, uniformBlockIndex, bufSize, length, uniformBlockName); }
inline void glUniformBlockBinding(GLuint program, GLuint uniformBlockIndex, GLuint uniformBlockBinding) { return HLFGL::Functions::s_fn_glUniformBlockBinding(program, uniformBlockIndex, uniformBlockBinding); }
#endif // GL_VERSION_3_1

// GL_VERSION_3_2
#ifndef GL_VERSION_3_2
#define GL_VERSION_3_2 1
typedef struct __GLsync *GLsync;
typedef khronos_uint64_t GLuint64;
typedef khronos_int64_t GLint64;
#define GL_CONTEXT_CORE_PROFILE_BIT 0x00000001
#define GL_CONTEXT_COMPATIBILITY_PROFILE_BIT 0x00000002
#define GL_LINES_ADJACENCY 0x000A
#define GL_LINE_STRIP_ADJACENCY 0x000B
#define GL_TRIANGLES_ADJACENCY 0x000C
#define GL_TRIANGLE_STRIP_ADJACENCY 0x000D
#define GL_PROGRAM_POINT_SIZE 0x8642
#define GL_MAX_GEOMETRY_TEXTURE_IMAGE_UNITS 0x8C29
#define GL_FRAMEBUFFER_ATTACHMENT_LAYERED 0x8DA7
#define GL_FRAMEBUFFER_INCOMPLETE_LAYER_TARGETS 0x8DA8
#define GL_GEOMETRY_SHADER 0x8DD9
#define GL_GEOMETRY_VERTICES_OUT 0x8916
#define GL_GEOMETRY_INPUT_TYPE 0x8917
#define GL_GEOMETRY_OUTPUT_TYPE 0x8918
#define GL_MAX_GEOMETRY_UNIFORM_COMPONENTS 0x8DDF
#define GL_MAX_GEOMETRY_OUTPUT_VERTICES 0x8DE0
#define GL_MAX_GEOMETRY_TOTAL_OUTPUT_COMPONENTS 0x8DE1
#define GL_MAX_VERTEX_OUTPUT_COMPONENTS 0x9122
#define GL_MAX_GEOMETRY_INPUT_COMPONENTS 0x9123
#define GL_MAX_GEOMETRY_OUTPUT_COMPONENTS 0x9124
#define GL_MAX_FRAGMENT_INPUT_COMPONENTS 0x9125
#define GL_CONTEXT_PROFILE_MASK 0x9126
#define GL_DEPTH_CLAMP 0x864F
#define GL_QUADS_FOLLOW_PROVOKING_VERTEX_CONVENTION 0x8E4C
#define GL_FIRST_VERTEX_CONVENTION 0x8E4D
#define GL_LAST_VERTEX_CONVENTION 0x8E4E
#define GL_PROVOKING_VERTEX 0x8E4F
#define GL_TEXTURE_CUBE_MAP_SEAMLESS 0x884F
#define GL_MAX_SERVER_WAIT_TIMEOUT 0x9111
#define GL_OBJECT_TYPE 0x9112
#define GL_SYNC_CONDITION 0x9113
#define GL_SYNC_STATUS 0x9114
#define GL_SYNC_FLAGS 0x9115
#define GL_SYNC_FENCE 0x9116
#define GL_SYNC_GPU_COMMANDS_COMPLETE 0x9117
#define GL_UNSIGNALED 0x9118
#define GL_SIGNALED 0x9119
#define GL_ALREADY_SIGNALED 0x911A
#define GL_TIMEOUT_EXPIRED 0x911B
#define GL_CONDITION_SATISFIED 0x911C
#define GL_WAIT_FAILED 0x911D
#define GL_TIMEOUT_IGNORED 0xFFFFFFFFFFFFFFFF
#define GL_SYNC_FLUSH_COMMANDS_BIT 0x00000001
#define GL_SAMPLE_POSITION 0x8E50
#define GL_SAMPLE_MASK 0x8E51
#define GL_SAMPLE_MASK_VALUE 0x8E52
#define GL_MAX_SAMPLE_MASK_WORDS 0x8E59
#define GL_TEXTURE_2D_MULTISAMPLE 0x9100
#define GL_PROXY_TEXTURE_2D_MULTISAMPLE 0x9101
#define GL_TEXTURE_2D_MULTISAMPLE_ARRAY 0x9102
#define GL_PROXY_TEXTURE_2D_MULTISAMPLE_ARRAY 0x9103
#define GL_TEXTURE_BINDING_2D_MULTISAMPLE 0x9104
#define GL_TEXTURE_BINDING_2D_MULTISAMPLE_ARRAY 0x9105
#define GL_TEXTURE_SAMPLES 0x9106
#define GL_TEXTURE_FIXED_SAMPLE_LOCATIONS 0x9107
#define GL_SAMPLER_2D_MULTISAMPLE 0x9108
#define GL_INT_SAMPLER_2D_MULTISAMPLE 0x9109
#define GL_UNSIGNED_INT_SAMPLER_2D_MULTISAMPLE 0x910A
#define GL_SAMPLER_2D_MULTISAMPLE_ARRAY 0x910B
#define GL_INT_SAMPLER_2D_MULTISAMPLE_ARRAY 0x910C
#define GL_UNSIGNED_INT_SAMPLER_2D_MULTISAMPLE_ARRAY 0x910D
#define GL_MAX_COLOR_TEXTURE_SAMPLES 0x910E
#define GL_MAX_DEPTH_TEXTURE_SAMPLES 0x910F
#define GL_MAX_INTEGER_SAMPLES 0x9110
namespace HLFGL::Functions {
	typedef void(GLAPIENTRY *Fn_glDrawElementsBaseVertex)(GLenum mode, GLsizei count, GLenum type, const void * indices, GLint basevertex);
	inline Fn_glDrawElementsBaseVertex s_fn_glDrawElementsBaseVertex {};
	typedef void(GLAPIENTRY *Fn_glDrawRangeElementsBaseVertex)(GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const void * indices, GLint basevertex);
	inline Fn_glDrawRangeElementsBaseVertex s_fn_glDrawRangeElementsBaseVertex {};
	typedef void(GLAPIENTRY *Fn_glDrawElementsInstancedBaseVertex)(GLenum mode, GLsizei count, GLenum type, const void * indices, GLsizei instancecount, GLint basevertex);
	inline Fn_glDrawElementsInstancedBaseVertex s_fn_glDrawElementsInstancedBaseVertex {};
	typedef void(GLAPIENTRY *Fn_glMultiDrawElementsBaseVertex)(GLenum mode, const GLsizei * count, GLenum type, const void *const* indices, GLsizei drawcount, const GLint * basevertex);
	inline Fn_glMultiDrawElementsBaseVertex s_fn_glMultiDrawElementsBaseVertex {};
	typedef void(GLAPIENTRY *Fn_glProvokingVertex)(GLenum mode);
	inline Fn_glProvokingVertex s_fn_glProvokingVertex {};
	typedef GLsync(GLAPIENTRY *Fn_glFenceSync)(GLenum condition, GLbitfield flags);
	inline Fn_glFenceSync s_fn_glFenceSync {};
	typedef GLboolean(GLAPIENTRY *Fn_glIsSync)(GLsync sync);
	inline Fn_glIsSync s_fn_glIsSync {};
	typedef void(GLAPIENTRY *Fn_glDeleteSync)(GLsync sync);
	inline Fn_glDeleteSync s_fn_glDeleteSync {};
	typedef GLenum(GLAPIENTRY *Fn_glClientWaitSync)(GLsync sync, GLbitfield flags, GLuint64 timeout);
	inline Fn_glClientWaitSync s_fn_glClientWaitSync {};
	typedef void(GLAPIENTRY *Fn_glWaitSync)(GLsync sync, GLbitfield flags, GLuint64 timeout);
	inline Fn_glWaitSync s_fn_glWaitSync {};
	typedef void(GLAPIENTRY *Fn_glGetInteger64v)(GLenum pname, GLint64 * data);
	inline Fn_glGetInteger64v s_fn_glGetInteger64v {};
	typedef void(GLAPIENTRY *Fn_glGetSynciv)(GLsync sync, GLenum pname, GLsizei count, GLsizei * length, GLint * values);
	inline Fn_glGetSynciv s_fn_glGetSynciv {};
	typedef void(GLAPIENTRY *Fn_glGetInteger64i_v)(GLenum target, GLuint index, GLint64 * data);
	inline Fn_glGetInteger64i_v s_fn_glGetInteger64i_v {};
	typedef void(GLAPIENTRY *Fn_glGetBufferParameteri64v)(GLenum target, GLenum pname, GLint64 * params);
	inline Fn_glGetBufferParameteri64v s_fn_glGetBufferParameteri64v {};
	typedef void(GLAPIENTRY *Fn_glFramebufferTexture)(GLenum target, GLenum attachment, GLuint texture, GLint level);
	inline Fn_glFramebufferTexture s_fn_glFramebufferTexture {};
	typedef void(GLAPIENTRY *Fn_glTexImage2DMultisample)(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLboolean fixedsamplelocations);
	inline Fn_glTexImage2DMultisample s_fn_glTexImage2DMultisample {};
	typedef void(GLAPIENTRY *Fn_glTexImage3DMultisample)(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedsamplelocations);
	inline Fn_glTexImage3DMultisample s_fn_glTexImage3DMultisample {};
	typedef void(GLAPIENTRY *Fn_glGetMultisamplefv)(GLenum pname, GLuint index, GLfloat * val);
	inline Fn_glGetMultisamplefv s_fn_glGetMultisamplefv {};
	typedef void(GLAPIENTRY *Fn_glSampleMaski)(GLuint maskNumber, GLbitfield mask);
	inline Fn_glSampleMaski s_fn_glSampleMaski {};
}
inline void glDrawElementsBaseVertex(GLenum mode, GLsizei count, GLenum type, const void * indices, GLint basevertex) { return HLFGL::Functions::s_fn_glDrawElementsBaseVertex(mode, count, type, indices, basevertex); }
inline void glDrawRangeElementsBaseVertex(GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const void * indices, GLint basevertex) { return HLFGL::Functions::s_fn_glDrawRangeElementsBaseVertex(mode, start, end, count, type, indices, basevertex); }
inline void glDrawElementsInstancedBaseVertex(GLenum mode, GLsizei count, GLenum type, const void * indices, GLsizei instancecount, GLint basevertex) { return HLFGL::Functions::s_fn_glDrawElementsInstancedBaseVertex(mode, count, type, indices, instancecount, basevertex); }
inline void glMultiDrawElementsBaseVertex(GLenum mode, const GLsizei * count, GLenum type, const void *const* indices, GLsizei drawcount, const GLint * basevertex) { return HLFGL::Functions::s_fn_glMultiDrawElementsBaseVertex(mode, count, type, indices, drawcount, basevertex); }
inline void glProvokingVertex(GLenum mode) { return HLFGL::Functions::s_fn_glProvokingVertex(mode); }
inline GLsync glFenceSync(GLenum condition, GLbitfield flags) { return HLFGL::Functions::s_fn_glFenceSync(condition, flags); }
inline GLboolean glIsSync(GLsync sync) { return HLFGL::Functions::s_fn_glIsSync(sync); }
inline void glDeleteSync(GLsync sync) { return HLFGL::Functions::s_fn_glDeleteSync(sync); }
inline GLenum glClientWaitSync(GLsync sync, GLbitfield flags, GLuint64 timeout) { return HLFGL::Functions::s_fn_glClientWaitSync(sync, flags, timeout); }
inline void glWaitSync(GLsync sync, GLbitfield flags, GLuint64 timeout) { return HLFGL::Functions::s_fn_glWaitSync(sync, flags, timeout); }
inline void glGetInteger64v(GLenum pname, GLint64 * data) { return HLFGL::Functions::s_fn_glGetInteger64v(pname, data); }
inline void glGetSynciv(GLsync sync, GLenum pname, GLsizei count, GLsizei * length, GLint * values) { return HLFGL::Functions::s_fn_glGetSynciv(sync, pname, count, length, values); }
inline void glGetInteger64i_v(GLenum target, GLuint index, GLint64 * data) { return HLFGL::Functions::s_fn_glGetInteger64i_v(target, index, data); }
inline void glGetBufferParameteri64v(GLenum target, GLenum pname, GLint64 * params) { return HLFGL::Functions::s_fn_glGetBufferParameteri64v(target, pname, params); }
inline void glFramebufferTexture(GLenum target, GLenum attachment, GLuint texture, GLint level) { return HLFGL::Functions::s_fn_glFramebufferTexture(target, attachment, texture, level); }
inline void glTexImage2DMultisample(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLboolean fixedsamplelocations) { return HLFGL::Functions::s_fn_glTexImage2DMultisample(target, samples, internalformat, width, height, fixedsamplelocations); }
inline void glTexImage3DMultisample(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedsamplelocations) { return HLFGL::Functions::s_fn_glTexImage3DMultisample(target, samples, internalformat, width, height, depth, fixedsamplelocations); }
inline void glGetMultisamplefv(GLenum pname, GLuint index, GLfloat * val) { return HLFGL::Functions::s_fn_glGetMultisamplefv(pname, index, val); }
inline void glSampleMaski(GLuint maskNumber, GLbitfield mask) { return HLFGL::Functions::s_fn_glSampleMaski(maskNumber, mask); }
#endif // GL_VERSION_3_2

// GL_VERSION_3_3
#ifndef GL_VERSION_3_3
#define GL_VERSION_3_3 1
#define GL_VERTEX_ATTRIB_ARRAY_DIVISOR 0x88FE
#define GL_SRC1_COLOR 0x88F9
#define GL_ONE_MINUS_SRC1_COLOR 0x88FA
#define GL_ONE_MINUS_SRC1_ALPHA 0x88FB
#define GL_MAX_DUAL_SOURCE_DRAW_BUFFERS 0x88FC
#define GL_ANY_SAMPLES_PASSED 0x8C2F
#define GL_SAMPLER_BINDING 0x8919
#define GL_RGB10_A2UI 0x906F
#define GL_TEXTURE_SWIZZLE_R 0x8E42
#define GL_TEXTURE_SWIZZLE_G 0x8E43
#define GL_TEXTURE_SWIZZLE_B 0x8E44
#define GL_TEXTURE_SWIZZLE_A 0x8E45
#define GL_TEXTURE_SWIZZLE_RGBA 0x8E46
#define GL_TIME_ELAPSED 0x88BF
#define GL_TIMESTAMP 0x8E28
#define GL_INT_2_10_10_10_REV 0x8D9F
namespace HLFGL::Functions {
	typedef void(GLAPIENTRY *Fn_glBindFragDataLocationIndexed)(GLuint program, GLuint colorNumber, GLuint index, const GLchar * name);
	inline Fn_glBindFragDataLocationIndexed s_fn_glBindFragDataLocationIndexed {};
	typedef GLint(GLAPIENTRY *Fn_glGetFragDataIndex)(GLuint program, const GLchar * name);
	inline Fn_glGetFragDataIndex s_fn_glGetFragDataIndex {};
	typedef void(GLAPIENTRY *Fn_glGenSamplers)(GLsizei count, GLuint * samplers);
	inline Fn_glGenSamplers s_fn_glGenSamplers {};
	typedef void(GLAPIENTRY *Fn_glDeleteSamplers)(GLsizei count, const GLuint * samplers);
	inline Fn_glDeleteSamplers s_fn_glDeleteSamplers {};
	typedef GLboolean(GLAPIENTRY *Fn_glIsSampler)(GLuint sampler);
	inline Fn_glIsSampler s_fn_glIsSampler {};
	typedef void(GLAPIENTRY *Fn_glBindSampler)(GLuint unit, GLuint sampler);
	inline Fn_glBindSampler s_fn_glBindSampler {};
	typedef void(GLAPIENTRY *Fn_glSamplerParameteri)(GLuint sampler, GLenum pname, GLint param);
	inline Fn_glSamplerParameteri s_fn_glSamplerParameteri {};
	typedef void(GLAPIENTRY *Fn_glSamplerParameteriv)(GLuint sampler, GLenum pname, const GLint * param);
	inline Fn_glSamplerParameteriv s_fn_glSamplerParameteriv {};
	typedef void(GLAPIENTRY *Fn_glSamplerParameterf)(GLuint sampler, GLenum pname, GLfloat param);
	inline Fn_glSamplerParameterf s_fn_glSamplerParameterf {};
	typedef void(GLAPIENTRY *Fn_glSamplerParameterfv)(GLuint sampler, GLenum pname, const GLfloat * param);
	inline Fn_glSamplerParameterfv s_fn_glSamplerParameterfv {};
	typedef void(GLAPIENTRY *Fn_glSamplerParameterIiv)(GLuint sampler, GLenum pname, const GLint * param);
	inline Fn_glSamplerParameterIiv s_fn_glSamplerParameterIiv {};
	typedef void(GLAPIENTRY *Fn_glSamplerParameterIuiv)(GLuint sampler, GLenum pname, const GLuint * param);
	inline Fn_glSamplerParameterIuiv s_fn_glSamplerParameterIuiv {};
	typedef void(GLAPIENTRY *Fn_glGetSamplerParameteriv)(GLuint sampler, GLenum pname, GLint * params);
	inline Fn_glGetSamplerParameteriv s_fn_glGetSamplerParameteriv {};
	typedef void(GLAPIENTRY *Fn_glGetSamplerParameterIiv)(GLuint sampler, GLenum pname, GLint * params);
	inline Fn_glGetSamplerParameterIiv s_fn_glGetSamplerParameterIiv {};
	typedef void(GLAPIENTRY *Fn_glGetSamplerParameterfv)(GLuint sampler, GLenum pname, GLfloat * params);
	inline Fn_glGetSamplerParameterfv s_fn_glGetSamplerParameterfv {};
	typedef void(GLAPIENTRY *Fn_glGetSamplerParameterIuiv)(GLuint sampler, GLenum pname, GLuint * params);
	inline Fn_glGetSamplerParameterIuiv s_fn_glGetSamplerParameterIuiv {};
	typedef void(GLAPIENTRY *Fn_glQueryCounter)(GLuint id, GLenum target);
	inline Fn_glQueryCounter s_fn_glQueryCounter {};
	typedef void(GLAPIENTRY *Fn_glGetQueryObjecti64v)(GLuint id, GLenum pname, GLint64 * params);
	inline Fn_glGetQueryObjecti64v s_fn_glGetQueryObjecti64v {};
	typedef void(GLAPIENTRY *Fn_glGetQueryObjectui64v)(GLuint id, GLenum pname, GLuint64 * params);
	inline Fn_glGetQueryObjectui64v s_fn_glGetQueryObjectui64v {};
	typedef void(GLAPIENTRY *Fn_glVertexAttribDivisor)(GLuint index, GLuint divisor);
	inline Fn_glVertexAttribDivisor s_fn_glVertexAttribDivisor {};
	typedef void(GLAPIENTRY *Fn_glVertexAttribP1ui)(GLuint index, GLenum type, GLboolean normalized, GLuint value);
	inline Fn_glVertexAttribP1ui s_fn_glVertexAttribP1ui {};
	typedef void(GLAPIENTRY *Fn_glVertexAttribP1uiv)(GLuint index, GLenum type, GLboolean normalized, const GLuint * value);
	inline Fn_glVertexAttribP1uiv s_fn_glVertexAttribP1uiv {};
	typedef void(GLAPIENTRY *Fn_glVertexAttribP2ui)(GLuint index, GLenum type, GLboolean normalized, GLuint value);
	inline Fn_glVertexAttribP2ui s_fn_glVertexAttribP2ui {};
	typedef void(GLAPIENTRY *Fn_glVertexAttribP2uiv)(GLuint index, GLenum type, GLboolean normalized, const GLuint * value);
	inline Fn_glVertexAttribP2uiv s_fn_glVertexAttribP2uiv {};
	typedef void(GLAPIENTRY *Fn_glVertexAttribP3ui)(GLuint index, GLenum type, GLboolean normalized, GLuint value);
	inline Fn_glVertexAttribP3ui s_fn_glVertexAttribP3ui {};
	typedef void(GLAPIENTRY *Fn_glVertexAttribP3uiv)(GLuint index, GLenum type, GLboolean normalized, const GLuint * value);
	inline Fn_glVertexAttribP3uiv s_fn_glVertexAttribP3uiv {};
	typedef void(GLAPIENTRY *Fn_glVertexAttribP4ui)(GLuint index, GLenum type, GLboolean normalized, GLuint value);
	inline Fn_glVertexAttribP4ui s_fn_glVertexAttribP4ui {};
	typedef void(GLAPIENTRY *Fn_glVertexAttribP4uiv)(GLuint index, GLenum type, GLboolean normalized, const GLuint * value);
	inline Fn_glVertexAttribP4uiv s_fn_glVertexAttribP4uiv {};
	typedef void(GLAPIENTRY *Fn_glVertexP2ui)(GLenum type, GLuint value);
	inline Fn_glVertexP2ui s_fn_glVertexP2ui {};
	typedef void(GLAPIENTRY *Fn_glVertexP2uiv)(GLenum type, const GLuint * value);
	inline Fn_glVertexP2uiv s_fn_glVertexP2uiv {};
	typedef void(GLAPIENTRY *Fn_glVertexP3ui)(GLenum type, GLuint value);
	inline Fn_glVertexP3ui s_fn_glVertexP3ui {};
	typedef void(GLAPIENTRY *Fn_glVertexP3uiv)(GLenum type, const GLuint * value);
	inline Fn_glVertexP3uiv s_fn_glVertexP3uiv {};
	typedef void(GLAPIENTRY *Fn_glVertexP4ui)(GLenum type, GLuint value);
	inline Fn_glVertexP4ui s_fn_glVertexP4ui {};
	typedef void(GLAPIENTRY *Fn_glVertexP4uiv)(GLenum type, const GLuint * value);
	inline Fn_glVertexP4uiv s_fn_glVertexP4uiv {};
	typedef void(GLAPIENTRY *Fn_glTexCoordP1ui)(GLenum type, GLuint coords);
	inline Fn_glTexCoordP1ui s_fn_glTexCoordP1ui {};
	typedef void(GLAPIENTRY *Fn_glTexCoordP1uiv)(GLenum type, const GLuint * coords);
	inline Fn_glTexCoordP1uiv s_fn_glTexCoordP1uiv {};
	typedef void(GLAPIENTRY *Fn_glTexCoordP2ui)(GLenum type, GLuint coords);
	inline Fn_glTexCoordP2ui s_fn_glTexCoordP2ui {};
	typedef void(GLAPIENTRY *Fn_glTexCoordP2uiv)(GLenum type, const GLuint * coords);
	inline Fn_glTexCoordP2uiv s_fn_glTexCoordP2uiv {};
	typedef void(GLAPIENTRY *Fn_glTexCoordP3ui)(GLenum type, GLuint coords);
	inline Fn_glTexCoordP3ui s_fn_glTexCoordP3ui {};
	typedef void(GLAPIENTRY *Fn_glTexCoordP3uiv)(GLenum type, const GLuint * coords);
	inline Fn_glTexCoordP3uiv s_fn_glTexCoordP3uiv {};
	typedef void(GLAPIENTRY *Fn_glTexCoordP4ui)(GLenum type, GLuint coords);
	inline Fn_glTexCoordP4ui s_fn_glTexCoordP4ui {};
	typedef void(GLAPIENTRY *Fn_glTexCoordP4uiv)(GLenum type, const GLuint * coords);
	inline Fn_glTexCoordP4uiv s_fn_glTexCoordP4uiv {};
	typedef void(GLAPIENTRY *Fn_glMultiTexCoordP1ui)(GLenum texture, GLenum type, GLuint coords);
	inline Fn_glMultiTexCoordP1ui s_fn_glMultiTexCoordP1ui {};
	typedef void(GLAPIENTRY *Fn_glMultiTexCoordP1uiv)(GLenum texture, GLenum type, const GLuint * coords);
	inline Fn_glMultiTexCoordP1uiv s_fn_glMultiTexCoordP1uiv {};
	typedef void(GLAPIENTRY *Fn_glMultiTexCoordP2ui)(GLenum texture, GLenum type, GLuint coords);
	inline Fn_glMultiTexCoordP2ui s_fn_glMultiTexCoordP2ui {};
	typedef void(GLAPIENTRY *Fn_glMultiTexCoordP2uiv)(GLenum texture, GLenum type, const GLuint * coords);
	inline Fn_glMultiTexCoordP2uiv s_fn_glMultiTexCoordP2uiv {};
	typedef void(GLAPIENTRY *Fn_glMultiTexCoordP3ui)(GLenum texture, GLenum type, GLuint coords);
	inline Fn_glMultiTexCoordP3ui s_fn_glMultiTexCoordP3ui {};
	typedef void(GLAPIENTRY *Fn_glMultiTexCoordP3uiv)(GLenum texture, GLenum type, const GLuint * coords);
	inline Fn_glMultiTexCoordP3uiv s_fn_glMultiTexCoordP3uiv {};
	typedef void(GLAPIENTRY *Fn_glMultiTexCoordP4ui)(GLenum texture, GLenum type, GLuint coords);
	inline Fn_glMultiTexCoordP4ui s_fn_glMultiTexCoordP4ui {};
	typedef void(GLAPIENTRY *Fn_glMultiTexCoordP4uiv)(GLenum texture, GLenum type, const GLuint * coords);
	inline Fn_glMultiTexCoordP4uiv s_fn_glMultiTexCoordP4uiv {};
	typedef void(GLAPIENTRY *Fn_glNormalP3ui)(GLenum type, GLuint coords);
	inline Fn_glNormalP3ui s_fn_glNormalP3ui {};
	typedef void(GLAPIENTRY *Fn_glNormalP3uiv)(GLenum type, const GLuint * coords);
	inline Fn_glNormalP3uiv s_fn_glNormalP3uiv {};
	typedef void(GLAPIENTRY *Fn_glColorP3ui)(GLenum type, GLuint color);
	inline Fn_glColorP3ui s_fn_glColorP3ui {};
	typedef void(GLAPIENTRY *Fn_glColorP3uiv)(GLenum type, const GLuint * color);
	inline Fn_glColorP3uiv s_fn_glColorP3uiv {};
	typedef void(GLAPIENTRY *Fn_glColorP4ui)(GLenum type, GLuint color);
	inline Fn_glColorP4ui s_fn_glColorP4ui {};
	typedef void(GLAPIENTRY *Fn_glColorP4uiv)(GLenum type, const GLuint * color);
	inline Fn_glColorP4uiv s_fn_glColorP4uiv {};
	typedef void(GLAPIENTRY *Fn_glSecondaryColorP3ui)(GLenum type, GLuint color);
	inline Fn_glSecondaryColorP3ui s_fn_glSecondaryColorP3ui {};
	typedef void(GLAPIENTRY *Fn_glSecondaryColorP3uiv)(GLenum type, const GLuint * color);
	inline Fn_glSecondaryColorP3uiv s_fn_glSecondaryColorP3uiv {};
}
inline void glBindFragDataLocationIndexed(GLuint program, GLuint colorNumber, GLuint index, const GLchar * name) { return HLFGL::Functions::s_fn_glBindFragDataLocationIndexed(program, colorNumber, index, name); }
inline GLint glGetFragDataIndex(GLuint program, const GLchar * name) { return HLFGL::Functions::s_fn_glGetFragDataIndex(program, name); }
inline void glGenSamplers(GLsizei count, GLuint * samplers) { return HLFGL::Functions::s_fn_glGenSamplers(count, samplers); }
inline void glDeleteSamplers(GLsizei count, const GLuint * samplers) { return HLFGL::Functions::s_fn_glDeleteSamplers(count, samplers); }
inline GLboolean glIsSampler(GLuint sampler) { return HLFGL::Functions::s_fn_glIsSampler(sampler); }
inline void glBindSampler(GLuint unit, GLuint sampler) { return HLFGL::Functions::s_fn_glBindSampler(unit, sampler); }
inline void glSamplerParameteri(GLuint sampler, GLenum pname, GLint param) { return HLFGL::Functions::s_fn_glSamplerParameteri(sampler, pname, param); }
inline void glSamplerParameteriv(GLuint sampler, GLenum pname, const GLint * param) { return HLFGL::Functions::s_fn_glSamplerParameteriv(sampler, pname, param); }
inline void glSamplerParameterf(GLuint sampler, GLenum pname, GLfloat param) { return HLFGL::Functions::s_fn_glSamplerParameterf(sampler, pname, param); }
inline void glSamplerParameterfv(GLuint sampler, GLenum pname, const GLfloat * param) { return HLFGL::Functions::s_fn_glSamplerParameterfv(sampler, pname, param); }
inline void glSamplerParameterIiv(GLuint sampler, GLenum pname, const GLint * param) { return HLFGL::Functions::s_fn_glSamplerParameterIiv(sampler, pname, param); }
inline void glSamplerParameterIuiv(GLuint sampler, GLenum pname, const GLuint * param) { return HLFGL::Functions::s_fn_glSamplerParameterIuiv(sampler, pname, param); }
inline void glGetSamplerParameteriv(GLuint sampler, GLenum pname, GLint * params) { return HLFGL::Functions::s_fn_glGetSamplerParameteriv(sampler, pname, params); }
inline void glGetSamplerParameterIiv(GLuint sampler, GLenum pname, GLint * params) { return HLFGL::Functions::s_fn_glGetSamplerParameterIiv(sampler, pname, params); }
inline void glGetSamplerParameterfv(GLuint sampler, GLenum pname, GLfloat * params) { return HLFGL::Functions::s_fn_glGetSamplerParameterfv(sampler, pname, params); }
inline void glGetSamplerParameterIuiv(GLuint sampler, GLenum pname, GLuint * params) { return HLFGL::Functions::s_fn_glGetSamplerParameterIuiv(sampler, pname, params); }
inline void glQueryCounter(GLuint id, GLenum target) { return HLFGL::Functions::s_fn_glQueryCounter(id, target); }
inline void glGetQueryObjecti64v(GLuint id, GLenum pname, GLint64 * params) { return HLFGL::Functions::s_fn_glGetQueryObjecti64v(id, pname, params); }
inline void glGetQueryObjectui64v(GLuint id, GLenum pname, GLuint64 * params) { return HLFGL::Functions::s_fn_glGetQueryObjectui64v(id, pname, params); }
inline void glVertexAttribDivisor(GLuint index, GLuint divisor) { return HLFGL::Functions::s_fn_glVertexAttribDivisor(index, divisor); }
inline void glVertexAttribP1ui(GLuint index, GLenum type, GLboolean normalized, GLuint value) { return HLFGL::Functions::s_fn_glVertexAttribP1ui(index, type, normalized, value); }
inline void glVertexAttribP1uiv(GLuint index, GLenum type, GLboolean normalized, const GLuint * value) { return HLFGL::Functions::s_fn_glVertexAttribP1uiv(index, type, normalized, value); }
inline void glVertexAttribP2ui(GLuint index, GLenum type, GLboolean normalized, GLuint value) { return HLFGL::Functions::s_fn_glVertexAttribP2ui(index, type, normalized, value); }
inline void glVertexAttribP2uiv(GLuint index, GLenum type, GLboolean normalized, const GLuint * value) { return HLFGL::Functions::s_fn_glVertexAttribP2uiv(index, type, normalized, value); }
inline void glVertexAttribP3ui(GLuint index, GLenum type, GLboolean normalized, GLuint value) { return HLFGL::Functions::s_fn_glVertexAttribP3ui(index, type, normalized, value); }
inline void glVertexAttribP3uiv(GLuint index, GLenum type, GLboolean normalized, const GLuint * value) { return HLFGL::Functions::s_fn_glVertexAttribP3uiv(index, type, normalized, value); }
inline void glVertexAttribP4ui(GLuint index, GLenum type, GLboolean normalized, GLuint value) { return HLFGL::Functions::s_fn_glVertexAttribP4ui(index, type, normalized, value); }
inline void glVertexAttribP4uiv(GLuint index, GLenum type, GLboolean normalized, const GLuint * value) { return HLFGL::Functions::s_fn_glVertexAttribP4uiv(index, type, normalized, value); }
inline void glVertexP2ui(GLenum type, GLuint value) { return HLFGL::Functions::s_fn_glVertexP2ui(type, value); }
inline void glVertexP2uiv(GLenum type, const GLuint * value) { return HLFGL::Functions::s_fn_glVertexP2uiv(type, value); }
inline void glVertexP3ui(GLenum type, GLuint value) { return HLFGL::Functions::s_fn_glVertexP3ui(type, value); }
inline void glVertexP3uiv(GLenum type, const GLuint * value) { return HLFGL::Functions::s_fn_glVertexP3uiv(type, value); }
inline void glVertexP4ui(GLenum type, GLuint value) { return HLFGL::Functions::s_fn_glVertexP4ui(type, value); }
inline void glVertexP4uiv(GLenum type, const GLuint * value) { return HLFGL::Functions::s_fn_glVertexP4uiv(type, value); }
inline void glTexCoordP1ui(GLenum type, GLuint coords) { return HLFGL::Functions::s_fn_glTexCoordP1ui(type, coords); }
inline void glTexCoordP1uiv(GLenum type, const GLuint * coords) { return HLFGL::Functions::s_fn_glTexCoordP1uiv(type, coords); }
inline void glTexCoordP2ui(GLenum type, GLuint coords) { return HLFGL::Functions::s_fn_glTexCoordP2ui(type, coords); }
inline void glTexCoordP2uiv(GLenum type, const GLuint * coords) { return HLFGL::Functions::s_fn_glTexCoordP2uiv(type, coords); }
inline void glTexCoordP3ui(GLenum type, GLuint coords) { return HLFGL::Functions::s_fn_glTexCoordP3ui(type, coords); }
inline void glTexCoordP3uiv(GLenum type, const GLuint * coords) { return HLFGL::Functions::s_fn_glTexCoordP3uiv(type, coords); }
inline void glTexCoordP4ui(GLenum type, GLuint coords) { return HLFGL::Functions::s_fn_glTexCoordP4ui(type, coords); }
inline void glTexCoordP4uiv(GLenum type, const GLuint * coords) { return HLFGL::Functions::s_fn_glTexCoordP4uiv(type, coords); }
inline void glMultiTexCoordP1ui(GLenum texture, GLenum type, GLuint coords) { return HLFGL::Functions::s_fn_glMultiTexCoordP1ui(texture, type, coords); }
inline void glMultiTexCoordP1uiv(GLenum texture, GLenum type, const GLuint * coords) { return HLFGL::Functions::s_fn_glMultiTexCoordP1uiv(texture, type, coords); }
inline void glMultiTexCoordP2ui(GLenum texture, GLenum type, GLuint coords) { return HLFGL::Functions::s_fn_glMultiTexCoordP2ui(texture, type, coords); }
inline void glMultiTexCoordP2uiv(GLenum texture, GLenum type, const GLuint * coords) { return HLFGL::Functions::s_fn_glMultiTexCoordP2uiv(texture, type, coords); }
inline void glMultiTexCoordP3ui(GLenum texture, GLenum type, GLuint coords) { return HLFGL::Functions::s_fn_glMultiTexCoordP3ui(texture, type, coords); }
inline void glMultiTexCoordP3uiv(GLenum texture, GLenum type, const GLuint * coords) { return HLFGL::Functions::s_fn_glMultiTexCoordP3uiv(texture, type, coords); }
inline void glMultiTexCoordP4ui(GLenum texture, GLenum type, GLuint coords) { return HLFGL::Functions::s_fn_glMultiTexCoordP4ui(texture, type, coords); }
inline void glMultiTexCoordP4uiv(GLenum texture, GLenum type, const GLuint * coords) { return HLFGL::Functions::s_fn_glMultiTexCoordP4uiv(texture, type, coords); }
inline void glNormalP3ui(GLenum type, GLuint coords) { return HLFGL::Functions::s_fn_glNormalP3ui(type, coords); }
inline void glNormalP3uiv(GLenum type, const GLuint * coords) { return HLFGL::Functions::s_fn_glNormalP3uiv(type, coords); }
inline void glColorP3ui(GLenum type, GLuint color) { return HLFGL::Functions::s_fn_glColorP3ui(type, color); }
inline void glColorP3uiv(GLenum type, const GLuint * color) { return HLFGL::Functions::s_fn_glColorP3uiv(type, color); }
inline void glColorP4ui(GLenum type, GLuint color) { return HLFGL::Functions::s_fn_glColorP4ui(type, color); }
inline void glColorP4uiv(GLenum type, const GLuint * color) { return HLFGL::Functions::s_fn_glColorP4uiv(type, color); }
inline void glSecondaryColorP3ui(GLenum type, GLuint color) { return HLFGL::Functions::s_fn_glSecondaryColorP3ui(type, color); }
inline void glSecondaryColorP3uiv(GLenum type, const GLuint * color) { return HLFGL::Functions::s_fn_glSecondaryColorP3uiv(type, color); }
#endif // GL_VERSION_3_3

namespace HLFGL::Functions {
	inline void Init_glCullFace(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glCullFace = (Fn_glCullFace)fn_GetFunctionAddress("glCullFace"); }
	inline void Init_glFrontFace(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glFrontFace = (Fn_glFrontFace)fn_GetFunctionAddress("glFrontFace"); }
	inline void Init_glHint(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glHint = (Fn_glHint)fn_GetFunctionAddress("glHint"); }
	inline void Init_glLineWidth(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glLineWidth = (Fn_glLineWidth)fn_GetFunctionAddress("glLineWidth"); }
	inline void Init_glPointSize(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glPointSize = (Fn_glPointSize)fn_GetFunctionAddress("glPointSize"); }
	inline void Init_glPolygonMode(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glPolygonMode = (Fn_glPolygonMode)fn_GetFunctionAddress("glPolygonMode"); }
	inline void Init_glScissor(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glScissor = (Fn_glScissor)fn_GetFunctionAddress("glScissor"); }
	inline void Init_glTexParameterf(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glTexParameterf = (Fn_glTexParameterf)fn_GetFunctionAddress("glTexParameterf"); }
	inline void Init_glTexParameterfv(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glTexParameterfv = (Fn_glTexParameterfv)fn_GetFunctionAddress("glTexParameterfv"); }
	inline void Init_glTexParameteri(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glTexParameteri = (Fn_glTexParameteri)fn_GetFunctionAddress("glTexParameteri"); }
	inline void Init_glTexParameteriv(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glTexParameteriv = (Fn_glTexParameteriv)fn_GetFunctionAddress("glTexParameteriv"); }
	inline void Init_glTexImage1D(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glTexImage1D = (Fn_glTexImage1D)fn_GetFunctionAddress("glTexImage1D"); }
	inline void Init_glTexImage2D(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glTexImage2D = (Fn_glTexImage2D)fn_GetFunctionAddress("glTexImage2D"); }
	inline void Init_glDrawBuffer(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glDrawBuffer = (Fn_glDrawBuffer)fn_GetFunctionAddress("glDrawBuffer"); }
	inline void Init_glClear(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glClear = (Fn_glClear)fn_GetFunctionAddress("glClear"); }
	inline void Init_glClearColor(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glClearColor = (Fn_glClearColor)fn_GetFunctionAddress("glClearColor"); }
	inline void Init_glClearStencil(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glClearStencil = (Fn_glClearStencil)fn_GetFunctionAddress("glClearStencil"); }
	inline void Init_glClearDepth(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glClearDepth = (Fn_glClearDepth)fn_GetFunctionAddress("glClearDepth"); }
	inline void Init_glStencilMask(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glStencilMask = (Fn_glStencilMask)fn_GetFunctionAddress("glStencilMask"); }
	inline void Init_glColorMask(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glColorMask = (Fn_glColorMask)fn_GetFunctionAddress("glColorMask"); }
	inline void Init_glDepthMask(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glDepthMask = (Fn_glDepthMask)fn_GetFunctionAddress("glDepthMask"); }
	inline void Init_glDisable(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glDisable = (Fn_glDisable)fn_GetFunctionAddress("glDisable"); }
	inline void Init_glEnable(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glEnable = (Fn_glEnable)fn_GetFunctionAddress("glEnable"); }
	inline void Init_glFinish(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glFinish = (Fn_glFinish)fn_GetFunctionAddress("glFinish"); }
	inline void Init_glFlush(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glFlush = (Fn_glFlush)fn_GetFunctionAddress("glFlush"); }
	inline void Init_glBlendFunc(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glBlendFunc = (Fn_glBlendFunc)fn_GetFunctionAddress("glBlendFunc"); }
	inline void Init_glLogicOp(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glLogicOp = (Fn_glLogicOp)fn_GetFunctionAddress("glLogicOp"); }
	inline void Init_glStencilFunc(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glStencilFunc = (Fn_glStencilFunc)fn_GetFunctionAddress("glStencilFunc"); }
	inline void Init_glStencilOp(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glStencilOp = (Fn_glStencilOp)fn_GetFunctionAddress("glStencilOp"); }
	inline void Init_glDepthFunc(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glDepthFunc = (Fn_glDepthFunc)fn_GetFunctionAddress("glDepthFunc"); }
	inline void Init_glPixelStoref(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glPixelStoref = (Fn_glPixelStoref)fn_GetFunctionAddress("glPixelStoref"); }
	inline void Init_glPixelStorei(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glPixelStorei = (Fn_glPixelStorei)fn_GetFunctionAddress("glPixelStorei"); }
	inline void Init_glReadBuffer(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glReadBuffer = (Fn_glReadBuffer)fn_GetFunctionAddress("glReadBuffer"); }
	inline void Init_glReadPixels(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glReadPixels = (Fn_glReadPixels)fn_GetFunctionAddress("glReadPixels"); }
	inline void Init_glGetBooleanv(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glGetBooleanv = (Fn_glGetBooleanv)fn_GetFunctionAddress("glGetBooleanv"); }
	inline void Init_glGetDoublev(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glGetDoublev = (Fn_glGetDoublev)fn_GetFunctionAddress("glGetDoublev"); }
	inline void Init_glGetError(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glGetError = (Fn_glGetError)fn_GetFunctionAddress("glGetError"); }
	inline void Init_glGetFloatv(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glGetFloatv = (Fn_glGetFloatv)fn_GetFunctionAddress("glGetFloatv"); }
	inline void Init_glGetIntegerv(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glGetIntegerv = (Fn_glGetIntegerv)fn_GetFunctionAddress("glGetIntegerv"); }
	inline void Init_glGetString(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glGetString = (Fn_glGetString)fn_GetFunctionAddress("glGetString"); }
	inline void Init_glGetTexImage(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glGetTexImage = (Fn_glGetTexImage)fn_GetFunctionAddress("glGetTexImage"); }
	inline void Init_glGetTexParameterfv(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glGetTexParameterfv = (Fn_glGetTexParameterfv)fn_GetFunctionAddress("glGetTexParameterfv"); }
	inline void Init_glGetTexParameteriv(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glGetTexParameteriv = (Fn_glGetTexParameteriv)fn_GetFunctionAddress("glGetTexParameteriv"); }
	inline void Init_glGetTexLevelParameterfv(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glGetTexLevelParameterfv = (Fn_glGetTexLevelParameterfv)fn_GetFunctionAddress("glGetTexLevelParameterfv"); }
	inline void Init_glGetTexLevelParameteriv(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glGetTexLevelParameteriv = (Fn_glGetTexLevelParameteriv)fn_GetFunctionAddress("glGetTexLevelParameteriv"); }
	inline void Init_glIsEnabled(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glIsEnabled = (Fn_glIsEnabled)fn_GetFunctionAddress("glIsEnabled"); }
	inline void Init_glDepthRange(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glDepthRange = (Fn_glDepthRange)fn_GetFunctionAddress("glDepthRange"); }
	inline void Init_glViewport(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glViewport = (Fn_glViewport)fn_GetFunctionAddress("glViewport"); }
	inline void Init_glNewList(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glNewList = (Fn_glNewList)fn_GetFunctionAddress("glNewList"); }
	inline void Init_glEndList(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glEndList = (Fn_glEndList)fn_GetFunctionAddress("glEndList"); }
	inline void Init_glCallList(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glCallList = (Fn_glCallList)fn_GetFunctionAddress("glCallList"); }
	inline void Init_glCallLists(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glCallLists = (Fn_glCallLists)fn_GetFunctionAddress("glCallLists"); }
	inline void Init_glDeleteLists(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glDeleteLists = (Fn_glDeleteLists)fn_GetFunctionAddress("glDeleteLists"); }
	inline void Init_glGenLists(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glGenLists = (Fn_glGenLists)fn_GetFunctionAddress("glGenLists"); }
	inline void Init_glListBase(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glListBase = (Fn_glListBase)fn_GetFunctionAddress("glListBase"); }
	inline void Init_glBegin(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glBegin = (Fn_glBegin)fn_GetFunctionAddress("glBegin"); }
	inline void Init_glBitmap(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glBitmap = (Fn_glBitmap)fn_GetFunctionAddress("glBitmap"); }
	inline void Init_glColor3b(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glColor3b = (Fn_glColor3b)fn_GetFunctionAddress("glColor3b"); }
	inline void Init_glColor3bv(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glColor3bv = (Fn_glColor3bv)fn_GetFunctionAddress("glColor3bv"); }
	inline void Init_glColor3d(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glColor3d = (Fn_glColor3d)fn_GetFunctionAddress("glColor3d"); }
	inline void Init_glColor3dv(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glColor3dv = (Fn_glColor3dv)fn_GetFunctionAddress("glColor3dv"); }
	inline void Init_glColor3f(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glColor3f = (Fn_glColor3f)fn_GetFunctionAddress("glColor3f"); }
	inline void Init_glColor3fv(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glColor3fv = (Fn_glColor3fv)fn_GetFunctionAddress("glColor3fv"); }
	inline void Init_glColor3i(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glColor3i = (Fn_glColor3i)fn_GetFunctionAddress("glColor3i"); }
	inline void Init_glColor3iv(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glColor3iv = (Fn_glColor3iv)fn_GetFunctionAddress("glColor3iv"); }
	inline void Init_glColor3s(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glColor3s = (Fn_glColor3s)fn_GetFunctionAddress("glColor3s"); }
	inline void Init_glColor3sv(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glColor3sv = (Fn_glColor3sv)fn_GetFunctionAddress("glColor3sv"); }
	inline void Init_glColor3ub(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glColor3ub = (Fn_glColor3ub)fn_GetFunctionAddress("glColor3ub"); }
	inline void Init_glColor3ubv(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glColor3ubv = (Fn_glColor3ubv)fn_GetFunctionAddress("glColor3ubv"); }
	inline void Init_glColor3ui(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glColor3ui = (Fn_glColor3ui)fn_GetFunctionAddress("glColor3ui"); }
	inline void Init_glColor3uiv(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glColor3uiv = (Fn_glColor3uiv)fn_GetFunctionAddress("glColor3uiv"); }
	inline void Init_glColor3us(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glColor3us = (Fn_glColor3us)fn_GetFunctionAddress("glColor3us"); }
	inline void Init_glColor3usv(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glColor3usv = (Fn_glColor3usv)fn_GetFunctionAddress("glColor3usv"); }
	inline void Init_glColor4b(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glColor4b = (Fn_glColor4b)fn_GetFunctionAddress("glColor4b"); }
	inline void Init_glColor4bv(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glColor4bv = (Fn_glColor4bv)fn_GetFunctionAddress("glColor4bv"); }
	inline void Init_glColor4d(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glColor4d = (Fn_glColor4d)fn_GetFunctionAddress("glColor4d"); }
	inline void Init_glColor4dv(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glColor4dv = (Fn_glColor4dv)fn_GetFunctionAddress("glColor4dv"); }
	inline void Init_glColor4f(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glColor4f = (Fn_glColor4f)fn_GetFunctionAddress("glColor4f"); }
	inline void Init_glColor4fv(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glColor4fv = (Fn_glColor4fv)fn_GetFunctionAddress("glColor4fv"); }
	inline void Init_glColor4i(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glColor4i = (Fn_glColor4i)fn_GetFunctionAddress("glColor4i"); }
	inline void Init_glColor4iv(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glColor4iv = (Fn_glColor4iv)fn_GetFunctionAddress("glColor4iv"); }
	inline void Init_glColor4s(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glColor4s = (Fn_glColor4s)fn_GetFunctionAddress("glColor4s"); }
	inline void Init_glColor4sv(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glColor4sv = (Fn_glColor4sv)fn_GetFunctionAddress("glColor4sv"); }
	inline void Init_glColor4ub(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glColor4ub = (Fn_glColor4ub)fn_GetFunctionAddress("glColor4ub"); }
	inline void Init_glColor4ubv(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glColor4ubv = (Fn_glColor4ubv)fn_GetFunctionAddress("glColor4ubv"); }
	inline void Init_glColor4ui(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glColor4ui = (Fn_glColor4ui)fn_GetFunctionAddress("glColor4ui"); }
	inline void Init_glColor4uiv(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glColor4uiv = (Fn_glColor4uiv)fn_GetFunctionAddress("glColor4uiv"); }
	inline void Init_glColor4us(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glColor4us = (Fn_glColor4us)fn_GetFunctionAddress("glColor4us"); }
	inline void Init_glColor4usv(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glColor4usv = (Fn_glColor4usv)fn_GetFunctionAddress("glColor4usv"); }
	inline void Init_glEdgeFlag(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glEdgeFlag = (Fn_glEdgeFlag)fn_GetFunctionAddress("glEdgeFlag"); }
	inline void Init_glEdgeFlagv(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glEdgeFlagv = (Fn_glEdgeFlagv)fn_GetFunctionAddress("glEdgeFlagv"); }
	inline void Init_glEnd(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glEnd = (Fn_glEnd)fn_GetFunctionAddress("glEnd"); }
	inline void Init_glIndexd(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glIndexd = (Fn_glIndexd)fn_GetFunctionAddress("glIndexd"); }
	inline void Init_glIndexdv(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glIndexdv = (Fn_glIndexdv)fn_GetFunctionAddress("glIndexdv"); }
	inline void Init_glIndexf(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glIndexf = (Fn_glIndexf)fn_GetFunctionAddress("glIndexf"); }
	inline void Init_glIndexfv(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glIndexfv = (Fn_glIndexfv)fn_GetFunctionAddress("glIndexfv"); }
	inline void Init_glIndexi(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glIndexi = (Fn_glIndexi)fn_GetFunctionAddress("glIndexi"); }
	inline void Init_glIndexiv(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glIndexiv = (Fn_glIndexiv)fn_GetFunctionAddress("glIndexiv"); }
	inline void Init_glIndexs(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glIndexs = (Fn_glIndexs)fn_GetFunctionAddress("glIndexs"); }
	inline void Init_glIndexsv(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glIndexsv = (Fn_glIndexsv)fn_GetFunctionAddress("glIndexsv"); }
	inline void Init_glNormal3b(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glNormal3b = (Fn_glNormal3b)fn_GetFunctionAddress("glNormal3b"); }
	inline void Init_glNormal3bv(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glNormal3bv = (Fn_glNormal3bv)fn_GetFunctionAddress("glNormal3bv"); }
	inline void Init_glNormal3d(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glNormal3d = (Fn_glNormal3d)fn_GetFunctionAddress("glNormal3d"); }
	inline void Init_glNormal3dv(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glNormal3dv = (Fn_glNormal3dv)fn_GetFunctionAddress("glNormal3dv"); }
	inline void Init_glNormal3f(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glNormal3f = (Fn_glNormal3f)fn_GetFunctionAddress("glNormal3f"); }
	inline void Init_glNormal3fv(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glNormal3fv = (Fn_glNormal3fv)fn_GetFunctionAddress("glNormal3fv"); }
	inline void Init_glNormal3i(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glNormal3i = (Fn_glNormal3i)fn_GetFunctionAddress("glNormal3i"); }
	inline void Init_glNormal3iv(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glNormal3iv = (Fn_glNormal3iv)fn_GetFunctionAddress("glNormal3iv"); }
	inline void Init_glNormal3s(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glNormal3s = (Fn_glNormal3s)fn_GetFunctionAddress("glNormal3s"); }
	inline void Init_glNormal3sv(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glNormal3sv = (Fn_glNormal3sv)fn_GetFunctionAddress("glNormal3sv"); }
	inline void Init_glRasterPos2d(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glRasterPos2d = (Fn_glRasterPos2d)fn_GetFunctionAddress("glRasterPos2d"); }
	inline void Init_glRasterPos2dv(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glRasterPos2dv = (Fn_glRasterPos2dv)fn_GetFunctionAddress("glRasterPos2dv"); }
	inline void Init_glRasterPos2f(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glRasterPos2f = (Fn_glRasterPos2f)fn_GetFunctionAddress("glRasterPos2f"); }
	inline void Init_glRasterPos2fv(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glRasterPos2fv = (Fn_glRasterPos2fv)fn_GetFunctionAddress("glRasterPos2fv"); }
	inline void Init_glRasterPos2i(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glRasterPos2i = (Fn_glRasterPos2i)fn_GetFunctionAddress("glRasterPos2i"); }
	inline void Init_glRasterPos2iv(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glRasterPos2iv = (Fn_glRasterPos2iv)fn_GetFunctionAddress("glRasterPos2iv"); }
	inline void Init_glRasterPos2s(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glRasterPos2s = (Fn_glRasterPos2s)fn_GetFunctionAddress("glRasterPos2s"); }
	inline void Init_glRasterPos2sv(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glRasterPos2sv = (Fn_glRasterPos2sv)fn_GetFunctionAddress("glRasterPos2sv"); }
	inline void Init_glRasterPos3d(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glRasterPos3d = (Fn_glRasterPos3d)fn_GetFunctionAddress("glRasterPos3d"); }
	inline void Init_glRasterPos3dv(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glRasterPos3dv = (Fn_glRasterPos3dv)fn_GetFunctionAddress("glRasterPos3dv"); }
	inline void Init_glRasterPos3f(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glRasterPos3f = (Fn_glRasterPos3f)fn_GetFunctionAddress("glRasterPos3f"); }
	inline void Init_glRasterPos3fv(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glRasterPos3fv = (Fn_glRasterPos3fv)fn_GetFunctionAddress("glRasterPos3fv"); }
	inline void Init_glRasterPos3i(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glRasterPos3i = (Fn_glRasterPos3i)fn_GetFunctionAddress("glRasterPos3i"); }
	inline void Init_glRasterPos3iv(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glRasterPos3iv = (Fn_glRasterPos3iv)fn_GetFunctionAddress("glRasterPos3iv"); }
	inline void Init_glRasterPos3s(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glRasterPos3s = (Fn_glRasterPos3s)fn_GetFunctionAddress("glRasterPos3s"); }
	inline void Init_glRasterPos3sv(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glRasterPos3sv = (Fn_glRasterPos3sv)fn_GetFunctionAddress("glRasterPos3sv"); }
	inline void Init_glRasterPos4d(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glRasterPos4d = (Fn_glRasterPos4d)fn_GetFunctionAddress("glRasterPos4d"); }
	inline void Init_glRasterPos4dv(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glRasterPos4dv = (Fn_glRasterPos4dv)fn_GetFunctionAddress("glRasterPos4dv"); }
	inline void Init_glRasterPos4f(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glRasterPos4f = (Fn_glRasterPos4f)fn_GetFunctionAddress("glRasterPos4f"); }
	inline void Init_glRasterPos4fv(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glRasterPos4fv = (Fn_glRasterPos4fv)fn_GetFunctionAddress("glRasterPos4fv"); }
	inline void Init_glRasterPos4i(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glRasterPos4i = (Fn_glRasterPos4i)fn_GetFunctionAddress("glRasterPos4i"); }
	inline void Init_glRasterPos4iv(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glRasterPos4iv = (Fn_glRasterPos4iv)fn_GetFunctionAddress("glRasterPos4iv"); }
	inline void Init_glRasterPos4s(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glRasterPos4s = (Fn_glRasterPos4s)fn_GetFunctionAddress("glRasterPos4s"); }
	inline void Init_glRasterPos4sv(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glRasterPos4sv = (Fn_glRasterPos4sv)fn_GetFunctionAddress("glRasterPos4sv"); }
	inline void Init_glRectd(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glRectd = (Fn_glRectd)fn_GetFunctionAddress("glRectd"); }
	inline void Init_glRectdv(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glRectdv = (Fn_glRectdv)fn_GetFunctionAddress("glRectdv"); }
	inline void Init_glRectf(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glRectf = (Fn_glRectf)fn_GetFunctionAddress("glRectf"); }
	inline void Init_glRectfv(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glRectfv = (Fn_glRectfv)fn_GetFunctionAddress("glRectfv"); }
	inline void Init_glRecti(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glRecti = (Fn_glRecti)fn_GetFunctionAddress("glRecti"); }
	inline void Init_glRectiv(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glRectiv = (Fn_glRectiv)fn_GetFunctionAddress("glRectiv"); }
	inline void Init_glRects(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glRects = (Fn_glRects)fn_GetFunctionAddress("glRects"); }
	inline void Init_glRectsv(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glRectsv = (Fn_glRectsv)fn_GetFunctionAddress("glRectsv"); }
	inline void Init_glTexCoord1d(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glTexCoord1d = (Fn_glTexCoord1d)fn_GetFunctionAddress("glTexCoord1d"); }
	inline void Init_glTexCoord1dv(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glTexCoord1dv = (Fn_glTexCoord1dv)fn_GetFunctionAddress("glTexCoord1dv"); }
	inline void Init_glTexCoord1f(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glTexCoord1f = (Fn_glTexCoord1f)fn_GetFunctionAddress("glTexCoord1f"); }
	inline void Init_glTexCoord1fv(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glTexCoord1fv = (Fn_glTexCoord1fv)fn_GetFunctionAddress("glTexCoord1fv"); }
	inline void Init_glTexCoord1i(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glTexCoord1i = (Fn_glTexCoord1i)fn_GetFunctionAddress("glTexCoord1i"); }
	inline void Init_glTexCoord1iv(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glTexCoord1iv = (Fn_glTexCoord1iv)fn_GetFunctionAddress("glTexCoord1iv"); }
	inline void Init_glTexCoord1s(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glTexCoord1s = (Fn_glTexCoord1s)fn_GetFunctionAddress("glTexCoord1s"); }
	inline void Init_glTexCoord1sv(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glTexCoord1sv = (Fn_glTexCoord1sv)fn_GetFunctionAddress("glTexCoord1sv"); }
	inline void Init_glTexCoord2d(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glTexCoord2d = (Fn_glTexCoord2d)fn_GetFunctionAddress("glTexCoord2d"); }
	inline void Init_glTexCoord2dv(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glTexCoord2dv = (Fn_glTexCoord2dv)fn_GetFunctionAddress("glTexCoord2dv"); }
	inline void Init_glTexCoord2f(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glTexCoord2f = (Fn_glTexCoord2f)fn_GetFunctionAddress("glTexCoord2f"); }
	inline void Init_glTexCoord2fv(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glTexCoord2fv = (Fn_glTexCoord2fv)fn_GetFunctionAddress("glTexCoord2fv"); }
	inline void Init_glTexCoord2i(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glTexCoord2i = (Fn_glTexCoord2i)fn_GetFunctionAddress("glTexCoord2i"); }
	inline void Init_glTexCoord2iv(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glTexCoord2iv = (Fn_glTexCoord2iv)fn_GetFunctionAddress("glTexCoord2iv"); }
	inline void Init_glTexCoord2s(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glTexCoord2s = (Fn_glTexCoord2s)fn_GetFunctionAddress("glTexCoord2s"); }
	inline void Init_glTexCoord2sv(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glTexCoord2sv = (Fn_glTexCoord2sv)fn_GetFunctionAddress("glTexCoord2sv"); }
	inline void Init_glTexCoord3d(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glTexCoord3d = (Fn_glTexCoord3d)fn_GetFunctionAddress("glTexCoord3d"); }
	inline void Init_glTexCoord3dv(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glTexCoord3dv = (Fn_glTexCoord3dv)fn_GetFunctionAddress("glTexCoord3dv"); }
	inline void Init_glTexCoord3f(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glTexCoord3f = (Fn_glTexCoord3f)fn_GetFunctionAddress("glTexCoord3f"); }
	inline void Init_glTexCoord3fv(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glTexCoord3fv = (Fn_glTexCoord3fv)fn_GetFunctionAddress("glTexCoord3fv"); }
	inline void Init_glTexCoord3i(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glTexCoord3i = (Fn_glTexCoord3i)fn_GetFunctionAddress("glTexCoord3i"); }
	inline void Init_glTexCoord3iv(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glTexCoord3iv = (Fn_glTexCoord3iv)fn_GetFunctionAddress("glTexCoord3iv"); }
	inline void Init_glTexCoord3s(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glTexCoord3s = (Fn_glTexCoord3s)fn_GetFunctionAddress("glTexCoord3s"); }
	inline void Init_glTexCoord3sv(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glTexCoord3sv = (Fn_glTexCoord3sv)fn_GetFunctionAddress("glTexCoord3sv"); }
	inline void Init_glTexCoord4d(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glTexCoord4d = (Fn_glTexCoord4d)fn_GetFunctionAddress("glTexCoord4d"); }
	inline void Init_glTexCoord4dv(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glTexCoord4dv = (Fn_glTexCoord4dv)fn_GetFunctionAddress("glTexCoord4dv"); }
	inline void Init_glTexCoord4f(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glTexCoord4f = (Fn_glTexCoord4f)fn_GetFunctionAddress("glTexCoord4f"); }
	inline void Init_glTexCoord4fv(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glTexCoord4fv = (Fn_glTexCoord4fv)fn_GetFunctionAddress("glTexCoord4fv"); }
	inline void Init_glTexCoord4i(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glTexCoord4i = (Fn_glTexCoord4i)fn_GetFunctionAddress("glTexCoord4i"); }
	inline void Init_glTexCoord4iv(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glTexCoord4iv = (Fn_glTexCoord4iv)fn_GetFunctionAddress("glTexCoord4iv"); }
	inline void Init_glTexCoord4s(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glTexCoord4s = (Fn_glTexCoord4s)fn_GetFunctionAddress("glTexCoord4s"); }
	inline void Init_glTexCoord4sv(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glTexCoord4sv = (Fn_glTexCoord4sv)fn_GetFunctionAddress("glTexCoord4sv"); }
	inline void Init_glVertex2d(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glVertex2d = (Fn_glVertex2d)fn_GetFunctionAddress("glVertex2d"); }
	inline void Init_glVertex2dv(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glVertex2dv = (Fn_glVertex2dv)fn_GetFunctionAddress("glVertex2dv"); }
	inline void Init_glVertex2f(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glVertex2f = (Fn_glVertex2f)fn_GetFunctionAddress("glVertex2f"); }
	inline void Init_glVertex2fv(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glVertex2fv = (Fn_glVertex2fv)fn_GetFunctionAddress("glVertex2fv"); }
	inline void Init_glVertex2i(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glVertex2i = (Fn_glVertex2i)fn_GetFunctionAddress("glVertex2i"); }
	inline void Init_glVertex2iv(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glVertex2iv = (Fn_glVertex2iv)fn_GetFunctionAddress("glVertex2iv"); }
	inline void Init_glVertex2s(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glVertex2s = (Fn_glVertex2s)fn_GetFunctionAddress("glVertex2s"); }
	inline void Init_glVertex2sv(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glVertex2sv = (Fn_glVertex2sv)fn_GetFunctionAddress("glVertex2sv"); }
	inline void Init_glVertex3d(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glVertex3d = (Fn_glVertex3d)fn_GetFunctionAddress("glVertex3d"); }
	inline void Init_glVertex3dv(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glVertex3dv = (Fn_glVertex3dv)fn_GetFunctionAddress("glVertex3dv"); }
	inline void Init_glVertex3f(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glVertex3f = (Fn_glVertex3f)fn_GetFunctionAddress("glVertex3f"); }
	inline void Init_glVertex3fv(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glVertex3fv = (Fn_glVertex3fv)fn_GetFunctionAddress("glVertex3fv"); }
	inline void Init_glVertex3i(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glVertex3i = (Fn_glVertex3i)fn_GetFunctionAddress("glVertex3i"); }
	inline void Init_glVertex3iv(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glVertex3iv = (Fn_glVertex3iv)fn_GetFunctionAddress("glVertex3iv"); }
	inline void Init_glVertex3s(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glVertex3s = (Fn_glVertex3s)fn_GetFunctionAddress("glVertex3s"); }
	inline void Init_glVertex3sv(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glVertex3sv = (Fn_glVertex3sv)fn_GetFunctionAddress("glVertex3sv"); }
	inline void Init_glVertex4d(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glVertex4d = (Fn_glVertex4d)fn_GetFunctionAddress("glVertex4d"); }
	inline void Init_glVertex4dv(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glVertex4dv = (Fn_glVertex4dv)fn_GetFunctionAddress("glVertex4dv"); }
	inline void Init_glVertex4f(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glVertex4f = (Fn_glVertex4f)fn_GetFunctionAddress("glVertex4f"); }
	inline void Init_glVertex4fv(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glVertex4fv = (Fn_glVertex4fv)fn_GetFunctionAddress("glVertex4fv"); }
	inline void Init_glVertex4i(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glVertex4i = (Fn_glVertex4i)fn_GetFunctionAddress("glVertex4i"); }
	inline void Init_glVertex4iv(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glVertex4iv = (Fn_glVertex4iv)fn_GetFunctionAddress("glVertex4iv"); }
	inline void Init_glVertex4s(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glVertex4s = (Fn_glVertex4s)fn_GetFunctionAddress("glVertex4s"); }
	inline void Init_glVertex4sv(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glVertex4sv = (Fn_glVertex4sv)fn_GetFunctionAddress("glVertex4sv"); }
	inline void Init_glClipPlane(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glClipPlane = (Fn_glClipPlane)fn_GetFunctionAddress("glClipPlane"); }
	inline void Init_glColorMaterial(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glColorMaterial = (Fn_glColorMaterial)fn_GetFunctionAddress("glColorMaterial"); }
	inline void Init_glFogf(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glFogf = (Fn_glFogf)fn_GetFunctionAddress("glFogf"); }
	inline void Init_glFogfv(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glFogfv = (Fn_glFogfv)fn_GetFunctionAddress("glFogfv"); }
	inline void Init_glFogi(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glFogi = (Fn_glFogi)fn_GetFunctionAddress("glFogi"); }
	inline void Init_glFogiv(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glFogiv = (Fn_glFogiv)fn_GetFunctionAddress("glFogiv"); }
	inline void Init_glLightf(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glLightf = (Fn_glLightf)fn_GetFunctionAddress("glLightf"); }
	inline void Init_glLightfv(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glLightfv = (Fn_glLightfv)fn_GetFunctionAddress("glLightfv"); }
	inline void Init_glLighti(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glLighti = (Fn_glLighti)fn_GetFunctionAddress("glLighti"); }
	inline void Init_glLightiv(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glLightiv = (Fn_glLightiv)fn_GetFunctionAddress("glLightiv"); }
	inline void Init_glLightModelf(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glLightModelf = (Fn_glLightModelf)fn_GetFunctionAddress("glLightModelf"); }
	inline void Init_glLightModelfv(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glLightModelfv = (Fn_glLightModelfv)fn_GetFunctionAddress("glLightModelfv"); }
	inline void Init_glLightModeli(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glLightModeli = (Fn_glLightModeli)fn_GetFunctionAddress("glLightModeli"); }
	inline void Init_glLightModeliv(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glLightModeliv = (Fn_glLightModeliv)fn_GetFunctionAddress("glLightModeliv"); }
	inline void Init_glLineStipple(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glLineStipple = (Fn_glLineStipple)fn_GetFunctionAddress("glLineStipple"); }
	inline void Init_glMaterialf(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glMaterialf = (Fn_glMaterialf)fn_GetFunctionAddress("glMaterialf"); }
	inline void Init_glMaterialfv(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glMaterialfv = (Fn_glMaterialfv)fn_GetFunctionAddress("glMaterialfv"); }
	inline void Init_glMateriali(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glMateriali = (Fn_glMateriali)fn_GetFunctionAddress("glMateriali"); }
	inline void Init_glMaterialiv(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glMaterialiv = (Fn_glMaterialiv)fn_GetFunctionAddress("glMaterialiv"); }
	inline void Init_glPolygonStipple(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glPolygonStipple = (Fn_glPolygonStipple)fn_GetFunctionAddress("glPolygonStipple"); }
	inline void Init_glShadeModel(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glShadeModel = (Fn_glShadeModel)fn_GetFunctionAddress("glShadeModel"); }
	inline void Init_glTexEnvf(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glTexEnvf = (Fn_glTexEnvf)fn_GetFunctionAddress("glTexEnvf"); }
	inline void Init_glTexEnvfv(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glTexEnvfv = (Fn_glTexEnvfv)fn_GetFunctionAddress("glTexEnvfv"); }
	inline void Init_glTexEnvi(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glTexEnvi = (Fn_glTexEnvi)fn_GetFunctionAddress("glTexEnvi"); }
	inline void Init_glTexEnviv(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glTexEnviv = (Fn_glTexEnviv)fn_GetFunctionAddress("glTexEnviv"); }
	inline void Init_glTexGend(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glTexGend = (Fn_glTexGend)fn_GetFunctionAddress("glTexGend"); }
	inline void Init_glTexGendv(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glTexGendv = (Fn_glTexGendv)fn_GetFunctionAddress("glTexGendv"); }
	inline void Init_glTexGenf(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glTexGenf = (Fn_glTexGenf)fn_GetFunctionAddress("glTexGenf"); }
	inline void Init_glTexGenfv(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glTexGenfv = (Fn_glTexGenfv)fn_GetFunctionAddress("glTexGenfv"); }
	inline void Init_glTexGeni(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glTexGeni = (Fn_glTexGeni)fn_GetFunctionAddress("glTexGeni"); }
	inline void Init_glTexGeniv(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glTexGeniv = (Fn_glTexGeniv)fn_GetFunctionAddress("glTexGeniv"); }
	inline void Init_glFeedbackBuffer(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glFeedbackBuffer = (Fn_glFeedbackBuffer)fn_GetFunctionAddress("glFeedbackBuffer"); }
	inline void Init_glSelectBuffer(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glSelectBuffer = (Fn_glSelectBuffer)fn_GetFunctionAddress("glSelectBuffer"); }
	inline void Init_glRenderMode(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glRenderMode = (Fn_glRenderMode)fn_GetFunctionAddress("glRenderMode"); }
	inline void Init_glInitNames(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glInitNames = (Fn_glInitNames)fn_GetFunctionAddress("glInitNames"); }
	inline void Init_glLoadName(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glLoadName = (Fn_glLoadName)fn_GetFunctionAddress("glLoadName"); }
	inline void Init_glPassThrough(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glPassThrough = (Fn_glPassThrough)fn_GetFunctionAddress("glPassThrough"); }
	inline void Init_glPopName(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glPopName = (Fn_glPopName)fn_GetFunctionAddress("glPopName"); }
	inline void Init_glPushName(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glPushName = (Fn_glPushName)fn_GetFunctionAddress("glPushName"); }
	inline void Init_glClearAccum(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glClearAccum = (Fn_glClearAccum)fn_GetFunctionAddress("glClearAccum"); }
	inline void Init_glClearIndex(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glClearIndex = (Fn_glClearIndex)fn_GetFunctionAddress("glClearIndex"); }
	inline void Init_glIndexMask(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glIndexMask = (Fn_glIndexMask)fn_GetFunctionAddress("glIndexMask"); }
	inline void Init_glAccum(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glAccum = (Fn_glAccum)fn_GetFunctionAddress("glAccum"); }
	inline void Init_glPopAttrib(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glPopAttrib = (Fn_glPopAttrib)fn_GetFunctionAddress("glPopAttrib"); }
	inline void Init_glPushAttrib(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glPushAttrib = (Fn_glPushAttrib)fn_GetFunctionAddress("glPushAttrib"); }
	inline void Init_glMap1d(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glMap1d = (Fn_glMap1d)fn_GetFunctionAddress("glMap1d"); }
	inline void Init_glMap1f(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glMap1f = (Fn_glMap1f)fn_GetFunctionAddress("glMap1f"); }
	inline void Init_glMap2d(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glMap2d = (Fn_glMap2d)fn_GetFunctionAddress("glMap2d"); }
	inline void Init_glMap2f(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glMap2f = (Fn_glMap2f)fn_GetFunctionAddress("glMap2f"); }
	inline void Init_glMapGrid1d(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glMapGrid1d = (Fn_glMapGrid1d)fn_GetFunctionAddress("glMapGrid1d"); }
	inline void Init_glMapGrid1f(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glMapGrid1f = (Fn_glMapGrid1f)fn_GetFunctionAddress("glMapGrid1f"); }
	inline void Init_glMapGrid2d(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glMapGrid2d = (Fn_glMapGrid2d)fn_GetFunctionAddress("glMapGrid2d"); }
	inline void Init_glMapGrid2f(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glMapGrid2f = (Fn_glMapGrid2f)fn_GetFunctionAddress("glMapGrid2f"); }
	inline void Init_glEvalCoord1d(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glEvalCoord1d = (Fn_glEvalCoord1d)fn_GetFunctionAddress("glEvalCoord1d"); }
	inline void Init_glEvalCoord1dv(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glEvalCoord1dv = (Fn_glEvalCoord1dv)fn_GetFunctionAddress("glEvalCoord1dv"); }
	inline void Init_glEvalCoord1f(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glEvalCoord1f = (Fn_glEvalCoord1f)fn_GetFunctionAddress("glEvalCoord1f"); }
	inline void Init_glEvalCoord1fv(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glEvalCoord1fv = (Fn_glEvalCoord1fv)fn_GetFunctionAddress("glEvalCoord1fv"); }
	inline void Init_glEvalCoord2d(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glEvalCoord2d = (Fn_glEvalCoord2d)fn_GetFunctionAddress("glEvalCoord2d"); }
	inline void Init_glEvalCoord2dv(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glEvalCoord2dv = (Fn_glEvalCoord2dv)fn_GetFunctionAddress("glEvalCoord2dv"); }
	inline void Init_glEvalCoord2f(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glEvalCoord2f = (Fn_glEvalCoord2f)fn_GetFunctionAddress("glEvalCoord2f"); }
	inline void Init_glEvalCoord2fv(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glEvalCoord2fv = (Fn_glEvalCoord2fv)fn_GetFunctionAddress("glEvalCoord2fv"); }
	inline void Init_glEvalMesh1(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glEvalMesh1 = (Fn_glEvalMesh1)fn_GetFunctionAddress("glEvalMesh1"); }
	inline void Init_glEvalPoint1(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glEvalPoint1 = (Fn_glEvalPoint1)fn_GetFunctionAddress("glEvalPoint1"); }
	inline void Init_glEvalMesh2(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glEvalMesh2 = (Fn_glEvalMesh2)fn_GetFunctionAddress("glEvalMesh2"); }
	inline void Init_glEvalPoint2(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glEvalPoint2 = (Fn_glEvalPoint2)fn_GetFunctionAddress("glEvalPoint2"); }
	inline void Init_glAlphaFunc(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glAlphaFunc = (Fn_glAlphaFunc)fn_GetFunctionAddress("glAlphaFunc"); }
	inline void Init_glPixelZoom(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glPixelZoom = (Fn_glPixelZoom)fn_GetFunctionAddress("glPixelZoom"); }
	inline void Init_glPixelTransferf(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glPixelTransferf = (Fn_glPixelTransferf)fn_GetFunctionAddress("glPixelTransferf"); }
	inline void Init_glPixelTransferi(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glPixelTransferi = (Fn_glPixelTransferi)fn_GetFunctionAddress("glPixelTransferi"); }
	inline void Init_glPixelMapfv(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glPixelMapfv = (Fn_glPixelMapfv)fn_GetFunctionAddress("glPixelMapfv"); }
	inline void Init_glPixelMapuiv(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glPixelMapuiv = (Fn_glPixelMapuiv)fn_GetFunctionAddress("glPixelMapuiv"); }
	inline void Init_glPixelMapusv(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glPixelMapusv = (Fn_glPixelMapusv)fn_GetFunctionAddress("glPixelMapusv"); }
	inline void Init_glCopyPixels(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glCopyPixels = (Fn_glCopyPixels)fn_GetFunctionAddress("glCopyPixels"); }
	inline void Init_glDrawPixels(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glDrawPixels = (Fn_glDrawPixels)fn_GetFunctionAddress("glDrawPixels"); }
	inline void Init_glGetClipPlane(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glGetClipPlane = (Fn_glGetClipPlane)fn_GetFunctionAddress("glGetClipPlane"); }
	inline void Init_glGetLightfv(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glGetLightfv = (Fn_glGetLightfv)fn_GetFunctionAddress("glGetLightfv"); }
	inline void Init_glGetLightiv(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glGetLightiv = (Fn_glGetLightiv)fn_GetFunctionAddress("glGetLightiv"); }
	inline void Init_glGetMapdv(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glGetMapdv = (Fn_glGetMapdv)fn_GetFunctionAddress("glGetMapdv"); }
	inline void Init_glGetMapfv(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glGetMapfv = (Fn_glGetMapfv)fn_GetFunctionAddress("glGetMapfv"); }
	inline void Init_glGetMapiv(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glGetMapiv = (Fn_glGetMapiv)fn_GetFunctionAddress("glGetMapiv"); }
	inline void Init_glGetMaterialfv(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glGetMaterialfv = (Fn_glGetMaterialfv)fn_GetFunctionAddress("glGetMaterialfv"); }
	inline void Init_glGetMaterialiv(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glGetMaterialiv = (Fn_glGetMaterialiv)fn_GetFunctionAddress("glGetMaterialiv"); }
	inline void Init_glGetPixelMapfv(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glGetPixelMapfv = (Fn_glGetPixelMapfv)fn_GetFunctionAddress("glGetPixelMapfv"); }
	inline void Init_glGetPixelMapuiv(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glGetPixelMapuiv = (Fn_glGetPixelMapuiv)fn_GetFunctionAddress("glGetPixelMapuiv"); }
	inline void Init_glGetPixelMapusv(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glGetPixelMapusv = (Fn_glGetPixelMapusv)fn_GetFunctionAddress("glGetPixelMapusv"); }
	inline void Init_glGetPolygonStipple(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glGetPolygonStipple = (Fn_glGetPolygonStipple)fn_GetFunctionAddress("glGetPolygonStipple"); }
	inline void Init_glGetTexEnvfv(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glGetTexEnvfv = (Fn_glGetTexEnvfv)fn_GetFunctionAddress("glGetTexEnvfv"); }
	inline void Init_glGetTexEnviv(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glGetTexEnviv = (Fn_glGetTexEnviv)fn_GetFunctionAddress("glGetTexEnviv"); }
	inline void Init_glGetTexGendv(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glGetTexGendv = (Fn_glGetTexGendv)fn_GetFunctionAddress("glGetTexGendv"); }
	inline void Init_glGetTexGenfv(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glGetTexGenfv = (Fn_glGetTexGenfv)fn_GetFunctionAddress("glGetTexGenfv"); }
	inline void Init_glGetTexGeniv(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glGetTexGeniv = (Fn_glGetTexGeniv)fn_GetFunctionAddress("glGetTexGeniv"); }
	inline void Init_glIsList(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glIsList = (Fn_glIsList)fn_GetFunctionAddress("glIsList"); }
	inline void Init_glFrustum(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glFrustum = (Fn_glFrustum)fn_GetFunctionAddress("glFrustum"); }
	inline void Init_glLoadIdentity(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glLoadIdentity = (Fn_glLoadIdentity)fn_GetFunctionAddress("glLoadIdentity"); }
	inline void Init_glLoadMatrixf(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glLoadMatrixf = (Fn_glLoadMatrixf)fn_GetFunctionAddress("glLoadMatrixf"); }
	inline void Init_glLoadMatrixd(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glLoadMatrixd = (Fn_glLoadMatrixd)fn_GetFunctionAddress("glLoadMatrixd"); }
	inline void Init_glMatrixMode(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glMatrixMode = (Fn_glMatrixMode)fn_GetFunctionAddress("glMatrixMode"); }
	inline void Init_glMultMatrixf(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glMultMatrixf = (Fn_glMultMatrixf)fn_GetFunctionAddress("glMultMatrixf"); }
	inline void Init_glMultMatrixd(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glMultMatrixd = (Fn_glMultMatrixd)fn_GetFunctionAddress("glMultMatrixd"); }
	inline void Init_glOrtho(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glOrtho = (Fn_glOrtho)fn_GetFunctionAddress("glOrtho"); }
	inline void Init_glPopMatrix(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glPopMatrix = (Fn_glPopMatrix)fn_GetFunctionAddress("glPopMatrix"); }
	inline void Init_glPushMatrix(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glPushMatrix = (Fn_glPushMatrix)fn_GetFunctionAddress("glPushMatrix"); }
	inline void Init_glRotated(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glRotated = (Fn_glRotated)fn_GetFunctionAddress("glRotated"); }
	inline void Init_glRotatef(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glRotatef = (Fn_glRotatef)fn_GetFunctionAddress("glRotatef"); }
	inline void Init_glScaled(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glScaled = (Fn_glScaled)fn_GetFunctionAddress("glScaled"); }
	inline void Init_glScalef(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glScalef = (Fn_glScalef)fn_GetFunctionAddress("glScalef"); }
	inline void Init_glTranslated(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glTranslated = (Fn_glTranslated)fn_GetFunctionAddress("glTranslated"); }
	inline void Init_glTranslatef(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glTranslatef = (Fn_glTranslatef)fn_GetFunctionAddress("glTranslatef"); }
	inline void Init_glDrawArrays(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glDrawArrays = (Fn_glDrawArrays)fn_GetFunctionAddress("glDrawArrays"); }
	inline void Init_glDrawElements(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glDrawElements = (Fn_glDrawElements)fn_GetFunctionAddress("glDrawElements"); }
	inline void Init_glGetPointerv(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glGetPointerv = (Fn_glGetPointerv)fn_GetFunctionAddress("glGetPointerv"); }
	inline void Init_glPolygonOffset(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glPolygonOffset = (Fn_glPolygonOffset)fn_GetFunctionAddress("glPolygonOffset"); }
	inline void Init_glCopyTexImage1D(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glCopyTexImage1D = (Fn_glCopyTexImage1D)fn_GetFunctionAddress("glCopyTexImage1D"); }
	inline void Init_glCopyTexImage2D(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glCopyTexImage2D = (Fn_glCopyTexImage2D)fn_GetFunctionAddress("glCopyTexImage2D"); }
	inline void Init_glCopyTexSubImage1D(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glCopyTexSubImage1D = (Fn_glCopyTexSubImage1D)fn_GetFunctionAddress("glCopyTexSubImage1D"); }
	inline void Init_glCopyTexSubImage2D(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glCopyTexSubImage2D = (Fn_glCopyTexSubImage2D)fn_GetFunctionAddress("glCopyTexSubImage2D"); }
	inline void Init_glTexSubImage1D(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glTexSubImage1D = (Fn_glTexSubImage1D)fn_GetFunctionAddress("glTexSubImage1D"); }
	inline void Init_glTexSubImage2D(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glTexSubImage2D = (Fn_glTexSubImage2D)fn_GetFunctionAddress("glTexSubImage2D"); }
	inline void Init_glBindTexture(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glBindTexture = (Fn_glBindTexture)fn_GetFunctionAddress("glBindTexture"); }
	inline void Init_glDeleteTextures(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glDeleteTextures = (Fn_glDeleteTextures)fn_GetFunctionAddress("glDeleteTextures"); }
	inline void Init_glGenTextures(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glGenTextures = (Fn_glGenTextures)fn_GetFunctionAddress("glGenTextures"); }
	inline void Init_glIsTexture(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glIsTexture = (Fn_glIsTexture)fn_GetFunctionAddress("glIsTexture"); }
	inline void Init_glArrayElement(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glArrayElement = (Fn_glArrayElement)fn_GetFunctionAddress("glArrayElement"); }
	inline void Init_glColorPointer(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glColorPointer = (Fn_glColorPointer)fn_GetFunctionAddress("glColorPointer"); }
	inline void Init_glDisableClientState(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glDisableClientState = (Fn_glDisableClientState)fn_GetFunctionAddress("glDisableClientState"); }
	inline void Init_glEdgeFlagPointer(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glEdgeFlagPointer = (Fn_glEdgeFlagPointer)fn_GetFunctionAddress("glEdgeFlagPointer"); }
	inline void Init_glEnableClientState(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glEnableClientState = (Fn_glEnableClientState)fn_GetFunctionAddress("glEnableClientState"); }
	inline void Init_glIndexPointer(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glIndexPointer = (Fn_glIndexPointer)fn_GetFunctionAddress("glIndexPointer"); }
	inline void Init_glInterleavedArrays(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glInterleavedArrays = (Fn_glInterleavedArrays)fn_GetFunctionAddress("glInterleavedArrays"); }
	inline void Init_glNormalPointer(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glNormalPointer = (Fn_glNormalPointer)fn_GetFunctionAddress("glNormalPointer"); }
	inline void Init_glTexCoordPointer(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glTexCoordPointer = (Fn_glTexCoordPointer)fn_GetFunctionAddress("glTexCoordPointer"); }
	inline void Init_glVertexPointer(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glVertexPointer = (Fn_glVertexPointer)fn_GetFunctionAddress("glVertexPointer"); }
	inline void Init_glAreTexturesResident(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glAreTexturesResident = (Fn_glAreTexturesResident)fn_GetFunctionAddress("glAreTexturesResident"); }
	inline void Init_glPrioritizeTextures(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glPrioritizeTextures = (Fn_glPrioritizeTextures)fn_GetFunctionAddress("glPrioritizeTextures"); }
	inline void Init_glIndexub(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glIndexub = (Fn_glIndexub)fn_GetFunctionAddress("glIndexub"); }
	inline void Init_glIndexubv(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glIndexubv = (Fn_glIndexubv)fn_GetFunctionAddress("glIndexubv"); }
	inline void Init_glPopClientAttrib(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glPopClientAttrib = (Fn_glPopClientAttrib)fn_GetFunctionAddress("glPopClientAttrib"); }
	inline void Init_glPushClientAttrib(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glPushClientAttrib = (Fn_glPushClientAttrib)fn_GetFunctionAddress("glPushClientAttrib"); }
	inline void Init_glDrawRangeElements(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glDrawRangeElements = (Fn_glDrawRangeElements)fn_GetFunctionAddress("glDrawRangeElements"); }
	inline void Init_glTexImage3D(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glTexImage3D = (Fn_glTexImage3D)fn_GetFunctionAddress("glTexImage3D"); }
	inline void Init_glTexSubImage3D(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glTexSubImage3D = (Fn_glTexSubImage3D)fn_GetFunctionAddress("glTexSubImage3D"); }
	inline void Init_glCopyTexSubImage3D(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glCopyTexSubImage3D = (Fn_glCopyTexSubImage3D)fn_GetFunctionAddress("glCopyTexSubImage3D"); }
	inline void Init_glActiveTexture(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glActiveTexture = (Fn_glActiveTexture)fn_GetFunctionAddress("glActiveTexture"); }
	inline void Init_glSampleCoverage(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glSampleCoverage = (Fn_glSampleCoverage)fn_GetFunctionAddress("glSampleCoverage"); }
	inline void Init_glCompressedTexImage3D(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glCompressedTexImage3D = (Fn_glCompressedTexImage3D)fn_GetFunctionAddress("glCompressedTexImage3D"); }
	inline void Init_glCompressedTexImage2D(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glCompressedTexImage2D = (Fn_glCompressedTexImage2D)fn_GetFunctionAddress("glCompressedTexImage2D"); }
	inline void Init_glCompressedTexImage1D(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glCompressedTexImage1D = (Fn_glCompressedTexImage1D)fn_GetFunctionAddress("glCompressedTexImage1D"); }
	inline void Init_glCompressedTexSubImage3D(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glCompressedTexSubImage3D = (Fn_glCompressedTexSubImage3D)fn_GetFunctionAddress("glCompressedTexSubImage3D"); }
	inline void Init_glCompressedTexSubImage2D(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glCompressedTexSubImage2D = (Fn_glCompressedTexSubImage2D)fn_GetFunctionAddress("glCompressedTexSubImage2D"); }
	inline void Init_glCompressedTexSubImage1D(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glCompressedTexSubImage1D = (Fn_glCompressedTexSubImage1D)fn_GetFunctionAddress("glCompressedTexSubImage1D"); }
	inline void Init_glGetCompressedTexImage(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glGetCompressedTexImage = (Fn_glGetCompressedTexImage)fn_GetFunctionAddress("glGetCompressedTexImage"); }
	inline void Init_glClientActiveTexture(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glClientActiveTexture = (Fn_glClientActiveTexture)fn_GetFunctionAddress("glClientActiveTexture"); }
	inline void Init_glMultiTexCoord1d(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glMultiTexCoord1d = (Fn_glMultiTexCoord1d)fn_GetFunctionAddress("glMultiTexCoord1d"); }
	inline void Init_glMultiTexCoord1dv(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glMultiTexCoord1dv = (Fn_glMultiTexCoord1dv)fn_GetFunctionAddress("glMultiTexCoord1dv"); }
	inline void Init_glMultiTexCoord1f(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glMultiTexCoord1f = (Fn_glMultiTexCoord1f)fn_GetFunctionAddress("glMultiTexCoord1f"); }
	inline void Init_glMultiTexCoord1fv(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glMultiTexCoord1fv = (Fn_glMultiTexCoord1fv)fn_GetFunctionAddress("glMultiTexCoord1fv"); }
	inline void Init_glMultiTexCoord1i(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glMultiTexCoord1i = (Fn_glMultiTexCoord1i)fn_GetFunctionAddress("glMultiTexCoord1i"); }
	inline void Init_glMultiTexCoord1iv(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glMultiTexCoord1iv = (Fn_glMultiTexCoord1iv)fn_GetFunctionAddress("glMultiTexCoord1iv"); }
	inline void Init_glMultiTexCoord1s(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glMultiTexCoord1s = (Fn_glMultiTexCoord1s)fn_GetFunctionAddress("glMultiTexCoord1s"); }
	inline void Init_glMultiTexCoord1sv(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glMultiTexCoord1sv = (Fn_glMultiTexCoord1sv)fn_GetFunctionAddress("glMultiTexCoord1sv"); }
	inline void Init_glMultiTexCoord2d(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glMultiTexCoord2d = (Fn_glMultiTexCoord2d)fn_GetFunctionAddress("glMultiTexCoord2d"); }
	inline void Init_glMultiTexCoord2dv(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glMultiTexCoord2dv = (Fn_glMultiTexCoord2dv)fn_GetFunctionAddress("glMultiTexCoord2dv"); }
	inline void Init_glMultiTexCoord2f(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glMultiTexCoord2f = (Fn_glMultiTexCoord2f)fn_GetFunctionAddress("glMultiTexCoord2f"); }
	inline void Init_glMultiTexCoord2fv(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glMultiTexCoord2fv = (Fn_glMultiTexCoord2fv)fn_GetFunctionAddress("glMultiTexCoord2fv"); }
	inline void Init_glMultiTexCoord2i(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glMultiTexCoord2i = (Fn_glMultiTexCoord2i)fn_GetFunctionAddress("glMultiTexCoord2i"); }
	inline void Init_glMultiTexCoord2iv(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glMultiTexCoord2iv = (Fn_glMultiTexCoord2iv)fn_GetFunctionAddress("glMultiTexCoord2iv"); }
	inline void Init_glMultiTexCoord2s(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glMultiTexCoord2s = (Fn_glMultiTexCoord2s)fn_GetFunctionAddress("glMultiTexCoord2s"); }
	inline void Init_glMultiTexCoord2sv(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glMultiTexCoord2sv = (Fn_glMultiTexCoord2sv)fn_GetFunctionAddress("glMultiTexCoord2sv"); }
	inline void Init_glMultiTexCoord3d(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glMultiTexCoord3d = (Fn_glMultiTexCoord3d)fn_GetFunctionAddress("glMultiTexCoord3d"); }
	inline void Init_glMultiTexCoord3dv(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glMultiTexCoord3dv = (Fn_glMultiTexCoord3dv)fn_GetFunctionAddress("glMultiTexCoord3dv"); }
	inline void Init_glMultiTexCoord3f(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glMultiTexCoord3f = (Fn_glMultiTexCoord3f)fn_GetFunctionAddress("glMultiTexCoord3f"); }
	inline void Init_glMultiTexCoord3fv(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glMultiTexCoord3fv = (Fn_glMultiTexCoord3fv)fn_GetFunctionAddress("glMultiTexCoord3fv"); }
	inline void Init_glMultiTexCoord3i(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glMultiTexCoord3i = (Fn_glMultiTexCoord3i)fn_GetFunctionAddress("glMultiTexCoord3i"); }
	inline void Init_glMultiTexCoord3iv(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glMultiTexCoord3iv = (Fn_glMultiTexCoord3iv)fn_GetFunctionAddress("glMultiTexCoord3iv"); }
	inline void Init_glMultiTexCoord3s(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glMultiTexCoord3s = (Fn_glMultiTexCoord3s)fn_GetFunctionAddress("glMultiTexCoord3s"); }
	inline void Init_glMultiTexCoord3sv(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glMultiTexCoord3sv = (Fn_glMultiTexCoord3sv)fn_GetFunctionAddress("glMultiTexCoord3sv"); }
	inline void Init_glMultiTexCoord4d(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glMultiTexCoord4d = (Fn_glMultiTexCoord4d)fn_GetFunctionAddress("glMultiTexCoord4d"); }
	inline void Init_glMultiTexCoord4dv(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glMultiTexCoord4dv = (Fn_glMultiTexCoord4dv)fn_GetFunctionAddress("glMultiTexCoord4dv"); }
	inline void Init_glMultiTexCoord4f(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glMultiTexCoord4f = (Fn_glMultiTexCoord4f)fn_GetFunctionAddress("glMultiTexCoord4f"); }
	inline void Init_glMultiTexCoord4fv(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glMultiTexCoord4fv = (Fn_glMultiTexCoord4fv)fn_GetFunctionAddress("glMultiTexCoord4fv"); }
	inline void Init_glMultiTexCoord4i(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glMultiTexCoord4i = (Fn_glMultiTexCoord4i)fn_GetFunctionAddress("glMultiTexCoord4i"); }
	inline void Init_glMultiTexCoord4iv(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glMultiTexCoord4iv = (Fn_glMultiTexCoord4iv)fn_GetFunctionAddress("glMultiTexCoord4iv"); }
	inline void Init_glMultiTexCoord4s(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glMultiTexCoord4s = (Fn_glMultiTexCoord4s)fn_GetFunctionAddress("glMultiTexCoord4s"); }
	inline void Init_glMultiTexCoord4sv(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glMultiTexCoord4sv = (Fn_glMultiTexCoord4sv)fn_GetFunctionAddress("glMultiTexCoord4sv"); }
	inline void Init_glLoadTransposeMatrixf(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glLoadTransposeMatrixf = (Fn_glLoadTransposeMatrixf)fn_GetFunctionAddress("glLoadTransposeMatrixf"); }
	inline void Init_glLoadTransposeMatrixd(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glLoadTransposeMatrixd = (Fn_glLoadTransposeMatrixd)fn_GetFunctionAddress("glLoadTransposeMatrixd"); }
	inline void Init_glMultTransposeMatrixf(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glMultTransposeMatrixf = (Fn_glMultTransposeMatrixf)fn_GetFunctionAddress("glMultTransposeMatrixf"); }
	inline void Init_glMultTransposeMatrixd(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glMultTransposeMatrixd = (Fn_glMultTransposeMatrixd)fn_GetFunctionAddress("glMultTransposeMatrixd"); }
	inline void Init_glBlendFuncSeparate(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glBlendFuncSeparate = (Fn_glBlendFuncSeparate)fn_GetFunctionAddress("glBlendFuncSeparate"); }
	inline void Init_glMultiDrawArrays(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glMultiDrawArrays = (Fn_glMultiDrawArrays)fn_GetFunctionAddress("glMultiDrawArrays"); }
	inline void Init_glMultiDrawElements(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glMultiDrawElements = (Fn_glMultiDrawElements)fn_GetFunctionAddress("glMultiDrawElements"); }
	inline void Init_glPointParameterf(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glPointParameterf = (Fn_glPointParameterf)fn_GetFunctionAddress("glPointParameterf"); }
	inline void Init_glPointParameterfv(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glPointParameterfv = (Fn_glPointParameterfv)fn_GetFunctionAddress("glPointParameterfv"); }
	inline void Init_glPointParameteri(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glPointParameteri = (Fn_glPointParameteri)fn_GetFunctionAddress("glPointParameteri"); }
	inline void Init_glPointParameteriv(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glPointParameteriv = (Fn_glPointParameteriv)fn_GetFunctionAddress("glPointParameteriv"); }
	inline void Init_glFogCoordf(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glFogCoordf = (Fn_glFogCoordf)fn_GetFunctionAddress("glFogCoordf"); }
	inline void Init_glFogCoordfv(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glFogCoordfv = (Fn_glFogCoordfv)fn_GetFunctionAddress("glFogCoordfv"); }
	inline void Init_glFogCoordd(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glFogCoordd = (Fn_glFogCoordd)fn_GetFunctionAddress("glFogCoordd"); }
	inline void Init_glFogCoorddv(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glFogCoorddv = (Fn_glFogCoorddv)fn_GetFunctionAddress("glFogCoorddv"); }
	inline void Init_glFogCoordPointer(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glFogCoordPointer = (Fn_glFogCoordPointer)fn_GetFunctionAddress("glFogCoordPointer"); }
	inline void Init_glSecondaryColor3b(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glSecondaryColor3b = (Fn_glSecondaryColor3b)fn_GetFunctionAddress("glSecondaryColor3b"); }
	inline void Init_glSecondaryColor3bv(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glSecondaryColor3bv = (Fn_glSecondaryColor3bv)fn_GetFunctionAddress("glSecondaryColor3bv"); }
	inline void Init_glSecondaryColor3d(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glSecondaryColor3d = (Fn_glSecondaryColor3d)fn_GetFunctionAddress("glSecondaryColor3d"); }
	inline void Init_glSecondaryColor3dv(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glSecondaryColor3dv = (Fn_glSecondaryColor3dv)fn_GetFunctionAddress("glSecondaryColor3dv"); }
	inline void Init_glSecondaryColor3f(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glSecondaryColor3f = (Fn_glSecondaryColor3f)fn_GetFunctionAddress("glSecondaryColor3f"); }
	inline void Init_glSecondaryColor3fv(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glSecondaryColor3fv = (Fn_glSecondaryColor3fv)fn_GetFunctionAddress("glSecondaryColor3fv"); }
	inline void Init_glSecondaryColor3i(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glSecondaryColor3i = (Fn_glSecondaryColor3i)fn_GetFunctionAddress("glSecondaryColor3i"); }
	inline void Init_glSecondaryColor3iv(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glSecondaryColor3iv = (Fn_glSecondaryColor3iv)fn_GetFunctionAddress("glSecondaryColor3iv"); }
	inline void Init_glSecondaryColor3s(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glSecondaryColor3s = (Fn_glSecondaryColor3s)fn_GetFunctionAddress("glSecondaryColor3s"); }
	inline void Init_glSecondaryColor3sv(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glSecondaryColor3sv = (Fn_glSecondaryColor3sv)fn_GetFunctionAddress("glSecondaryColor3sv"); }
	inline void Init_glSecondaryColor3ub(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glSecondaryColor3ub = (Fn_glSecondaryColor3ub)fn_GetFunctionAddress("glSecondaryColor3ub"); }
	inline void Init_glSecondaryColor3ubv(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glSecondaryColor3ubv = (Fn_glSecondaryColor3ubv)fn_GetFunctionAddress("glSecondaryColor3ubv"); }
	inline void Init_glSecondaryColor3ui(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glSecondaryColor3ui = (Fn_glSecondaryColor3ui)fn_GetFunctionAddress("glSecondaryColor3ui"); }
	inline void Init_glSecondaryColor3uiv(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glSecondaryColor3uiv = (Fn_glSecondaryColor3uiv)fn_GetFunctionAddress("glSecondaryColor3uiv"); }
	inline void Init_glSecondaryColor3us(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glSecondaryColor3us = (Fn_glSecondaryColor3us)fn_GetFunctionAddress("glSecondaryColor3us"); }
	inline void Init_glSecondaryColor3usv(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glSecondaryColor3usv = (Fn_glSecondaryColor3usv)fn_GetFunctionAddress("glSecondaryColor3usv"); }
	inline void Init_glSecondaryColorPointer(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glSecondaryColorPointer = (Fn_glSecondaryColorPointer)fn_GetFunctionAddress("glSecondaryColorPointer"); }
	inline void Init_glWindowPos2d(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glWindowPos2d = (Fn_glWindowPos2d)fn_GetFunctionAddress("glWindowPos2d"); }
	inline void Init_glWindowPos2dv(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glWindowPos2dv = (Fn_glWindowPos2dv)fn_GetFunctionAddress("glWindowPos2dv"); }
	inline void Init_glWindowPos2f(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glWindowPos2f = (Fn_glWindowPos2f)fn_GetFunctionAddress("glWindowPos2f"); }
	inline void Init_glWindowPos2fv(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glWindowPos2fv = (Fn_glWindowPos2fv)fn_GetFunctionAddress("glWindowPos2fv"); }
	inline void Init_glWindowPos2i(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glWindowPos2i = (Fn_glWindowPos2i)fn_GetFunctionAddress("glWindowPos2i"); }
	inline void Init_glWindowPos2iv(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glWindowPos2iv = (Fn_glWindowPos2iv)fn_GetFunctionAddress("glWindowPos2iv"); }
	inline void Init_glWindowPos2s(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glWindowPos2s = (Fn_glWindowPos2s)fn_GetFunctionAddress("glWindowPos2s"); }
	inline void Init_glWindowPos2sv(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glWindowPos2sv = (Fn_glWindowPos2sv)fn_GetFunctionAddress("glWindowPos2sv"); }
	inline void Init_glWindowPos3d(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glWindowPos3d = (Fn_glWindowPos3d)fn_GetFunctionAddress("glWindowPos3d"); }
	inline void Init_glWindowPos3dv(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glWindowPos3dv = (Fn_glWindowPos3dv)fn_GetFunctionAddress("glWindowPos3dv"); }
	inline void Init_glWindowPos3f(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glWindowPos3f = (Fn_glWindowPos3f)fn_GetFunctionAddress("glWindowPos3f"); }
	inline void Init_glWindowPos3fv(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glWindowPos3fv = (Fn_glWindowPos3fv)fn_GetFunctionAddress("glWindowPos3fv"); }
	inline void Init_glWindowPos3i(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glWindowPos3i = (Fn_glWindowPos3i)fn_GetFunctionAddress("glWindowPos3i"); }
	inline void Init_glWindowPos3iv(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glWindowPos3iv = (Fn_glWindowPos3iv)fn_GetFunctionAddress("glWindowPos3iv"); }
	inline void Init_glWindowPos3s(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glWindowPos3s = (Fn_glWindowPos3s)fn_GetFunctionAddress("glWindowPos3s"); }
	inline void Init_glWindowPos3sv(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glWindowPos3sv = (Fn_glWindowPos3sv)fn_GetFunctionAddress("glWindowPos3sv"); }
	inline void Init_glBlendColor(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glBlendColor = (Fn_glBlendColor)fn_GetFunctionAddress("glBlendColor"); }
	inline void Init_glBlendEquation(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glBlendEquation = (Fn_glBlendEquation)fn_GetFunctionAddress("glBlendEquation"); }
	inline void Init_glGenQueries(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glGenQueries = (Fn_glGenQueries)fn_GetFunctionAddress("glGenQueries"); }
	inline void Init_glDeleteQueries(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glDeleteQueries = (Fn_glDeleteQueries)fn_GetFunctionAddress("glDeleteQueries"); }
	inline void Init_glIsQuery(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glIsQuery = (Fn_glIsQuery)fn_GetFunctionAddress("glIsQuery"); }
	inline void Init_glBeginQuery(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glBeginQuery = (Fn_glBeginQuery)fn_GetFunctionAddress("glBeginQuery"); }
	inline void Init_glEndQuery(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glEndQuery = (Fn_glEndQuery)fn_GetFunctionAddress("glEndQuery"); }
	inline void Init_glGetQueryiv(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glGetQueryiv = (Fn_glGetQueryiv)fn_GetFunctionAddress("glGetQueryiv"); }
	inline void Init_glGetQueryObjectiv(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glGetQueryObjectiv = (Fn_glGetQueryObjectiv)fn_GetFunctionAddress("glGetQueryObjectiv"); }
	inline void Init_glGetQueryObjectuiv(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glGetQueryObjectuiv = (Fn_glGetQueryObjectuiv)fn_GetFunctionAddress("glGetQueryObjectuiv"); }
	inline void Init_glBindBuffer(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glBindBuffer = (Fn_glBindBuffer)fn_GetFunctionAddress("glBindBuffer"); }
	inline void Init_glDeleteBuffers(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glDeleteBuffers = (Fn_glDeleteBuffers)fn_GetFunctionAddress("glDeleteBuffers"); }
	inline void Init_glGenBuffers(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glGenBuffers = (Fn_glGenBuffers)fn_GetFunctionAddress("glGenBuffers"); }
	inline void Init_glIsBuffer(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glIsBuffer = (Fn_glIsBuffer)fn_GetFunctionAddress("glIsBuffer"); }
	inline void Init_glBufferData(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glBufferData = (Fn_glBufferData)fn_GetFunctionAddress("glBufferData"); }
	inline void Init_glBufferSubData(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glBufferSubData = (Fn_glBufferSubData)fn_GetFunctionAddress("glBufferSubData"); }
	inline void Init_glGetBufferSubData(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glGetBufferSubData = (Fn_glGetBufferSubData)fn_GetFunctionAddress("glGetBufferSubData"); }
	inline void Init_glMapBuffer(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glMapBuffer = (Fn_glMapBuffer)fn_GetFunctionAddress("glMapBuffer"); }
	inline void Init_glUnmapBuffer(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glUnmapBuffer = (Fn_glUnmapBuffer)fn_GetFunctionAddress("glUnmapBuffer"); }
	inline void Init_glGetBufferParameteriv(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glGetBufferParameteriv = (Fn_glGetBufferParameteriv)fn_GetFunctionAddress("glGetBufferParameteriv"); }
	inline void Init_glGetBufferPointerv(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glGetBufferPointerv = (Fn_glGetBufferPointerv)fn_GetFunctionAddress("glGetBufferPointerv"); }
	inline void Init_glBlendEquationSeparate(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glBlendEquationSeparate = (Fn_glBlendEquationSeparate)fn_GetFunctionAddress("glBlendEquationSeparate"); }
	inline void Init_glDrawBuffers(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glDrawBuffers = (Fn_glDrawBuffers)fn_GetFunctionAddress("glDrawBuffers"); }
	inline void Init_glStencilOpSeparate(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glStencilOpSeparate = (Fn_glStencilOpSeparate)fn_GetFunctionAddress("glStencilOpSeparate"); }
	inline void Init_glStencilFuncSeparate(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glStencilFuncSeparate = (Fn_glStencilFuncSeparate)fn_GetFunctionAddress("glStencilFuncSeparate"); }
	inline void Init_glStencilMaskSeparate(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glStencilMaskSeparate = (Fn_glStencilMaskSeparate)fn_GetFunctionAddress("glStencilMaskSeparate"); }
	inline void Init_glAttachShader(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glAttachShader = (Fn_glAttachShader)fn_GetFunctionAddress("glAttachShader"); }
	inline void Init_glBindAttribLocation(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glBindAttribLocation = (Fn_glBindAttribLocation)fn_GetFunctionAddress("glBindAttribLocation"); }
	inline void Init_glCompileShader(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glCompileShader = (Fn_glCompileShader)fn_GetFunctionAddress("glCompileShader"); }
	inline void Init_glCreateProgram(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glCreateProgram = (Fn_glCreateProgram)fn_GetFunctionAddress("glCreateProgram"); }
	inline void Init_glCreateShader(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glCreateShader = (Fn_glCreateShader)fn_GetFunctionAddress("glCreateShader"); }
	inline void Init_glDeleteProgram(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glDeleteProgram = (Fn_glDeleteProgram)fn_GetFunctionAddress("glDeleteProgram"); }
	inline void Init_glDeleteShader(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glDeleteShader = (Fn_glDeleteShader)fn_GetFunctionAddress("glDeleteShader"); }
	inline void Init_glDetachShader(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glDetachShader = (Fn_glDetachShader)fn_GetFunctionAddress("glDetachShader"); }
	inline void Init_glDisableVertexAttribArray(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glDisableVertexAttribArray = (Fn_glDisableVertexAttribArray)fn_GetFunctionAddress("glDisableVertexAttribArray"); }
	inline void Init_glEnableVertexAttribArray(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glEnableVertexAttribArray = (Fn_glEnableVertexAttribArray)fn_GetFunctionAddress("glEnableVertexAttribArray"); }
	inline void Init_glGetActiveAttrib(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glGetActiveAttrib = (Fn_glGetActiveAttrib)fn_GetFunctionAddress("glGetActiveAttrib"); }
	inline void Init_glGetActiveUniform(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glGetActiveUniform = (Fn_glGetActiveUniform)fn_GetFunctionAddress("glGetActiveUniform"); }
	inline void Init_glGetAttachedShaders(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glGetAttachedShaders = (Fn_glGetAttachedShaders)fn_GetFunctionAddress("glGetAttachedShaders"); }
	inline void Init_glGetAttribLocation(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glGetAttribLocation = (Fn_glGetAttribLocation)fn_GetFunctionAddress("glGetAttribLocation"); }
	inline void Init_glGetProgramiv(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glGetProgramiv = (Fn_glGetProgramiv)fn_GetFunctionAddress("glGetProgramiv"); }
	inline void Init_glGetProgramInfoLog(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glGetProgramInfoLog = (Fn_glGetProgramInfoLog)fn_GetFunctionAddress("glGetProgramInfoLog"); }
	inline void Init_glGetShaderiv(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glGetShaderiv = (Fn_glGetShaderiv)fn_GetFunctionAddress("glGetShaderiv"); }
	inline void Init_glGetShaderInfoLog(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glGetShaderInfoLog = (Fn_glGetShaderInfoLog)fn_GetFunctionAddress("glGetShaderInfoLog"); }
	inline void Init_glGetShaderSource(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glGetShaderSource = (Fn_glGetShaderSource)fn_GetFunctionAddress("glGetShaderSource"); }
	inline void Init_glGetUniformLocation(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glGetUniformLocation = (Fn_glGetUniformLocation)fn_GetFunctionAddress("glGetUniformLocation"); }
	inline void Init_glGetUniformfv(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glGetUniformfv = (Fn_glGetUniformfv)fn_GetFunctionAddress("glGetUniformfv"); }
	inline void Init_glGetUniformiv(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glGetUniformiv = (Fn_glGetUniformiv)fn_GetFunctionAddress("glGetUniformiv"); }
	inline void Init_glGetVertexAttribdv(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glGetVertexAttribdv = (Fn_glGetVertexAttribdv)fn_GetFunctionAddress("glGetVertexAttribdv"); }
	inline void Init_glGetVertexAttribfv(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glGetVertexAttribfv = (Fn_glGetVertexAttribfv)fn_GetFunctionAddress("glGetVertexAttribfv"); }
	inline void Init_glGetVertexAttribiv(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glGetVertexAttribiv = (Fn_glGetVertexAttribiv)fn_GetFunctionAddress("glGetVertexAttribiv"); }
	inline void Init_glGetVertexAttribPointerv(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glGetVertexAttribPointerv = (Fn_glGetVertexAttribPointerv)fn_GetFunctionAddress("glGetVertexAttribPointerv"); }
	inline void Init_glIsProgram(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glIsProgram = (Fn_glIsProgram)fn_GetFunctionAddress("glIsProgram"); }
	inline void Init_glIsShader(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glIsShader = (Fn_glIsShader)fn_GetFunctionAddress("glIsShader"); }
	inline void Init_glLinkProgram(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glLinkProgram = (Fn_glLinkProgram)fn_GetFunctionAddress("glLinkProgram"); }
	inline void Init_glShaderSource(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glShaderSource = (Fn_glShaderSource)fn_GetFunctionAddress("glShaderSource"); }
	inline void Init_glUseProgram(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glUseProgram = (Fn_glUseProgram)fn_GetFunctionAddress("glUseProgram"); }
	inline void Init_glUniform1f(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glUniform1f = (Fn_glUniform1f)fn_GetFunctionAddress("glUniform1f"); }
	inline void Init_glUniform2f(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glUniform2f = (Fn_glUniform2f)fn_GetFunctionAddress("glUniform2f"); }
	inline void Init_glUniform3f(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glUniform3f = (Fn_glUniform3f)fn_GetFunctionAddress("glUniform3f"); }
	inline void Init_glUniform4f(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glUniform4f = (Fn_glUniform4f)fn_GetFunctionAddress("glUniform4f"); }
	inline void Init_glUniform1i(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glUniform1i = (Fn_glUniform1i)fn_GetFunctionAddress("glUniform1i"); }
	inline void Init_glUniform2i(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glUniform2i = (Fn_glUniform2i)fn_GetFunctionAddress("glUniform2i"); }
	inline void Init_glUniform3i(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glUniform3i = (Fn_glUniform3i)fn_GetFunctionAddress("glUniform3i"); }
	inline void Init_glUniform4i(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glUniform4i = (Fn_glUniform4i)fn_GetFunctionAddress("glUniform4i"); }
	inline void Init_glUniform1fv(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glUniform1fv = (Fn_glUniform1fv)fn_GetFunctionAddress("glUniform1fv"); }
	inline void Init_glUniform2fv(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glUniform2fv = (Fn_glUniform2fv)fn_GetFunctionAddress("glUniform2fv"); }
	inline void Init_glUniform3fv(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glUniform3fv = (Fn_glUniform3fv)fn_GetFunctionAddress("glUniform3fv"); }
	inline void Init_glUniform4fv(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glUniform4fv = (Fn_glUniform4fv)fn_GetFunctionAddress("glUniform4fv"); }
	inline void Init_glUniform1iv(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glUniform1iv = (Fn_glUniform1iv)fn_GetFunctionAddress("glUniform1iv"); }
	inline void Init_glUniform2iv(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glUniform2iv = (Fn_glUniform2iv)fn_GetFunctionAddress("glUniform2iv"); }
	inline void Init_glUniform3iv(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glUniform3iv = (Fn_glUniform3iv)fn_GetFunctionAddress("glUniform3iv"); }
	inline void Init_glUniform4iv(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glUniform4iv = (Fn_glUniform4iv)fn_GetFunctionAddress("glUniform4iv"); }
	inline void Init_glUniformMatrix2fv(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glUniformMatrix2fv = (Fn_glUniformMatrix2fv)fn_GetFunctionAddress("glUniformMatrix2fv"); }
	inline void Init_glUniformMatrix3fv(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glUniformMatrix3fv = (Fn_glUniformMatrix3fv)fn_GetFunctionAddress("glUniformMatrix3fv"); }
	inline void Init_glUniformMatrix4fv(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glUniformMatrix4fv = (Fn_glUniformMatrix4fv)fn_GetFunctionAddress("glUniformMatrix4fv"); }
	inline void Init_glValidateProgram(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glValidateProgram = (Fn_glValidateProgram)fn_GetFunctionAddress("glValidateProgram"); }
	inline void Init_glVertexAttrib1d(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glVertexAttrib1d = (Fn_glVertexAttrib1d)fn_GetFunctionAddress("glVertexAttrib1d"); }
	inline void Init_glVertexAttrib1dv(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glVertexAttrib1dv = (Fn_glVertexAttrib1dv)fn_GetFunctionAddress("glVertexAttrib1dv"); }
	inline void Init_glVertexAttrib1f(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glVertexAttrib1f = (Fn_glVertexAttrib1f)fn_GetFunctionAddress("glVertexAttrib1f"); }
	inline void Init_glVertexAttrib1fv(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glVertexAttrib1fv = (Fn_glVertexAttrib1fv)fn_GetFunctionAddress("glVertexAttrib1fv"); }
	inline void Init_glVertexAttrib1s(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glVertexAttrib1s = (Fn_glVertexAttrib1s)fn_GetFunctionAddress("glVertexAttrib1s"); }
	inline void Init_glVertexAttrib1sv(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glVertexAttrib1sv = (Fn_glVertexAttrib1sv)fn_GetFunctionAddress("glVertexAttrib1sv"); }
	inline void Init_glVertexAttrib2d(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glVertexAttrib2d = (Fn_glVertexAttrib2d)fn_GetFunctionAddress("glVertexAttrib2d"); }
	inline void Init_glVertexAttrib2dv(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glVertexAttrib2dv = (Fn_glVertexAttrib2dv)fn_GetFunctionAddress("glVertexAttrib2dv"); }
	inline void Init_glVertexAttrib2f(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glVertexAttrib2f = (Fn_glVertexAttrib2f)fn_GetFunctionAddress("glVertexAttrib2f"); }
	inline void Init_glVertexAttrib2fv(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glVertexAttrib2fv = (Fn_glVertexAttrib2fv)fn_GetFunctionAddress("glVertexAttrib2fv"); }
	inline void Init_glVertexAttrib2s(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glVertexAttrib2s = (Fn_glVertexAttrib2s)fn_GetFunctionAddress("glVertexAttrib2s"); }
	inline void Init_glVertexAttrib2sv(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glVertexAttrib2sv = (Fn_glVertexAttrib2sv)fn_GetFunctionAddress("glVertexAttrib2sv"); }
	inline void Init_glVertexAttrib3d(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glVertexAttrib3d = (Fn_glVertexAttrib3d)fn_GetFunctionAddress("glVertexAttrib3d"); }
	inline void Init_glVertexAttrib3dv(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glVertexAttrib3dv = (Fn_glVertexAttrib3dv)fn_GetFunctionAddress("glVertexAttrib3dv"); }
	inline void Init_glVertexAttrib3f(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glVertexAttrib3f = (Fn_glVertexAttrib3f)fn_GetFunctionAddress("glVertexAttrib3f"); }
	inline void Init_glVertexAttrib3fv(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glVertexAttrib3fv = (Fn_glVertexAttrib3fv)fn_GetFunctionAddress("glVertexAttrib3fv"); }
	inline void Init_glVertexAttrib3s(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glVertexAttrib3s = (Fn_glVertexAttrib3s)fn_GetFunctionAddress("glVertexAttrib3s"); }
	inline void Init_glVertexAttrib3sv(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glVertexAttrib3sv = (Fn_glVertexAttrib3sv)fn_GetFunctionAddress("glVertexAttrib3sv"); }
	inline void Init_glVertexAttrib4Nbv(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glVertexAttrib4Nbv = (Fn_glVertexAttrib4Nbv)fn_GetFunctionAddress("glVertexAttrib4Nbv"); }
	inline void Init_glVertexAttrib4Niv(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glVertexAttrib4Niv = (Fn_glVertexAttrib4Niv)fn_GetFunctionAddress("glVertexAttrib4Niv"); }
	inline void Init_glVertexAttrib4Nsv(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glVertexAttrib4Nsv = (Fn_glVertexAttrib4Nsv)fn_GetFunctionAddress("glVertexAttrib4Nsv"); }
	inline void Init_glVertexAttrib4Nub(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glVertexAttrib4Nub = (Fn_glVertexAttrib4Nub)fn_GetFunctionAddress("glVertexAttrib4Nub"); }
	inline void Init_glVertexAttrib4Nubv(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glVertexAttrib4Nubv = (Fn_glVertexAttrib4Nubv)fn_GetFunctionAddress("glVertexAttrib4Nubv"); }
	inline void Init_glVertexAttrib4Nuiv(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glVertexAttrib4Nuiv = (Fn_glVertexAttrib4Nuiv)fn_GetFunctionAddress("glVertexAttrib4Nuiv"); }
	inline void Init_glVertexAttrib4Nusv(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glVertexAttrib4Nusv = (Fn_glVertexAttrib4Nusv)fn_GetFunctionAddress("glVertexAttrib4Nusv"); }
	inline void Init_glVertexAttrib4bv(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glVertexAttrib4bv = (Fn_glVertexAttrib4bv)fn_GetFunctionAddress("glVertexAttrib4bv"); }
	inline void Init_glVertexAttrib4d(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glVertexAttrib4d = (Fn_glVertexAttrib4d)fn_GetFunctionAddress("glVertexAttrib4d"); }
	inline void Init_glVertexAttrib4dv(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glVertexAttrib4dv = (Fn_glVertexAttrib4dv)fn_GetFunctionAddress("glVertexAttrib4dv"); }
	inline void Init_glVertexAttrib4f(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glVertexAttrib4f = (Fn_glVertexAttrib4f)fn_GetFunctionAddress("glVertexAttrib4f"); }
	inline void Init_glVertexAttrib4fv(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glVertexAttrib4fv = (Fn_glVertexAttrib4fv)fn_GetFunctionAddress("glVertexAttrib4fv"); }
	inline void Init_glVertexAttrib4iv(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glVertexAttrib4iv = (Fn_glVertexAttrib4iv)fn_GetFunctionAddress("glVertexAttrib4iv"); }
	inline void Init_glVertexAttrib4s(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glVertexAttrib4s = (Fn_glVertexAttrib4s)fn_GetFunctionAddress("glVertexAttrib4s"); }
	inline void Init_glVertexAttrib4sv(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glVertexAttrib4sv = (Fn_glVertexAttrib4sv)fn_GetFunctionAddress("glVertexAttrib4sv"); }
	inline void Init_glVertexAttrib4ubv(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glVertexAttrib4ubv = (Fn_glVertexAttrib4ubv)fn_GetFunctionAddress("glVertexAttrib4ubv"); }
	inline void Init_glVertexAttrib4uiv(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glVertexAttrib4uiv = (Fn_glVertexAttrib4uiv)fn_GetFunctionAddress("glVertexAttrib4uiv"); }
	inline void Init_glVertexAttrib4usv(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glVertexAttrib4usv = (Fn_glVertexAttrib4usv)fn_GetFunctionAddress("glVertexAttrib4usv"); }
	inline void Init_glVertexAttribPointer(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glVertexAttribPointer = (Fn_glVertexAttribPointer)fn_GetFunctionAddress("glVertexAttribPointer"); }
	inline void Init_glUniformMatrix2x3fv(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glUniformMatrix2x3fv = (Fn_glUniformMatrix2x3fv)fn_GetFunctionAddress("glUniformMatrix2x3fv"); }
	inline void Init_glUniformMatrix3x2fv(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glUniformMatrix3x2fv = (Fn_glUniformMatrix3x2fv)fn_GetFunctionAddress("glUniformMatrix3x2fv"); }
	inline void Init_glUniformMatrix2x4fv(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glUniformMatrix2x4fv = (Fn_glUniformMatrix2x4fv)fn_GetFunctionAddress("glUniformMatrix2x4fv"); }
	inline void Init_glUniformMatrix4x2fv(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glUniformMatrix4x2fv = (Fn_glUniformMatrix4x2fv)fn_GetFunctionAddress("glUniformMatrix4x2fv"); }
	inline void Init_glUniformMatrix3x4fv(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glUniformMatrix3x4fv = (Fn_glUniformMatrix3x4fv)fn_GetFunctionAddress("glUniformMatrix3x4fv"); }
	inline void Init_glUniformMatrix4x3fv(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glUniformMatrix4x3fv = (Fn_glUniformMatrix4x3fv)fn_GetFunctionAddress("glUniformMatrix4x3fv"); }
	inline void Init_glColorMaski(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glColorMaski = (Fn_glColorMaski)fn_GetFunctionAddress("glColorMaski"); }
	inline void Init_glGetBooleani_v(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glGetBooleani_v = (Fn_glGetBooleani_v)fn_GetFunctionAddress("glGetBooleani_v"); }
	inline void Init_glGetIntegeri_v(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glGetIntegeri_v = (Fn_glGetIntegeri_v)fn_GetFunctionAddress("glGetIntegeri_v"); }
	inline void Init_glEnablei(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glEnablei = (Fn_glEnablei)fn_GetFunctionAddress("glEnablei"); }
	inline void Init_glDisablei(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glDisablei = (Fn_glDisablei)fn_GetFunctionAddress("glDisablei"); }
	inline void Init_glIsEnabledi(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glIsEnabledi = (Fn_glIsEnabledi)fn_GetFunctionAddress("glIsEnabledi"); }
	inline void Init_glBeginTransformFeedback(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glBeginTransformFeedback = (Fn_glBeginTransformFeedback)fn_GetFunctionAddress("glBeginTransformFeedback"); }
	inline void Init_glEndTransformFeedback(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glEndTransformFeedback = (Fn_glEndTransformFeedback)fn_GetFunctionAddress("glEndTransformFeedback"); }
	inline void Init_glBindBufferRange(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glBindBufferRange = (Fn_glBindBufferRange)fn_GetFunctionAddress("glBindBufferRange"); }
	inline void Init_glBindBufferBase(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glBindBufferBase = (Fn_glBindBufferBase)fn_GetFunctionAddress("glBindBufferBase"); }
	inline void Init_glTransformFeedbackVaryings(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glTransformFeedbackVaryings = (Fn_glTransformFeedbackVaryings)fn_GetFunctionAddress("glTransformFeedbackVaryings"); }
	inline void Init_glGetTransformFeedbackVarying(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glGetTransformFeedbackVarying = (Fn_glGetTransformFeedbackVarying)fn_GetFunctionAddress("glGetTransformFeedbackVarying"); }
	inline void Init_glClampColor(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glClampColor = (Fn_glClampColor)fn_GetFunctionAddress("glClampColor"); }
	inline void Init_glBeginConditionalRender(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glBeginConditionalRender = (Fn_glBeginConditionalRender)fn_GetFunctionAddress("glBeginConditionalRender"); }
	inline void Init_glEndConditionalRender(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glEndConditionalRender = (Fn_glEndConditionalRender)fn_GetFunctionAddress("glEndConditionalRender"); }
	inline void Init_glVertexAttribIPointer(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glVertexAttribIPointer = (Fn_glVertexAttribIPointer)fn_GetFunctionAddress("glVertexAttribIPointer"); }
	inline void Init_glGetVertexAttribIiv(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glGetVertexAttribIiv = (Fn_glGetVertexAttribIiv)fn_GetFunctionAddress("glGetVertexAttribIiv"); }
	inline void Init_glGetVertexAttribIuiv(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glGetVertexAttribIuiv = (Fn_glGetVertexAttribIuiv)fn_GetFunctionAddress("glGetVertexAttribIuiv"); }
	inline void Init_glVertexAttribI1i(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glVertexAttribI1i = (Fn_glVertexAttribI1i)fn_GetFunctionAddress("glVertexAttribI1i"); }
	inline void Init_glVertexAttribI2i(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glVertexAttribI2i = (Fn_glVertexAttribI2i)fn_GetFunctionAddress("glVertexAttribI2i"); }
	inline void Init_glVertexAttribI3i(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glVertexAttribI3i = (Fn_glVertexAttribI3i)fn_GetFunctionAddress("glVertexAttribI3i"); }
	inline void Init_glVertexAttribI4i(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glVertexAttribI4i = (Fn_glVertexAttribI4i)fn_GetFunctionAddress("glVertexAttribI4i"); }
	inline void Init_glVertexAttribI1ui(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glVertexAttribI1ui = (Fn_glVertexAttribI1ui)fn_GetFunctionAddress("glVertexAttribI1ui"); }
	inline void Init_glVertexAttribI2ui(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glVertexAttribI2ui = (Fn_glVertexAttribI2ui)fn_GetFunctionAddress("glVertexAttribI2ui"); }
	inline void Init_glVertexAttribI3ui(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glVertexAttribI3ui = (Fn_glVertexAttribI3ui)fn_GetFunctionAddress("glVertexAttribI3ui"); }
	inline void Init_glVertexAttribI4ui(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glVertexAttribI4ui = (Fn_glVertexAttribI4ui)fn_GetFunctionAddress("glVertexAttribI4ui"); }
	inline void Init_glVertexAttribI1iv(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glVertexAttribI1iv = (Fn_glVertexAttribI1iv)fn_GetFunctionAddress("glVertexAttribI1iv"); }
	inline void Init_glVertexAttribI2iv(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glVertexAttribI2iv = (Fn_glVertexAttribI2iv)fn_GetFunctionAddress("glVertexAttribI2iv"); }
	inline void Init_glVertexAttribI3iv(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glVertexAttribI3iv = (Fn_glVertexAttribI3iv)fn_GetFunctionAddress("glVertexAttribI3iv"); }
	inline void Init_glVertexAttribI4iv(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glVertexAttribI4iv = (Fn_glVertexAttribI4iv)fn_GetFunctionAddress("glVertexAttribI4iv"); }
	inline void Init_glVertexAttribI1uiv(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glVertexAttribI1uiv = (Fn_glVertexAttribI1uiv)fn_GetFunctionAddress("glVertexAttribI1uiv"); }
	inline void Init_glVertexAttribI2uiv(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glVertexAttribI2uiv = (Fn_glVertexAttribI2uiv)fn_GetFunctionAddress("glVertexAttribI2uiv"); }
	inline void Init_glVertexAttribI3uiv(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glVertexAttribI3uiv = (Fn_glVertexAttribI3uiv)fn_GetFunctionAddress("glVertexAttribI3uiv"); }
	inline void Init_glVertexAttribI4uiv(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glVertexAttribI4uiv = (Fn_glVertexAttribI4uiv)fn_GetFunctionAddress("glVertexAttribI4uiv"); }
	inline void Init_glVertexAttribI4bv(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glVertexAttribI4bv = (Fn_glVertexAttribI4bv)fn_GetFunctionAddress("glVertexAttribI4bv"); }
	inline void Init_glVertexAttribI4sv(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glVertexAttribI4sv = (Fn_glVertexAttribI4sv)fn_GetFunctionAddress("glVertexAttribI4sv"); }
	inline void Init_glVertexAttribI4ubv(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glVertexAttribI4ubv = (Fn_glVertexAttribI4ubv)fn_GetFunctionAddress("glVertexAttribI4ubv"); }
	inline void Init_glVertexAttribI4usv(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glVertexAttribI4usv = (Fn_glVertexAttribI4usv)fn_GetFunctionAddress("glVertexAttribI4usv"); }
	inline void Init_glGetUniformuiv(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glGetUniformuiv = (Fn_glGetUniformuiv)fn_GetFunctionAddress("glGetUniformuiv"); }
	inline void Init_glBindFragDataLocation(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glBindFragDataLocation = (Fn_glBindFragDataLocation)fn_GetFunctionAddress("glBindFragDataLocation"); }
	inline void Init_glGetFragDataLocation(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glGetFragDataLocation = (Fn_glGetFragDataLocation)fn_GetFunctionAddress("glGetFragDataLocation"); }
	inline void Init_glUniform1ui(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glUniform1ui = (Fn_glUniform1ui)fn_GetFunctionAddress("glUniform1ui"); }
	inline void Init_glUniform2ui(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glUniform2ui = (Fn_glUniform2ui)fn_GetFunctionAddress("glUniform2ui"); }
	inline void Init_glUniform3ui(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glUniform3ui = (Fn_glUniform3ui)fn_GetFunctionAddress("glUniform3ui"); }
	inline void Init_glUniform4ui(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glUniform4ui = (Fn_glUniform4ui)fn_GetFunctionAddress("glUniform4ui"); }
	inline void Init_glUniform1uiv(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glUniform1uiv = (Fn_glUniform1uiv)fn_GetFunctionAddress("glUniform1uiv"); }
	inline void Init_glUniform2uiv(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glUniform2uiv = (Fn_glUniform2uiv)fn_GetFunctionAddress("glUniform2uiv"); }
	inline void Init_glUniform3uiv(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glUniform3uiv = (Fn_glUniform3uiv)fn_GetFunctionAddress("glUniform3uiv"); }
	inline void Init_glUniform4uiv(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glUniform4uiv = (Fn_glUniform4uiv)fn_GetFunctionAddress("glUniform4uiv"); }
	inline void Init_glTexParameterIiv(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glTexParameterIiv = (Fn_glTexParameterIiv)fn_GetFunctionAddress("glTexParameterIiv"); }
	inline void Init_glTexParameterIuiv(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glTexParameterIuiv = (Fn_glTexParameterIuiv)fn_GetFunctionAddress("glTexParameterIuiv"); }
	inline void Init_glGetTexParameterIiv(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glGetTexParameterIiv = (Fn_glGetTexParameterIiv)fn_GetFunctionAddress("glGetTexParameterIiv"); }
	inline void Init_glGetTexParameterIuiv(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glGetTexParameterIuiv = (Fn_glGetTexParameterIuiv)fn_GetFunctionAddress("glGetTexParameterIuiv"); }
	inline void Init_glClearBufferiv(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glClearBufferiv = (Fn_glClearBufferiv)fn_GetFunctionAddress("glClearBufferiv"); }
	inline void Init_glClearBufferuiv(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glClearBufferuiv = (Fn_glClearBufferuiv)fn_GetFunctionAddress("glClearBufferuiv"); }
	inline void Init_glClearBufferfv(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glClearBufferfv = (Fn_glClearBufferfv)fn_GetFunctionAddress("glClearBufferfv"); }
	inline void Init_glClearBufferfi(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glClearBufferfi = (Fn_glClearBufferfi)fn_GetFunctionAddress("glClearBufferfi"); }
	inline void Init_glGetStringi(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glGetStringi = (Fn_glGetStringi)fn_GetFunctionAddress("glGetStringi"); }
	inline void Init_glIsRenderbuffer(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glIsRenderbuffer = (Fn_glIsRenderbuffer)fn_GetFunctionAddress("glIsRenderbuffer"); }
	inline void Init_glBindRenderbuffer(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glBindRenderbuffer = (Fn_glBindRenderbuffer)fn_GetFunctionAddress("glBindRenderbuffer"); }
	inline void Init_glDeleteRenderbuffers(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glDeleteRenderbuffers = (Fn_glDeleteRenderbuffers)fn_GetFunctionAddress("glDeleteRenderbuffers"); }
	inline void Init_glGenRenderbuffers(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glGenRenderbuffers = (Fn_glGenRenderbuffers)fn_GetFunctionAddress("glGenRenderbuffers"); }
	inline void Init_glRenderbufferStorage(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glRenderbufferStorage = (Fn_glRenderbufferStorage)fn_GetFunctionAddress("glRenderbufferStorage"); }
	inline void Init_glGetRenderbufferParameteriv(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glGetRenderbufferParameteriv = (Fn_glGetRenderbufferParameteriv)fn_GetFunctionAddress("glGetRenderbufferParameteriv"); }
	inline void Init_glIsFramebuffer(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glIsFramebuffer = (Fn_glIsFramebuffer)fn_GetFunctionAddress("glIsFramebuffer"); }
	inline void Init_glBindFramebuffer(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glBindFramebuffer = (Fn_glBindFramebuffer)fn_GetFunctionAddress("glBindFramebuffer"); }
	inline void Init_glDeleteFramebuffers(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glDeleteFramebuffers = (Fn_glDeleteFramebuffers)fn_GetFunctionAddress("glDeleteFramebuffers"); }
	inline void Init_glGenFramebuffers(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glGenFramebuffers = (Fn_glGenFramebuffers)fn_GetFunctionAddress("glGenFramebuffers"); }
	inline void Init_glCheckFramebufferStatus(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glCheckFramebufferStatus = (Fn_glCheckFramebufferStatus)fn_GetFunctionAddress("glCheckFramebufferStatus"); }
	inline void Init_glFramebufferTexture1D(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glFramebufferTexture1D = (Fn_glFramebufferTexture1D)fn_GetFunctionAddress("glFramebufferTexture1D"); }
	inline void Init_glFramebufferTexture2D(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glFramebufferTexture2D = (Fn_glFramebufferTexture2D)fn_GetFunctionAddress("glFramebufferTexture2D"); }
	inline void Init_glFramebufferTexture3D(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glFramebufferTexture3D = (Fn_glFramebufferTexture3D)fn_GetFunctionAddress("glFramebufferTexture3D"); }
	inline void Init_glFramebufferRenderbuffer(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glFramebufferRenderbuffer = (Fn_glFramebufferRenderbuffer)fn_GetFunctionAddress("glFramebufferRenderbuffer"); }
	inline void Init_glGetFramebufferAttachmentParameteriv(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glGetFramebufferAttachmentParameteriv = (Fn_glGetFramebufferAttachmentParameteriv)fn_GetFunctionAddress("glGetFramebufferAttachmentParameteriv"); }
	inline void Init_glGenerateMipmap(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glGenerateMipmap = (Fn_glGenerateMipmap)fn_GetFunctionAddress("glGenerateMipmap"); }
	inline void Init_glBlitFramebuffer(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glBlitFramebuffer = (Fn_glBlitFramebuffer)fn_GetFunctionAddress("glBlitFramebuffer"); }
	inline void Init_glRenderbufferStorageMultisample(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glRenderbufferStorageMultisample = (Fn_glRenderbufferStorageMultisample)fn_GetFunctionAddress("glRenderbufferStorageMultisample"); }
	inline void Init_glFramebufferTextureLayer(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glFramebufferTextureLayer = (Fn_glFramebufferTextureLayer)fn_GetFunctionAddress("glFramebufferTextureLayer"); }
	inline void Init_glMapBufferRange(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glMapBufferRange = (Fn_glMapBufferRange)fn_GetFunctionAddress("glMapBufferRange"); }
	inline void Init_glFlushMappedBufferRange(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glFlushMappedBufferRange = (Fn_glFlushMappedBufferRange)fn_GetFunctionAddress("glFlushMappedBufferRange"); }
	inline void Init_glBindVertexArray(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glBindVertexArray = (Fn_glBindVertexArray)fn_GetFunctionAddress("glBindVertexArray"); }
	inline void Init_glDeleteVertexArrays(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glDeleteVertexArrays = (Fn_glDeleteVertexArrays)fn_GetFunctionAddress("glDeleteVertexArrays"); }
	inline void Init_glGenVertexArrays(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glGenVertexArrays = (Fn_glGenVertexArrays)fn_GetFunctionAddress("glGenVertexArrays"); }
	inline void Init_glIsVertexArray(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glIsVertexArray = (Fn_glIsVertexArray)fn_GetFunctionAddress("glIsVertexArray"); }
	inline void Init_glDrawArraysInstanced(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glDrawArraysInstanced = (Fn_glDrawArraysInstanced)fn_GetFunctionAddress("glDrawArraysInstanced"); }
	inline void Init_glDrawElementsInstanced(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glDrawElementsInstanced = (Fn_glDrawElementsInstanced)fn_GetFunctionAddress("glDrawElementsInstanced"); }
	inline void Init_glTexBuffer(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glTexBuffer = (Fn_glTexBuffer)fn_GetFunctionAddress("glTexBuffer"); }
	inline void Init_glPrimitiveRestartIndex(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glPrimitiveRestartIndex = (Fn_glPrimitiveRestartIndex)fn_GetFunctionAddress("glPrimitiveRestartIndex"); }
	inline void Init_glCopyBufferSubData(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glCopyBufferSubData = (Fn_glCopyBufferSubData)fn_GetFunctionAddress("glCopyBufferSubData"); }
	inline void Init_glGetUniformIndices(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glGetUniformIndices = (Fn_glGetUniformIndices)fn_GetFunctionAddress("glGetUniformIndices"); }
	inline void Init_glGetActiveUniformsiv(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glGetActiveUniformsiv = (Fn_glGetActiveUniformsiv)fn_GetFunctionAddress("glGetActiveUniformsiv"); }
	inline void Init_glGetActiveUniformName(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glGetActiveUniformName = (Fn_glGetActiveUniformName)fn_GetFunctionAddress("glGetActiveUniformName"); }
	inline void Init_glGetUniformBlockIndex(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glGetUniformBlockIndex = (Fn_glGetUniformBlockIndex)fn_GetFunctionAddress("glGetUniformBlockIndex"); }
	inline void Init_glGetActiveUniformBlockiv(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glGetActiveUniformBlockiv = (Fn_glGetActiveUniformBlockiv)fn_GetFunctionAddress("glGetActiveUniformBlockiv"); }
	inline void Init_glGetActiveUniformBlockName(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glGetActiveUniformBlockName = (Fn_glGetActiveUniformBlockName)fn_GetFunctionAddress("glGetActiveUniformBlockName"); }
	inline void Init_glUniformBlockBinding(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glUniformBlockBinding = (Fn_glUniformBlockBinding)fn_GetFunctionAddress("glUniformBlockBinding"); }
	inline void Init_glDrawElementsBaseVertex(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glDrawElementsBaseVertex = (Fn_glDrawElementsBaseVertex)fn_GetFunctionAddress("glDrawElementsBaseVertex"); }
	inline void Init_glDrawRangeElementsBaseVertex(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glDrawRangeElementsBaseVertex = (Fn_glDrawRangeElementsBaseVertex)fn_GetFunctionAddress("glDrawRangeElementsBaseVertex"); }
	inline void Init_glDrawElementsInstancedBaseVertex(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glDrawElementsInstancedBaseVertex = (Fn_glDrawElementsInstancedBaseVertex)fn_GetFunctionAddress("glDrawElementsInstancedBaseVertex"); }
	inline void Init_glMultiDrawElementsBaseVertex(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glMultiDrawElementsBaseVertex = (Fn_glMultiDrawElementsBaseVertex)fn_GetFunctionAddress("glMultiDrawElementsBaseVertex"); }
	inline void Init_glProvokingVertex(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glProvokingVertex = (Fn_glProvokingVertex)fn_GetFunctionAddress("glProvokingVertex"); }
	inline void Init_glFenceSync(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glFenceSync = (Fn_glFenceSync)fn_GetFunctionAddress("glFenceSync"); }
	inline void Init_glIsSync(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glIsSync = (Fn_glIsSync)fn_GetFunctionAddress("glIsSync"); }
	inline void Init_glDeleteSync(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glDeleteSync = (Fn_glDeleteSync)fn_GetFunctionAddress("glDeleteSync"); }
	inline void Init_glClientWaitSync(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glClientWaitSync = (Fn_glClientWaitSync)fn_GetFunctionAddress("glClientWaitSync"); }
	inline void Init_glWaitSync(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glWaitSync = (Fn_glWaitSync)fn_GetFunctionAddress("glWaitSync"); }
	inline void Init_glGetInteger64v(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glGetInteger64v = (Fn_glGetInteger64v)fn_GetFunctionAddress("glGetInteger64v"); }
	inline void Init_glGetSynciv(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glGetSynciv = (Fn_glGetSynciv)fn_GetFunctionAddress("glGetSynciv"); }
	inline void Init_glGetInteger64i_v(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glGetInteger64i_v = (Fn_glGetInteger64i_v)fn_GetFunctionAddress("glGetInteger64i_v"); }
	inline void Init_glGetBufferParameteri64v(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glGetBufferParameteri64v = (Fn_glGetBufferParameteri64v)fn_GetFunctionAddress("glGetBufferParameteri64v"); }
	inline void Init_glFramebufferTexture(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glFramebufferTexture = (Fn_glFramebufferTexture)fn_GetFunctionAddress("glFramebufferTexture"); }
	inline void Init_glTexImage2DMultisample(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glTexImage2DMultisample = (Fn_glTexImage2DMultisample)fn_GetFunctionAddress("glTexImage2DMultisample"); }
	inline void Init_glTexImage3DMultisample(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glTexImage3DMultisample = (Fn_glTexImage3DMultisample)fn_GetFunctionAddress("glTexImage3DMultisample"); }
	inline void Init_glGetMultisamplefv(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glGetMultisamplefv = (Fn_glGetMultisamplefv)fn_GetFunctionAddress("glGetMultisamplefv"); }
	inline void Init_glSampleMaski(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glSampleMaski = (Fn_glSampleMaski)fn_GetFunctionAddress("glSampleMaski"); }
	inline void Init_glBindFragDataLocationIndexed(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glBindFragDataLocationIndexed = (Fn_glBindFragDataLocationIndexed)fn_GetFunctionAddress("glBindFragDataLocationIndexed"); }
	inline void Init_glGetFragDataIndex(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glGetFragDataIndex = (Fn_glGetFragDataIndex)fn_GetFunctionAddress("glGetFragDataIndex"); }
	inline void Init_glGenSamplers(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glGenSamplers = (Fn_glGenSamplers)fn_GetFunctionAddress("glGenSamplers"); }
	inline void Init_glDeleteSamplers(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glDeleteSamplers = (Fn_glDeleteSamplers)fn_GetFunctionAddress("glDeleteSamplers"); }
	inline void Init_glIsSampler(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glIsSampler = (Fn_glIsSampler)fn_GetFunctionAddress("glIsSampler"); }
	inline void Init_glBindSampler(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glBindSampler = (Fn_glBindSampler)fn_GetFunctionAddress("glBindSampler"); }
	inline void Init_glSamplerParameteri(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glSamplerParameteri = (Fn_glSamplerParameteri)fn_GetFunctionAddress("glSamplerParameteri"); }
	inline void Init_glSamplerParameteriv(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glSamplerParameteriv = (Fn_glSamplerParameteriv)fn_GetFunctionAddress("glSamplerParameteriv"); }
	inline void Init_glSamplerParameterf(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glSamplerParameterf = (Fn_glSamplerParameterf)fn_GetFunctionAddress("glSamplerParameterf"); }
	inline void Init_glSamplerParameterfv(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glSamplerParameterfv = (Fn_glSamplerParameterfv)fn_GetFunctionAddress("glSamplerParameterfv"); }
	inline void Init_glSamplerParameterIiv(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glSamplerParameterIiv = (Fn_glSamplerParameterIiv)fn_GetFunctionAddress("glSamplerParameterIiv"); }
	inline void Init_glSamplerParameterIuiv(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glSamplerParameterIuiv = (Fn_glSamplerParameterIuiv)fn_GetFunctionAddress("glSamplerParameterIuiv"); }
	inline void Init_glGetSamplerParameteriv(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glGetSamplerParameteriv = (Fn_glGetSamplerParameteriv)fn_GetFunctionAddress("glGetSamplerParameteriv"); }
	inline void Init_glGetSamplerParameterIiv(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glGetSamplerParameterIiv = (Fn_glGetSamplerParameterIiv)fn_GetFunctionAddress("glGetSamplerParameterIiv"); }
	inline void Init_glGetSamplerParameterfv(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glGetSamplerParameterfv = (Fn_glGetSamplerParameterfv)fn_GetFunctionAddress("glGetSamplerParameterfv"); }
	inline void Init_glGetSamplerParameterIuiv(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glGetSamplerParameterIuiv = (Fn_glGetSamplerParameterIuiv)fn_GetFunctionAddress("glGetSamplerParameterIuiv"); }
	inline void Init_glQueryCounter(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glQueryCounter = (Fn_glQueryCounter)fn_GetFunctionAddress("glQueryCounter"); }
	inline void Init_glGetQueryObjecti64v(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glGetQueryObjecti64v = (Fn_glGetQueryObjecti64v)fn_GetFunctionAddress("glGetQueryObjecti64v"); }
	inline void Init_glGetQueryObjectui64v(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glGetQueryObjectui64v = (Fn_glGetQueryObjectui64v)fn_GetFunctionAddress("glGetQueryObjectui64v"); }
	inline void Init_glVertexAttribDivisor(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glVertexAttribDivisor = (Fn_glVertexAttribDivisor)fn_GetFunctionAddress("glVertexAttribDivisor"); }
	inline void Init_glVertexAttribP1ui(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glVertexAttribP1ui = (Fn_glVertexAttribP1ui)fn_GetFunctionAddress("glVertexAttribP1ui"); }
	inline void Init_glVertexAttribP1uiv(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glVertexAttribP1uiv = (Fn_glVertexAttribP1uiv)fn_GetFunctionAddress("glVertexAttribP1uiv"); }
	inline void Init_glVertexAttribP2ui(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glVertexAttribP2ui = (Fn_glVertexAttribP2ui)fn_GetFunctionAddress("glVertexAttribP2ui"); }
	inline void Init_glVertexAttribP2uiv(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glVertexAttribP2uiv = (Fn_glVertexAttribP2uiv)fn_GetFunctionAddress("glVertexAttribP2uiv"); }
	inline void Init_glVertexAttribP3ui(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glVertexAttribP3ui = (Fn_glVertexAttribP3ui)fn_GetFunctionAddress("glVertexAttribP3ui"); }
	inline void Init_glVertexAttribP3uiv(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glVertexAttribP3uiv = (Fn_glVertexAttribP3uiv)fn_GetFunctionAddress("glVertexAttribP3uiv"); }
	inline void Init_glVertexAttribP4ui(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glVertexAttribP4ui = (Fn_glVertexAttribP4ui)fn_GetFunctionAddress("glVertexAttribP4ui"); }
	inline void Init_glVertexAttribP4uiv(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glVertexAttribP4uiv = (Fn_glVertexAttribP4uiv)fn_GetFunctionAddress("glVertexAttribP4uiv"); }
	inline void Init_glVertexP2ui(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glVertexP2ui = (Fn_glVertexP2ui)fn_GetFunctionAddress("glVertexP2ui"); }
	inline void Init_glVertexP2uiv(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glVertexP2uiv = (Fn_glVertexP2uiv)fn_GetFunctionAddress("glVertexP2uiv"); }
	inline void Init_glVertexP3ui(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glVertexP3ui = (Fn_glVertexP3ui)fn_GetFunctionAddress("glVertexP3ui"); }
	inline void Init_glVertexP3uiv(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glVertexP3uiv = (Fn_glVertexP3uiv)fn_GetFunctionAddress("glVertexP3uiv"); }
	inline void Init_glVertexP4ui(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glVertexP4ui = (Fn_glVertexP4ui)fn_GetFunctionAddress("glVertexP4ui"); }
	inline void Init_glVertexP4uiv(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glVertexP4uiv = (Fn_glVertexP4uiv)fn_GetFunctionAddress("glVertexP4uiv"); }
	inline void Init_glTexCoordP1ui(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glTexCoordP1ui = (Fn_glTexCoordP1ui)fn_GetFunctionAddress("glTexCoordP1ui"); }
	inline void Init_glTexCoordP1uiv(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glTexCoordP1uiv = (Fn_glTexCoordP1uiv)fn_GetFunctionAddress("glTexCoordP1uiv"); }
	inline void Init_glTexCoordP2ui(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glTexCoordP2ui = (Fn_glTexCoordP2ui)fn_GetFunctionAddress("glTexCoordP2ui"); }
	inline void Init_glTexCoordP2uiv(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glTexCoordP2uiv = (Fn_glTexCoordP2uiv)fn_GetFunctionAddress("glTexCoordP2uiv"); }
	inline void Init_glTexCoordP3ui(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glTexCoordP3ui = (Fn_glTexCoordP3ui)fn_GetFunctionAddress("glTexCoordP3ui"); }
	inline void Init_glTexCoordP3uiv(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glTexCoordP3uiv = (Fn_glTexCoordP3uiv)fn_GetFunctionAddress("glTexCoordP3uiv"); }
	inline void Init_glTexCoordP4ui(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glTexCoordP4ui = (Fn_glTexCoordP4ui)fn_GetFunctionAddress("glTexCoordP4ui"); }
	inline void Init_glTexCoordP4uiv(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glTexCoordP4uiv = (Fn_glTexCoordP4uiv)fn_GetFunctionAddress("glTexCoordP4uiv"); }
	inline void Init_glMultiTexCoordP1ui(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glMultiTexCoordP1ui = (Fn_glMultiTexCoordP1ui)fn_GetFunctionAddress("glMultiTexCoordP1ui"); }
	inline void Init_glMultiTexCoordP1uiv(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glMultiTexCoordP1uiv = (Fn_glMultiTexCoordP1uiv)fn_GetFunctionAddress("glMultiTexCoordP1uiv"); }
	inline void Init_glMultiTexCoordP2ui(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glMultiTexCoordP2ui = (Fn_glMultiTexCoordP2ui)fn_GetFunctionAddress("glMultiTexCoordP2ui"); }
	inline void Init_glMultiTexCoordP2uiv(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glMultiTexCoordP2uiv = (Fn_glMultiTexCoordP2uiv)fn_GetFunctionAddress("glMultiTexCoordP2uiv"); }
	inline void Init_glMultiTexCoordP3ui(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glMultiTexCoordP3ui = (Fn_glMultiTexCoordP3ui)fn_GetFunctionAddress("glMultiTexCoordP3ui"); }
	inline void Init_glMultiTexCoordP3uiv(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glMultiTexCoordP3uiv = (Fn_glMultiTexCoordP3uiv)fn_GetFunctionAddress("glMultiTexCoordP3uiv"); }
	inline void Init_glMultiTexCoordP4ui(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glMultiTexCoordP4ui = (Fn_glMultiTexCoordP4ui)fn_GetFunctionAddress("glMultiTexCoordP4ui"); }
	inline void Init_glMultiTexCoordP4uiv(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glMultiTexCoordP4uiv = (Fn_glMultiTexCoordP4uiv)fn_GetFunctionAddress("glMultiTexCoordP4uiv"); }
	inline void Init_glNormalP3ui(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glNormalP3ui = (Fn_glNormalP3ui)fn_GetFunctionAddress("glNormalP3ui"); }
	inline void Init_glNormalP3uiv(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glNormalP3uiv = (Fn_glNormalP3uiv)fn_GetFunctionAddress("glNormalP3uiv"); }
	inline void Init_glColorP3ui(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glColorP3ui = (Fn_glColorP3ui)fn_GetFunctionAddress("glColorP3ui"); }
	inline void Init_glColorP3uiv(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glColorP3uiv = (Fn_glColorP3uiv)fn_GetFunctionAddress("glColorP3uiv"); }
	inline void Init_glColorP4ui(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glColorP4ui = (Fn_glColorP4ui)fn_GetFunctionAddress("glColorP4ui"); }
	inline void Init_glColorP4uiv(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glColorP4uiv = (Fn_glColorP4uiv)fn_GetFunctionAddress("glColorP4uiv"); }
	inline void Init_glSecondaryColorP3ui(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glSecondaryColorP3ui = (Fn_glSecondaryColorP3ui)fn_GetFunctionAddress("glSecondaryColorP3ui"); }
	inline void Init_glSecondaryColorP3uiv(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) { s_fn_glSecondaryColorP3uiv = (Fn_glSecondaryColorP3uiv)fn_GetFunctionAddress("glSecondaryColorP3uiv"); }
	inline void GLInitFunctions(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress) {
		Init_glCullFace(fn_GetFunctionAddress);
		Init_glFrontFace(fn_GetFunctionAddress);
		Init_glHint(fn_GetFunctionAddress);
		Init_glLineWidth(fn_GetFunctionAddress);
		Init_glPointSize(fn_GetFunctionAddress);
		Init_glPolygonMode(fn_GetFunctionAddress);
		Init_glScissor(fn_GetFunctionAddress);
		Init_glTexParameterf(fn_GetFunctionAddress);
		Init_glTexParameterfv(fn_GetFunctionAddress);
		Init_glTexParameteri(fn_GetFunctionAddress);
		Init_glTexParameteriv(fn_GetFunctionAddress);
		Init_glTexImage1D(fn_GetFunctionAddress);
		Init_glTexImage2D(fn_GetFunctionAddress);
		Init_glDrawBuffer(fn_GetFunctionAddress);
		Init_glClear(fn_GetFunctionAddress);
		Init_glClearColor(fn_GetFunctionAddress);
		Init_glClearStencil(fn_GetFunctionAddress);
		Init_glClearDepth(fn_GetFunctionAddress);
		Init_glStencilMask(fn_GetFunctionAddress);
		Init_glColorMask(fn_GetFunctionAddress);
		Init_glDepthMask(fn_GetFunctionAddress);
		Init_glDisable(fn_GetFunctionAddress);
		Init_glEnable(fn_GetFunctionAddress);
		Init_glFinish(fn_GetFunctionAddress);
		Init_glFlush(fn_GetFunctionAddress);
		Init_glBlendFunc(fn_GetFunctionAddress);
		Init_glLogicOp(fn_GetFunctionAddress);
		Init_glStencilFunc(fn_GetFunctionAddress);
		Init_glStencilOp(fn_GetFunctionAddress);
		Init_glDepthFunc(fn_GetFunctionAddress);
		Init_glPixelStoref(fn_GetFunctionAddress);
		Init_glPixelStorei(fn_GetFunctionAddress);
		Init_glReadBuffer(fn_GetFunctionAddress);
		Init_glReadPixels(fn_GetFunctionAddress);
		Init_glGetBooleanv(fn_GetFunctionAddress);
		Init_glGetDoublev(fn_GetFunctionAddress);
		Init_glGetError(fn_GetFunctionAddress);
		Init_glGetFloatv(fn_GetFunctionAddress);
		Init_glGetIntegerv(fn_GetFunctionAddress);
		Init_glGetString(fn_GetFunctionAddress);
		Init_glGetTexImage(fn_GetFunctionAddress);
		Init_glGetTexParameterfv(fn_GetFunctionAddress);
		Init_glGetTexParameteriv(fn_GetFunctionAddress);
		Init_glGetTexLevelParameterfv(fn_GetFunctionAddress);
		Init_glGetTexLevelParameteriv(fn_GetFunctionAddress);
		Init_glIsEnabled(fn_GetFunctionAddress);
		Init_glDepthRange(fn_GetFunctionAddress);
		Init_glViewport(fn_GetFunctionAddress);
		Init_glNewList(fn_GetFunctionAddress);
		Init_glEndList(fn_GetFunctionAddress);
		Init_glCallList(fn_GetFunctionAddress);
		Init_glCallLists(fn_GetFunctionAddress);
		Init_glDeleteLists(fn_GetFunctionAddress);
		Init_glGenLists(fn_GetFunctionAddress);
		Init_glListBase(fn_GetFunctionAddress);
		Init_glBegin(fn_GetFunctionAddress);
		Init_glBitmap(fn_GetFunctionAddress);
		Init_glColor3b(fn_GetFunctionAddress);
		Init_glColor3bv(fn_GetFunctionAddress);
		Init_glColor3d(fn_GetFunctionAddress);
		Init_glColor3dv(fn_GetFunctionAddress);
		Init_glColor3f(fn_GetFunctionAddress);
		Init_glColor3fv(fn_GetFunctionAddress);
		Init_glColor3i(fn_GetFunctionAddress);
		Init_glColor3iv(fn_GetFunctionAddress);
		Init_glColor3s(fn_GetFunctionAddress);
		Init_glColor3sv(fn_GetFunctionAddress);
		Init_glColor3ub(fn_GetFunctionAddress);
		Init_glColor3ubv(fn_GetFunctionAddress);
		Init_glColor3ui(fn_GetFunctionAddress);
		Init_glColor3uiv(fn_GetFunctionAddress);
		Init_glColor3us(fn_GetFunctionAddress);
		Init_glColor3usv(fn_GetFunctionAddress);
		Init_glColor4b(fn_GetFunctionAddress);
		Init_glColor4bv(fn_GetFunctionAddress);
		Init_glColor4d(fn_GetFunctionAddress);
		Init_glColor4dv(fn_GetFunctionAddress);
		Init_glColor4f(fn_GetFunctionAddress);
		Init_glColor4fv(fn_GetFunctionAddress);
		Init_glColor4i(fn_GetFunctionAddress);
		Init_glColor4iv(fn_GetFunctionAddress);
		Init_glColor4s(fn_GetFunctionAddress);
		Init_glColor4sv(fn_GetFunctionAddress);
		Init_glColor4ub(fn_GetFunctionAddress);
		Init_glColor4ubv(fn_GetFunctionAddress);
		Init_glColor4ui(fn_GetFunctionAddress);
		Init_glColor4uiv(fn_GetFunctionAddress);
		Init_glColor4us(fn_GetFunctionAddress);
		Init_glColor4usv(fn_GetFunctionAddress);
		Init_glEdgeFlag(fn_GetFunctionAddress);
		Init_glEdgeFlagv(fn_GetFunctionAddress);
		Init_glEnd(fn_GetFunctionAddress);
		Init_glIndexd(fn_GetFunctionAddress);
		Init_glIndexdv(fn_GetFunctionAddress);
		Init_glIndexf(fn_GetFunctionAddress);
		Init_glIndexfv(fn_GetFunctionAddress);
		Init_glIndexi(fn_GetFunctionAddress);
		Init_glIndexiv(fn_GetFunctionAddress);
		Init_glIndexs(fn_GetFunctionAddress);
		Init_glIndexsv(fn_GetFunctionAddress);
		Init_glNormal3b(fn_GetFunctionAddress);
		Init_glNormal3bv(fn_GetFunctionAddress);
		Init_glNormal3d(fn_GetFunctionAddress);
		Init_glNormal3dv(fn_GetFunctionAddress);
		Init_glNormal3f(fn_GetFunctionAddress);
		Init_glNormal3fv(fn_GetFunctionAddress);
		Init_glNormal3i(fn_GetFunctionAddress);
		Init_glNormal3iv(fn_GetFunctionAddress);
		Init_glNormal3s(fn_GetFunctionAddress);
		Init_glNormal3sv(fn_GetFunctionAddress);
		Init_glRasterPos2d(fn_GetFunctionAddress);
		Init_glRasterPos2dv(fn_GetFunctionAddress);
		Init_glRasterPos2f(fn_GetFunctionAddress);
		Init_glRasterPos2fv(fn_GetFunctionAddress);
		Init_glRasterPos2i(fn_GetFunctionAddress);
		Init_glRasterPos2iv(fn_GetFunctionAddress);
		Init_glRasterPos2s(fn_GetFunctionAddress);
		Init_glRasterPos2sv(fn_GetFunctionAddress);
		Init_glRasterPos3d(fn_GetFunctionAddress);
		Init_glRasterPos3dv(fn_GetFunctionAddress);
		Init_glRasterPos3f(fn_GetFunctionAddress);
		Init_glRasterPos3fv(fn_GetFunctionAddress);
		Init_glRasterPos3i(fn_GetFunctionAddress);
		Init_glRasterPos3iv(fn_GetFunctionAddress);
		Init_glRasterPos3s(fn_GetFunctionAddress);
		Init_glRasterPos3sv(fn_GetFunctionAddress);
		Init_glRasterPos4d(fn_GetFunctionAddress);
		Init_glRasterPos4dv(fn_GetFunctionAddress);
		Init_glRasterPos4f(fn_GetFunctionAddress);
		Init_glRasterPos4fv(fn_GetFunctionAddress);
		Init_glRasterPos4i(fn_GetFunctionAddress);
		Init_glRasterPos4iv(fn_GetFunctionAddress);
		Init_glRasterPos4s(fn_GetFunctionAddress);
		Init_glRasterPos4sv(fn_GetFunctionAddress);
		Init_glRectd(fn_GetFunctionAddress);
		Init_glRectdv(fn_GetFunctionAddress);
		Init_glRectf(fn_GetFunctionAddress);
		Init_glRectfv(fn_GetFunctionAddress);
		Init_glRecti(fn_GetFunctionAddress);
		Init_glRectiv(fn_GetFunctionAddress);
		Init_glRects(fn_GetFunctionAddress);
		Init_glRectsv(fn_GetFunctionAddress);
		Init_glTexCoord1d(fn_GetFunctionAddress);
		Init_glTexCoord1dv(fn_GetFunctionAddress);
		Init_glTexCoord1f(fn_GetFunctionAddress);
		Init_glTexCoord1fv(fn_GetFunctionAddress);
		Init_glTexCoord1i(fn_GetFunctionAddress);
		Init_glTexCoord1iv(fn_GetFunctionAddress);
		Init_glTexCoord1s(fn_GetFunctionAddress);
		Init_glTexCoord1sv(fn_GetFunctionAddress);
		Init_glTexCoord2d(fn_GetFunctionAddress);
		Init_glTexCoord2dv(fn_GetFunctionAddress);
		Init_glTexCoord2f(fn_GetFunctionAddress);
		Init_glTexCoord2fv(fn_GetFunctionAddress);
		Init_glTexCoord2i(fn_GetFunctionAddress);
		Init_glTexCoord2iv(fn_GetFunctionAddress);
		Init_glTexCoord2s(fn_GetFunctionAddress);
		Init_glTexCoord2sv(fn_GetFunctionAddress);
		Init_glTexCoord3d(fn_GetFunctionAddress);
		Init_glTexCoord3dv(fn_GetFunctionAddress);
		Init_glTexCoord3f(fn_GetFunctionAddress);
		Init_glTexCoord3fv(fn_GetFunctionAddress);
		Init_glTexCoord3i(fn_GetFunctionAddress);
		Init_glTexCoord3iv(fn_GetFunctionAddress);
		Init_glTexCoord3s(fn_GetFunctionAddress);
		Init_glTexCoord3sv(fn_GetFunctionAddress);
		Init_glTexCoord4d(fn_GetFunctionAddress);
		Init_glTexCoord4dv(fn_GetFunctionAddress);
		Init_glTexCoord4f(fn_GetFunctionAddress);
		Init_glTexCoord4fv(fn_GetFunctionAddress);
		Init_glTexCoord4i(fn_GetFunctionAddress);
		Init_glTexCoord4iv(fn_GetFunctionAddress);
		Init_glTexCoord4s(fn_GetFunctionAddress);
		Init_glTexCoord4sv(fn_GetFunctionAddress);
		Init_glVertex2d(fn_GetFunctionAddress);
		Init_glVertex2dv(fn_GetFunctionAddress);
		Init_glVertex2f(fn_GetFunctionAddress);
		Init_glVertex2fv(fn_GetFunctionAddress);
		Init_glVertex2i(fn_GetFunctionAddress);
		Init_glVertex2iv(fn_GetFunctionAddress);
		Init_glVertex2s(fn_GetFunctionAddress);
		Init_glVertex2sv(fn_GetFunctionAddress);
		Init_glVertex3d(fn_GetFunctionAddress);
		Init_glVertex3dv(fn_GetFunctionAddress);
		Init_glVertex3f(fn_GetFunctionAddress);
		Init_glVertex3fv(fn_GetFunctionAddress);
		Init_glVertex3i(fn_GetFunctionAddress);
		Init_glVertex3iv(fn_GetFunctionAddress);
		Init_glVertex3s(fn_GetFunctionAddress);
		Init_glVertex3sv(fn_GetFunctionAddress);
		Init_glVertex4d(fn_GetFunctionAddress);
		Init_glVertex4dv(fn_GetFunctionAddress);
		Init_glVertex4f(fn_GetFunctionAddress);
		Init_glVertex4fv(fn_GetFunctionAddress);
		Init_glVertex4i(fn_GetFunctionAddress);
		Init_glVertex4iv(fn_GetFunctionAddress);
		Init_glVertex4s(fn_GetFunctionAddress);
		Init_glVertex4sv(fn_GetFunctionAddress);
		Init_glClipPlane(fn_GetFunctionAddress);
		Init_glColorMaterial(fn_GetFunctionAddress);
		Init_glFogf(fn_GetFunctionAddress);
		Init_glFogfv(fn_GetFunctionAddress);
		Init_glFogi(fn_GetFunctionAddress);
		Init_glFogiv(fn_GetFunctionAddress);
		Init_glLightf(fn_GetFunctionAddress);
		Init_glLightfv(fn_GetFunctionAddress);
		Init_glLighti(fn_GetFunctionAddress);
		Init_glLightiv(fn_GetFunctionAddress);
		Init_glLightModelf(fn_GetFunctionAddress);
		Init_glLightModelfv(fn_GetFunctionAddress);
		Init_glLightModeli(fn_GetFunctionAddress);
		Init_glLightModeliv(fn_GetFunctionAddress);
		Init_glLineStipple(fn_GetFunctionAddress);
		Init_glMaterialf(fn_GetFunctionAddress);
		Init_glMaterialfv(fn_GetFunctionAddress);
		Init_glMateriali(fn_GetFunctionAddress);
		Init_glMaterialiv(fn_GetFunctionAddress);
		Init_glPolygonStipple(fn_GetFunctionAddress);
		Init_glShadeModel(fn_GetFunctionAddress);
		Init_glTexEnvf(fn_GetFunctionAddress);
		Init_glTexEnvfv(fn_GetFunctionAddress);
		Init_glTexEnvi(fn_GetFunctionAddress);
		Init_glTexEnviv(fn_GetFunctionAddress);
		Init_glTexGend(fn_GetFunctionAddress);
		Init_glTexGendv(fn_GetFunctionAddress);
		Init_glTexGenf(fn_GetFunctionAddress);
		Init_glTexGenfv(fn_GetFunctionAddress);
		Init_glTexGeni(fn_GetFunctionAddress);
		Init_glTexGeniv(fn_GetFunctionAddress);
		Init_glFeedbackBuffer(fn_GetFunctionAddress);
		Init_glSelectBuffer(fn_GetFunctionAddress);
		Init_glRenderMode(fn_GetFunctionAddress);
		Init_glInitNames(fn_GetFunctionAddress);
		Init_glLoadName(fn_GetFunctionAddress);
		Init_glPassThrough(fn_GetFunctionAddress);
		Init_glPopName(fn_GetFunctionAddress);
		Init_glPushName(fn_GetFunctionAddress);
		Init_glClearAccum(fn_GetFunctionAddress);
		Init_glClearIndex(fn_GetFunctionAddress);
		Init_glIndexMask(fn_GetFunctionAddress);
		Init_glAccum(fn_GetFunctionAddress);
		Init_glPopAttrib(fn_GetFunctionAddress);
		Init_glPushAttrib(fn_GetFunctionAddress);
		Init_glMap1d(fn_GetFunctionAddress);
		Init_glMap1f(fn_GetFunctionAddress);
		Init_glMap2d(fn_GetFunctionAddress);
		Init_glMap2f(fn_GetFunctionAddress);
		Init_glMapGrid1d(fn_GetFunctionAddress);
		Init_glMapGrid1f(fn_GetFunctionAddress);
		Init_glMapGrid2d(fn_GetFunctionAddress);
		Init_glMapGrid2f(fn_GetFunctionAddress);
		Init_glEvalCoord1d(fn_GetFunctionAddress);
		Init_glEvalCoord1dv(fn_GetFunctionAddress);
		Init_glEvalCoord1f(fn_GetFunctionAddress);
		Init_glEvalCoord1fv(fn_GetFunctionAddress);
		Init_glEvalCoord2d(fn_GetFunctionAddress);
		Init_glEvalCoord2dv(fn_GetFunctionAddress);
		Init_glEvalCoord2f(fn_GetFunctionAddress);
		Init_glEvalCoord2fv(fn_GetFunctionAddress);
		Init_glEvalMesh1(fn_GetFunctionAddress);
		Init_glEvalPoint1(fn_GetFunctionAddress);
		Init_glEvalMesh2(fn_GetFunctionAddress);
		Init_glEvalPoint2(fn_GetFunctionAddress);
		Init_glAlphaFunc(fn_GetFunctionAddress);
		Init_glPixelZoom(fn_GetFunctionAddress);
		Init_glPixelTransferf(fn_GetFunctionAddress);
		Init_glPixelTransferi(fn_GetFunctionAddress);
		Init_glPixelMapfv(fn_GetFunctionAddress);
		Init_glPixelMapuiv(fn_GetFunctionAddress);
		Init_glPixelMapusv(fn_GetFunctionAddress);
		Init_glCopyPixels(fn_GetFunctionAddress);
		Init_glDrawPixels(fn_GetFunctionAddress);
		Init_glGetClipPlane(fn_GetFunctionAddress);
		Init_glGetLightfv(fn_GetFunctionAddress);
		Init_glGetLightiv(fn_GetFunctionAddress);
		Init_glGetMapdv(fn_GetFunctionAddress);
		Init_glGetMapfv(fn_GetFunctionAddress);
		Init_glGetMapiv(fn_GetFunctionAddress);
		Init_glGetMaterialfv(fn_GetFunctionAddress);
		Init_glGetMaterialiv(fn_GetFunctionAddress);
		Init_glGetPixelMapfv(fn_GetFunctionAddress);
		Init_glGetPixelMapuiv(fn_GetFunctionAddress);
		Init_glGetPixelMapusv(fn_GetFunctionAddress);
		Init_glGetPolygonStipple(fn_GetFunctionAddress);
		Init_glGetTexEnvfv(fn_GetFunctionAddress);
		Init_glGetTexEnviv(fn_GetFunctionAddress);
		Init_glGetTexGendv(fn_GetFunctionAddress);
		Init_glGetTexGenfv(fn_GetFunctionAddress);
		Init_glGetTexGeniv(fn_GetFunctionAddress);
		Init_glIsList(fn_GetFunctionAddress);
		Init_glFrustum(fn_GetFunctionAddress);
		Init_glLoadIdentity(fn_GetFunctionAddress);
		Init_glLoadMatrixf(fn_GetFunctionAddress);
		Init_glLoadMatrixd(fn_GetFunctionAddress);
		Init_glMatrixMode(fn_GetFunctionAddress);
		Init_glMultMatrixf(fn_GetFunctionAddress);
		Init_glMultMatrixd(fn_GetFunctionAddress);
		Init_glOrtho(fn_GetFunctionAddress);
		Init_glPopMatrix(fn_GetFunctionAddress);
		Init_glPushMatrix(fn_GetFunctionAddress);
		Init_glRotated(fn_GetFunctionAddress);
		Init_glRotatef(fn_GetFunctionAddress);
		Init_glScaled(fn_GetFunctionAddress);
		Init_glScalef(fn_GetFunctionAddress);
		Init_glTranslated(fn_GetFunctionAddress);
		Init_glTranslatef(fn_GetFunctionAddress);
		Init_glDrawArrays(fn_GetFunctionAddress);
		Init_glDrawElements(fn_GetFunctionAddress);
		Init_glGetPointerv(fn_GetFunctionAddress);
		Init_glPolygonOffset(fn_GetFunctionAddress);
		Init_glCopyTexImage1D(fn_GetFunctionAddress);
		Init_glCopyTexImage2D(fn_GetFunctionAddress);
		Init_glCopyTexSubImage1D(fn_GetFunctionAddress);
		Init_glCopyTexSubImage2D(fn_GetFunctionAddress);
		Init_glTexSubImage1D(fn_GetFunctionAddress);
		Init_glTexSubImage2D(fn_GetFunctionAddress);
		Init_glBindTexture(fn_GetFunctionAddress);
		Init_glDeleteTextures(fn_GetFunctionAddress);
		Init_glGenTextures(fn_GetFunctionAddress);
		Init_glIsTexture(fn_GetFunctionAddress);
		Init_glArrayElement(fn_GetFunctionAddress);
		Init_glColorPointer(fn_GetFunctionAddress);
		Init_glDisableClientState(fn_GetFunctionAddress);
		Init_glEdgeFlagPointer(fn_GetFunctionAddress);
		Init_glEnableClientState(fn_GetFunctionAddress);
		Init_glIndexPointer(fn_GetFunctionAddress);
		Init_glInterleavedArrays(fn_GetFunctionAddress);
		Init_glNormalPointer(fn_GetFunctionAddress);
		Init_glTexCoordPointer(fn_GetFunctionAddress);
		Init_glVertexPointer(fn_GetFunctionAddress);
		Init_glAreTexturesResident(fn_GetFunctionAddress);
		Init_glPrioritizeTextures(fn_GetFunctionAddress);
		Init_glIndexub(fn_GetFunctionAddress);
		Init_glIndexubv(fn_GetFunctionAddress);
		Init_glPopClientAttrib(fn_GetFunctionAddress);
		Init_glPushClientAttrib(fn_GetFunctionAddress);
		Init_glDrawRangeElements(fn_GetFunctionAddress);
		Init_glTexImage3D(fn_GetFunctionAddress);
		Init_glTexSubImage3D(fn_GetFunctionAddress);
		Init_glCopyTexSubImage3D(fn_GetFunctionAddress);
		Init_glActiveTexture(fn_GetFunctionAddress);
		Init_glSampleCoverage(fn_GetFunctionAddress);
		Init_glCompressedTexImage3D(fn_GetFunctionAddress);
		Init_glCompressedTexImage2D(fn_GetFunctionAddress);
		Init_glCompressedTexImage1D(fn_GetFunctionAddress);
		Init_glCompressedTexSubImage3D(fn_GetFunctionAddress);
		Init_glCompressedTexSubImage2D(fn_GetFunctionAddress);
		Init_glCompressedTexSubImage1D(fn_GetFunctionAddress);
		Init_glGetCompressedTexImage(fn_GetFunctionAddress);
		Init_glClientActiveTexture(fn_GetFunctionAddress);
		Init_glMultiTexCoord1d(fn_GetFunctionAddress);
		Init_glMultiTexCoord1dv(fn_GetFunctionAddress);
		Init_glMultiTexCoord1f(fn_GetFunctionAddress);
		Init_glMultiTexCoord1fv(fn_GetFunctionAddress);
		Init_glMultiTexCoord1i(fn_GetFunctionAddress);
		Init_glMultiTexCoord1iv(fn_GetFunctionAddress);
		Init_glMultiTexCoord1s(fn_GetFunctionAddress);
		Init_glMultiTexCoord1sv(fn_GetFunctionAddress);
		Init_glMultiTexCoord2d(fn_GetFunctionAddress);
		Init_glMultiTexCoord2dv(fn_GetFunctionAddress);
		Init_glMultiTexCoord2f(fn_GetFunctionAddress);
		Init_glMultiTexCoord2fv(fn_GetFunctionAddress);
		Init_glMultiTexCoord2i(fn_GetFunctionAddress);
		Init_glMultiTexCoord2iv(fn_GetFunctionAddress);
		Init_glMultiTexCoord2s(fn_GetFunctionAddress);
		Init_glMultiTexCoord2sv(fn_GetFunctionAddress);
		Init_glMultiTexCoord3d(fn_GetFunctionAddress);
		Init_glMultiTexCoord3dv(fn_GetFunctionAddress);
		Init_glMultiTexCoord3f(fn_GetFunctionAddress);
		Init_glMultiTexCoord3fv(fn_GetFunctionAddress);
		Init_glMultiTexCoord3i(fn_GetFunctionAddress);
		Init_glMultiTexCoord3iv(fn_GetFunctionAddress);
		Init_glMultiTexCoord3s(fn_GetFunctionAddress);
		Init_glMultiTexCoord3sv(fn_GetFunctionAddress);
		Init_glMultiTexCoord4d(fn_GetFunctionAddress);
		Init_glMultiTexCoord4dv(fn_GetFunctionAddress);
		Init_glMultiTexCoord4f(fn_GetFunctionAddress);
		Init_glMultiTexCoord4fv(fn_GetFunctionAddress);
		Init_glMultiTexCoord4i(fn_GetFunctionAddress);
		Init_glMultiTexCoord4iv(fn_GetFunctionAddress);
		Init_glMultiTexCoord4s(fn_GetFunctionAddress);
		Init_glMultiTexCoord4sv(fn_GetFunctionAddress);
		Init_glLoadTransposeMatrixf(fn_GetFunctionAddress);
		Init_glLoadTransposeMatrixd(fn_GetFunctionAddress);
		Init_glMultTransposeMatrixf(fn_GetFunctionAddress);
		Init_glMultTransposeMatrixd(fn_GetFunctionAddress);
		Init_glBlendFuncSeparate(fn_GetFunctionAddress);
		Init_glMultiDrawArrays(fn_GetFunctionAddress);
		Init_glMultiDrawElements(fn_GetFunctionAddress);
		Init_glPointParameterf(fn_GetFunctionAddress);
		Init_glPointParameterfv(fn_GetFunctionAddress);
		Init_glPointParameteri(fn_GetFunctionAddress);
		Init_glPointParameteriv(fn_GetFunctionAddress);
		Init_glFogCoordf(fn_GetFunctionAddress);
		Init_glFogCoordfv(fn_GetFunctionAddress);
		Init_glFogCoordd(fn_GetFunctionAddress);
		Init_glFogCoorddv(fn_GetFunctionAddress);
		Init_glFogCoordPointer(fn_GetFunctionAddress);
		Init_glSecondaryColor3b(fn_GetFunctionAddress);
		Init_glSecondaryColor3bv(fn_GetFunctionAddress);
		Init_glSecondaryColor3d(fn_GetFunctionAddress);
		Init_glSecondaryColor3dv(fn_GetFunctionAddress);
		Init_glSecondaryColor3f(fn_GetFunctionAddress);
		Init_glSecondaryColor3fv(fn_GetFunctionAddress);
		Init_glSecondaryColor3i(fn_GetFunctionAddress);
		Init_glSecondaryColor3iv(fn_GetFunctionAddress);
		Init_glSecondaryColor3s(fn_GetFunctionAddress);
		Init_glSecondaryColor3sv(fn_GetFunctionAddress);
		Init_glSecondaryColor3ub(fn_GetFunctionAddress);
		Init_glSecondaryColor3ubv(fn_GetFunctionAddress);
		Init_glSecondaryColor3ui(fn_GetFunctionAddress);
		Init_glSecondaryColor3uiv(fn_GetFunctionAddress);
		Init_glSecondaryColor3us(fn_GetFunctionAddress);
		Init_glSecondaryColor3usv(fn_GetFunctionAddress);
		Init_glSecondaryColorPointer(fn_GetFunctionAddress);
		Init_glWindowPos2d(fn_GetFunctionAddress);
		Init_glWindowPos2dv(fn_GetFunctionAddress);
		Init_glWindowPos2f(fn_GetFunctionAddress);
		Init_glWindowPos2fv(fn_GetFunctionAddress);
		Init_glWindowPos2i(fn_GetFunctionAddress);
		Init_glWindowPos2iv(fn_GetFunctionAddress);
		Init_glWindowPos2s(fn_GetFunctionAddress);
		Init_glWindowPos2sv(fn_GetFunctionAddress);
		Init_glWindowPos3d(fn_GetFunctionAddress);
		Init_glWindowPos3dv(fn_GetFunctionAddress);
		Init_glWindowPos3f(fn_GetFunctionAddress);
		Init_glWindowPos3fv(fn_GetFunctionAddress);
		Init_glWindowPos3i(fn_GetFunctionAddress);
		Init_glWindowPos3iv(fn_GetFunctionAddress);
		Init_glWindowPos3s(fn_GetFunctionAddress);
		Init_glWindowPos3sv(fn_GetFunctionAddress);
		Init_glBlendColor(fn_GetFunctionAddress);
		Init_glBlendEquation(fn_GetFunctionAddress);
		Init_glGenQueries(fn_GetFunctionAddress);
		Init_glDeleteQueries(fn_GetFunctionAddress);
		Init_glIsQuery(fn_GetFunctionAddress);
		Init_glBeginQuery(fn_GetFunctionAddress);
		Init_glEndQuery(fn_GetFunctionAddress);
		Init_glGetQueryiv(fn_GetFunctionAddress);
		Init_glGetQueryObjectiv(fn_GetFunctionAddress);
		Init_glGetQueryObjectuiv(fn_GetFunctionAddress);
		Init_glBindBuffer(fn_GetFunctionAddress);
		Init_glDeleteBuffers(fn_GetFunctionAddress);
		Init_glGenBuffers(fn_GetFunctionAddress);
		Init_glIsBuffer(fn_GetFunctionAddress);
		Init_glBufferData(fn_GetFunctionAddress);
		Init_glBufferSubData(fn_GetFunctionAddress);
		Init_glGetBufferSubData(fn_GetFunctionAddress);
		Init_glMapBuffer(fn_GetFunctionAddress);
		Init_glUnmapBuffer(fn_GetFunctionAddress);
		Init_glGetBufferParameteriv(fn_GetFunctionAddress);
		Init_glGetBufferPointerv(fn_GetFunctionAddress);
		Init_glBlendEquationSeparate(fn_GetFunctionAddress);
		Init_glDrawBuffers(fn_GetFunctionAddress);
		Init_glStencilOpSeparate(fn_GetFunctionAddress);
		Init_glStencilFuncSeparate(fn_GetFunctionAddress);
		Init_glStencilMaskSeparate(fn_GetFunctionAddress);
		Init_glAttachShader(fn_GetFunctionAddress);
		Init_glBindAttribLocation(fn_GetFunctionAddress);
		Init_glCompileShader(fn_GetFunctionAddress);
		Init_glCreateProgram(fn_GetFunctionAddress);
		Init_glCreateShader(fn_GetFunctionAddress);
		Init_glDeleteProgram(fn_GetFunctionAddress);
		Init_glDeleteShader(fn_GetFunctionAddress);
		Init_glDetachShader(fn_GetFunctionAddress);
		Init_glDisableVertexAttribArray(fn_GetFunctionAddress);
		Init_glEnableVertexAttribArray(fn_GetFunctionAddress);
		Init_glGetActiveAttrib(fn_GetFunctionAddress);
		Init_glGetActiveUniform(fn_GetFunctionAddress);
		Init_glGetAttachedShaders(fn_GetFunctionAddress);
		Init_glGetAttribLocation(fn_GetFunctionAddress);
		Init_glGetProgramiv(fn_GetFunctionAddress);
		Init_glGetProgramInfoLog(fn_GetFunctionAddress);
		Init_glGetShaderiv(fn_GetFunctionAddress);
		Init_glGetShaderInfoLog(fn_GetFunctionAddress);
		Init_glGetShaderSource(fn_GetFunctionAddress);
		Init_glGetUniformLocation(fn_GetFunctionAddress);
		Init_glGetUniformfv(fn_GetFunctionAddress);
		Init_glGetUniformiv(fn_GetFunctionAddress);
		Init_glGetVertexAttribdv(fn_GetFunctionAddress);
		Init_glGetVertexAttribfv(fn_GetFunctionAddress);
		Init_glGetVertexAttribiv(fn_GetFunctionAddress);
		Init_glGetVertexAttribPointerv(fn_GetFunctionAddress);
		Init_glIsProgram(fn_GetFunctionAddress);
		Init_glIsShader(fn_GetFunctionAddress);
		Init_glLinkProgram(fn_GetFunctionAddress);
		Init_glShaderSource(fn_GetFunctionAddress);
		Init_glUseProgram(fn_GetFunctionAddress);
		Init_glUniform1f(fn_GetFunctionAddress);
		Init_glUniform2f(fn_GetFunctionAddress);
		Init_glUniform3f(fn_GetFunctionAddress);
		Init_glUniform4f(fn_GetFunctionAddress);
		Init_glUniform1i(fn_GetFunctionAddress);
		Init_glUniform2i(fn_GetFunctionAddress);
		Init_glUniform3i(fn_GetFunctionAddress);
		Init_glUniform4i(fn_GetFunctionAddress);
		Init_glUniform1fv(fn_GetFunctionAddress);
		Init_glUniform2fv(fn_GetFunctionAddress);
		Init_glUniform3fv(fn_GetFunctionAddress);
		Init_glUniform4fv(fn_GetFunctionAddress);
		Init_glUniform1iv(fn_GetFunctionAddress);
		Init_glUniform2iv(fn_GetFunctionAddress);
		Init_glUniform3iv(fn_GetFunctionAddress);
		Init_glUniform4iv(fn_GetFunctionAddress);
		Init_glUniformMatrix2fv(fn_GetFunctionAddress);
		Init_glUniformMatrix3fv(fn_GetFunctionAddress);
		Init_glUniformMatrix4fv(fn_GetFunctionAddress);
		Init_glValidateProgram(fn_GetFunctionAddress);
		Init_glVertexAttrib1d(fn_GetFunctionAddress);
		Init_glVertexAttrib1dv(fn_GetFunctionAddress);
		Init_glVertexAttrib1f(fn_GetFunctionAddress);
		Init_glVertexAttrib1fv(fn_GetFunctionAddress);
		Init_glVertexAttrib1s(fn_GetFunctionAddress);
		Init_glVertexAttrib1sv(fn_GetFunctionAddress);
		Init_glVertexAttrib2d(fn_GetFunctionAddress);
		Init_glVertexAttrib2dv(fn_GetFunctionAddress);
		Init_glVertexAttrib2f(fn_GetFunctionAddress);
		Init_glVertexAttrib2fv(fn_GetFunctionAddress);
		Init_glVertexAttrib2s(fn_GetFunctionAddress);
		Init_glVertexAttrib2sv(fn_GetFunctionAddress);
		Init_glVertexAttrib3d(fn_GetFunctionAddress);
		Init_glVertexAttrib3dv(fn_GetFunctionAddress);
		Init_glVertexAttrib3f(fn_GetFunctionAddress);
		Init_glVertexAttrib3fv(fn_GetFunctionAddress);
		Init_glVertexAttrib3s(fn_GetFunctionAddress);
		Init_glVertexAttrib3sv(fn_GetFunctionAddress);
		Init_glVertexAttrib4Nbv(fn_GetFunctionAddress);
		Init_glVertexAttrib4Niv(fn_GetFunctionAddress);
		Init_glVertexAttrib4Nsv(fn_GetFunctionAddress);
		Init_glVertexAttrib4Nub(fn_GetFunctionAddress);
		Init_glVertexAttrib4Nubv(fn_GetFunctionAddress);
		Init_glVertexAttrib4Nuiv(fn_GetFunctionAddress);
		Init_glVertexAttrib4Nusv(fn_GetFunctionAddress);
		Init_glVertexAttrib4bv(fn_GetFunctionAddress);
		Init_glVertexAttrib4d(fn_GetFunctionAddress);
		Init_glVertexAttrib4dv(fn_GetFunctionAddress);
		Init_glVertexAttrib4f(fn_GetFunctionAddress);
		Init_glVertexAttrib4fv(fn_GetFunctionAddress);
		Init_glVertexAttrib4iv(fn_GetFunctionAddress);
		Init_glVertexAttrib4s(fn_GetFunctionAddress);
		Init_glVertexAttrib4sv(fn_GetFunctionAddress);
		Init_glVertexAttrib4ubv(fn_GetFunctionAddress);
		Init_glVertexAttrib4uiv(fn_GetFunctionAddress);
		Init_glVertexAttrib4usv(fn_GetFunctionAddress);
		Init_glVertexAttribPointer(fn_GetFunctionAddress);
		Init_glUniformMatrix2x3fv(fn_GetFunctionAddress);
		Init_glUniformMatrix3x2fv(fn_GetFunctionAddress);
		Init_glUniformMatrix2x4fv(fn_GetFunctionAddress);
		Init_glUniformMatrix4x2fv(fn_GetFunctionAddress);
		Init_glUniformMatrix3x4fv(fn_GetFunctionAddress);
		Init_glUniformMatrix4x3fv(fn_GetFunctionAddress);
		Init_glColorMaski(fn_GetFunctionAddress);
		Init_glGetBooleani_v(fn_GetFunctionAddress);
		Init_glGetIntegeri_v(fn_GetFunctionAddress);
		Init_glEnablei(fn_GetFunctionAddress);
		Init_glDisablei(fn_GetFunctionAddress);
		Init_glIsEnabledi(fn_GetFunctionAddress);
		Init_glBeginTransformFeedback(fn_GetFunctionAddress);
		Init_glEndTransformFeedback(fn_GetFunctionAddress);
		Init_glBindBufferRange(fn_GetFunctionAddress);
		Init_glBindBufferBase(fn_GetFunctionAddress);
		Init_glTransformFeedbackVaryings(fn_GetFunctionAddress);
		Init_glGetTransformFeedbackVarying(fn_GetFunctionAddress);
		Init_glClampColor(fn_GetFunctionAddress);
		Init_glBeginConditionalRender(fn_GetFunctionAddress);
		Init_glEndConditionalRender(fn_GetFunctionAddress);
		Init_glVertexAttribIPointer(fn_GetFunctionAddress);
		Init_glGetVertexAttribIiv(fn_GetFunctionAddress);
		Init_glGetVertexAttribIuiv(fn_GetFunctionAddress);
		Init_glVertexAttribI1i(fn_GetFunctionAddress);
		Init_glVertexAttribI2i(fn_GetFunctionAddress);
		Init_glVertexAttribI3i(fn_GetFunctionAddress);
		Init_glVertexAttribI4i(fn_GetFunctionAddress);
		Init_glVertexAttribI1ui(fn_GetFunctionAddress);
		Init_glVertexAttribI2ui(fn_GetFunctionAddress);
		Init_glVertexAttribI3ui(fn_GetFunctionAddress);
		Init_glVertexAttribI4ui(fn_GetFunctionAddress);
		Init_glVertexAttribI1iv(fn_GetFunctionAddress);
		Init_glVertexAttribI2iv(fn_GetFunctionAddress);
		Init_glVertexAttribI3iv(fn_GetFunctionAddress);
		Init_glVertexAttribI4iv(fn_GetFunctionAddress);
		Init_glVertexAttribI1uiv(fn_GetFunctionAddress);
		Init_glVertexAttribI2uiv(fn_GetFunctionAddress);
		Init_glVertexAttribI3uiv(fn_GetFunctionAddress);
		Init_glVertexAttribI4uiv(fn_GetFunctionAddress);
		Init_glVertexAttribI4bv(fn_GetFunctionAddress);
		Init_glVertexAttribI4sv(fn_GetFunctionAddress);
		Init_glVertexAttribI4ubv(fn_GetFunctionAddress);
		Init_glVertexAttribI4usv(fn_GetFunctionAddress);
		Init_glGetUniformuiv(fn_GetFunctionAddress);
		Init_glBindFragDataLocation(fn_GetFunctionAddress);
		Init_glGetFragDataLocation(fn_GetFunctionAddress);
		Init_glUniform1ui(fn_GetFunctionAddress);
		Init_glUniform2ui(fn_GetFunctionAddress);
		Init_glUniform3ui(fn_GetFunctionAddress);
		Init_glUniform4ui(fn_GetFunctionAddress);
		Init_glUniform1uiv(fn_GetFunctionAddress);
		Init_glUniform2uiv(fn_GetFunctionAddress);
		Init_glUniform3uiv(fn_GetFunctionAddress);
		Init_glUniform4uiv(fn_GetFunctionAddress);
		Init_glTexParameterIiv(fn_GetFunctionAddress);
		Init_glTexParameterIuiv(fn_GetFunctionAddress);
		Init_glGetTexParameterIiv(fn_GetFunctionAddress);
		Init_glGetTexParameterIuiv(fn_GetFunctionAddress);
		Init_glClearBufferiv(fn_GetFunctionAddress);
		Init_glClearBufferuiv(fn_GetFunctionAddress);
		Init_glClearBufferfv(fn_GetFunctionAddress);
		Init_glClearBufferfi(fn_GetFunctionAddress);
		Init_glGetStringi(fn_GetFunctionAddress);
		Init_glIsRenderbuffer(fn_GetFunctionAddress);
		Init_glBindRenderbuffer(fn_GetFunctionAddress);
		Init_glDeleteRenderbuffers(fn_GetFunctionAddress);
		Init_glGenRenderbuffers(fn_GetFunctionAddress);
		Init_glRenderbufferStorage(fn_GetFunctionAddress);
		Init_glGetRenderbufferParameteriv(fn_GetFunctionAddress);
		Init_glIsFramebuffer(fn_GetFunctionAddress);
		Init_glBindFramebuffer(fn_GetFunctionAddress);
		Init_glDeleteFramebuffers(fn_GetFunctionAddress);
		Init_glGenFramebuffers(fn_GetFunctionAddress);
		Init_glCheckFramebufferStatus(fn_GetFunctionAddress);
		Init_glFramebufferTexture1D(fn_GetFunctionAddress);
		Init_glFramebufferTexture2D(fn_GetFunctionAddress);
		Init_glFramebufferTexture3D(fn_GetFunctionAddress);
		Init_glFramebufferRenderbuffer(fn_GetFunctionAddress);
		Init_glGetFramebufferAttachmentParameteriv(fn_GetFunctionAddress);
		Init_glGenerateMipmap(fn_GetFunctionAddress);
		Init_glBlitFramebuffer(fn_GetFunctionAddress);
		Init_glRenderbufferStorageMultisample(fn_GetFunctionAddress);
		Init_glFramebufferTextureLayer(fn_GetFunctionAddress);
		Init_glMapBufferRange(fn_GetFunctionAddress);
		Init_glFlushMappedBufferRange(fn_GetFunctionAddress);
		Init_glBindVertexArray(fn_GetFunctionAddress);
		Init_glDeleteVertexArrays(fn_GetFunctionAddress);
		Init_glGenVertexArrays(fn_GetFunctionAddress);
		Init_glIsVertexArray(fn_GetFunctionAddress);
		Init_glDrawArraysInstanced(fn_GetFunctionAddress);
		Init_glDrawElementsInstanced(fn_GetFunctionAddress);
		Init_glTexBuffer(fn_GetFunctionAddress);
		Init_glPrimitiveRestartIndex(fn_GetFunctionAddress);
		Init_glCopyBufferSubData(fn_GetFunctionAddress);
		Init_glGetUniformIndices(fn_GetFunctionAddress);
		Init_glGetActiveUniformsiv(fn_GetFunctionAddress);
		Init_glGetActiveUniformName(fn_GetFunctionAddress);
		Init_glGetUniformBlockIndex(fn_GetFunctionAddress);
		Init_glGetActiveUniformBlockiv(fn_GetFunctionAddress);
		Init_glGetActiveUniformBlockName(fn_GetFunctionAddress);
		Init_glUniformBlockBinding(fn_GetFunctionAddress);
		Init_glDrawElementsBaseVertex(fn_GetFunctionAddress);
		Init_glDrawRangeElementsBaseVertex(fn_GetFunctionAddress);
		Init_glDrawElementsInstancedBaseVertex(fn_GetFunctionAddress);
		Init_glMultiDrawElementsBaseVertex(fn_GetFunctionAddress);
		Init_glProvokingVertex(fn_GetFunctionAddress);
		Init_glFenceSync(fn_GetFunctionAddress);
		Init_glIsSync(fn_GetFunctionAddress);
		Init_glDeleteSync(fn_GetFunctionAddress);
		Init_glClientWaitSync(fn_GetFunctionAddress);
		Init_glWaitSync(fn_GetFunctionAddress);
		Init_glGetInteger64v(fn_GetFunctionAddress);
		Init_glGetSynciv(fn_GetFunctionAddress);
		Init_glGetInteger64i_v(fn_GetFunctionAddress);
		Init_glGetBufferParameteri64v(fn_GetFunctionAddress);
		Init_glFramebufferTexture(fn_GetFunctionAddress);
		Init_glTexImage2DMultisample(fn_GetFunctionAddress);
		Init_glTexImage3DMultisample(fn_GetFunctionAddress);
		Init_glGetMultisamplefv(fn_GetFunctionAddress);
		Init_glSampleMaski(fn_GetFunctionAddress);
		Init_glBindFragDataLocationIndexed(fn_GetFunctionAddress);
		Init_glGetFragDataIndex(fn_GetFunctionAddress);
		Init_glGenSamplers(fn_GetFunctionAddress);
		Init_glDeleteSamplers(fn_GetFunctionAddress);
		Init_glIsSampler(fn_GetFunctionAddress);
		Init_glBindSampler(fn_GetFunctionAddress);
		Init_glSamplerParameteri(fn_GetFunctionAddress);
		Init_glSamplerParameteriv(fn_GetFunctionAddress);
		Init_glSamplerParameterf(fn_GetFunctionAddress);
		Init_glSamplerParameterfv(fn_GetFunctionAddress);
		Init_glSamplerParameterIiv(fn_GetFunctionAddress);
		Init_glSamplerParameterIuiv(fn_GetFunctionAddress);
		Init_glGetSamplerParameteriv(fn_GetFunctionAddress);
		Init_glGetSamplerParameterIiv(fn_GetFunctionAddress);
		Init_glGetSamplerParameterfv(fn_GetFunctionAddress);
		Init_glGetSamplerParameterIuiv(fn_GetFunctionAddress);
		Init_glQueryCounter(fn_GetFunctionAddress);
		Init_glGetQueryObjecti64v(fn_GetFunctionAddress);
		Init_glGetQueryObjectui64v(fn_GetFunctionAddress);
		Init_glVertexAttribDivisor(fn_GetFunctionAddress);
		Init_glVertexAttribP1ui(fn_GetFunctionAddress);
		Init_glVertexAttribP1uiv(fn_GetFunctionAddress);
		Init_glVertexAttribP2ui(fn_GetFunctionAddress);
		Init_glVertexAttribP2uiv(fn_GetFunctionAddress);
		Init_glVertexAttribP3ui(fn_GetFunctionAddress);
		Init_glVertexAttribP3uiv(fn_GetFunctionAddress);
		Init_glVertexAttribP4ui(fn_GetFunctionAddress);
		Init_glVertexAttribP4uiv(fn_GetFunctionAddress);
		Init_glVertexP2ui(fn_GetFunctionAddress);
		Init_glVertexP2uiv(fn_GetFunctionAddress);
		Init_glVertexP3ui(fn_GetFunctionAddress);
		Init_glVertexP3uiv(fn_GetFunctionAddress);
		Init_glVertexP4ui(fn_GetFunctionAddress);
		Init_glVertexP4uiv(fn_GetFunctionAddress);
		Init_glTexCoordP1ui(fn_GetFunctionAddress);
		Init_glTexCoordP1uiv(fn_GetFunctionAddress);
		Init_glTexCoordP2ui(fn_GetFunctionAddress);
		Init_glTexCoordP2uiv(fn_GetFunctionAddress);
		Init_glTexCoordP3ui(fn_GetFunctionAddress);
		Init_glTexCoordP3uiv(fn_GetFunctionAddress);
		Init_glTexCoordP4ui(fn_GetFunctionAddress);
		Init_glTexCoordP4uiv(fn_GetFunctionAddress);
		Init_glMultiTexCoordP1ui(fn_GetFunctionAddress);
		Init_glMultiTexCoordP1uiv(fn_GetFunctionAddress);
		Init_glMultiTexCoordP2ui(fn_GetFunctionAddress);
		Init_glMultiTexCoordP2uiv(fn_GetFunctionAddress);
		Init_glMultiTexCoordP3ui(fn_GetFunctionAddress);
		Init_glMultiTexCoordP3uiv(fn_GetFunctionAddress);
		Init_glMultiTexCoordP4ui(fn_GetFunctionAddress);
		Init_glMultiTexCoordP4uiv(fn_GetFunctionAddress);
		Init_glNormalP3ui(fn_GetFunctionAddress);
		Init_glNormalP3uiv(fn_GetFunctionAddress);
		Init_glColorP3ui(fn_GetFunctionAddress);
		Init_glColorP3uiv(fn_GetFunctionAddress);
		Init_glColorP4ui(fn_GetFunctionAddress);
		Init_glColorP4uiv(fn_GetFunctionAddress);
		Init_glSecondaryColorP3ui(fn_GetFunctionAddress);
		Init_glSecondaryColorP3uiv(fn_GetFunctionAddress);
	}
}
}
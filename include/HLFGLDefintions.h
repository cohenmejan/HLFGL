// generated

#pragma once

#include <GL/gl.h>

namespace HLF::GL {
	using PFN_glAccum = void(*)(GLenum op, GLfloat value);
	using PFN_glActiveShaderProgram = void(*)(GLuint pipeline, GLuint program);
	using PFN_glActiveTexture = void(*)(GLenum texture);
	using PFN_glAlphaFunc = void(*)(GLenum func, GLfloat ref);
	using PFN_glAreTexturesResident = GLboolean(*)(GLsizei n, const GLuint * textures, GLboolean * residences);
	using PFN_glArrayElement = void(*)(GLint i);
	using PFN_glAttachShader = void(*)(GLuint program, GLuint shader);
	using PFN_glBegin = void(*)(GLenum mode);
	using PFN_glBeginConditionalRender = void(*)(GLuint id, GLenum mode);
	using PFN_glBeginQuery = void(*)(GLenum target, GLuint id);
	using PFN_glBeginQueryIndexed = void(*)(GLenum target, GLuint index, GLuint id);
	using PFN_glBeginTransformFeedback = void(*)(GLenum primitiveMode);
	using PFN_glBindAttribLocation = void(*)(GLuint program, GLuint index, const GLchar * name);
	using PFN_glBindBuffer = void(*)(GLenum target, GLuint buffer);
	using PFN_glBindBufferBase = void(*)(GLenum target, GLuint index, GLuint buffer);
	using PFN_glBindBufferRange = void(*)(GLenum target, GLuint index, GLuint buffer, GLintptr offset, GLsizeiptr size);
	using PFN_glBindBuffersBase = void(*)(GLenum target, GLuint first, GLsizei count, const GLuint * buffers);
	using PFN_glBindBuffersRange = void(*)(GLenum target, GLuint first, GLsizei count, const GLuint * buffers, const GLintptr * offsets, const GLsizeiptr * sizes);
	using PFN_glBindFragDataLocation = void(*)(GLuint program, GLuint color, const GLchar * name);
	using PFN_glBindFragDataLocationIndexed = void(*)(GLuint program, GLuint colorNumber, GLuint index, const GLchar * name);
	using PFN_glBindFramebuffer = void(*)(GLenum target, GLuint framebuffer);
	using PFN_glBindImageTexture = void(*)(GLuint unit, GLuint texture, GLint level, GLboolean layered, GLint layer, GLenum access, GLenum format);
	using PFN_glBindImageTextures = void(*)(GLuint first, GLsizei count, const GLuint * textures);
	using PFN_glBindProgramPipeline = void(*)(GLuint pipeline);
	using PFN_glBindRenderbuffer = void(*)(GLenum target, GLuint renderbuffer);
	using PFN_glBindSampler = void(*)(GLuint unit, GLuint sampler);
	using PFN_glBindSamplers = void(*)(GLuint first, GLsizei count, const GLuint * samplers);
	using PFN_glBindTexture = void(*)(GLenum target, GLuint texture);
	using PFN_glBindTextureUnit = void(*)(GLuint unit, GLuint texture);
	using PFN_glBindTextures = void(*)(GLuint first, GLsizei count, const GLuint * textures);
	using PFN_glBindTransformFeedback = void(*)(GLenum target, GLuint id);
	using PFN_glBindVertexArray = void(*)(GLuint array);
	using PFN_glBindVertexBuffer = void(*)(GLuint bindingindex, GLuint buffer, GLintptr offset, GLsizei stride);
	using PFN_glBindVertexBuffers = void(*)(GLuint first, GLsizei count, const GLuint * buffers, const GLintptr * offsets, const GLsizei * strides);
	using PFN_glBitmap = void(*)(GLsizei width, GLsizei height, GLfloat xorig, GLfloat yorig, GLfloat xmove, GLfloat ymove, const GLubyte * bitmap);
	using PFN_glBlendColor = void(*)(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha);
	using PFN_glBlendEquation = void(*)(GLenum mode);
	using PFN_glBlendEquationSeparate = void(*)(GLenum modeRGB, GLenum modeAlpha);
	using PFN_glBlendEquationSeparatei = void(*)(GLuint buf, GLenum modeRGB, GLenum modeAlpha);
	using PFN_glBlendEquationi = void(*)(GLuint buf, GLenum mode);
	using PFN_glBlendFunc = void(*)(GLenum sfactor, GLenum dfactor);
	using PFN_glBlendFuncSeparate = void(*)(GLenum sfactorRGB, GLenum dfactorRGB, GLenum sfactorAlpha, GLenum dfactorAlpha);
	using PFN_glBlendFuncSeparatei = void(*)(GLuint buf, GLenum srcRGB, GLenum dstRGB, GLenum srcAlpha, GLenum dstAlpha);
	using PFN_glBlendFunci = void(*)(GLuint buf, GLenum src, GLenum dst);
	using PFN_glBlitFramebuffer = void(*)(GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, GLbitfield mask, GLenum filter);
	using PFN_glBlitNamedFramebuffer = void(*)(GLuint readFramebuffer, GLuint drawFramebuffer, GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, GLbitfield mask, GLenum filter);
	using PFN_glBufferData = void(*)(GLenum target, GLsizeiptr size, const void * data, GLenum usage);
	using PFN_glBufferStorage = void(*)(GLenum target, GLsizeiptr size, const void * data, GLbitfield flags);
	using PFN_glBufferSubData = void(*)(GLenum target, GLintptr offset, GLsizeiptr size, const void * data);
	using PFN_glCallList = void(*)(GLuint list);
	using PFN_glCallLists = void(*)(GLsizei n, GLenum type, const void * lists);
	using PFN_glCheckFramebufferStatus = GLenum(*)(GLenum target);
	using PFN_glCheckNamedFramebufferStatus = GLenum(*)(GLuint framebuffer, GLenum target);
	using PFN_glClampColor = void(*)(GLenum target, GLenum clamp);
	using PFN_glClear = void(*)(GLbitfield mask);
	using PFN_glClearAccum = void(*)(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha);
	using PFN_glClearBufferData = void(*)(GLenum target, GLenum internalformat, GLenum format, GLenum type, const void * data);
	using PFN_glClearBufferSubData = void(*)(GLenum target, GLenum internalformat, GLintptr offset, GLsizeiptr size, GLenum format, GLenum type, const void * data);
	using PFN_glClearBufferfi = void(*)(GLenum buffer, GLint drawbuffer, GLfloat depth, GLint stencil);
	using PFN_glClearBufferfv = void(*)(GLenum buffer, GLint drawbuffer, const GLfloat * value);
	using PFN_glClearBufferiv = void(*)(GLenum buffer, GLint drawbuffer, const GLint * value);
	using PFN_glClearBufferuiv = void(*)(GLenum buffer, GLint drawbuffer, const GLuint * value);
	using PFN_glClearColor = void(*)(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha);
	using PFN_glClearDepth = void(*)(GLdouble depth);
	using PFN_glClearDepthf = void(*)(GLfloat d);
	using PFN_glClearIndex = void(*)(GLfloat c);
	using PFN_glClearNamedBufferData = void(*)(GLuint buffer, GLenum internalformat, GLenum format, GLenum type, const void * data);
	using PFN_glClearNamedBufferSubData = void(*)(GLuint buffer, GLenum internalformat, GLintptr offset, GLsizeiptr size, GLenum format, GLenum type, const void * data);
	using PFN_glClearNamedFramebufferfi = void(*)(GLuint framebuffer, GLenum buffer, GLint drawbuffer, GLfloat depth, GLint stencil);
	using PFN_glClearNamedFramebufferfv = void(*)(GLuint framebuffer, GLenum buffer, GLint drawbuffer, const GLfloat * value);
	using PFN_glClearNamedFramebufferiv = void(*)(GLuint framebuffer, GLenum buffer, GLint drawbuffer, const GLint * value);
	using PFN_glClearNamedFramebufferuiv = void(*)(GLuint framebuffer, GLenum buffer, GLint drawbuffer, const GLuint * value);
	using PFN_glClearStencil = void(*)(GLint s);
	using PFN_glClearTexImage = void(*)(GLuint texture, GLint level, GLenum format, GLenum type, const void * data);
	using PFN_glClearTexSubImage = void(*)(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const void * data);
	using PFN_glClientActiveTexture = void(*)(GLenum texture);
	using PFN_glClientWaitSync = GLenum(*)(GLsync sync, GLbitfield flags, GLuint64 timeout);
	using PFN_glClipControl = void(*)(GLenum origin, GLenum depth);
	using PFN_glClipPlane = void(*)(GLenum plane, const GLdouble * equation);
	using PFN_glColor3b = void(*)(GLbyte red, GLbyte green, GLbyte blue);
	using PFN_glColor3bv = void(*)(const GLbyte * v);
	using PFN_glColor3d = void(*)(GLdouble red, GLdouble green, GLdouble blue);
	using PFN_glColor3dv = void(*)(const GLdouble * v);
	using PFN_glColor3f = void(*)(GLfloat red, GLfloat green, GLfloat blue);
	using PFN_glColor3fv = void(*)(const GLfloat * v);
	using PFN_glColor3i = void(*)(GLint red, GLint green, GLint blue);
	using PFN_glColor3iv = void(*)(const GLint * v);
	using PFN_glColor3s = void(*)(GLshort red, GLshort green, GLshort blue);
	using PFN_glColor3sv = void(*)(const GLshort * v);
	using PFN_glColor3ub = void(*)(GLubyte red, GLubyte green, GLubyte blue);
	using PFN_glColor3ubv = void(*)(const GLubyte * v);
	using PFN_glColor3ui = void(*)(GLuint red, GLuint green, GLuint blue);
	using PFN_glColor3uiv = void(*)(const GLuint * v);
	using PFN_glColor3us = void(*)(GLushort red, GLushort green, GLushort blue);
	using PFN_glColor3usv = void(*)(const GLushort * v);
	using PFN_glColor4b = void(*)(GLbyte red, GLbyte green, GLbyte blue, GLbyte alpha);
	using PFN_glColor4bv = void(*)(const GLbyte * v);
	using PFN_glColor4d = void(*)(GLdouble red, GLdouble green, GLdouble blue, GLdouble alpha);
	using PFN_glColor4dv = void(*)(const GLdouble * v);
	using PFN_glColor4f = void(*)(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha);
	using PFN_glColor4fv = void(*)(const GLfloat * v);
	using PFN_glColor4i = void(*)(GLint red, GLint green, GLint blue, GLint alpha);
	using PFN_glColor4iv = void(*)(const GLint * v);
	using PFN_glColor4s = void(*)(GLshort red, GLshort green, GLshort blue, GLshort alpha);
	using PFN_glColor4sv = void(*)(const GLshort * v);
	using PFN_glColor4ub = void(*)(GLubyte red, GLubyte green, GLubyte blue, GLubyte alpha);
	using PFN_glColor4ubv = void(*)(const GLubyte * v);
	using PFN_glColor4ui = void(*)(GLuint red, GLuint green, GLuint blue, GLuint alpha);
	using PFN_glColor4uiv = void(*)(const GLuint * v);
	using PFN_glColor4us = void(*)(GLushort red, GLushort green, GLushort blue, GLushort alpha);
	using PFN_glColor4usv = void(*)(const GLushort * v);
	using PFN_glColorMask = void(*)(GLboolean red, GLboolean green, GLboolean blue, GLboolean alpha);
	using PFN_glColorMaski = void(*)(GLuint index, GLboolean r, GLboolean g, GLboolean b, GLboolean a);
	using PFN_glColorMaterial = void(*)(GLenum face, GLenum mode);
	using PFN_glColorP3ui = void(*)(GLenum type, GLuint color);
	using PFN_glColorP3uiv = void(*)(GLenum type, const GLuint * color);
	using PFN_glColorP4ui = void(*)(GLenum type, GLuint color);
	using PFN_glColorP4uiv = void(*)(GLenum type, const GLuint * color);
	using PFN_glColorPointer = void(*)(GLint size, GLenum type, GLsizei stride, const void * pointer);
	using PFN_glCompileShader = void(*)(GLuint shader);
	using PFN_glCompressedTexImage1D = void(*)(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLint border, GLsizei imageSize, const void * data);
	using PFN_glCompressedTexImage2D = void(*)(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const void * data);
	using PFN_glCompressedTexImage3D = void(*)(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLsizei imageSize, const void * data);
	using PFN_glCompressedTexSubImage1D = void(*)(GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLsizei imageSize, const void * data);
	using PFN_glCompressedTexSubImage2D = void(*)(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const void * data);
	using PFN_glCompressedTexSubImage3D = void(*)(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const void * data);
	using PFN_glCompressedTextureSubImage1D = void(*)(GLuint texture, GLint level, GLint xoffset, GLsizei width, GLenum format, GLsizei imageSize, const void * data);
	using PFN_glCompressedTextureSubImage2D = void(*)(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const void * data);
	using PFN_glCompressedTextureSubImage3D = void(*)(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const void * data);
	using PFN_glCopyBufferSubData = void(*)(GLenum readTarget, GLenum writeTarget, GLintptr readOffset, GLintptr writeOffset, GLsizeiptr size);
	using PFN_glCopyImageSubData = void(*)(GLuint srcName, GLenum srcTarget, GLint srcLevel, GLint srcX, GLint srcY, GLint srcZ, GLuint dstName, GLenum dstTarget, GLint dstLevel, GLint dstX, GLint dstY, GLint dstZ, GLsizei srcWidth, GLsizei srcHeight, GLsizei srcDepth);
	using PFN_glCopyNamedBufferSubData = void(*)(GLuint readBuffer, GLuint writeBuffer, GLintptr readOffset, GLintptr writeOffset, GLsizeiptr size);
	using PFN_glCopyPixels = void(*)(GLint x, GLint y, GLsizei width, GLsizei height, GLenum type);
	using PFN_glCopyTexImage1D = void(*)(GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLint border);
	using PFN_glCopyTexImage2D = void(*)(GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border);
	using PFN_glCopyTexSubImage1D = void(*)(GLenum target, GLint level, GLint xoffset, GLint x, GLint y, GLsizei width);
	using PFN_glCopyTexSubImage2D = void(*)(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height);
	using PFN_glCopyTexSubImage3D = void(*)(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height);
	using PFN_glCopyTextureSubImage1D = void(*)(GLuint texture, GLint level, GLint xoffset, GLint x, GLint y, GLsizei width);
	using PFN_glCopyTextureSubImage2D = void(*)(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height);
	using PFN_glCopyTextureSubImage3D = void(*)(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height);
	using PFN_glCreateBuffers = void(*)(GLsizei n, GLuint * buffers);
	using PFN_glCreateFramebuffers = void(*)(GLsizei n, GLuint * framebuffers);
	using PFN_glCreateProgram = GLuint(*)(void);
	using PFN_glCreateProgramPipelines = void(*)(GLsizei n, GLuint * pipelines);
	using PFN_glCreateQueries = void(*)(GLenum target, GLsizei n, GLuint * ids);
	using PFN_glCreateRenderbuffers = void(*)(GLsizei n, GLuint * renderbuffers);
	using PFN_glCreateSamplers = void(*)(GLsizei n, GLuint * samplers);
	using PFN_glCreateShader = GLuint(*)(GLenum type);
	using PFN_glCreateShaderProgramv = GLuint(*)(GLenum type, GLsizei count, const GLchar *const* strings);
	using PFN_glCreateTextures = void(*)(GLenum target, GLsizei n, GLuint * textures);
	using PFN_glCreateTransformFeedbacks = void(*)(GLsizei n, GLuint * ids);
	using PFN_glCreateVertexArrays = void(*)(GLsizei n, GLuint * arrays);
	using PFN_glCullFace = void(*)(GLenum mode);
	using PFN_glDebugMessageCallback = void(*)(GLDEBUGPROC callback, const void * userParam);
	using PFN_glDebugMessageControl = void(*)(GLenum source, GLenum type, GLenum severity, GLsizei count, const GLuint * ids, GLboolean enabled);
	using PFN_glDebugMessageInsert = void(*)(GLenum source, GLenum type, GLuint id, GLenum severity, GLsizei length, const GLchar * buf);
	using PFN_glDeleteBuffers = void(*)(GLsizei n, const GLuint * buffers);
	using PFN_glDeleteFramebuffers = void(*)(GLsizei n, const GLuint * framebuffers);
	using PFN_glDeleteLists = void(*)(GLuint list, GLsizei range);
	using PFN_glDeleteProgram = void(*)(GLuint program);
	using PFN_glDeleteProgramPipelines = void(*)(GLsizei n, const GLuint * pipelines);
	using PFN_glDeleteQueries = void(*)(GLsizei n, const GLuint * ids);
	using PFN_glDeleteRenderbuffers = void(*)(GLsizei n, const GLuint * renderbuffers);
	using PFN_glDeleteSamplers = void(*)(GLsizei count, const GLuint * samplers);
	using PFN_glDeleteShader = void(*)(GLuint shader);
	using PFN_glDeleteSync = void(*)(GLsync sync);
	using PFN_glDeleteTextures = void(*)(GLsizei n, const GLuint * textures);
	using PFN_glDeleteTransformFeedbacks = void(*)(GLsizei n, const GLuint * ids);
	using PFN_glDeleteVertexArrays = void(*)(GLsizei n, const GLuint * arrays);
	using PFN_glDepthFunc = void(*)(GLenum func);
	using PFN_glDepthMask = void(*)(GLboolean flag);
	using PFN_glDepthRange = void(*)(GLdouble n, GLdouble f);
	using PFN_glDepthRangeArrayv = void(*)(GLuint first, GLsizei count, const GLdouble * v);
	using PFN_glDepthRangeIndexed = void(*)(GLuint index, GLdouble n, GLdouble f);
	using PFN_glDepthRangef = void(*)(GLfloat n, GLfloat f);
	using PFN_glDetachShader = void(*)(GLuint program, GLuint shader);
	using PFN_glDisable = void(*)(GLenum cap);
	using PFN_glDisableClientState = void(*)(GLenum array);
	using PFN_glDisableVertexArrayAttrib = void(*)(GLuint vaobj, GLuint index);
	using PFN_glDisableVertexAttribArray = void(*)(GLuint index);
	using PFN_glDisablei = void(*)(GLenum target, GLuint index);
	using PFN_glDispatchCompute = void(*)(GLuint num_groups_x, GLuint num_groups_y, GLuint num_groups_z);
	using PFN_glDispatchComputeIndirect = void(*)(GLintptr indirect);
	using PFN_glDrawArrays = void(*)(GLenum mode, GLint first, GLsizei count);
	using PFN_glDrawArraysIndirect = void(*)(GLenum mode, const void * indirect);
	using PFN_glDrawArraysInstanced = void(*)(GLenum mode, GLint first, GLsizei count, GLsizei instancecount);
	using PFN_glDrawArraysInstancedBaseInstance = void(*)(GLenum mode, GLint first, GLsizei count, GLsizei instancecount, GLuint baseinstance);
	using PFN_glDrawBuffer = void(*)(GLenum buf);
	using PFN_glDrawBuffers = void(*)(GLsizei n, const GLenum * bufs);
	using PFN_glDrawElements = void(*)(GLenum mode, GLsizei count, GLenum type, const void * indices);
	using PFN_glDrawElementsBaseVertex = void(*)(GLenum mode, GLsizei count, GLenum type, const void * indices, GLint basevertex);
	using PFN_glDrawElementsIndirect = void(*)(GLenum mode, GLenum type, const void * indirect);
	using PFN_glDrawElementsInstanced = void(*)(GLenum mode, GLsizei count, GLenum type, const void * indices, GLsizei instancecount);
	using PFN_glDrawElementsInstancedBaseInstance = void(*)(GLenum mode, GLsizei count, GLenum type, const void * indices, GLsizei instancecount, GLuint baseinstance);
	using PFN_glDrawElementsInstancedBaseVertex = void(*)(GLenum mode, GLsizei count, GLenum type, const void * indices, GLsizei instancecount, GLint basevertex);
	using PFN_glDrawElementsInstancedBaseVertexBaseInstance = void(*)(GLenum mode, GLsizei count, GLenum type, const void * indices, GLsizei instancecount, GLint basevertex, GLuint baseinstance);
	using PFN_glDrawPixels = void(*)(GLsizei width, GLsizei height, GLenum format, GLenum type, const void * pixels);
	using PFN_glDrawRangeElements = void(*)(GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const void * indices);
	using PFN_glDrawRangeElementsBaseVertex = void(*)(GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const void * indices, GLint basevertex);
	using PFN_glDrawTransformFeedback = void(*)(GLenum mode, GLuint id);
	using PFN_glDrawTransformFeedbackInstanced = void(*)(GLenum mode, GLuint id, GLsizei instancecount);
	using PFN_glDrawTransformFeedbackStream = void(*)(GLenum mode, GLuint id, GLuint stream);
	using PFN_glDrawTransformFeedbackStreamInstanced = void(*)(GLenum mode, GLuint id, GLuint stream, GLsizei instancecount);
	using PFN_glEdgeFlag = void(*)(GLboolean flag);
	using PFN_glEdgeFlagPointer = void(*)(GLsizei stride, const void * pointer);
	using PFN_glEdgeFlagv = void(*)(const GLboolean * flag);
	using PFN_glEnable = void(*)(GLenum cap);
	using PFN_glEnableClientState = void(*)(GLenum array);
	using PFN_glEnableVertexArrayAttrib = void(*)(GLuint vaobj, GLuint index);
	using PFN_glEnableVertexAttribArray = void(*)(GLuint index);
	using PFN_glEnablei = void(*)(GLenum target, GLuint index);
	using PFN_glEnd = void(*)(void);
	using PFN_glEndConditionalRender = void(*)(void);
	using PFN_glEndList = void(*)(void);
	using PFN_glEndQuery = void(*)(GLenum target);
	using PFN_glEndQueryIndexed = void(*)(GLenum target, GLuint index);
	using PFN_glEndTransformFeedback = void(*)(void);
	using PFN_glEvalCoord1d = void(*)(GLdouble u);
	using PFN_glEvalCoord1dv = void(*)(const GLdouble * u);
	using PFN_glEvalCoord1f = void(*)(GLfloat u);
	using PFN_glEvalCoord1fv = void(*)(const GLfloat * u);
	using PFN_glEvalCoord2d = void(*)(GLdouble u, GLdouble v);
	using PFN_glEvalCoord2dv = void(*)(const GLdouble * u);
	using PFN_glEvalCoord2f = void(*)(GLfloat u, GLfloat v);
	using PFN_glEvalCoord2fv = void(*)(const GLfloat * u);
	using PFN_glEvalMesh1 = void(*)(GLenum mode, GLint i1, GLint i2);
	using PFN_glEvalMesh2 = void(*)(GLenum mode, GLint i1, GLint i2, GLint j1, GLint j2);
	using PFN_glEvalPoint1 = void(*)(GLint i);
	using PFN_glEvalPoint2 = void(*)(GLint i, GLint j);
	using PFN_glFeedbackBuffer = void(*)(GLsizei size, GLenum type, GLfloat * buffer);
	using PFN_glFenceSync = GLsync(*)(GLenum condition, GLbitfield flags);
	using PFN_glFinish = void(*)(void);
	using PFN_glFlush = void(*)(void);
	using PFN_glFlushMappedBufferRange = void(*)(GLenum target, GLintptr offset, GLsizeiptr length);
	using PFN_glFlushMappedNamedBufferRange = void(*)(GLuint buffer, GLintptr offset, GLsizeiptr length);
	using PFN_glFogCoordPointer = void(*)(GLenum type, GLsizei stride, const void * pointer);
	using PFN_glFogCoordd = void(*)(GLdouble coord);
	using PFN_glFogCoorddv = void(*)(const GLdouble * coord);
	using PFN_glFogCoordf = void(*)(GLfloat coord);
	using PFN_glFogCoordfv = void(*)(const GLfloat * coord);
	using PFN_glFogf = void(*)(GLenum pname, GLfloat param);
	using PFN_glFogfv = void(*)(GLenum pname, const GLfloat * params);
	using PFN_glFogi = void(*)(GLenum pname, GLint param);
	using PFN_glFogiv = void(*)(GLenum pname, const GLint * params);
	using PFN_glFramebufferParameteri = void(*)(GLenum target, GLenum pname, GLint param);
	using PFN_glFramebufferRenderbuffer = void(*)(GLenum target, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer);
	using PFN_glFramebufferTexture = void(*)(GLenum target, GLenum attachment, GLuint texture, GLint level);
	using PFN_glFramebufferTexture1D = void(*)(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level);
	using PFN_glFramebufferTexture2D = void(*)(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level);
	using PFN_glFramebufferTexture3D = void(*)(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level, GLint zoffset);
	using PFN_glFramebufferTextureLayer = void(*)(GLenum target, GLenum attachment, GLuint texture, GLint level, GLint layer);
	using PFN_glFrontFace = void(*)(GLenum mode);
	using PFN_glFrustum = void(*)(GLdouble left, GLdouble right, GLdouble bottom, GLdouble top, GLdouble zNear, GLdouble zFar);
	using PFN_glGenBuffers = void(*)(GLsizei n, GLuint * buffers);
	using PFN_glGenFramebuffers = void(*)(GLsizei n, GLuint * framebuffers);
	using PFN_glGenLists = GLuint(*)(GLsizei range);
	using PFN_glGenProgramPipelines = void(*)(GLsizei n, GLuint * pipelines);
	using PFN_glGenQueries = void(*)(GLsizei n, GLuint * ids);
	using PFN_glGenRenderbuffers = void(*)(GLsizei n, GLuint * renderbuffers);
	using PFN_glGenSamplers = void(*)(GLsizei count, GLuint * samplers);
	using PFN_glGenTextures = void(*)(GLsizei n, GLuint * textures);
	using PFN_glGenTransformFeedbacks = void(*)(GLsizei n, GLuint * ids);
	using PFN_glGenVertexArrays = void(*)(GLsizei n, GLuint * arrays);
	using PFN_glGenerateMipmap = void(*)(GLenum target);
	using PFN_glGenerateTextureMipmap = void(*)(GLuint texture);
	using PFN_glGetActiveAtomicCounterBufferiv = void(*)(GLuint program, GLuint bufferIndex, GLenum pname, GLint * params);
	using PFN_glGetActiveAttrib = void(*)(GLuint program, GLuint index, GLsizei bufSize, GLsizei * length, GLint * size, GLenum * type, GLchar * name);
	using PFN_glGetActiveSubroutineName = void(*)(GLuint program, GLenum shadertype, GLuint index, GLsizei bufSize, GLsizei * length, GLchar * name);
	using PFN_glGetActiveSubroutineUniformName = void(*)(GLuint program, GLenum shadertype, GLuint index, GLsizei bufSize, GLsizei * length, GLchar * name);
	using PFN_glGetActiveSubroutineUniformiv = void(*)(GLuint program, GLenum shadertype, GLuint index, GLenum pname, GLint * values);
	using PFN_glGetActiveUniform = void(*)(GLuint program, GLuint index, GLsizei bufSize, GLsizei * length, GLint * size, GLenum * type, GLchar * name);
	using PFN_glGetActiveUniformBlockName = void(*)(GLuint program, GLuint uniformBlockIndex, GLsizei bufSize, GLsizei * length, GLchar * uniformBlockName);
	using PFN_glGetActiveUniformBlockiv = void(*)(GLuint program, GLuint uniformBlockIndex, GLenum pname, GLint * params);
	using PFN_glGetActiveUniformName = void(*)(GLuint program, GLuint uniformIndex, GLsizei bufSize, GLsizei * length, GLchar * uniformName);
	using PFN_glGetActiveUniformsiv = void(*)(GLuint program, GLsizei uniformCount, const GLuint * uniformIndices, GLenum pname, GLint * params);
	using PFN_glGetAttachedShaders = void(*)(GLuint program, GLsizei maxCount, GLsizei * count, GLuint * shaders);
	using PFN_glGetAttribLocation = GLint(*)(GLuint program, const GLchar * name);
	using PFN_glGetBooleani_v = void(*)(GLenum target, GLuint index, GLboolean * data);
	using PFN_glGetBooleanv = void(*)(GLenum pname, GLboolean * data);
	using PFN_glGetBufferParameteri64v = void(*)(GLenum target, GLenum pname, GLint64 * params);
	using PFN_glGetBufferParameteriv = void(*)(GLenum target, GLenum pname, GLint * params);
	using PFN_glGetBufferPointerv = void(*)(GLenum target, GLenum pname, void ** params);
	using PFN_glGetBufferSubData = void(*)(GLenum target, GLintptr offset, GLsizeiptr size, void * data);
	using PFN_glGetClipPlane = void(*)(GLenum plane, GLdouble * equation);
	using PFN_glGetCompressedTexImage = void(*)(GLenum target, GLint level, void * img);
	using PFN_glGetCompressedTextureImage = void(*)(GLuint texture, GLint level, GLsizei bufSize, void * pixels);
	using PFN_glGetCompressedTextureSubImage = void(*)(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLsizei bufSize, void * pixels);
	using PFN_glGetDebugMessageLog = GLuint(*)(GLuint count, GLsizei bufSize, GLenum * sources, GLenum * types, GLuint * ids, GLenum * severities, GLsizei * lengths, GLchar * messageLog);
	using PFN_glGetDoublei_v = void(*)(GLenum target, GLuint index, GLdouble * data);
	using PFN_glGetDoublev = void(*)(GLenum pname, GLdouble * data);
	using PFN_glGetError = GLenum(*)(void);
	using PFN_glGetFloati_v = void(*)(GLenum target, GLuint index, GLfloat * data);
	using PFN_glGetFloatv = void(*)(GLenum pname, GLfloat * data);
	using PFN_glGetFragDataIndex = GLint(*)(GLuint program, const GLchar * name);
	using PFN_glGetFragDataLocation = GLint(*)(GLuint program, const GLchar * name);
	using PFN_glGetFramebufferAttachmentParameteriv = void(*)(GLenum target, GLenum attachment, GLenum pname, GLint * params);
	using PFN_glGetFramebufferParameteriv = void(*)(GLenum target, GLenum pname, GLint * params);
	using PFN_glGetGraphicsResetStatus = GLenum(*)(void);
	using PFN_glGetInteger64i_v = void(*)(GLenum target, GLuint index, GLint64 * data);
	using PFN_glGetInteger64v = void(*)(GLenum pname, GLint64 * data);
	using PFN_glGetIntegeri_v = void(*)(GLenum target, GLuint index, GLint * data);
	using PFN_glGetIntegerv = void(*)(GLenum pname, GLint * data);
	using PFN_glGetInternalformati64v = void(*)(GLenum target, GLenum internalformat, GLenum pname, GLsizei count, GLint64 * params);
	using PFN_glGetInternalformativ = void(*)(GLenum target, GLenum internalformat, GLenum pname, GLsizei count, GLint * params);
	using PFN_glGetLightfv = void(*)(GLenum light, GLenum pname, GLfloat * params);
	using PFN_glGetLightiv = void(*)(GLenum light, GLenum pname, GLint * params);
	using PFN_glGetMapdv = void(*)(GLenum target, GLenum query, GLdouble * v);
	using PFN_glGetMapfv = void(*)(GLenum target, GLenum query, GLfloat * v);
	using PFN_glGetMapiv = void(*)(GLenum target, GLenum query, GLint * v);
	using PFN_glGetMaterialfv = void(*)(GLenum face, GLenum pname, GLfloat * params);
	using PFN_glGetMaterialiv = void(*)(GLenum face, GLenum pname, GLint * params);
	using PFN_glGetMultisamplefv = void(*)(GLenum pname, GLuint index, GLfloat * val);
	using PFN_glGetNamedBufferParameteri64v = void(*)(GLuint buffer, GLenum pname, GLint64 * params);
	using PFN_glGetNamedBufferParameteriv = void(*)(GLuint buffer, GLenum pname, GLint * params);
	using PFN_glGetNamedBufferPointerv = void(*)(GLuint buffer, GLenum pname, void ** params);
	using PFN_glGetNamedBufferSubData = void(*)(GLuint buffer, GLintptr offset, GLsizeiptr size, void * data);
	using PFN_glGetNamedFramebufferAttachmentParameteriv = void(*)(GLuint framebuffer, GLenum attachment, GLenum pname, GLint * params);
	using PFN_glGetNamedFramebufferParameteriv = void(*)(GLuint framebuffer, GLenum pname, GLint * param);
	using PFN_glGetNamedRenderbufferParameteriv = void(*)(GLuint renderbuffer, GLenum pname, GLint * params);
	using PFN_glGetObjectLabel = void(*)(GLenum identifier, GLuint name, GLsizei bufSize, GLsizei * length, GLchar * label);
	using PFN_glGetObjectPtrLabel = void(*)(const void * ptr, GLsizei bufSize, GLsizei * length, GLchar * label);
	using PFN_glGetPixelMapfv = void(*)(GLenum map, GLfloat * values);
	using PFN_glGetPixelMapuiv = void(*)(GLenum map, GLuint * values);
	using PFN_glGetPixelMapusv = void(*)(GLenum map, GLushort * values);
	using PFN_glGetPointerv = void(*)(GLenum pname, void ** params);
	using PFN_glGetPolygonStipple = void(*)(GLubyte * mask);
	using PFN_glGetProgramBinary = void(*)(GLuint program, GLsizei bufSize, GLsizei * length, GLenum * binaryFormat, void * binary);
	using PFN_glGetProgramInfoLog = void(*)(GLuint program, GLsizei bufSize, GLsizei * length, GLchar * infoLog);
	using PFN_glGetProgramInterfaceiv = void(*)(GLuint program, GLenum programInterface, GLenum pname, GLint * params);
	using PFN_glGetProgramPipelineInfoLog = void(*)(GLuint pipeline, GLsizei bufSize, GLsizei * length, GLchar * infoLog);
	using PFN_glGetProgramPipelineiv = void(*)(GLuint pipeline, GLenum pname, GLint * params);
	using PFN_glGetProgramResourceIndex = GLuint(*)(GLuint program, GLenum programInterface, const GLchar * name);
	using PFN_glGetProgramResourceLocation = GLint(*)(GLuint program, GLenum programInterface, const GLchar * name);
	using PFN_glGetProgramResourceLocationIndex = GLint(*)(GLuint program, GLenum programInterface, const GLchar * name);
	using PFN_glGetProgramResourceName = void(*)(GLuint program, GLenum programInterface, GLuint index, GLsizei bufSize, GLsizei * length, GLchar * name);
	using PFN_glGetProgramResourceiv = void(*)(GLuint program, GLenum programInterface, GLuint index, GLsizei propCount, const GLenum * props, GLsizei count, GLsizei * length, GLint * params);
	using PFN_glGetProgramStageiv = void(*)(GLuint program, GLenum shadertype, GLenum pname, GLint * values);
	using PFN_glGetProgramiv = void(*)(GLuint program, GLenum pname, GLint * params);
	using PFN_glGetQueryBufferObjecti64v = void(*)(GLuint id, GLuint buffer, GLenum pname, GLintptr offset);
	using PFN_glGetQueryBufferObjectiv = void(*)(GLuint id, GLuint buffer, GLenum pname, GLintptr offset);
	using PFN_glGetQueryBufferObjectui64v = void(*)(GLuint id, GLuint buffer, GLenum pname, GLintptr offset);
	using PFN_glGetQueryBufferObjectuiv = void(*)(GLuint id, GLuint buffer, GLenum pname, GLintptr offset);
	using PFN_glGetQueryIndexediv = void(*)(GLenum target, GLuint index, GLenum pname, GLint * params);
	using PFN_glGetQueryObjecti64v = void(*)(GLuint id, GLenum pname, GLint64 * params);
	using PFN_glGetQueryObjectiv = void(*)(GLuint id, GLenum pname, GLint * params);
	using PFN_glGetQueryObjectui64v = void(*)(GLuint id, GLenum pname, GLuint64 * params);
	using PFN_glGetQueryObjectuiv = void(*)(GLuint id, GLenum pname, GLuint * params);
	using PFN_glGetQueryiv = void(*)(GLenum target, GLenum pname, GLint * params);
	using PFN_glGetRenderbufferParameteriv = void(*)(GLenum target, GLenum pname, GLint * params);
	using PFN_glGetSamplerParameterIiv = void(*)(GLuint sampler, GLenum pname, GLint * params);
	using PFN_glGetSamplerParameterIuiv = void(*)(GLuint sampler, GLenum pname, GLuint * params);
	using PFN_glGetSamplerParameterfv = void(*)(GLuint sampler, GLenum pname, GLfloat * params);
	using PFN_glGetSamplerParameteriv = void(*)(GLuint sampler, GLenum pname, GLint * params);
	using PFN_glGetShaderInfoLog = void(*)(GLuint shader, GLsizei bufSize, GLsizei * length, GLchar * infoLog);
	using PFN_glGetShaderPrecisionFormat = void(*)(GLenum shadertype, GLenum precisiontype, GLint * range, GLint * precision);
	using PFN_glGetShaderSource = void(*)(GLuint shader, GLsizei bufSize, GLsizei * length, GLchar * source);
	using PFN_glGetShaderiv = void(*)(GLuint shader, GLenum pname, GLint * params);
	using PFN_glGetString = const GLubyte *(*)(GLenum name);
	using PFN_glGetStringi = const GLubyte *(*)(GLenum name, GLuint index);
	using PFN_glGetSubroutineIndex = GLuint(*)(GLuint program, GLenum shadertype, const GLchar * name);
	using PFN_glGetSubroutineUniformLocation = GLint(*)(GLuint program, GLenum shadertype, const GLchar * name);
	using PFN_glGetSynciv = void(*)(GLsync sync, GLenum pname, GLsizei count, GLsizei * length, GLint * values);
	using PFN_glGetTexEnvfv = void(*)(GLenum target, GLenum pname, GLfloat * params);
	using PFN_glGetTexEnviv = void(*)(GLenum target, GLenum pname, GLint * params);
	using PFN_glGetTexGendv = void(*)(GLenum coord, GLenum pname, GLdouble * params);
	using PFN_glGetTexGenfv = void(*)(GLenum coord, GLenum pname, GLfloat * params);
	using PFN_glGetTexGeniv = void(*)(GLenum coord, GLenum pname, GLint * params);
	using PFN_glGetTexImage = void(*)(GLenum target, GLint level, GLenum format, GLenum type, void * pixels);
	using PFN_glGetTexLevelParameterfv = void(*)(GLenum target, GLint level, GLenum pname, GLfloat * params);
	using PFN_glGetTexLevelParameteriv = void(*)(GLenum target, GLint level, GLenum pname, GLint * params);
	using PFN_glGetTexParameterIiv = void(*)(GLenum target, GLenum pname, GLint * params);
	using PFN_glGetTexParameterIuiv = void(*)(GLenum target, GLenum pname, GLuint * params);
	using PFN_glGetTexParameterfv = void(*)(GLenum target, GLenum pname, GLfloat * params);
	using PFN_glGetTexParameteriv = void(*)(GLenum target, GLenum pname, GLint * params);
	using PFN_glGetTextureImage = void(*)(GLuint texture, GLint level, GLenum format, GLenum type, GLsizei bufSize, void * pixels);
	using PFN_glGetTextureLevelParameterfv = void(*)(GLuint texture, GLint level, GLenum pname, GLfloat * params);
	using PFN_glGetTextureLevelParameteriv = void(*)(GLuint texture, GLint level, GLenum pname, GLint * params);
	using PFN_glGetTextureParameterIiv = void(*)(GLuint texture, GLenum pname, GLint * params);
	using PFN_glGetTextureParameterIuiv = void(*)(GLuint texture, GLenum pname, GLuint * params);
	using PFN_glGetTextureParameterfv = void(*)(GLuint texture, GLenum pname, GLfloat * params);
	using PFN_glGetTextureParameteriv = void(*)(GLuint texture, GLenum pname, GLint * params);
	using PFN_glGetTextureSubImage = void(*)(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, GLsizei bufSize, void * pixels);
	using PFN_glGetTransformFeedbackVarying = void(*)(GLuint program, GLuint index, GLsizei bufSize, GLsizei * length, GLsizei * size, GLenum * type, GLchar * name);
	using PFN_glGetTransformFeedbacki64_v = void(*)(GLuint xfb, GLenum pname, GLuint index, GLint64 * param);
	using PFN_glGetTransformFeedbacki_v = void(*)(GLuint xfb, GLenum pname, GLuint index, GLint * param);
	using PFN_glGetTransformFeedbackiv = void(*)(GLuint xfb, GLenum pname, GLint * param);
	using PFN_glGetUniformBlockIndex = GLuint(*)(GLuint program, const GLchar * uniformBlockName);
	using PFN_glGetUniformIndices = void(*)(GLuint program, GLsizei uniformCount, const GLchar *const* uniformNames, GLuint * uniformIndices);
	using PFN_glGetUniformLocation = GLint(*)(GLuint program, const GLchar * name);
	using PFN_glGetUniformSubroutineuiv = void(*)(GLenum shadertype, GLint location, GLuint * params);
	using PFN_glGetUniformdv = void(*)(GLuint program, GLint location, GLdouble * params);
	using PFN_glGetUniformfv = void(*)(GLuint program, GLint location, GLfloat * params);
	using PFN_glGetUniformiv = void(*)(GLuint program, GLint location, GLint * params);
	using PFN_glGetUniformuiv = void(*)(GLuint program, GLint location, GLuint * params);
	using PFN_glGetVertexArrayIndexed64iv = void(*)(GLuint vaobj, GLuint index, GLenum pname, GLint64 * param);
	using PFN_glGetVertexArrayIndexediv = void(*)(GLuint vaobj, GLuint index, GLenum pname, GLint * param);
	using PFN_glGetVertexArrayiv = void(*)(GLuint vaobj, GLenum pname, GLint * param);
	using PFN_glGetVertexAttribIiv = void(*)(GLuint index, GLenum pname, GLint * params);
	using PFN_glGetVertexAttribIuiv = void(*)(GLuint index, GLenum pname, GLuint * params);
	using PFN_glGetVertexAttribLdv = void(*)(GLuint index, GLenum pname, GLdouble * params);
	using PFN_glGetVertexAttribPointerv = void(*)(GLuint index, GLenum pname, void ** pointer);
	using PFN_glGetVertexAttribdv = void(*)(GLuint index, GLenum pname, GLdouble * params);
	using PFN_glGetVertexAttribfv = void(*)(GLuint index, GLenum pname, GLfloat * params);
	using PFN_glGetVertexAttribiv = void(*)(GLuint index, GLenum pname, GLint * params);
	using PFN_glGetnColorTable = void(*)(GLenum target, GLenum format, GLenum type, GLsizei bufSize, void * table);
	using PFN_glGetnCompressedTexImage = void(*)(GLenum target, GLint lod, GLsizei bufSize, void * pixels);
	using PFN_glGetnConvolutionFilter = void(*)(GLenum target, GLenum format, GLenum type, GLsizei bufSize, void * image);
	using PFN_glGetnHistogram = void(*)(GLenum target, GLboolean reset, GLenum format, GLenum type, GLsizei bufSize, void * values);
	using PFN_glGetnMapdv = void(*)(GLenum target, GLenum query, GLsizei bufSize, GLdouble * v);
	using PFN_glGetnMapfv = void(*)(GLenum target, GLenum query, GLsizei bufSize, GLfloat * v);
	using PFN_glGetnMapiv = void(*)(GLenum target, GLenum query, GLsizei bufSize, GLint * v);
	using PFN_glGetnMinmax = void(*)(GLenum target, GLboolean reset, GLenum format, GLenum type, GLsizei bufSize, void * values);
	using PFN_glGetnPixelMapfv = void(*)(GLenum map, GLsizei bufSize, GLfloat * values);
	using PFN_glGetnPixelMapuiv = void(*)(GLenum map, GLsizei bufSize, GLuint * values);
	using PFN_glGetnPixelMapusv = void(*)(GLenum map, GLsizei bufSize, GLushort * values);
	using PFN_glGetnPolygonStipple = void(*)(GLsizei bufSize, GLubyte * pattern);
	using PFN_glGetnSeparableFilter = void(*)(GLenum target, GLenum format, GLenum type, GLsizei rowBufSize, void * row, GLsizei columnBufSize, void * column, void * span);
	using PFN_glGetnTexImage = void(*)(GLenum target, GLint level, GLenum format, GLenum type, GLsizei bufSize, void * pixels);
	using PFN_glGetnUniformdv = void(*)(GLuint program, GLint location, GLsizei bufSize, GLdouble * params);
	using PFN_glGetnUniformfv = void(*)(GLuint program, GLint location, GLsizei bufSize, GLfloat * params);
	using PFN_glGetnUniformiv = void(*)(GLuint program, GLint location, GLsizei bufSize, GLint * params);
	using PFN_glGetnUniformuiv = void(*)(GLuint program, GLint location, GLsizei bufSize, GLuint * params);
	using PFN_glHint = void(*)(GLenum target, GLenum mode);
	using PFN_glIndexMask = void(*)(GLuint mask);
	using PFN_glIndexPointer = void(*)(GLenum type, GLsizei stride, const void * pointer);
	using PFN_glIndexd = void(*)(GLdouble c);
	using PFN_glIndexdv = void(*)(const GLdouble * c);
	using PFN_glIndexf = void(*)(GLfloat c);
	using PFN_glIndexfv = void(*)(const GLfloat * c);
	using PFN_glIndexi = void(*)(GLint c);
	using PFN_glIndexiv = void(*)(const GLint * c);
	using PFN_glIndexs = void(*)(GLshort c);
	using PFN_glIndexsv = void(*)(const GLshort * c);
	using PFN_glIndexub = void(*)(GLubyte c);
	using PFN_glIndexubv = void(*)(const GLubyte * c);
	using PFN_glInitNames = void(*)(void);
	using PFN_glInterleavedArrays = void(*)(GLenum format, GLsizei stride, const void * pointer);
	using PFN_glInvalidateBufferData = void(*)(GLuint buffer);
	using PFN_glInvalidateBufferSubData = void(*)(GLuint buffer, GLintptr offset, GLsizeiptr length);
	using PFN_glInvalidateFramebuffer = void(*)(GLenum target, GLsizei numAttachments, const GLenum * attachments);
	using PFN_glInvalidateNamedFramebufferData = void(*)(GLuint framebuffer, GLsizei numAttachments, const GLenum * attachments);
	using PFN_glInvalidateNamedFramebufferSubData = void(*)(GLuint framebuffer, GLsizei numAttachments, const GLenum * attachments, GLint x, GLint y, GLsizei width, GLsizei height);
	using PFN_glInvalidateSubFramebuffer = void(*)(GLenum target, GLsizei numAttachments, const GLenum * attachments, GLint x, GLint y, GLsizei width, GLsizei height);
	using PFN_glInvalidateTexImage = void(*)(GLuint texture, GLint level);
	using PFN_glInvalidateTexSubImage = void(*)(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth);
	using PFN_glIsBuffer = GLboolean(*)(GLuint buffer);
	using PFN_glIsEnabled = GLboolean(*)(GLenum cap);
	using PFN_glIsEnabledi = GLboolean(*)(GLenum target, GLuint index);
	using PFN_glIsFramebuffer = GLboolean(*)(GLuint framebuffer);
	using PFN_glIsList = GLboolean(*)(GLuint list);
	using PFN_glIsProgram = GLboolean(*)(GLuint program);
	using PFN_glIsProgramPipeline = GLboolean(*)(GLuint pipeline);
	using PFN_glIsQuery = GLboolean(*)(GLuint id);
	using PFN_glIsRenderbuffer = GLboolean(*)(GLuint renderbuffer);
	using PFN_glIsSampler = GLboolean(*)(GLuint sampler);
	using PFN_glIsShader = GLboolean(*)(GLuint shader);
	using PFN_glIsSync = GLboolean(*)(GLsync sync);
	using PFN_glIsTexture = GLboolean(*)(GLuint texture);
	using PFN_glIsTransformFeedback = GLboolean(*)(GLuint id);
	using PFN_glIsVertexArray = GLboolean(*)(GLuint array);
	using PFN_glLightModelf = void(*)(GLenum pname, GLfloat param);
	using PFN_glLightModelfv = void(*)(GLenum pname, const GLfloat * params);
	using PFN_glLightModeli = void(*)(GLenum pname, GLint param);
	using PFN_glLightModeliv = void(*)(GLenum pname, const GLint * params);
	using PFN_glLightf = void(*)(GLenum light, GLenum pname, GLfloat param);
	using PFN_glLightfv = void(*)(GLenum light, GLenum pname, const GLfloat * params);
	using PFN_glLighti = void(*)(GLenum light, GLenum pname, GLint param);
	using PFN_glLightiv = void(*)(GLenum light, GLenum pname, const GLint * params);
	using PFN_glLineStipple = void(*)(GLint factor, GLushort pattern);
	using PFN_glLineWidth = void(*)(GLfloat width);
	using PFN_glLinkProgram = void(*)(GLuint program);
	using PFN_glListBase = void(*)(GLuint base);
	using PFN_glLoadIdentity = void(*)(void);
	using PFN_glLoadMatrixd = void(*)(const GLdouble * m);
	using PFN_glLoadMatrixf = void(*)(const GLfloat * m);
	using PFN_glLoadName = void(*)(GLuint name);
	using PFN_glLoadTransposeMatrixd = void(*)(const GLdouble * m);
	using PFN_glLoadTransposeMatrixf = void(*)(const GLfloat * m);
	using PFN_glLogicOp = void(*)(GLenum opcode);
	using PFN_glMap1d = void(*)(GLenum target, GLdouble u1, GLdouble u2, GLint stride, GLint order, const GLdouble * points);
	using PFN_glMap1f = void(*)(GLenum target, GLfloat u1, GLfloat u2, GLint stride, GLint order, const GLfloat * points);
	using PFN_glMap2d = void(*)(GLenum target, GLdouble u1, GLdouble u2, GLint ustride, GLint uorder, GLdouble v1, GLdouble v2, GLint vstride, GLint vorder, const GLdouble * points);
	using PFN_glMap2f = void(*)(GLenum target, GLfloat u1, GLfloat u2, GLint ustride, GLint uorder, GLfloat v1, GLfloat v2, GLint vstride, GLint vorder, const GLfloat * points);
	using PFN_glMapBuffer = void *(*)(GLenum target, GLenum access);
	using PFN_glMapBufferRange = void *(*)(GLenum target, GLintptr offset, GLsizeiptr length, GLbitfield access);
	using PFN_glMapGrid1d = void(*)(GLint un, GLdouble u1, GLdouble u2);
	using PFN_glMapGrid1f = void(*)(GLint un, GLfloat u1, GLfloat u2);
	using PFN_glMapGrid2d = void(*)(GLint un, GLdouble u1, GLdouble u2, GLint vn, GLdouble v1, GLdouble v2);
	using PFN_glMapGrid2f = void(*)(GLint un, GLfloat u1, GLfloat u2, GLint vn, GLfloat v1, GLfloat v2);
	using PFN_glMapNamedBuffer = void *(*)(GLuint buffer, GLenum access);
	using PFN_glMapNamedBufferRange = void *(*)(GLuint buffer, GLintptr offset, GLsizeiptr length, GLbitfield access);
	using PFN_glMaterialf = void(*)(GLenum face, GLenum pname, GLfloat param);
	using PFN_glMaterialfv = void(*)(GLenum face, GLenum pname, const GLfloat * params);
	using PFN_glMateriali = void(*)(GLenum face, GLenum pname, GLint param);
	using PFN_glMaterialiv = void(*)(GLenum face, GLenum pname, const GLint * params);
	using PFN_glMatrixMode = void(*)(GLenum mode);
	using PFN_glMemoryBarrier = void(*)(GLbitfield barriers);
	using PFN_glMemoryBarrierByRegion = void(*)(GLbitfield barriers);
	using PFN_glMinSampleShading = void(*)(GLfloat value);
	using PFN_glMultMatrixd = void(*)(const GLdouble * m);
	using PFN_glMultMatrixf = void(*)(const GLfloat * m);
	using PFN_glMultTransposeMatrixd = void(*)(const GLdouble * m);
	using PFN_glMultTransposeMatrixf = void(*)(const GLfloat * m);
	using PFN_glMultiDrawArrays = void(*)(GLenum mode, const GLint * first, const GLsizei * count, GLsizei drawcount);
	using PFN_glMultiDrawArraysIndirect = void(*)(GLenum mode, const void * indirect, GLsizei drawcount, GLsizei stride);
	using PFN_glMultiDrawArraysIndirectCount = void(*)(GLenum mode, const void * indirect, GLintptr drawcount, GLsizei maxdrawcount, GLsizei stride);
	using PFN_glMultiDrawElements = void(*)(GLenum mode, const GLsizei * count, GLenum type, const void *const* indices, GLsizei drawcount);
	using PFN_glMultiDrawElementsBaseVertex = void(*)(GLenum mode, const GLsizei * count, GLenum type, const void *const* indices, GLsizei drawcount, const GLint * basevertex);
	using PFN_glMultiDrawElementsIndirect = void(*)(GLenum mode, GLenum type, const void * indirect, GLsizei drawcount, GLsizei stride);
	using PFN_glMultiDrawElementsIndirectCount = void(*)(GLenum mode, GLenum type, const void * indirect, GLintptr drawcount, GLsizei maxdrawcount, GLsizei stride);
	using PFN_glMultiTexCoord1d = void(*)(GLenum target, GLdouble s);
	using PFN_glMultiTexCoord1dv = void(*)(GLenum target, const GLdouble * v);
	using PFN_glMultiTexCoord1f = void(*)(GLenum target, GLfloat s);
	using PFN_glMultiTexCoord1fv = void(*)(GLenum target, const GLfloat * v);
	using PFN_glMultiTexCoord1i = void(*)(GLenum target, GLint s);
	using PFN_glMultiTexCoord1iv = void(*)(GLenum target, const GLint * v);
	using PFN_glMultiTexCoord1s = void(*)(GLenum target, GLshort s);
	using PFN_glMultiTexCoord1sv = void(*)(GLenum target, const GLshort * v);
	using PFN_glMultiTexCoord2d = void(*)(GLenum target, GLdouble s, GLdouble t);
	using PFN_glMultiTexCoord2dv = void(*)(GLenum target, const GLdouble * v);
	using PFN_glMultiTexCoord2f = void(*)(GLenum target, GLfloat s, GLfloat t);
	using PFN_glMultiTexCoord2fv = void(*)(GLenum target, const GLfloat * v);
	using PFN_glMultiTexCoord2i = void(*)(GLenum target, GLint s, GLint t);
	using PFN_glMultiTexCoord2iv = void(*)(GLenum target, const GLint * v);
	using PFN_glMultiTexCoord2s = void(*)(GLenum target, GLshort s, GLshort t);
	using PFN_glMultiTexCoord2sv = void(*)(GLenum target, const GLshort * v);
	using PFN_glMultiTexCoord3d = void(*)(GLenum target, GLdouble s, GLdouble t, GLdouble r);
	using PFN_glMultiTexCoord3dv = void(*)(GLenum target, const GLdouble * v);
	using PFN_glMultiTexCoord3f = void(*)(GLenum target, GLfloat s, GLfloat t, GLfloat r);
	using PFN_glMultiTexCoord3fv = void(*)(GLenum target, const GLfloat * v);
	using PFN_glMultiTexCoord3i = void(*)(GLenum target, GLint s, GLint t, GLint r);
	using PFN_glMultiTexCoord3iv = void(*)(GLenum target, const GLint * v);
	using PFN_glMultiTexCoord3s = void(*)(GLenum target, GLshort s, GLshort t, GLshort r);
	using PFN_glMultiTexCoord3sv = void(*)(GLenum target, const GLshort * v);
	using PFN_glMultiTexCoord4d = void(*)(GLenum target, GLdouble s, GLdouble t, GLdouble r, GLdouble q);
	using PFN_glMultiTexCoord4dv = void(*)(GLenum target, const GLdouble * v);
	using PFN_glMultiTexCoord4f = void(*)(GLenum target, GLfloat s, GLfloat t, GLfloat r, GLfloat q);
	using PFN_glMultiTexCoord4fv = void(*)(GLenum target, const GLfloat * v);
	using PFN_glMultiTexCoord4i = void(*)(GLenum target, GLint s, GLint t, GLint r, GLint q);
	using PFN_glMultiTexCoord4iv = void(*)(GLenum target, const GLint * v);
	using PFN_glMultiTexCoord4s = void(*)(GLenum target, GLshort s, GLshort t, GLshort r, GLshort q);
	using PFN_glMultiTexCoord4sv = void(*)(GLenum target, const GLshort * v);
	using PFN_glMultiTexCoordP1ui = void(*)(GLenum texture, GLenum type, GLuint coords);
	using PFN_glMultiTexCoordP1uiv = void(*)(GLenum texture, GLenum type, const GLuint * coords);
	using PFN_glMultiTexCoordP2ui = void(*)(GLenum texture, GLenum type, GLuint coords);
	using PFN_glMultiTexCoordP2uiv = void(*)(GLenum texture, GLenum type, const GLuint * coords);
	using PFN_glMultiTexCoordP3ui = void(*)(GLenum texture, GLenum type, GLuint coords);
	using PFN_glMultiTexCoordP3uiv = void(*)(GLenum texture, GLenum type, const GLuint * coords);
	using PFN_glMultiTexCoordP4ui = void(*)(GLenum texture, GLenum type, GLuint coords);
	using PFN_glMultiTexCoordP4uiv = void(*)(GLenum texture, GLenum type, const GLuint * coords);
	using PFN_glNamedBufferData = void(*)(GLuint buffer, GLsizeiptr size, const void * data, GLenum usage);
	using PFN_glNamedBufferStorage = void(*)(GLuint buffer, GLsizeiptr size, const void * data, GLbitfield flags);
	using PFN_glNamedBufferSubData = void(*)(GLuint buffer, GLintptr offset, GLsizeiptr size, const void * data);
	using PFN_glNamedFramebufferDrawBuffer = void(*)(GLuint framebuffer, GLenum buf);
	using PFN_glNamedFramebufferDrawBuffers = void(*)(GLuint framebuffer, GLsizei n, const GLenum * bufs);
	using PFN_glNamedFramebufferParameteri = void(*)(GLuint framebuffer, GLenum pname, GLint param);
	using PFN_glNamedFramebufferReadBuffer = void(*)(GLuint framebuffer, GLenum src);
	using PFN_glNamedFramebufferRenderbuffer = void(*)(GLuint framebuffer, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer);
	using PFN_glNamedFramebufferTexture = void(*)(GLuint framebuffer, GLenum attachment, GLuint texture, GLint level);
	using PFN_glNamedFramebufferTextureLayer = void(*)(GLuint framebuffer, GLenum attachment, GLuint texture, GLint level, GLint layer);
	using PFN_glNamedRenderbufferStorage = void(*)(GLuint renderbuffer, GLenum internalformat, GLsizei width, GLsizei height);
	using PFN_glNamedRenderbufferStorageMultisample = void(*)(GLuint renderbuffer, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height);
	using PFN_glNewList = void(*)(GLuint list, GLenum mode);
	using PFN_glNormal3b = void(*)(GLbyte nx, GLbyte ny, GLbyte nz);
	using PFN_glNormal3bv = void(*)(const GLbyte * v);
	using PFN_glNormal3d = void(*)(GLdouble nx, GLdouble ny, GLdouble nz);
	using PFN_glNormal3dv = void(*)(const GLdouble * v);
	using PFN_glNormal3f = void(*)(GLfloat nx, GLfloat ny, GLfloat nz);
	using PFN_glNormal3fv = void(*)(const GLfloat * v);
	using PFN_glNormal3i = void(*)(GLint nx, GLint ny, GLint nz);
	using PFN_glNormal3iv = void(*)(const GLint * v);
	using PFN_glNormal3s = void(*)(GLshort nx, GLshort ny, GLshort nz);
	using PFN_glNormal3sv = void(*)(const GLshort * v);
	using PFN_glNormalP3ui = void(*)(GLenum type, GLuint coords);
	using PFN_glNormalP3uiv = void(*)(GLenum type, const GLuint * coords);
	using PFN_glNormalPointer = void(*)(GLenum type, GLsizei stride, const void * pointer);
	using PFN_glObjectLabel = void(*)(GLenum identifier, GLuint name, GLsizei length, const GLchar * label);
	using PFN_glObjectPtrLabel = void(*)(const void * ptr, GLsizei length, const GLchar * label);
	using PFN_glOrtho = void(*)(GLdouble left, GLdouble right, GLdouble bottom, GLdouble top, GLdouble zNear, GLdouble zFar);
	using PFN_glPassThrough = void(*)(GLfloat token);
	using PFN_glPatchParameterfv = void(*)(GLenum pname, const GLfloat * values);
	using PFN_glPatchParameteri = void(*)(GLenum pname, GLint value);
	using PFN_glPauseTransformFeedback = void(*)(void);
	using PFN_glPixelMapfv = void(*)(GLenum map, GLsizei mapsize, const GLfloat * values);
	using PFN_glPixelMapuiv = void(*)(GLenum map, GLsizei mapsize, const GLuint * values);
	using PFN_glPixelMapusv = void(*)(GLenum map, GLsizei mapsize, const GLushort * values);
	using PFN_glPixelStoref = void(*)(GLenum pname, GLfloat param);
	using PFN_glPixelStorei = void(*)(GLenum pname, GLint param);
	using PFN_glPixelTransferf = void(*)(GLenum pname, GLfloat param);
	using PFN_glPixelTransferi = void(*)(GLenum pname, GLint param);
	using PFN_glPixelZoom = void(*)(GLfloat xfactor, GLfloat yfactor);
	using PFN_glPointParameterf = void(*)(GLenum pname, GLfloat param);
	using PFN_glPointParameterfv = void(*)(GLenum pname, const GLfloat * params);
	using PFN_glPointParameteri = void(*)(GLenum pname, GLint param);
	using PFN_glPointParameteriv = void(*)(GLenum pname, const GLint * params);
	using PFN_glPointSize = void(*)(GLfloat size);
	using PFN_glPolygonMode = void(*)(GLenum face, GLenum mode);
	using PFN_glPolygonOffset = void(*)(GLfloat factor, GLfloat units);
	using PFN_glPolygonOffsetClamp = void(*)(GLfloat factor, GLfloat units, GLfloat clamp);
	using PFN_glPolygonStipple = void(*)(const GLubyte * mask);
	using PFN_glPopAttrib = void(*)(void);
	using PFN_glPopClientAttrib = void(*)(void);
	using PFN_glPopDebugGroup = void(*)(void);
	using PFN_glPopMatrix = void(*)(void);
	using PFN_glPopName = void(*)(void);
	using PFN_glPrimitiveRestartIndex = void(*)(GLuint index);
	using PFN_glPrioritizeTextures = void(*)(GLsizei n, const GLuint * textures, const GLfloat * priorities);
	using PFN_glProgramBinary = void(*)(GLuint program, GLenum binaryFormat, const void * binary, GLsizei length);
	using PFN_glProgramParameteri = void(*)(GLuint program, GLenum pname, GLint value);
	using PFN_glProgramUniform1d = void(*)(GLuint program, GLint location, GLdouble v0);
	using PFN_glProgramUniform1dv = void(*)(GLuint program, GLint location, GLsizei count, const GLdouble * value);
	using PFN_glProgramUniform1f = void(*)(GLuint program, GLint location, GLfloat v0);
	using PFN_glProgramUniform1fv = void(*)(GLuint program, GLint location, GLsizei count, const GLfloat * value);
	using PFN_glProgramUniform1i = void(*)(GLuint program, GLint location, GLint v0);
	using PFN_glProgramUniform1iv = void(*)(GLuint program, GLint location, GLsizei count, const GLint * value);
	using PFN_glProgramUniform1ui = void(*)(GLuint program, GLint location, GLuint v0);
	using PFN_glProgramUniform1uiv = void(*)(GLuint program, GLint location, GLsizei count, const GLuint * value);
	using PFN_glProgramUniform2d = void(*)(GLuint program, GLint location, GLdouble v0, GLdouble v1);
	using PFN_glProgramUniform2dv = void(*)(GLuint program, GLint location, GLsizei count, const GLdouble * value);
	using PFN_glProgramUniform2f = void(*)(GLuint program, GLint location, GLfloat v0, GLfloat v1);
	using PFN_glProgramUniform2fv = void(*)(GLuint program, GLint location, GLsizei count, const GLfloat * value);
	using PFN_glProgramUniform2i = void(*)(GLuint program, GLint location, GLint v0, GLint v1);
	using PFN_glProgramUniform2iv = void(*)(GLuint program, GLint location, GLsizei count, const GLint * value);
	using PFN_glProgramUniform2ui = void(*)(GLuint program, GLint location, GLuint v0, GLuint v1);
	using PFN_glProgramUniform2uiv = void(*)(GLuint program, GLint location, GLsizei count, const GLuint * value);
	using PFN_glProgramUniform3d = void(*)(GLuint program, GLint location, GLdouble v0, GLdouble v1, GLdouble v2);
	using PFN_glProgramUniform3dv = void(*)(GLuint program, GLint location, GLsizei count, const GLdouble * value);
	using PFN_glProgramUniform3f = void(*)(GLuint program, GLint location, GLfloat v0, GLfloat v1, GLfloat v2);
	using PFN_glProgramUniform3fv = void(*)(GLuint program, GLint location, GLsizei count, const GLfloat * value);
	using PFN_glProgramUniform3i = void(*)(GLuint program, GLint location, GLint v0, GLint v1, GLint v2);
	using PFN_glProgramUniform3iv = void(*)(GLuint program, GLint location, GLsizei count, const GLint * value);
	using PFN_glProgramUniform3ui = void(*)(GLuint program, GLint location, GLuint v0, GLuint v1, GLuint v2);
	using PFN_glProgramUniform3uiv = void(*)(GLuint program, GLint location, GLsizei count, const GLuint * value);
	using PFN_glProgramUniform4d = void(*)(GLuint program, GLint location, GLdouble v0, GLdouble v1, GLdouble v2, GLdouble v3);
	using PFN_glProgramUniform4dv = void(*)(GLuint program, GLint location, GLsizei count, const GLdouble * value);
	using PFN_glProgramUniform4f = void(*)(GLuint program, GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3);
	using PFN_glProgramUniform4fv = void(*)(GLuint program, GLint location, GLsizei count, const GLfloat * value);
	using PFN_glProgramUniform4i = void(*)(GLuint program, GLint location, GLint v0, GLint v1, GLint v2, GLint v3);
	using PFN_glProgramUniform4iv = void(*)(GLuint program, GLint location, GLsizei count, const GLint * value);
	using PFN_glProgramUniform4ui = void(*)(GLuint program, GLint location, GLuint v0, GLuint v1, GLuint v2, GLuint v3);
	using PFN_glProgramUniform4uiv = void(*)(GLuint program, GLint location, GLsizei count, const GLuint * value);
	using PFN_glProgramUniformMatrix2dv = void(*)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value);
	using PFN_glProgramUniformMatrix2fv = void(*)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);
	using PFN_glProgramUniformMatrix2x3dv = void(*)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value);
	using PFN_glProgramUniformMatrix2x3fv = void(*)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);
	using PFN_glProgramUniformMatrix2x4dv = void(*)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value);
	using PFN_glProgramUniformMatrix2x4fv = void(*)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);
	using PFN_glProgramUniformMatrix3dv = void(*)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value);
	using PFN_glProgramUniformMatrix3fv = void(*)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);
	using PFN_glProgramUniformMatrix3x2dv = void(*)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value);
	using PFN_glProgramUniformMatrix3x2fv = void(*)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);
	using PFN_glProgramUniformMatrix3x4dv = void(*)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value);
	using PFN_glProgramUniformMatrix3x4fv = void(*)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);
	using PFN_glProgramUniformMatrix4dv = void(*)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value);
	using PFN_glProgramUniformMatrix4fv = void(*)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);
	using PFN_glProgramUniformMatrix4x2dv = void(*)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value);
	using PFN_glProgramUniformMatrix4x2fv = void(*)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);
	using PFN_glProgramUniformMatrix4x3dv = void(*)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value);
	using PFN_glProgramUniformMatrix4x3fv = void(*)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);
	using PFN_glProvokingVertex = void(*)(GLenum mode);
	using PFN_glPushAttrib = void(*)(GLbitfield mask);
	using PFN_glPushClientAttrib = void(*)(GLbitfield mask);
	using PFN_glPushDebugGroup = void(*)(GLenum source, GLuint id, GLsizei length, const GLchar * message);
	using PFN_glPushMatrix = void(*)(void);
	using PFN_glPushName = void(*)(GLuint name);
	using PFN_glQueryCounter = void(*)(GLuint id, GLenum target);
	using PFN_glRasterPos2d = void(*)(GLdouble x, GLdouble y);
	using PFN_glRasterPos2dv = void(*)(const GLdouble * v);
	using PFN_glRasterPos2f = void(*)(GLfloat x, GLfloat y);
	using PFN_glRasterPos2fv = void(*)(const GLfloat * v);
	using PFN_glRasterPos2i = void(*)(GLint x, GLint y);
	using PFN_glRasterPos2iv = void(*)(const GLint * v);
	using PFN_glRasterPos2s = void(*)(GLshort x, GLshort y);
	using PFN_glRasterPos2sv = void(*)(const GLshort * v);
	using PFN_glRasterPos3d = void(*)(GLdouble x, GLdouble y, GLdouble z);
	using PFN_glRasterPos3dv = void(*)(const GLdouble * v);
	using PFN_glRasterPos3f = void(*)(GLfloat x, GLfloat y, GLfloat z);
	using PFN_glRasterPos3fv = void(*)(const GLfloat * v);
	using PFN_glRasterPos3i = void(*)(GLint x, GLint y, GLint z);
	using PFN_glRasterPos3iv = void(*)(const GLint * v);
	using PFN_glRasterPos3s = void(*)(GLshort x, GLshort y, GLshort z);
	using PFN_glRasterPos3sv = void(*)(const GLshort * v);
	using PFN_glRasterPos4d = void(*)(GLdouble x, GLdouble y, GLdouble z, GLdouble w);
	using PFN_glRasterPos4dv = void(*)(const GLdouble * v);
	using PFN_glRasterPos4f = void(*)(GLfloat x, GLfloat y, GLfloat z, GLfloat w);
	using PFN_glRasterPos4fv = void(*)(const GLfloat * v);
	using PFN_glRasterPos4i = void(*)(GLint x, GLint y, GLint z, GLint w);
	using PFN_glRasterPos4iv = void(*)(const GLint * v);
	using PFN_glRasterPos4s = void(*)(GLshort x, GLshort y, GLshort z, GLshort w);
	using PFN_glRasterPos4sv = void(*)(const GLshort * v);
	using PFN_glReadBuffer = void(*)(GLenum src);
	using PFN_glReadPixels = void(*)(GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, void * pixels);
	using PFN_glReadnPixels = void(*)(GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, GLsizei bufSize, void * data);
	using PFN_glRectd = void(*)(GLdouble x1, GLdouble y1, GLdouble x2, GLdouble y2);
	using PFN_glRectdv = void(*)(const GLdouble * v1, const GLdouble * v2);
	using PFN_glRectf = void(*)(GLfloat x1, GLfloat y1, GLfloat x2, GLfloat y2);
	using PFN_glRectfv = void(*)(const GLfloat * v1, const GLfloat * v2);
	using PFN_glRecti = void(*)(GLint x1, GLint y1, GLint x2, GLint y2);
	using PFN_glRectiv = void(*)(const GLint * v1, const GLint * v2);
	using PFN_glRects = void(*)(GLshort x1, GLshort y1, GLshort x2, GLshort y2);
	using PFN_glRectsv = void(*)(const GLshort * v1, const GLshort * v2);
	using PFN_glReleaseShaderCompiler = void(*)(void);
	using PFN_glRenderMode = GLint(*)(GLenum mode);
	using PFN_glRenderbufferStorage = void(*)(GLenum target, GLenum internalformat, GLsizei width, GLsizei height);
	using PFN_glRenderbufferStorageMultisample = void(*)(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height);
	using PFN_glResumeTransformFeedback = void(*)(void);
	using PFN_glRotated = void(*)(GLdouble angle, GLdouble x, GLdouble y, GLdouble z);
	using PFN_glRotatef = void(*)(GLfloat angle, GLfloat x, GLfloat y, GLfloat z);
	using PFN_glSampleCoverage = void(*)(GLfloat value, GLboolean invert);
	using PFN_glSampleMaski = void(*)(GLuint maskNumber, GLbitfield mask);
	using PFN_glSamplerParameterIiv = void(*)(GLuint sampler, GLenum pname, const GLint * param);
	using PFN_glSamplerParameterIuiv = void(*)(GLuint sampler, GLenum pname, const GLuint * param);
	using PFN_glSamplerParameterf = void(*)(GLuint sampler, GLenum pname, GLfloat param);
	using PFN_glSamplerParameterfv = void(*)(GLuint sampler, GLenum pname, const GLfloat * param);
	using PFN_glSamplerParameteri = void(*)(GLuint sampler, GLenum pname, GLint param);
	using PFN_glSamplerParameteriv = void(*)(GLuint sampler, GLenum pname, const GLint * param);
	using PFN_glScaled = void(*)(GLdouble x, GLdouble y, GLdouble z);
	using PFN_glScalef = void(*)(GLfloat x, GLfloat y, GLfloat z);
	using PFN_glScissor = void(*)(GLint x, GLint y, GLsizei width, GLsizei height);
	using PFN_glScissorArrayv = void(*)(GLuint first, GLsizei count, const GLint * v);
	using PFN_glScissorIndexed = void(*)(GLuint index, GLint left, GLint bottom, GLsizei width, GLsizei height);
	using PFN_glScissorIndexedv = void(*)(GLuint index, const GLint * v);
	using PFN_glSecondaryColor3b = void(*)(GLbyte red, GLbyte green, GLbyte blue);
	using PFN_glSecondaryColor3bv = void(*)(const GLbyte * v);
	using PFN_glSecondaryColor3d = void(*)(GLdouble red, GLdouble green, GLdouble blue);
	using PFN_glSecondaryColor3dv = void(*)(const GLdouble * v);
	using PFN_glSecondaryColor3f = void(*)(GLfloat red, GLfloat green, GLfloat blue);
	using PFN_glSecondaryColor3fv = void(*)(const GLfloat * v);
	using PFN_glSecondaryColor3i = void(*)(GLint red, GLint green, GLint blue);
	using PFN_glSecondaryColor3iv = void(*)(const GLint * v);
	using PFN_glSecondaryColor3s = void(*)(GLshort red, GLshort green, GLshort blue);
	using PFN_glSecondaryColor3sv = void(*)(const GLshort * v);
	using PFN_glSecondaryColor3ub = void(*)(GLubyte red, GLubyte green, GLubyte blue);
	using PFN_glSecondaryColor3ubv = void(*)(const GLubyte * v);
	using PFN_glSecondaryColor3ui = void(*)(GLuint red, GLuint green, GLuint blue);
	using PFN_glSecondaryColor3uiv = void(*)(const GLuint * v);
	using PFN_glSecondaryColor3us = void(*)(GLushort red, GLushort green, GLushort blue);
	using PFN_glSecondaryColor3usv = void(*)(const GLushort * v);
	using PFN_glSecondaryColorP3ui = void(*)(GLenum type, GLuint color);
	using PFN_glSecondaryColorP3uiv = void(*)(GLenum type, const GLuint * color);
	using PFN_glSecondaryColorPointer = void(*)(GLint size, GLenum type, GLsizei stride, const void * pointer);
	using PFN_glSelectBuffer = void(*)(GLsizei size, GLuint * buffer);
	using PFN_glShadeModel = void(*)(GLenum mode);
	using PFN_glShaderBinary = void(*)(GLsizei count, const GLuint * shaders, GLenum binaryFormat, const void * binary, GLsizei length);
	using PFN_glShaderSource = void(*)(GLuint shader, GLsizei count, const GLchar *const* string, const GLint * length);
	using PFN_glShaderStorageBlockBinding = void(*)(GLuint program, GLuint storageBlockIndex, GLuint storageBlockBinding);
	using PFN_glSpecializeShader = void(*)(GLuint shader, const GLchar * pEntryPoint, GLuint numSpecializationConstants, const GLuint * pConstantIndex, const GLuint * pConstantValue);
	using PFN_glStencilFunc = void(*)(GLenum func, GLint ref, GLuint mask);
	using PFN_glStencilFuncSeparate = void(*)(GLenum face, GLenum func, GLint ref, GLuint mask);
	using PFN_glStencilMask = void(*)(GLuint mask);
	using PFN_glStencilMaskSeparate = void(*)(GLenum face, GLuint mask);
	using PFN_glStencilOp = void(*)(GLenum fail, GLenum zfail, GLenum zpass);
	using PFN_glStencilOpSeparate = void(*)(GLenum face, GLenum sfail, GLenum dpfail, GLenum dppass);
	using PFN_glTexBuffer = void(*)(GLenum target, GLenum internalformat, GLuint buffer);
	using PFN_glTexBufferRange = void(*)(GLenum target, GLenum internalformat, GLuint buffer, GLintptr offset, GLsizeiptr size);
	using PFN_glTexCoord1d = void(*)(GLdouble s);
	using PFN_glTexCoord1dv = void(*)(const GLdouble * v);
	using PFN_glTexCoord1f = void(*)(GLfloat s);
	using PFN_glTexCoord1fv = void(*)(const GLfloat * v);
	using PFN_glTexCoord1i = void(*)(GLint s);
	using PFN_glTexCoord1iv = void(*)(const GLint * v);
	using PFN_glTexCoord1s = void(*)(GLshort s);
	using PFN_glTexCoord1sv = void(*)(const GLshort * v);
	using PFN_glTexCoord2d = void(*)(GLdouble s, GLdouble t);
	using PFN_glTexCoord2dv = void(*)(const GLdouble * v);
	using PFN_glTexCoord2f = void(*)(GLfloat s, GLfloat t);
	using PFN_glTexCoord2fv = void(*)(const GLfloat * v);
	using PFN_glTexCoord2i = void(*)(GLint s, GLint t);
	using PFN_glTexCoord2iv = void(*)(const GLint * v);
	using PFN_glTexCoord2s = void(*)(GLshort s, GLshort t);
	using PFN_glTexCoord2sv = void(*)(const GLshort * v);
	using PFN_glTexCoord3d = void(*)(GLdouble s, GLdouble t, GLdouble r);
	using PFN_glTexCoord3dv = void(*)(const GLdouble * v);
	using PFN_glTexCoord3f = void(*)(GLfloat s, GLfloat t, GLfloat r);
	using PFN_glTexCoord3fv = void(*)(const GLfloat * v);
	using PFN_glTexCoord3i = void(*)(GLint s, GLint t, GLint r);
	using PFN_glTexCoord3iv = void(*)(const GLint * v);
	using PFN_glTexCoord3s = void(*)(GLshort s, GLshort t, GLshort r);
	using PFN_glTexCoord3sv = void(*)(const GLshort * v);
	using PFN_glTexCoord4d = void(*)(GLdouble s, GLdouble t, GLdouble r, GLdouble q);
	using PFN_glTexCoord4dv = void(*)(const GLdouble * v);
	using PFN_glTexCoord4f = void(*)(GLfloat s, GLfloat t, GLfloat r, GLfloat q);
	using PFN_glTexCoord4fv = void(*)(const GLfloat * v);
	using PFN_glTexCoord4i = void(*)(GLint s, GLint t, GLint r, GLint q);
	using PFN_glTexCoord4iv = void(*)(const GLint * v);
	using PFN_glTexCoord4s = void(*)(GLshort s, GLshort t, GLshort r, GLshort q);
	using PFN_glTexCoord4sv = void(*)(const GLshort * v);
	using PFN_glTexCoordP1ui = void(*)(GLenum type, GLuint coords);
	using PFN_glTexCoordP1uiv = void(*)(GLenum type, const GLuint * coords);
	using PFN_glTexCoordP2ui = void(*)(GLenum type, GLuint coords);
	using PFN_glTexCoordP2uiv = void(*)(GLenum type, const GLuint * coords);
	using PFN_glTexCoordP3ui = void(*)(GLenum type, GLuint coords);
	using PFN_glTexCoordP3uiv = void(*)(GLenum type, const GLuint * coords);
	using PFN_glTexCoordP4ui = void(*)(GLenum type, GLuint coords);
	using PFN_glTexCoordP4uiv = void(*)(GLenum type, const GLuint * coords);
	using PFN_glTexCoordPointer = void(*)(GLint size, GLenum type, GLsizei stride, const void * pointer);
	using PFN_glTexEnvf = void(*)(GLenum target, GLenum pname, GLfloat param);
	using PFN_glTexEnvfv = void(*)(GLenum target, GLenum pname, const GLfloat * params);
	using PFN_glTexEnvi = void(*)(GLenum target, GLenum pname, GLint param);
	using PFN_glTexEnviv = void(*)(GLenum target, GLenum pname, const GLint * params);
	using PFN_glTexGend = void(*)(GLenum coord, GLenum pname, GLdouble param);
	using PFN_glTexGendv = void(*)(GLenum coord, GLenum pname, const GLdouble * params);
	using PFN_glTexGenf = void(*)(GLenum coord, GLenum pname, GLfloat param);
	using PFN_glTexGenfv = void(*)(GLenum coord, GLenum pname, const GLfloat * params);
	using PFN_glTexGeni = void(*)(GLenum coord, GLenum pname, GLint param);
	using PFN_glTexGeniv = void(*)(GLenum coord, GLenum pname, const GLint * params);
	using PFN_glTexImage1D = void(*)(GLenum target, GLint level, GLint internalformat, GLsizei width, GLint border, GLenum format, GLenum type, const void * pixels);
	using PFN_glTexImage2D = void(*)(GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum type, const void * pixels);
	using PFN_glTexImage2DMultisample = void(*)(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLboolean fixedsamplelocations);
	using PFN_glTexImage3D = void(*)(GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum type, const void * pixels);
	using PFN_glTexImage3DMultisample = void(*)(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedsamplelocations);
	using PFN_glTexParameterIiv = void(*)(GLenum target, GLenum pname, const GLint * params);
	using PFN_glTexParameterIuiv = void(*)(GLenum target, GLenum pname, const GLuint * params);
	using PFN_glTexParameterf = void(*)(GLenum target, GLenum pname, GLfloat param);
	using PFN_glTexParameterfv = void(*)(GLenum target, GLenum pname, const GLfloat * params);
	using PFN_glTexParameteri = void(*)(GLenum target, GLenum pname, GLint param);
	using PFN_glTexParameteriv = void(*)(GLenum target, GLenum pname, const GLint * params);
	using PFN_glTexStorage1D = void(*)(GLenum target, GLsizei levels, GLenum internalformat, GLsizei width);
	using PFN_glTexStorage2D = void(*)(GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height);
	using PFN_glTexStorage2DMultisample = void(*)(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLboolean fixedsamplelocations);
	using PFN_glTexStorage3D = void(*)(GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth);
	using PFN_glTexStorage3DMultisample = void(*)(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedsamplelocations);
	using PFN_glTexSubImage1D = void(*)(GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLenum type, const void * pixels);
	using PFN_glTexSubImage2D = void(*)(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const void * pixels);
	using PFN_glTexSubImage3D = void(*)(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const void * pixels);
	using PFN_glTextureBarrier = void(*)(void);
	using PFN_glTextureBuffer = void(*)(GLuint texture, GLenum internalformat, GLuint buffer);
	using PFN_glTextureBufferRange = void(*)(GLuint texture, GLenum internalformat, GLuint buffer, GLintptr offset, GLsizeiptr size);
	using PFN_glTextureParameterIiv = void(*)(GLuint texture, GLenum pname, const GLint * params);
	using PFN_glTextureParameterIuiv = void(*)(GLuint texture, GLenum pname, const GLuint * params);
	using PFN_glTextureParameterf = void(*)(GLuint texture, GLenum pname, GLfloat param);
	using PFN_glTextureParameterfv = void(*)(GLuint texture, GLenum pname, const GLfloat * param);
	using PFN_glTextureParameteri = void(*)(GLuint texture, GLenum pname, GLint param);
	using PFN_glTextureParameteriv = void(*)(GLuint texture, GLenum pname, const GLint * param);
	using PFN_glTextureStorage1D = void(*)(GLuint texture, GLsizei levels, GLenum internalformat, GLsizei width);
	using PFN_glTextureStorage2D = void(*)(GLuint texture, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height);
	using PFN_glTextureStorage2DMultisample = void(*)(GLuint texture, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLboolean fixedsamplelocations);
	using PFN_glTextureStorage3D = void(*)(GLuint texture, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth);
	using PFN_glTextureStorage3DMultisample = void(*)(GLuint texture, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedsamplelocations);
	using PFN_glTextureSubImage1D = void(*)(GLuint texture, GLint level, GLint xoffset, GLsizei width, GLenum format, GLenum type, const void * pixels);
	using PFN_glTextureSubImage2D = void(*)(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const void * pixels);
	using PFN_glTextureSubImage3D = void(*)(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const void * pixels);
	using PFN_glTextureView = void(*)(GLuint texture, GLenum target, GLuint origtexture, GLenum internalformat, GLuint minlevel, GLuint numlevels, GLuint minlayer, GLuint numlayers);
	using PFN_glTransformFeedbackBufferBase = void(*)(GLuint xfb, GLuint index, GLuint buffer);
	using PFN_glTransformFeedbackBufferRange = void(*)(GLuint xfb, GLuint index, GLuint buffer, GLintptr offset, GLsizeiptr size);
	using PFN_glTransformFeedbackVaryings = void(*)(GLuint program, GLsizei count, const GLchar *const* varyings, GLenum bufferMode);
	using PFN_glTranslated = void(*)(GLdouble x, GLdouble y, GLdouble z);
	using PFN_glTranslatef = void(*)(GLfloat x, GLfloat y, GLfloat z);
	using PFN_glUniform1d = void(*)(GLint location, GLdouble x);
	using PFN_glUniform1dv = void(*)(GLint location, GLsizei count, const GLdouble * value);
	using PFN_glUniform1f = void(*)(GLint location, GLfloat v0);
	using PFN_glUniform1fv = void(*)(GLint location, GLsizei count, const GLfloat * value);
	using PFN_glUniform1i = void(*)(GLint location, GLint v0);
	using PFN_glUniform1iv = void(*)(GLint location, GLsizei count, const GLint * value);
	using PFN_glUniform1ui = void(*)(GLint location, GLuint v0);
	using PFN_glUniform1uiv = void(*)(GLint location, GLsizei count, const GLuint * value);
	using PFN_glUniform2d = void(*)(GLint location, GLdouble x, GLdouble y);
	using PFN_glUniform2dv = void(*)(GLint location, GLsizei count, const GLdouble * value);
	using PFN_glUniform2f = void(*)(GLint location, GLfloat v0, GLfloat v1);
	using PFN_glUniform2fv = void(*)(GLint location, GLsizei count, const GLfloat * value);
	using PFN_glUniform2i = void(*)(GLint location, GLint v0, GLint v1);
	using PFN_glUniform2iv = void(*)(GLint location, GLsizei count, const GLint * value);
	using PFN_glUniform2ui = void(*)(GLint location, GLuint v0, GLuint v1);
	using PFN_glUniform2uiv = void(*)(GLint location, GLsizei count, const GLuint * value);
	using PFN_glUniform3d = void(*)(GLint location, GLdouble x, GLdouble y, GLdouble z);
	using PFN_glUniform3dv = void(*)(GLint location, GLsizei count, const GLdouble * value);
	using PFN_glUniform3f = void(*)(GLint location, GLfloat v0, GLfloat v1, GLfloat v2);
	using PFN_glUniform3fv = void(*)(GLint location, GLsizei count, const GLfloat * value);
	using PFN_glUniform3i = void(*)(GLint location, GLint v0, GLint v1, GLint v2);
	using PFN_glUniform3iv = void(*)(GLint location, GLsizei count, const GLint * value);
	using PFN_glUniform3ui = void(*)(GLint location, GLuint v0, GLuint v1, GLuint v2);
	using PFN_glUniform3uiv = void(*)(GLint location, GLsizei count, const GLuint * value);
	using PFN_glUniform4d = void(*)(GLint location, GLdouble x, GLdouble y, GLdouble z, GLdouble w);
	using PFN_glUniform4dv = void(*)(GLint location, GLsizei count, const GLdouble * value);
	using PFN_glUniform4f = void(*)(GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3);
	using PFN_glUniform4fv = void(*)(GLint location, GLsizei count, const GLfloat * value);
	using PFN_glUniform4i = void(*)(GLint location, GLint v0, GLint v1, GLint v2, GLint v3);
	using PFN_glUniform4iv = void(*)(GLint location, GLsizei count, const GLint * value);
	using PFN_glUniform4ui = void(*)(GLint location, GLuint v0, GLuint v1, GLuint v2, GLuint v3);
	using PFN_glUniform4uiv = void(*)(GLint location, GLsizei count, const GLuint * value);
	using PFN_glUniformBlockBinding = void(*)(GLuint program, GLuint uniformBlockIndex, GLuint uniformBlockBinding);
	using PFN_glUniformMatrix2dv = void(*)(GLint location, GLsizei count, GLboolean transpose, const GLdouble * value);
	using PFN_glUniformMatrix2fv = void(*)(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);
	using PFN_glUniformMatrix2x3dv = void(*)(GLint location, GLsizei count, GLboolean transpose, const GLdouble * value);
	using PFN_glUniformMatrix2x3fv = void(*)(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);
	using PFN_glUniformMatrix2x4dv = void(*)(GLint location, GLsizei count, GLboolean transpose, const GLdouble * value);
	using PFN_glUniformMatrix2x4fv = void(*)(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);
	using PFN_glUniformMatrix3dv = void(*)(GLint location, GLsizei count, GLboolean transpose, const GLdouble * value);
	using PFN_glUniformMatrix3fv = void(*)(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);
	using PFN_glUniformMatrix3x2dv = void(*)(GLint location, GLsizei count, GLboolean transpose, const GLdouble * value);
	using PFN_glUniformMatrix3x2fv = void(*)(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);
	using PFN_glUniformMatrix3x4dv = void(*)(GLint location, GLsizei count, GLboolean transpose, const GLdouble * value);
	using PFN_glUniformMatrix3x4fv = void(*)(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);
	using PFN_glUniformMatrix4dv = void(*)(GLint location, GLsizei count, GLboolean transpose, const GLdouble * value);
	using PFN_glUniformMatrix4fv = void(*)(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);
	using PFN_glUniformMatrix4x2dv = void(*)(GLint location, GLsizei count, GLboolean transpose, const GLdouble * value);
	using PFN_glUniformMatrix4x2fv = void(*)(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);
	using PFN_glUniformMatrix4x3dv = void(*)(GLint location, GLsizei count, GLboolean transpose, const GLdouble * value);
	using PFN_glUniformMatrix4x3fv = void(*)(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);
	using PFN_glUniformSubroutinesuiv = void(*)(GLenum shadertype, GLsizei count, const GLuint * indices);
	using PFN_glUnmapBuffer = GLboolean(*)(GLenum target);
	using PFN_glUnmapNamedBuffer = GLboolean(*)(GLuint buffer);
	using PFN_glUseProgram = void(*)(GLuint program);
	using PFN_glUseProgramStages = void(*)(GLuint pipeline, GLbitfield stages, GLuint program);
	using PFN_glValidateProgram = void(*)(GLuint program);
	using PFN_glValidateProgramPipeline = void(*)(GLuint pipeline);
	using PFN_glVertex2d = void(*)(GLdouble x, GLdouble y);
	using PFN_glVertex2dv = void(*)(const GLdouble * v);
	using PFN_glVertex2f = void(*)(GLfloat x, GLfloat y);
	using PFN_glVertex2fv = void(*)(const GLfloat * v);
	using PFN_glVertex2i = void(*)(GLint x, GLint y);
	using PFN_glVertex2iv = void(*)(const GLint * v);
	using PFN_glVertex2s = void(*)(GLshort x, GLshort y);
	using PFN_glVertex2sv = void(*)(const GLshort * v);
	using PFN_glVertex3d = void(*)(GLdouble x, GLdouble y, GLdouble z);
	using PFN_glVertex3dv = void(*)(const GLdouble * v);
	using PFN_glVertex3f = void(*)(GLfloat x, GLfloat y, GLfloat z);
	using PFN_glVertex3fv = void(*)(const GLfloat * v);
	using PFN_glVertex3i = void(*)(GLint x, GLint y, GLint z);
	using PFN_glVertex3iv = void(*)(const GLint * v);
	using PFN_glVertex3s = void(*)(GLshort x, GLshort y, GLshort z);
	using PFN_glVertex3sv = void(*)(const GLshort * v);
	using PFN_glVertex4d = void(*)(GLdouble x, GLdouble y, GLdouble z, GLdouble w);
	using PFN_glVertex4dv = void(*)(const GLdouble * v);
	using PFN_glVertex4f = void(*)(GLfloat x, GLfloat y, GLfloat z, GLfloat w);
	using PFN_glVertex4fv = void(*)(const GLfloat * v);
	using PFN_glVertex4i = void(*)(GLint x, GLint y, GLint z, GLint w);
	using PFN_glVertex4iv = void(*)(const GLint * v);
	using PFN_glVertex4s = void(*)(GLshort x, GLshort y, GLshort z, GLshort w);
	using PFN_glVertex4sv = void(*)(const GLshort * v);
	using PFN_glVertexArrayAttribBinding = void(*)(GLuint vaobj, GLuint attribindex, GLuint bindingindex);
	using PFN_glVertexArrayAttribFormat = void(*)(GLuint vaobj, GLuint attribindex, GLint size, GLenum type, GLboolean normalized, GLuint relativeoffset);
	using PFN_glVertexArrayAttribIFormat = void(*)(GLuint vaobj, GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset);
	using PFN_glVertexArrayAttribLFormat = void(*)(GLuint vaobj, GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset);
	using PFN_glVertexArrayBindingDivisor = void(*)(GLuint vaobj, GLuint bindingindex, GLuint divisor);
	using PFN_glVertexArrayElementBuffer = void(*)(GLuint vaobj, GLuint buffer);
	using PFN_glVertexArrayVertexBuffer = void(*)(GLuint vaobj, GLuint bindingindex, GLuint buffer, GLintptr offset, GLsizei stride);
	using PFN_glVertexArrayVertexBuffers = void(*)(GLuint vaobj, GLuint first, GLsizei count, const GLuint * buffers, const GLintptr * offsets, const GLsizei * strides);
	using PFN_glVertexAttrib1d = void(*)(GLuint index, GLdouble x);
	using PFN_glVertexAttrib1dv = void(*)(GLuint index, const GLdouble * v);
	using PFN_glVertexAttrib1f = void(*)(GLuint index, GLfloat x);
	using PFN_glVertexAttrib1fv = void(*)(GLuint index, const GLfloat * v);
	using PFN_glVertexAttrib1s = void(*)(GLuint index, GLshort x);
	using PFN_glVertexAttrib1sv = void(*)(GLuint index, const GLshort * v);
	using PFN_glVertexAttrib2d = void(*)(GLuint index, GLdouble x, GLdouble y);
	using PFN_glVertexAttrib2dv = void(*)(GLuint index, const GLdouble * v);
	using PFN_glVertexAttrib2f = void(*)(GLuint index, GLfloat x, GLfloat y);
	using PFN_glVertexAttrib2fv = void(*)(GLuint index, const GLfloat * v);
	using PFN_glVertexAttrib2s = void(*)(GLuint index, GLshort x, GLshort y);
	using PFN_glVertexAttrib2sv = void(*)(GLuint index, const GLshort * v);
	using PFN_glVertexAttrib3d = void(*)(GLuint index, GLdouble x, GLdouble y, GLdouble z);
	using PFN_glVertexAttrib3dv = void(*)(GLuint index, const GLdouble * v);
	using PFN_glVertexAttrib3f = void(*)(GLuint index, GLfloat x, GLfloat y, GLfloat z);
	using PFN_glVertexAttrib3fv = void(*)(GLuint index, const GLfloat * v);
	using PFN_glVertexAttrib3s = void(*)(GLuint index, GLshort x, GLshort y, GLshort z);
	using PFN_glVertexAttrib3sv = void(*)(GLuint index, const GLshort * v);
	using PFN_glVertexAttrib4Nbv = void(*)(GLuint index, const GLbyte * v);
	using PFN_glVertexAttrib4Niv = void(*)(GLuint index, const GLint * v);
	using PFN_glVertexAttrib4Nsv = void(*)(GLuint index, const GLshort * v);
	using PFN_glVertexAttrib4Nub = void(*)(GLuint index, GLubyte x, GLubyte y, GLubyte z, GLubyte w);
	using PFN_glVertexAttrib4Nubv = void(*)(GLuint index, const GLubyte * v);
	using PFN_glVertexAttrib4Nuiv = void(*)(GLuint index, const GLuint * v);
	using PFN_glVertexAttrib4Nusv = void(*)(GLuint index, const GLushort * v);
	using PFN_glVertexAttrib4bv = void(*)(GLuint index, const GLbyte * v);
	using PFN_glVertexAttrib4d = void(*)(GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w);
	using PFN_glVertexAttrib4dv = void(*)(GLuint index, const GLdouble * v);
	using PFN_glVertexAttrib4f = void(*)(GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w);
	using PFN_glVertexAttrib4fv = void(*)(GLuint index, const GLfloat * v);
	using PFN_glVertexAttrib4iv = void(*)(GLuint index, const GLint * v);
	using PFN_glVertexAttrib4s = void(*)(GLuint index, GLshort x, GLshort y, GLshort z, GLshort w);
	using PFN_glVertexAttrib4sv = void(*)(GLuint index, const GLshort * v);
	using PFN_glVertexAttrib4ubv = void(*)(GLuint index, const GLubyte * v);
	using PFN_glVertexAttrib4uiv = void(*)(GLuint index, const GLuint * v);
	using PFN_glVertexAttrib4usv = void(*)(GLuint index, const GLushort * v);
	using PFN_glVertexAttribBinding = void(*)(GLuint attribindex, GLuint bindingindex);
	using PFN_glVertexAttribDivisor = void(*)(GLuint index, GLuint divisor);
	using PFN_glVertexAttribFormat = void(*)(GLuint attribindex, GLint size, GLenum type, GLboolean normalized, GLuint relativeoffset);
	using PFN_glVertexAttribI1i = void(*)(GLuint index, GLint x);
	using PFN_glVertexAttribI1iv = void(*)(GLuint index, const GLint * v);
	using PFN_glVertexAttribI1ui = void(*)(GLuint index, GLuint x);
	using PFN_glVertexAttribI1uiv = void(*)(GLuint index, const GLuint * v);
	using PFN_glVertexAttribI2i = void(*)(GLuint index, GLint x, GLint y);
	using PFN_glVertexAttribI2iv = void(*)(GLuint index, const GLint * v);
	using PFN_glVertexAttribI2ui = void(*)(GLuint index, GLuint x, GLuint y);
	using PFN_glVertexAttribI2uiv = void(*)(GLuint index, const GLuint * v);
	using PFN_glVertexAttribI3i = void(*)(GLuint index, GLint x, GLint y, GLint z);
	using PFN_glVertexAttribI3iv = void(*)(GLuint index, const GLint * v);
	using PFN_glVertexAttribI3ui = void(*)(GLuint index, GLuint x, GLuint y, GLuint z);
	using PFN_glVertexAttribI3uiv = void(*)(GLuint index, const GLuint * v);
	using PFN_glVertexAttribI4bv = void(*)(GLuint index, const GLbyte * v);
	using PFN_glVertexAttribI4i = void(*)(GLuint index, GLint x, GLint y, GLint z, GLint w);
	using PFN_glVertexAttribI4iv = void(*)(GLuint index, const GLint * v);
	using PFN_glVertexAttribI4sv = void(*)(GLuint index, const GLshort * v);
	using PFN_glVertexAttribI4ubv = void(*)(GLuint index, const GLubyte * v);
	using PFN_glVertexAttribI4ui = void(*)(GLuint index, GLuint x, GLuint y, GLuint z, GLuint w);
	using PFN_glVertexAttribI4uiv = void(*)(GLuint index, const GLuint * v);
	using PFN_glVertexAttribI4usv = void(*)(GLuint index, const GLushort * v);
	using PFN_glVertexAttribIFormat = void(*)(GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset);
	using PFN_glVertexAttribIPointer = void(*)(GLuint index, GLint size, GLenum type, GLsizei stride, const void * pointer);
	using PFN_glVertexAttribL1d = void(*)(GLuint index, GLdouble x);
	using PFN_glVertexAttribL1dv = void(*)(GLuint index, const GLdouble * v);
	using PFN_glVertexAttribL2d = void(*)(GLuint index, GLdouble x, GLdouble y);
	using PFN_glVertexAttribL2dv = void(*)(GLuint index, const GLdouble * v);
	using PFN_glVertexAttribL3d = void(*)(GLuint index, GLdouble x, GLdouble y, GLdouble z);
	using PFN_glVertexAttribL3dv = void(*)(GLuint index, const GLdouble * v);
	using PFN_glVertexAttribL4d = void(*)(GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w);
	using PFN_glVertexAttribL4dv = void(*)(GLuint index, const GLdouble * v);
	using PFN_glVertexAttribLFormat = void(*)(GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset);
	using PFN_glVertexAttribLPointer = void(*)(GLuint index, GLint size, GLenum type, GLsizei stride, const void * pointer);
	using PFN_glVertexAttribP1ui = void(*)(GLuint index, GLenum type, GLboolean normalized, GLuint value);
	using PFN_glVertexAttribP1uiv = void(*)(GLuint index, GLenum type, GLboolean normalized, const GLuint * value);
	using PFN_glVertexAttribP2ui = void(*)(GLuint index, GLenum type, GLboolean normalized, GLuint value);
	using PFN_glVertexAttribP2uiv = void(*)(GLuint index, GLenum type, GLboolean normalized, const GLuint * value);
	using PFN_glVertexAttribP3ui = void(*)(GLuint index, GLenum type, GLboolean normalized, GLuint value);
	using PFN_glVertexAttribP3uiv = void(*)(GLuint index, GLenum type, GLboolean normalized, const GLuint * value);
	using PFN_glVertexAttribP4ui = void(*)(GLuint index, GLenum type, GLboolean normalized, GLuint value);
	using PFN_glVertexAttribP4uiv = void(*)(GLuint index, GLenum type, GLboolean normalized, const GLuint * value);
	using PFN_glVertexAttribPointer = void(*)(GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride, const void * pointer);
	using PFN_glVertexBindingDivisor = void(*)(GLuint bindingindex, GLuint divisor);
	using PFN_glVertexP2ui = void(*)(GLenum type, GLuint value);
	using PFN_glVertexP2uiv = void(*)(GLenum type, const GLuint * value);
	using PFN_glVertexP3ui = void(*)(GLenum type, GLuint value);
	using PFN_glVertexP3uiv = void(*)(GLenum type, const GLuint * value);
	using PFN_glVertexP4ui = void(*)(GLenum type, GLuint value);
	using PFN_glVertexP4uiv = void(*)(GLenum type, const GLuint * value);
	using PFN_glVertexPointer = void(*)(GLint size, GLenum type, GLsizei stride, const void * pointer);
	using PFN_glViewport = void(*)(GLint x, GLint y, GLsizei width, GLsizei height);
	using PFN_glViewportArrayv = void(*)(GLuint first, GLsizei count, const GLfloat * v);
	using PFN_glViewportIndexedf = void(*)(GLuint index, GLfloat x, GLfloat y, GLfloat w, GLfloat h);
	using PFN_glViewportIndexedfv = void(*)(GLuint index, const GLfloat * v);
	using PFN_glWaitSync = void(*)(GLsync sync, GLbitfield flags, GLuint64 timeout);
	using PFN_glWindowPos2d = void(*)(GLdouble x, GLdouble y);
	using PFN_glWindowPos2dv = void(*)(const GLdouble * v);
	using PFN_glWindowPos2f = void(*)(GLfloat x, GLfloat y);
	using PFN_glWindowPos2fv = void(*)(const GLfloat * v);
	using PFN_glWindowPos2i = void(*)(GLint x, GLint y);
	using PFN_glWindowPos2iv = void(*)(const GLint * v);
	using PFN_glWindowPos2s = void(*)(GLshort x, GLshort y);
	using PFN_glWindowPos2sv = void(*)(const GLshort * v);
	using PFN_glWindowPos3d = void(*)(GLdouble x, GLdouble y, GLdouble z);
	using PFN_glWindowPos3dv = void(*)(const GLdouble * v);
	using PFN_glWindowPos3f = void(*)(GLfloat x, GLfloat y, GLfloat z);
	using PFN_glWindowPos3fv = void(*)(const GLfloat * v);
	using PFN_glWindowPos3i = void(*)(GLint x, GLint y, GLint z);
	using PFN_glWindowPos3iv = void(*)(const GLint * v);
	using PFN_glWindowPos3s = void(*)(GLshort x, GLshort y, GLshort z);
	using PFN_glWindowPos3sv = void(*)(const GLshort * v);
    
	inline PFN_glAccum _glAccum {};
	inline PFN_glActiveShaderProgram _glActiveShaderProgram {};
	inline PFN_glActiveTexture _glActiveTexture {};
	inline PFN_glAlphaFunc _glAlphaFunc {};
	inline PFN_glAreTexturesResident _glAreTexturesResident {};
	inline PFN_glArrayElement _glArrayElement {};
	inline PFN_glAttachShader _glAttachShader {};
	inline PFN_glBegin _glBegin {};
	inline PFN_glBeginConditionalRender _glBeginConditionalRender {};
	inline PFN_glBeginQuery _glBeginQuery {};
	inline PFN_glBeginQueryIndexed _glBeginQueryIndexed {};
	inline PFN_glBeginTransformFeedback _glBeginTransformFeedback {};
	inline PFN_glBindAttribLocation _glBindAttribLocation {};
	inline PFN_glBindBuffer _glBindBuffer {};
	inline PFN_glBindBufferBase _glBindBufferBase {};
	inline PFN_glBindBufferRange _glBindBufferRange {};
	inline PFN_glBindBuffersBase _glBindBuffersBase {};
	inline PFN_glBindBuffersRange _glBindBuffersRange {};
	inline PFN_glBindFragDataLocation _glBindFragDataLocation {};
	inline PFN_glBindFragDataLocationIndexed _glBindFragDataLocationIndexed {};
	inline PFN_glBindFramebuffer _glBindFramebuffer {};
	inline PFN_glBindImageTexture _glBindImageTexture {};
	inline PFN_glBindImageTextures _glBindImageTextures {};
	inline PFN_glBindProgramPipeline _glBindProgramPipeline {};
	inline PFN_glBindRenderbuffer _glBindRenderbuffer {};
	inline PFN_glBindSampler _glBindSampler {};
	inline PFN_glBindSamplers _glBindSamplers {};
	inline PFN_glBindTexture _glBindTexture {};
	inline PFN_glBindTextureUnit _glBindTextureUnit {};
	inline PFN_glBindTextures _glBindTextures {};
	inline PFN_glBindTransformFeedback _glBindTransformFeedback {};
	inline PFN_glBindVertexArray _glBindVertexArray {};
	inline PFN_glBindVertexBuffer _glBindVertexBuffer {};
	inline PFN_glBindVertexBuffers _glBindVertexBuffers {};
	inline PFN_glBitmap _glBitmap {};
	inline PFN_glBlendColor _glBlendColor {};
	inline PFN_glBlendEquation _glBlendEquation {};
	inline PFN_glBlendEquationSeparate _glBlendEquationSeparate {};
	inline PFN_glBlendEquationSeparatei _glBlendEquationSeparatei {};
	inline PFN_glBlendEquationi _glBlendEquationi {};
	inline PFN_glBlendFunc _glBlendFunc {};
	inline PFN_glBlendFuncSeparate _glBlendFuncSeparate {};
	inline PFN_glBlendFuncSeparatei _glBlendFuncSeparatei {};
	inline PFN_glBlendFunci _glBlendFunci {};
	inline PFN_glBlitFramebuffer _glBlitFramebuffer {};
	inline PFN_glBlitNamedFramebuffer _glBlitNamedFramebuffer {};
	inline PFN_glBufferData _glBufferData {};
	inline PFN_glBufferStorage _glBufferStorage {};
	inline PFN_glBufferSubData _glBufferSubData {};
	inline PFN_glCallList _glCallList {};
	inline PFN_glCallLists _glCallLists {};
	inline PFN_glCheckFramebufferStatus _glCheckFramebufferStatus {};
	inline PFN_glCheckNamedFramebufferStatus _glCheckNamedFramebufferStatus {};
	inline PFN_glClampColor _glClampColor {};
	inline PFN_glClear _glClear {};
	inline PFN_glClearAccum _glClearAccum {};
	inline PFN_glClearBufferData _glClearBufferData {};
	inline PFN_glClearBufferSubData _glClearBufferSubData {};
	inline PFN_glClearBufferfi _glClearBufferfi {};
	inline PFN_glClearBufferfv _glClearBufferfv {};
	inline PFN_glClearBufferiv _glClearBufferiv {};
	inline PFN_glClearBufferuiv _glClearBufferuiv {};
	inline PFN_glClearColor _glClearColor {};
	inline PFN_glClearDepth _glClearDepth {};
	inline PFN_glClearDepthf _glClearDepthf {};
	inline PFN_glClearIndex _glClearIndex {};
	inline PFN_glClearNamedBufferData _glClearNamedBufferData {};
	inline PFN_glClearNamedBufferSubData _glClearNamedBufferSubData {};
	inline PFN_glClearNamedFramebufferfi _glClearNamedFramebufferfi {};
	inline PFN_glClearNamedFramebufferfv _glClearNamedFramebufferfv {};
	inline PFN_glClearNamedFramebufferiv _glClearNamedFramebufferiv {};
	inline PFN_glClearNamedFramebufferuiv _glClearNamedFramebufferuiv {};
	inline PFN_glClearStencil _glClearStencil {};
	inline PFN_glClearTexImage _glClearTexImage {};
	inline PFN_glClearTexSubImage _glClearTexSubImage {};
	inline PFN_glClientActiveTexture _glClientActiveTexture {};
	inline PFN_glClientWaitSync _glClientWaitSync {};
	inline PFN_glClipControl _glClipControl {};
	inline PFN_glClipPlane _glClipPlane {};
	inline PFN_glColor3b _glColor3b {};
	inline PFN_glColor3bv _glColor3bv {};
	inline PFN_glColor3d _glColor3d {};
	inline PFN_glColor3dv _glColor3dv {};
	inline PFN_glColor3f _glColor3f {};
	inline PFN_glColor3fv _glColor3fv {};
	inline PFN_glColor3i _glColor3i {};
	inline PFN_glColor3iv _glColor3iv {};
	inline PFN_glColor3s _glColor3s {};
	inline PFN_glColor3sv _glColor3sv {};
	inline PFN_glColor3ub _glColor3ub {};
	inline PFN_glColor3ubv _glColor3ubv {};
	inline PFN_glColor3ui _glColor3ui {};
	inline PFN_glColor3uiv _glColor3uiv {};
	inline PFN_glColor3us _glColor3us {};
	inline PFN_glColor3usv _glColor3usv {};
	inline PFN_glColor4b _glColor4b {};
	inline PFN_glColor4bv _glColor4bv {};
	inline PFN_glColor4d _glColor4d {};
	inline PFN_glColor4dv _glColor4dv {};
	inline PFN_glColor4f _glColor4f {};
	inline PFN_glColor4fv _glColor4fv {};
	inline PFN_glColor4i _glColor4i {};
	inline PFN_glColor4iv _glColor4iv {};
	inline PFN_glColor4s _glColor4s {};
	inline PFN_glColor4sv _glColor4sv {};
	inline PFN_glColor4ub _glColor4ub {};
	inline PFN_glColor4ubv _glColor4ubv {};
	inline PFN_glColor4ui _glColor4ui {};
	inline PFN_glColor4uiv _glColor4uiv {};
	inline PFN_glColor4us _glColor4us {};
	inline PFN_glColor4usv _glColor4usv {};
	inline PFN_glColorMask _glColorMask {};
	inline PFN_glColorMaski _glColorMaski {};
	inline PFN_glColorMaterial _glColorMaterial {};
	inline PFN_glColorP3ui _glColorP3ui {};
	inline PFN_glColorP3uiv _glColorP3uiv {};
	inline PFN_glColorP4ui _glColorP4ui {};
	inline PFN_glColorP4uiv _glColorP4uiv {};
	inline PFN_glColorPointer _glColorPointer {};
	inline PFN_glCompileShader _glCompileShader {};
	inline PFN_glCompressedTexImage1D _glCompressedTexImage1D {};
	inline PFN_glCompressedTexImage2D _glCompressedTexImage2D {};
	inline PFN_glCompressedTexImage3D _glCompressedTexImage3D {};
	inline PFN_glCompressedTexSubImage1D _glCompressedTexSubImage1D {};
	inline PFN_glCompressedTexSubImage2D _glCompressedTexSubImage2D {};
	inline PFN_glCompressedTexSubImage3D _glCompressedTexSubImage3D {};
	inline PFN_glCompressedTextureSubImage1D _glCompressedTextureSubImage1D {};
	inline PFN_glCompressedTextureSubImage2D _glCompressedTextureSubImage2D {};
	inline PFN_glCompressedTextureSubImage3D _glCompressedTextureSubImage3D {};
	inline PFN_glCopyBufferSubData _glCopyBufferSubData {};
	inline PFN_glCopyImageSubData _glCopyImageSubData {};
	inline PFN_glCopyNamedBufferSubData _glCopyNamedBufferSubData {};
	inline PFN_glCopyPixels _glCopyPixels {};
	inline PFN_glCopyTexImage1D _glCopyTexImage1D {};
	inline PFN_glCopyTexImage2D _glCopyTexImage2D {};
	inline PFN_glCopyTexSubImage1D _glCopyTexSubImage1D {};
	inline PFN_glCopyTexSubImage2D _glCopyTexSubImage2D {};
	inline PFN_glCopyTexSubImage3D _glCopyTexSubImage3D {};
	inline PFN_glCopyTextureSubImage1D _glCopyTextureSubImage1D {};
	inline PFN_glCopyTextureSubImage2D _glCopyTextureSubImage2D {};
	inline PFN_glCopyTextureSubImage3D _glCopyTextureSubImage3D {};
	inline PFN_glCreateBuffers _glCreateBuffers {};
	inline PFN_glCreateFramebuffers _glCreateFramebuffers {};
	inline PFN_glCreateProgram _glCreateProgram {};
	inline PFN_glCreateProgramPipelines _glCreateProgramPipelines {};
	inline PFN_glCreateQueries _glCreateQueries {};
	inline PFN_glCreateRenderbuffers _glCreateRenderbuffers {};
	inline PFN_glCreateSamplers _glCreateSamplers {};
	inline PFN_glCreateShader _glCreateShader {};
	inline PFN_glCreateShaderProgramv _glCreateShaderProgramv {};
	inline PFN_glCreateTextures _glCreateTextures {};
	inline PFN_glCreateTransformFeedbacks _glCreateTransformFeedbacks {};
	inline PFN_glCreateVertexArrays _glCreateVertexArrays {};
	inline PFN_glCullFace _glCullFace {};
	inline PFN_glDebugMessageCallback _glDebugMessageCallback {};
	inline PFN_glDebugMessageControl _glDebugMessageControl {};
	inline PFN_glDebugMessageInsert _glDebugMessageInsert {};
	inline PFN_glDeleteBuffers _glDeleteBuffers {};
	inline PFN_glDeleteFramebuffers _glDeleteFramebuffers {};
	inline PFN_glDeleteLists _glDeleteLists {};
	inline PFN_glDeleteProgram _glDeleteProgram {};
	inline PFN_glDeleteProgramPipelines _glDeleteProgramPipelines {};
	inline PFN_glDeleteQueries _glDeleteQueries {};
	inline PFN_glDeleteRenderbuffers _glDeleteRenderbuffers {};
	inline PFN_glDeleteSamplers _glDeleteSamplers {};
	inline PFN_glDeleteShader _glDeleteShader {};
	inline PFN_glDeleteSync _glDeleteSync {};
	inline PFN_glDeleteTextures _glDeleteTextures {};
	inline PFN_glDeleteTransformFeedbacks _glDeleteTransformFeedbacks {};
	inline PFN_glDeleteVertexArrays _glDeleteVertexArrays {};
	inline PFN_glDepthFunc _glDepthFunc {};
	inline PFN_glDepthMask _glDepthMask {};
	inline PFN_glDepthRange _glDepthRange {};
	inline PFN_glDepthRangeArrayv _glDepthRangeArrayv {};
	inline PFN_glDepthRangeIndexed _glDepthRangeIndexed {};
	inline PFN_glDepthRangef _glDepthRangef {};
	inline PFN_glDetachShader _glDetachShader {};
	inline PFN_glDisable _glDisable {};
	inline PFN_glDisableClientState _glDisableClientState {};
	inline PFN_glDisableVertexArrayAttrib _glDisableVertexArrayAttrib {};
	inline PFN_glDisableVertexAttribArray _glDisableVertexAttribArray {};
	inline PFN_glDisablei _glDisablei {};
	inline PFN_glDispatchCompute _glDispatchCompute {};
	inline PFN_glDispatchComputeIndirect _glDispatchComputeIndirect {};
	inline PFN_glDrawArrays _glDrawArrays {};
	inline PFN_glDrawArraysIndirect _glDrawArraysIndirect {};
	inline PFN_glDrawArraysInstanced _glDrawArraysInstanced {};
	inline PFN_glDrawArraysInstancedBaseInstance _glDrawArraysInstancedBaseInstance {};
	inline PFN_glDrawBuffer _glDrawBuffer {};
	inline PFN_glDrawBuffers _glDrawBuffers {};
	inline PFN_glDrawElements _glDrawElements {};
	inline PFN_glDrawElementsBaseVertex _glDrawElementsBaseVertex {};
	inline PFN_glDrawElementsIndirect _glDrawElementsIndirect {};
	inline PFN_glDrawElementsInstanced _glDrawElementsInstanced {};
	inline PFN_glDrawElementsInstancedBaseInstance _glDrawElementsInstancedBaseInstance {};
	inline PFN_glDrawElementsInstancedBaseVertex _glDrawElementsInstancedBaseVertex {};
	inline PFN_glDrawElementsInstancedBaseVertexBaseInstance _glDrawElementsInstancedBaseVertexBaseInstance {};
	inline PFN_glDrawPixels _glDrawPixels {};
	inline PFN_glDrawRangeElements _glDrawRangeElements {};
	inline PFN_glDrawRangeElementsBaseVertex _glDrawRangeElementsBaseVertex {};
	inline PFN_glDrawTransformFeedback _glDrawTransformFeedback {};
	inline PFN_glDrawTransformFeedbackInstanced _glDrawTransformFeedbackInstanced {};
	inline PFN_glDrawTransformFeedbackStream _glDrawTransformFeedbackStream {};
	inline PFN_glDrawTransformFeedbackStreamInstanced _glDrawTransformFeedbackStreamInstanced {};
	inline PFN_glEdgeFlag _glEdgeFlag {};
	inline PFN_glEdgeFlagPointer _glEdgeFlagPointer {};
	inline PFN_glEdgeFlagv _glEdgeFlagv {};
	inline PFN_glEnable _glEnable {};
	inline PFN_glEnableClientState _glEnableClientState {};
	inline PFN_glEnableVertexArrayAttrib _glEnableVertexArrayAttrib {};
	inline PFN_glEnableVertexAttribArray _glEnableVertexAttribArray {};
	inline PFN_glEnablei _glEnablei {};
	inline PFN_glEnd _glEnd {};
	inline PFN_glEndConditionalRender _glEndConditionalRender {};
	inline PFN_glEndList _glEndList {};
	inline PFN_glEndQuery _glEndQuery {};
	inline PFN_glEndQueryIndexed _glEndQueryIndexed {};
	inline PFN_glEndTransformFeedback _glEndTransformFeedback {};
	inline PFN_glEvalCoord1d _glEvalCoord1d {};
	inline PFN_glEvalCoord1dv _glEvalCoord1dv {};
	inline PFN_glEvalCoord1f _glEvalCoord1f {};
	inline PFN_glEvalCoord1fv _glEvalCoord1fv {};
	inline PFN_glEvalCoord2d _glEvalCoord2d {};
	inline PFN_glEvalCoord2dv _glEvalCoord2dv {};
	inline PFN_glEvalCoord2f _glEvalCoord2f {};
	inline PFN_glEvalCoord2fv _glEvalCoord2fv {};
	inline PFN_glEvalMesh1 _glEvalMesh1 {};
	inline PFN_glEvalMesh2 _glEvalMesh2 {};
	inline PFN_glEvalPoint1 _glEvalPoint1 {};
	inline PFN_glEvalPoint2 _glEvalPoint2 {};
	inline PFN_glFeedbackBuffer _glFeedbackBuffer {};
	inline PFN_glFenceSync _glFenceSync {};
	inline PFN_glFinish _glFinish {};
	inline PFN_glFlush _glFlush {};
	inline PFN_glFlushMappedBufferRange _glFlushMappedBufferRange {};
	inline PFN_glFlushMappedNamedBufferRange _glFlushMappedNamedBufferRange {};
	inline PFN_glFogCoordPointer _glFogCoordPointer {};
	inline PFN_glFogCoordd _glFogCoordd {};
	inline PFN_glFogCoorddv _glFogCoorddv {};
	inline PFN_glFogCoordf _glFogCoordf {};
	inline PFN_glFogCoordfv _glFogCoordfv {};
	inline PFN_glFogf _glFogf {};
	inline PFN_glFogfv _glFogfv {};
	inline PFN_glFogi _glFogi {};
	inline PFN_glFogiv _glFogiv {};
	inline PFN_glFramebufferParameteri _glFramebufferParameteri {};
	inline PFN_glFramebufferRenderbuffer _glFramebufferRenderbuffer {};
	inline PFN_glFramebufferTexture _glFramebufferTexture {};
	inline PFN_glFramebufferTexture1D _glFramebufferTexture1D {};
	inline PFN_glFramebufferTexture2D _glFramebufferTexture2D {};
	inline PFN_glFramebufferTexture3D _glFramebufferTexture3D {};
	inline PFN_glFramebufferTextureLayer _glFramebufferTextureLayer {};
	inline PFN_glFrontFace _glFrontFace {};
	inline PFN_glFrustum _glFrustum {};
	inline PFN_glGenBuffers _glGenBuffers {};
	inline PFN_glGenFramebuffers _glGenFramebuffers {};
	inline PFN_glGenLists _glGenLists {};
	inline PFN_glGenProgramPipelines _glGenProgramPipelines {};
	inline PFN_glGenQueries _glGenQueries {};
	inline PFN_glGenRenderbuffers _glGenRenderbuffers {};
	inline PFN_glGenSamplers _glGenSamplers {};
	inline PFN_glGenTextures _glGenTextures {};
	inline PFN_glGenTransformFeedbacks _glGenTransformFeedbacks {};
	inline PFN_glGenVertexArrays _glGenVertexArrays {};
	inline PFN_glGenerateMipmap _glGenerateMipmap {};
	inline PFN_glGenerateTextureMipmap _glGenerateTextureMipmap {};
	inline PFN_glGetActiveAtomicCounterBufferiv _glGetActiveAtomicCounterBufferiv {};
	inline PFN_glGetActiveAttrib _glGetActiveAttrib {};
	inline PFN_glGetActiveSubroutineName _glGetActiveSubroutineName {};
	inline PFN_glGetActiveSubroutineUniformName _glGetActiveSubroutineUniformName {};
	inline PFN_glGetActiveSubroutineUniformiv _glGetActiveSubroutineUniformiv {};
	inline PFN_glGetActiveUniform _glGetActiveUniform {};
	inline PFN_glGetActiveUniformBlockName _glGetActiveUniformBlockName {};
	inline PFN_glGetActiveUniformBlockiv _glGetActiveUniformBlockiv {};
	inline PFN_glGetActiveUniformName _glGetActiveUniformName {};
	inline PFN_glGetActiveUniformsiv _glGetActiveUniformsiv {};
	inline PFN_glGetAttachedShaders _glGetAttachedShaders {};
	inline PFN_glGetAttribLocation _glGetAttribLocation {};
	inline PFN_glGetBooleani_v _glGetBooleani_v {};
	inline PFN_glGetBooleanv _glGetBooleanv {};
	inline PFN_glGetBufferParameteri64v _glGetBufferParameteri64v {};
	inline PFN_glGetBufferParameteriv _glGetBufferParameteriv {};
	inline PFN_glGetBufferPointerv _glGetBufferPointerv {};
	inline PFN_glGetBufferSubData _glGetBufferSubData {};
	inline PFN_glGetClipPlane _glGetClipPlane {};
	inline PFN_glGetCompressedTexImage _glGetCompressedTexImage {};
	inline PFN_glGetCompressedTextureImage _glGetCompressedTextureImage {};
	inline PFN_glGetCompressedTextureSubImage _glGetCompressedTextureSubImage {};
	inline PFN_glGetDebugMessageLog _glGetDebugMessageLog {};
	inline PFN_glGetDoublei_v _glGetDoublei_v {};
	inline PFN_glGetDoublev _glGetDoublev {};
	inline PFN_glGetError _glGetError {};
	inline PFN_glGetFloati_v _glGetFloati_v {};
	inline PFN_glGetFloatv _glGetFloatv {};
	inline PFN_glGetFragDataIndex _glGetFragDataIndex {};
	inline PFN_glGetFragDataLocation _glGetFragDataLocation {};
	inline PFN_glGetFramebufferAttachmentParameteriv _glGetFramebufferAttachmentParameteriv {};
	inline PFN_glGetFramebufferParameteriv _glGetFramebufferParameteriv {};
	inline PFN_glGetGraphicsResetStatus _glGetGraphicsResetStatus {};
	inline PFN_glGetInteger64i_v _glGetInteger64i_v {};
	inline PFN_glGetInteger64v _glGetInteger64v {};
	inline PFN_glGetIntegeri_v _glGetIntegeri_v {};
	inline PFN_glGetIntegerv _glGetIntegerv {};
	inline PFN_glGetInternalformati64v _glGetInternalformati64v {};
	inline PFN_glGetInternalformativ _glGetInternalformativ {};
	inline PFN_glGetLightfv _glGetLightfv {};
	inline PFN_glGetLightiv _glGetLightiv {};
	inline PFN_glGetMapdv _glGetMapdv {};
	inline PFN_glGetMapfv _glGetMapfv {};
	inline PFN_glGetMapiv _glGetMapiv {};
	inline PFN_glGetMaterialfv _glGetMaterialfv {};
	inline PFN_glGetMaterialiv _glGetMaterialiv {};
	inline PFN_glGetMultisamplefv _glGetMultisamplefv {};
	inline PFN_glGetNamedBufferParameteri64v _glGetNamedBufferParameteri64v {};
	inline PFN_glGetNamedBufferParameteriv _glGetNamedBufferParameteriv {};
	inline PFN_glGetNamedBufferPointerv _glGetNamedBufferPointerv {};
	inline PFN_glGetNamedBufferSubData _glGetNamedBufferSubData {};
	inline PFN_glGetNamedFramebufferAttachmentParameteriv _glGetNamedFramebufferAttachmentParameteriv {};
	inline PFN_glGetNamedFramebufferParameteriv _glGetNamedFramebufferParameteriv {};
	inline PFN_glGetNamedRenderbufferParameteriv _glGetNamedRenderbufferParameteriv {};
	inline PFN_glGetObjectLabel _glGetObjectLabel {};
	inline PFN_glGetObjectPtrLabel _glGetObjectPtrLabel {};
	inline PFN_glGetPixelMapfv _glGetPixelMapfv {};
	inline PFN_glGetPixelMapuiv _glGetPixelMapuiv {};
	inline PFN_glGetPixelMapusv _glGetPixelMapusv {};
	inline PFN_glGetPointerv _glGetPointerv {};
	inline PFN_glGetPolygonStipple _glGetPolygonStipple {};
	inline PFN_glGetProgramBinary _glGetProgramBinary {};
	inline PFN_glGetProgramInfoLog _glGetProgramInfoLog {};
	inline PFN_glGetProgramInterfaceiv _glGetProgramInterfaceiv {};
	inline PFN_glGetProgramPipelineInfoLog _glGetProgramPipelineInfoLog {};
	inline PFN_glGetProgramPipelineiv _glGetProgramPipelineiv {};
	inline PFN_glGetProgramResourceIndex _glGetProgramResourceIndex {};
	inline PFN_glGetProgramResourceLocation _glGetProgramResourceLocation {};
	inline PFN_glGetProgramResourceLocationIndex _glGetProgramResourceLocationIndex {};
	inline PFN_glGetProgramResourceName _glGetProgramResourceName {};
	inline PFN_glGetProgramResourceiv _glGetProgramResourceiv {};
	inline PFN_glGetProgramStageiv _glGetProgramStageiv {};
	inline PFN_glGetProgramiv _glGetProgramiv {};
	inline PFN_glGetQueryBufferObjecti64v _glGetQueryBufferObjecti64v {};
	inline PFN_glGetQueryBufferObjectiv _glGetQueryBufferObjectiv {};
	inline PFN_glGetQueryBufferObjectui64v _glGetQueryBufferObjectui64v {};
	inline PFN_glGetQueryBufferObjectuiv _glGetQueryBufferObjectuiv {};
	inline PFN_glGetQueryIndexediv _glGetQueryIndexediv {};
	inline PFN_glGetQueryObjecti64v _glGetQueryObjecti64v {};
	inline PFN_glGetQueryObjectiv _glGetQueryObjectiv {};
	inline PFN_glGetQueryObjectui64v _glGetQueryObjectui64v {};
	inline PFN_glGetQueryObjectuiv _glGetQueryObjectuiv {};
	inline PFN_glGetQueryiv _glGetQueryiv {};
	inline PFN_glGetRenderbufferParameteriv _glGetRenderbufferParameteriv {};
	inline PFN_glGetSamplerParameterIiv _glGetSamplerParameterIiv {};
	inline PFN_glGetSamplerParameterIuiv _glGetSamplerParameterIuiv {};
	inline PFN_glGetSamplerParameterfv _glGetSamplerParameterfv {};
	inline PFN_glGetSamplerParameteriv _glGetSamplerParameteriv {};
	inline PFN_glGetShaderInfoLog _glGetShaderInfoLog {};
	inline PFN_glGetShaderPrecisionFormat _glGetShaderPrecisionFormat {};
	inline PFN_glGetShaderSource _glGetShaderSource {};
	inline PFN_glGetShaderiv _glGetShaderiv {};
	inline PFN_glGetString _glGetString {};
	inline PFN_glGetStringi _glGetStringi {};
	inline PFN_glGetSubroutineIndex _glGetSubroutineIndex {};
	inline PFN_glGetSubroutineUniformLocation _glGetSubroutineUniformLocation {};
	inline PFN_glGetSynciv _glGetSynciv {};
	inline PFN_glGetTexEnvfv _glGetTexEnvfv {};
	inline PFN_glGetTexEnviv _glGetTexEnviv {};
	inline PFN_glGetTexGendv _glGetTexGendv {};
	inline PFN_glGetTexGenfv _glGetTexGenfv {};
	inline PFN_glGetTexGeniv _glGetTexGeniv {};
	inline PFN_glGetTexImage _glGetTexImage {};
	inline PFN_glGetTexLevelParameterfv _glGetTexLevelParameterfv {};
	inline PFN_glGetTexLevelParameteriv _glGetTexLevelParameteriv {};
	inline PFN_glGetTexParameterIiv _glGetTexParameterIiv {};
	inline PFN_glGetTexParameterIuiv _glGetTexParameterIuiv {};
	inline PFN_glGetTexParameterfv _glGetTexParameterfv {};
	inline PFN_glGetTexParameteriv _glGetTexParameteriv {};
	inline PFN_glGetTextureImage _glGetTextureImage {};
	inline PFN_glGetTextureLevelParameterfv _glGetTextureLevelParameterfv {};
	inline PFN_glGetTextureLevelParameteriv _glGetTextureLevelParameteriv {};
	inline PFN_glGetTextureParameterIiv _glGetTextureParameterIiv {};
	inline PFN_glGetTextureParameterIuiv _glGetTextureParameterIuiv {};
	inline PFN_glGetTextureParameterfv _glGetTextureParameterfv {};
	inline PFN_glGetTextureParameteriv _glGetTextureParameteriv {};
	inline PFN_glGetTextureSubImage _glGetTextureSubImage {};
	inline PFN_glGetTransformFeedbackVarying _glGetTransformFeedbackVarying {};
	inline PFN_glGetTransformFeedbacki64_v _glGetTransformFeedbacki64_v {};
	inline PFN_glGetTransformFeedbacki_v _glGetTransformFeedbacki_v {};
	inline PFN_glGetTransformFeedbackiv _glGetTransformFeedbackiv {};
	inline PFN_glGetUniformBlockIndex _glGetUniformBlockIndex {};
	inline PFN_glGetUniformIndices _glGetUniformIndices {};
	inline PFN_glGetUniformLocation _glGetUniformLocation {};
	inline PFN_glGetUniformSubroutineuiv _glGetUniformSubroutineuiv {};
	inline PFN_glGetUniformdv _glGetUniformdv {};
	inline PFN_glGetUniformfv _glGetUniformfv {};
	inline PFN_glGetUniformiv _glGetUniformiv {};
	inline PFN_glGetUniformuiv _glGetUniformuiv {};
	inline PFN_glGetVertexArrayIndexed64iv _glGetVertexArrayIndexed64iv {};
	inline PFN_glGetVertexArrayIndexediv _glGetVertexArrayIndexediv {};
	inline PFN_glGetVertexArrayiv _glGetVertexArrayiv {};
	inline PFN_glGetVertexAttribIiv _glGetVertexAttribIiv {};
	inline PFN_glGetVertexAttribIuiv _glGetVertexAttribIuiv {};
	inline PFN_glGetVertexAttribLdv _glGetVertexAttribLdv {};
	inline PFN_glGetVertexAttribPointerv _glGetVertexAttribPointerv {};
	inline PFN_glGetVertexAttribdv _glGetVertexAttribdv {};
	inline PFN_glGetVertexAttribfv _glGetVertexAttribfv {};
	inline PFN_glGetVertexAttribiv _glGetVertexAttribiv {};
	inline PFN_glGetnColorTable _glGetnColorTable {};
	inline PFN_glGetnCompressedTexImage _glGetnCompressedTexImage {};
	inline PFN_glGetnConvolutionFilter _glGetnConvolutionFilter {};
	inline PFN_glGetnHistogram _glGetnHistogram {};
	inline PFN_glGetnMapdv _glGetnMapdv {};
	inline PFN_glGetnMapfv _glGetnMapfv {};
	inline PFN_glGetnMapiv _glGetnMapiv {};
	inline PFN_glGetnMinmax _glGetnMinmax {};
	inline PFN_glGetnPixelMapfv _glGetnPixelMapfv {};
	inline PFN_glGetnPixelMapuiv _glGetnPixelMapuiv {};
	inline PFN_glGetnPixelMapusv _glGetnPixelMapusv {};
	inline PFN_glGetnPolygonStipple _glGetnPolygonStipple {};
	inline PFN_glGetnSeparableFilter _glGetnSeparableFilter {};
	inline PFN_glGetnTexImage _glGetnTexImage {};
	inline PFN_glGetnUniformdv _glGetnUniformdv {};
	inline PFN_glGetnUniformfv _glGetnUniformfv {};
	inline PFN_glGetnUniformiv _glGetnUniformiv {};
	inline PFN_glGetnUniformuiv _glGetnUniformuiv {};
	inline PFN_glHint _glHint {};
	inline PFN_glIndexMask _glIndexMask {};
	inline PFN_glIndexPointer _glIndexPointer {};
	inline PFN_glIndexd _glIndexd {};
	inline PFN_glIndexdv _glIndexdv {};
	inline PFN_glIndexf _glIndexf {};
	inline PFN_glIndexfv _glIndexfv {};
	inline PFN_glIndexi _glIndexi {};
	inline PFN_glIndexiv _glIndexiv {};
	inline PFN_glIndexs _glIndexs {};
	inline PFN_glIndexsv _glIndexsv {};
	inline PFN_glIndexub _glIndexub {};
	inline PFN_glIndexubv _glIndexubv {};
	inline PFN_glInitNames _glInitNames {};
	inline PFN_glInterleavedArrays _glInterleavedArrays {};
	inline PFN_glInvalidateBufferData _glInvalidateBufferData {};
	inline PFN_glInvalidateBufferSubData _glInvalidateBufferSubData {};
	inline PFN_glInvalidateFramebuffer _glInvalidateFramebuffer {};
	inline PFN_glInvalidateNamedFramebufferData _glInvalidateNamedFramebufferData {};
	inline PFN_glInvalidateNamedFramebufferSubData _glInvalidateNamedFramebufferSubData {};
	inline PFN_glInvalidateSubFramebuffer _glInvalidateSubFramebuffer {};
	inline PFN_glInvalidateTexImage _glInvalidateTexImage {};
	inline PFN_glInvalidateTexSubImage _glInvalidateTexSubImage {};
	inline PFN_glIsBuffer _glIsBuffer {};
	inline PFN_glIsEnabled _glIsEnabled {};
	inline PFN_glIsEnabledi _glIsEnabledi {};
	inline PFN_glIsFramebuffer _glIsFramebuffer {};
	inline PFN_glIsList _glIsList {};
	inline PFN_glIsProgram _glIsProgram {};
	inline PFN_glIsProgramPipeline _glIsProgramPipeline {};
	inline PFN_glIsQuery _glIsQuery {};
	inline PFN_glIsRenderbuffer _glIsRenderbuffer {};
	inline PFN_glIsSampler _glIsSampler {};
	inline PFN_glIsShader _glIsShader {};
	inline PFN_glIsSync _glIsSync {};
	inline PFN_glIsTexture _glIsTexture {};
	inline PFN_glIsTransformFeedback _glIsTransformFeedback {};
	inline PFN_glIsVertexArray _glIsVertexArray {};
	inline PFN_glLightModelf _glLightModelf {};
	inline PFN_glLightModelfv _glLightModelfv {};
	inline PFN_glLightModeli _glLightModeli {};
	inline PFN_glLightModeliv _glLightModeliv {};
	inline PFN_glLightf _glLightf {};
	inline PFN_glLightfv _glLightfv {};
	inline PFN_glLighti _glLighti {};
	inline PFN_glLightiv _glLightiv {};
	inline PFN_glLineStipple _glLineStipple {};
	inline PFN_glLineWidth _glLineWidth {};
	inline PFN_glLinkProgram _glLinkProgram {};
	inline PFN_glListBase _glListBase {};
	inline PFN_glLoadIdentity _glLoadIdentity {};
	inline PFN_glLoadMatrixd _glLoadMatrixd {};
	inline PFN_glLoadMatrixf _glLoadMatrixf {};
	inline PFN_glLoadName _glLoadName {};
	inline PFN_glLoadTransposeMatrixd _glLoadTransposeMatrixd {};
	inline PFN_glLoadTransposeMatrixf _glLoadTransposeMatrixf {};
	inline PFN_glLogicOp _glLogicOp {};
	inline PFN_glMap1d _glMap1d {};
	inline PFN_glMap1f _glMap1f {};
	inline PFN_glMap2d _glMap2d {};
	inline PFN_glMap2f _glMap2f {};
	inline PFN_glMapBuffer _glMapBuffer {};
	inline PFN_glMapBufferRange _glMapBufferRange {};
	inline PFN_glMapGrid1d _glMapGrid1d {};
	inline PFN_glMapGrid1f _glMapGrid1f {};
	inline PFN_glMapGrid2d _glMapGrid2d {};
	inline PFN_glMapGrid2f _glMapGrid2f {};
	inline PFN_glMapNamedBuffer _glMapNamedBuffer {};
	inline PFN_glMapNamedBufferRange _glMapNamedBufferRange {};
	inline PFN_glMaterialf _glMaterialf {};
	inline PFN_glMaterialfv _glMaterialfv {};
	inline PFN_glMateriali _glMateriali {};
	inline PFN_glMaterialiv _glMaterialiv {};
	inline PFN_glMatrixMode _glMatrixMode {};
	inline PFN_glMemoryBarrier _glMemoryBarrier {};
	inline PFN_glMemoryBarrierByRegion _glMemoryBarrierByRegion {};
	inline PFN_glMinSampleShading _glMinSampleShading {};
	inline PFN_glMultMatrixd _glMultMatrixd {};
	inline PFN_glMultMatrixf _glMultMatrixf {};
	inline PFN_glMultTransposeMatrixd _glMultTransposeMatrixd {};
	inline PFN_glMultTransposeMatrixf _glMultTransposeMatrixf {};
	inline PFN_glMultiDrawArrays _glMultiDrawArrays {};
	inline PFN_glMultiDrawArraysIndirect _glMultiDrawArraysIndirect {};
	inline PFN_glMultiDrawArraysIndirectCount _glMultiDrawArraysIndirectCount {};
	inline PFN_glMultiDrawElements _glMultiDrawElements {};
	inline PFN_glMultiDrawElementsBaseVertex _glMultiDrawElementsBaseVertex {};
	inline PFN_glMultiDrawElementsIndirect _glMultiDrawElementsIndirect {};
	inline PFN_glMultiDrawElementsIndirectCount _glMultiDrawElementsIndirectCount {};
	inline PFN_glMultiTexCoord1d _glMultiTexCoord1d {};
	inline PFN_glMultiTexCoord1dv _glMultiTexCoord1dv {};
	inline PFN_glMultiTexCoord1f _glMultiTexCoord1f {};
	inline PFN_glMultiTexCoord1fv _glMultiTexCoord1fv {};
	inline PFN_glMultiTexCoord1i _glMultiTexCoord1i {};
	inline PFN_glMultiTexCoord1iv _glMultiTexCoord1iv {};
	inline PFN_glMultiTexCoord1s _glMultiTexCoord1s {};
	inline PFN_glMultiTexCoord1sv _glMultiTexCoord1sv {};
	inline PFN_glMultiTexCoord2d _glMultiTexCoord2d {};
	inline PFN_glMultiTexCoord2dv _glMultiTexCoord2dv {};
	inline PFN_glMultiTexCoord2f _glMultiTexCoord2f {};
	inline PFN_glMultiTexCoord2fv _glMultiTexCoord2fv {};
	inline PFN_glMultiTexCoord2i _glMultiTexCoord2i {};
	inline PFN_glMultiTexCoord2iv _glMultiTexCoord2iv {};
	inline PFN_glMultiTexCoord2s _glMultiTexCoord2s {};
	inline PFN_glMultiTexCoord2sv _glMultiTexCoord2sv {};
	inline PFN_glMultiTexCoord3d _glMultiTexCoord3d {};
	inline PFN_glMultiTexCoord3dv _glMultiTexCoord3dv {};
	inline PFN_glMultiTexCoord3f _glMultiTexCoord3f {};
	inline PFN_glMultiTexCoord3fv _glMultiTexCoord3fv {};
	inline PFN_glMultiTexCoord3i _glMultiTexCoord3i {};
	inline PFN_glMultiTexCoord3iv _glMultiTexCoord3iv {};
	inline PFN_glMultiTexCoord3s _glMultiTexCoord3s {};
	inline PFN_glMultiTexCoord3sv _glMultiTexCoord3sv {};
	inline PFN_glMultiTexCoord4d _glMultiTexCoord4d {};
	inline PFN_glMultiTexCoord4dv _glMultiTexCoord4dv {};
	inline PFN_glMultiTexCoord4f _glMultiTexCoord4f {};
	inline PFN_glMultiTexCoord4fv _glMultiTexCoord4fv {};
	inline PFN_glMultiTexCoord4i _glMultiTexCoord4i {};
	inline PFN_glMultiTexCoord4iv _glMultiTexCoord4iv {};
	inline PFN_glMultiTexCoord4s _glMultiTexCoord4s {};
	inline PFN_glMultiTexCoord4sv _glMultiTexCoord4sv {};
	inline PFN_glMultiTexCoordP1ui _glMultiTexCoordP1ui {};
	inline PFN_glMultiTexCoordP1uiv _glMultiTexCoordP1uiv {};
	inline PFN_glMultiTexCoordP2ui _glMultiTexCoordP2ui {};
	inline PFN_glMultiTexCoordP2uiv _glMultiTexCoordP2uiv {};
	inline PFN_glMultiTexCoordP3ui _glMultiTexCoordP3ui {};
	inline PFN_glMultiTexCoordP3uiv _glMultiTexCoordP3uiv {};
	inline PFN_glMultiTexCoordP4ui _glMultiTexCoordP4ui {};
	inline PFN_glMultiTexCoordP4uiv _glMultiTexCoordP4uiv {};
	inline PFN_glNamedBufferData _glNamedBufferData {};
	inline PFN_glNamedBufferStorage _glNamedBufferStorage {};
	inline PFN_glNamedBufferSubData _glNamedBufferSubData {};
	inline PFN_glNamedFramebufferDrawBuffer _glNamedFramebufferDrawBuffer {};
	inline PFN_glNamedFramebufferDrawBuffers _glNamedFramebufferDrawBuffers {};
	inline PFN_glNamedFramebufferParameteri _glNamedFramebufferParameteri {};
	inline PFN_glNamedFramebufferReadBuffer _glNamedFramebufferReadBuffer {};
	inline PFN_glNamedFramebufferRenderbuffer _glNamedFramebufferRenderbuffer {};
	inline PFN_glNamedFramebufferTexture _glNamedFramebufferTexture {};
	inline PFN_glNamedFramebufferTextureLayer _glNamedFramebufferTextureLayer {};
	inline PFN_glNamedRenderbufferStorage _glNamedRenderbufferStorage {};
	inline PFN_glNamedRenderbufferStorageMultisample _glNamedRenderbufferStorageMultisample {};
	inline PFN_glNewList _glNewList {};
	inline PFN_glNormal3b _glNormal3b {};
	inline PFN_glNormal3bv _glNormal3bv {};
	inline PFN_glNormal3d _glNormal3d {};
	inline PFN_glNormal3dv _glNormal3dv {};
	inline PFN_glNormal3f _glNormal3f {};
	inline PFN_glNormal3fv _glNormal3fv {};
	inline PFN_glNormal3i _glNormal3i {};
	inline PFN_glNormal3iv _glNormal3iv {};
	inline PFN_glNormal3s _glNormal3s {};
	inline PFN_glNormal3sv _glNormal3sv {};
	inline PFN_glNormalP3ui _glNormalP3ui {};
	inline PFN_glNormalP3uiv _glNormalP3uiv {};
	inline PFN_glNormalPointer _glNormalPointer {};
	inline PFN_glObjectLabel _glObjectLabel {};
	inline PFN_glObjectPtrLabel _glObjectPtrLabel {};
	inline PFN_glOrtho _glOrtho {};
	inline PFN_glPassThrough _glPassThrough {};
	inline PFN_glPatchParameterfv _glPatchParameterfv {};
	inline PFN_glPatchParameteri _glPatchParameteri {};
	inline PFN_glPauseTransformFeedback _glPauseTransformFeedback {};
	inline PFN_glPixelMapfv _glPixelMapfv {};
	inline PFN_glPixelMapuiv _glPixelMapuiv {};
	inline PFN_glPixelMapusv _glPixelMapusv {};
	inline PFN_glPixelStoref _glPixelStoref {};
	inline PFN_glPixelStorei _glPixelStorei {};
	inline PFN_glPixelTransferf _glPixelTransferf {};
	inline PFN_glPixelTransferi _glPixelTransferi {};
	inline PFN_glPixelZoom _glPixelZoom {};
	inline PFN_glPointParameterf _glPointParameterf {};
	inline PFN_glPointParameterfv _glPointParameterfv {};
	inline PFN_glPointParameteri _glPointParameteri {};
	inline PFN_glPointParameteriv _glPointParameteriv {};
	inline PFN_glPointSize _glPointSize {};
	inline PFN_glPolygonMode _glPolygonMode {};
	inline PFN_glPolygonOffset _glPolygonOffset {};
	inline PFN_glPolygonOffsetClamp _glPolygonOffsetClamp {};
	inline PFN_glPolygonStipple _glPolygonStipple {};
	inline PFN_glPopAttrib _glPopAttrib {};
	inline PFN_glPopClientAttrib _glPopClientAttrib {};
	inline PFN_glPopDebugGroup _glPopDebugGroup {};
	inline PFN_glPopMatrix _glPopMatrix {};
	inline PFN_glPopName _glPopName {};
	inline PFN_glPrimitiveRestartIndex _glPrimitiveRestartIndex {};
	inline PFN_glPrioritizeTextures _glPrioritizeTextures {};
	inline PFN_glProgramBinary _glProgramBinary {};
	inline PFN_glProgramParameteri _glProgramParameteri {};
	inline PFN_glProgramUniform1d _glProgramUniform1d {};
	inline PFN_glProgramUniform1dv _glProgramUniform1dv {};
	inline PFN_glProgramUniform1f _glProgramUniform1f {};
	inline PFN_glProgramUniform1fv _glProgramUniform1fv {};
	inline PFN_glProgramUniform1i _glProgramUniform1i {};
	inline PFN_glProgramUniform1iv _glProgramUniform1iv {};
	inline PFN_glProgramUniform1ui _glProgramUniform1ui {};
	inline PFN_glProgramUniform1uiv _glProgramUniform1uiv {};
	inline PFN_glProgramUniform2d _glProgramUniform2d {};
	inline PFN_glProgramUniform2dv _glProgramUniform2dv {};
	inline PFN_glProgramUniform2f _glProgramUniform2f {};
	inline PFN_glProgramUniform2fv _glProgramUniform2fv {};
	inline PFN_glProgramUniform2i _glProgramUniform2i {};
	inline PFN_glProgramUniform2iv _glProgramUniform2iv {};
	inline PFN_glProgramUniform2ui _glProgramUniform2ui {};
	inline PFN_glProgramUniform2uiv _glProgramUniform2uiv {};
	inline PFN_glProgramUniform3d _glProgramUniform3d {};
	inline PFN_glProgramUniform3dv _glProgramUniform3dv {};
	inline PFN_glProgramUniform3f _glProgramUniform3f {};
	inline PFN_glProgramUniform3fv _glProgramUniform3fv {};
	inline PFN_glProgramUniform3i _glProgramUniform3i {};
	inline PFN_glProgramUniform3iv _glProgramUniform3iv {};
	inline PFN_glProgramUniform3ui _glProgramUniform3ui {};
	inline PFN_glProgramUniform3uiv _glProgramUniform3uiv {};
	inline PFN_glProgramUniform4d _glProgramUniform4d {};
	inline PFN_glProgramUniform4dv _glProgramUniform4dv {};
	inline PFN_glProgramUniform4f _glProgramUniform4f {};
	inline PFN_glProgramUniform4fv _glProgramUniform4fv {};
	inline PFN_glProgramUniform4i _glProgramUniform4i {};
	inline PFN_glProgramUniform4iv _glProgramUniform4iv {};
	inline PFN_glProgramUniform4ui _glProgramUniform4ui {};
	inline PFN_glProgramUniform4uiv _glProgramUniform4uiv {};
	inline PFN_glProgramUniformMatrix2dv _glProgramUniformMatrix2dv {};
	inline PFN_glProgramUniformMatrix2fv _glProgramUniformMatrix2fv {};
	inline PFN_glProgramUniformMatrix2x3dv _glProgramUniformMatrix2x3dv {};
	inline PFN_glProgramUniformMatrix2x3fv _glProgramUniformMatrix2x3fv {};
	inline PFN_glProgramUniformMatrix2x4dv _glProgramUniformMatrix2x4dv {};
	inline PFN_glProgramUniformMatrix2x4fv _glProgramUniformMatrix2x4fv {};
	inline PFN_glProgramUniformMatrix3dv _glProgramUniformMatrix3dv {};
	inline PFN_glProgramUniformMatrix3fv _glProgramUniformMatrix3fv {};
	inline PFN_glProgramUniformMatrix3x2dv _glProgramUniformMatrix3x2dv {};
	inline PFN_glProgramUniformMatrix3x2fv _glProgramUniformMatrix3x2fv {};
	inline PFN_glProgramUniformMatrix3x4dv _glProgramUniformMatrix3x4dv {};
	inline PFN_glProgramUniformMatrix3x4fv _glProgramUniformMatrix3x4fv {};
	inline PFN_glProgramUniformMatrix4dv _glProgramUniformMatrix4dv {};
	inline PFN_glProgramUniformMatrix4fv _glProgramUniformMatrix4fv {};
	inline PFN_glProgramUniformMatrix4x2dv _glProgramUniformMatrix4x2dv {};
	inline PFN_glProgramUniformMatrix4x2fv _glProgramUniformMatrix4x2fv {};
	inline PFN_glProgramUniformMatrix4x3dv _glProgramUniformMatrix4x3dv {};
	inline PFN_glProgramUniformMatrix4x3fv _glProgramUniformMatrix4x3fv {};
	inline PFN_glProvokingVertex _glProvokingVertex {};
	inline PFN_glPushAttrib _glPushAttrib {};
	inline PFN_glPushClientAttrib _glPushClientAttrib {};
	inline PFN_glPushDebugGroup _glPushDebugGroup {};
	inline PFN_glPushMatrix _glPushMatrix {};
	inline PFN_glPushName _glPushName {};
	inline PFN_glQueryCounter _glQueryCounter {};
	inline PFN_glRasterPos2d _glRasterPos2d {};
	inline PFN_glRasterPos2dv _glRasterPos2dv {};
	inline PFN_glRasterPos2f _glRasterPos2f {};
	inline PFN_glRasterPos2fv _glRasterPos2fv {};
	inline PFN_glRasterPos2i _glRasterPos2i {};
	inline PFN_glRasterPos2iv _glRasterPos2iv {};
	inline PFN_glRasterPos2s _glRasterPos2s {};
	inline PFN_glRasterPos2sv _glRasterPos2sv {};
	inline PFN_glRasterPos3d _glRasterPos3d {};
	inline PFN_glRasterPos3dv _glRasterPos3dv {};
	inline PFN_glRasterPos3f _glRasterPos3f {};
	inline PFN_glRasterPos3fv _glRasterPos3fv {};
	inline PFN_glRasterPos3i _glRasterPos3i {};
	inline PFN_glRasterPos3iv _glRasterPos3iv {};
	inline PFN_glRasterPos3s _glRasterPos3s {};
	inline PFN_glRasterPos3sv _glRasterPos3sv {};
	inline PFN_glRasterPos4d _glRasterPos4d {};
	inline PFN_glRasterPos4dv _glRasterPos4dv {};
	inline PFN_glRasterPos4f _glRasterPos4f {};
	inline PFN_glRasterPos4fv _glRasterPos4fv {};
	inline PFN_glRasterPos4i _glRasterPos4i {};
	inline PFN_glRasterPos4iv _glRasterPos4iv {};
	inline PFN_glRasterPos4s _glRasterPos4s {};
	inline PFN_glRasterPos4sv _glRasterPos4sv {};
	inline PFN_glReadBuffer _glReadBuffer {};
	inline PFN_glReadPixels _glReadPixels {};
	inline PFN_glReadnPixels _glReadnPixels {};
	inline PFN_glRectd _glRectd {};
	inline PFN_glRectdv _glRectdv {};
	inline PFN_glRectf _glRectf {};
	inline PFN_glRectfv _glRectfv {};
	inline PFN_glRecti _glRecti {};
	inline PFN_glRectiv _glRectiv {};
	inline PFN_glRects _glRects {};
	inline PFN_glRectsv _glRectsv {};
	inline PFN_glReleaseShaderCompiler _glReleaseShaderCompiler {};
	inline PFN_glRenderMode _glRenderMode {};
	inline PFN_glRenderbufferStorage _glRenderbufferStorage {};
	inline PFN_glRenderbufferStorageMultisample _glRenderbufferStorageMultisample {};
	inline PFN_glResumeTransformFeedback _glResumeTransformFeedback {};
	inline PFN_glRotated _glRotated {};
	inline PFN_glRotatef _glRotatef {};
	inline PFN_glSampleCoverage _glSampleCoverage {};
	inline PFN_glSampleMaski _glSampleMaski {};
	inline PFN_glSamplerParameterIiv _glSamplerParameterIiv {};
	inline PFN_glSamplerParameterIuiv _glSamplerParameterIuiv {};
	inline PFN_glSamplerParameterf _glSamplerParameterf {};
	inline PFN_glSamplerParameterfv _glSamplerParameterfv {};
	inline PFN_glSamplerParameteri _glSamplerParameteri {};
	inline PFN_glSamplerParameteriv _glSamplerParameteriv {};
	inline PFN_glScaled _glScaled {};
	inline PFN_glScalef _glScalef {};
	inline PFN_glScissor _glScissor {};
	inline PFN_glScissorArrayv _glScissorArrayv {};
	inline PFN_glScissorIndexed _glScissorIndexed {};
	inline PFN_glScissorIndexedv _glScissorIndexedv {};
	inline PFN_glSecondaryColor3b _glSecondaryColor3b {};
	inline PFN_glSecondaryColor3bv _glSecondaryColor3bv {};
	inline PFN_glSecondaryColor3d _glSecondaryColor3d {};
	inline PFN_glSecondaryColor3dv _glSecondaryColor3dv {};
	inline PFN_glSecondaryColor3f _glSecondaryColor3f {};
	inline PFN_glSecondaryColor3fv _glSecondaryColor3fv {};
	inline PFN_glSecondaryColor3i _glSecondaryColor3i {};
	inline PFN_glSecondaryColor3iv _glSecondaryColor3iv {};
	inline PFN_glSecondaryColor3s _glSecondaryColor3s {};
	inline PFN_glSecondaryColor3sv _glSecondaryColor3sv {};
	inline PFN_glSecondaryColor3ub _glSecondaryColor3ub {};
	inline PFN_glSecondaryColor3ubv _glSecondaryColor3ubv {};
	inline PFN_glSecondaryColor3ui _glSecondaryColor3ui {};
	inline PFN_glSecondaryColor3uiv _glSecondaryColor3uiv {};
	inline PFN_glSecondaryColor3us _glSecondaryColor3us {};
	inline PFN_glSecondaryColor3usv _glSecondaryColor3usv {};
	inline PFN_glSecondaryColorP3ui _glSecondaryColorP3ui {};
	inline PFN_glSecondaryColorP3uiv _glSecondaryColorP3uiv {};
	inline PFN_glSecondaryColorPointer _glSecondaryColorPointer {};
	inline PFN_glSelectBuffer _glSelectBuffer {};
	inline PFN_glShadeModel _glShadeModel {};
	inline PFN_glShaderBinary _glShaderBinary {};
	inline PFN_glShaderSource _glShaderSource {};
	inline PFN_glShaderStorageBlockBinding _glShaderStorageBlockBinding {};
	inline PFN_glSpecializeShader _glSpecializeShader {};
	inline PFN_glStencilFunc _glStencilFunc {};
	inline PFN_glStencilFuncSeparate _glStencilFuncSeparate {};
	inline PFN_glStencilMask _glStencilMask {};
	inline PFN_glStencilMaskSeparate _glStencilMaskSeparate {};
	inline PFN_glStencilOp _glStencilOp {};
	inline PFN_glStencilOpSeparate _glStencilOpSeparate {};
	inline PFN_glTexBuffer _glTexBuffer {};
	inline PFN_glTexBufferRange _glTexBufferRange {};
	inline PFN_glTexCoord1d _glTexCoord1d {};
	inline PFN_glTexCoord1dv _glTexCoord1dv {};
	inline PFN_glTexCoord1f _glTexCoord1f {};
	inline PFN_glTexCoord1fv _glTexCoord1fv {};
	inline PFN_glTexCoord1i _glTexCoord1i {};
	inline PFN_glTexCoord1iv _glTexCoord1iv {};
	inline PFN_glTexCoord1s _glTexCoord1s {};
	inline PFN_glTexCoord1sv _glTexCoord1sv {};
	inline PFN_glTexCoord2d _glTexCoord2d {};
	inline PFN_glTexCoord2dv _glTexCoord2dv {};
	inline PFN_glTexCoord2f _glTexCoord2f {};
	inline PFN_glTexCoord2fv _glTexCoord2fv {};
	inline PFN_glTexCoord2i _glTexCoord2i {};
	inline PFN_glTexCoord2iv _glTexCoord2iv {};
	inline PFN_glTexCoord2s _glTexCoord2s {};
	inline PFN_glTexCoord2sv _glTexCoord2sv {};
	inline PFN_glTexCoord3d _glTexCoord3d {};
	inline PFN_glTexCoord3dv _glTexCoord3dv {};
	inline PFN_glTexCoord3f _glTexCoord3f {};
	inline PFN_glTexCoord3fv _glTexCoord3fv {};
	inline PFN_glTexCoord3i _glTexCoord3i {};
	inline PFN_glTexCoord3iv _glTexCoord3iv {};
	inline PFN_glTexCoord3s _glTexCoord3s {};
	inline PFN_glTexCoord3sv _glTexCoord3sv {};
	inline PFN_glTexCoord4d _glTexCoord4d {};
	inline PFN_glTexCoord4dv _glTexCoord4dv {};
	inline PFN_glTexCoord4f _glTexCoord4f {};
	inline PFN_glTexCoord4fv _glTexCoord4fv {};
	inline PFN_glTexCoord4i _glTexCoord4i {};
	inline PFN_glTexCoord4iv _glTexCoord4iv {};
	inline PFN_glTexCoord4s _glTexCoord4s {};
	inline PFN_glTexCoord4sv _glTexCoord4sv {};
	inline PFN_glTexCoordP1ui _glTexCoordP1ui {};
	inline PFN_glTexCoordP1uiv _glTexCoordP1uiv {};
	inline PFN_glTexCoordP2ui _glTexCoordP2ui {};
	inline PFN_glTexCoordP2uiv _glTexCoordP2uiv {};
	inline PFN_glTexCoordP3ui _glTexCoordP3ui {};
	inline PFN_glTexCoordP3uiv _glTexCoordP3uiv {};
	inline PFN_glTexCoordP4ui _glTexCoordP4ui {};
	inline PFN_glTexCoordP4uiv _glTexCoordP4uiv {};
	inline PFN_glTexCoordPointer _glTexCoordPointer {};
	inline PFN_glTexEnvf _glTexEnvf {};
	inline PFN_glTexEnvfv _glTexEnvfv {};
	inline PFN_glTexEnvi _glTexEnvi {};
	inline PFN_glTexEnviv _glTexEnviv {};
	inline PFN_glTexGend _glTexGend {};
	inline PFN_glTexGendv _glTexGendv {};
	inline PFN_glTexGenf _glTexGenf {};
	inline PFN_glTexGenfv _glTexGenfv {};
	inline PFN_glTexGeni _glTexGeni {};
	inline PFN_glTexGeniv _glTexGeniv {};
	inline PFN_glTexImage1D _glTexImage1D {};
	inline PFN_glTexImage2D _glTexImage2D {};
	inline PFN_glTexImage2DMultisample _glTexImage2DMultisample {};
	inline PFN_glTexImage3D _glTexImage3D {};
	inline PFN_glTexImage3DMultisample _glTexImage3DMultisample {};
	inline PFN_glTexParameterIiv _glTexParameterIiv {};
	inline PFN_glTexParameterIuiv _glTexParameterIuiv {};
	inline PFN_glTexParameterf _glTexParameterf {};
	inline PFN_glTexParameterfv _glTexParameterfv {};
	inline PFN_glTexParameteri _glTexParameteri {};
	inline PFN_glTexParameteriv _glTexParameteriv {};
	inline PFN_glTexStorage1D _glTexStorage1D {};
	inline PFN_glTexStorage2D _glTexStorage2D {};
	inline PFN_glTexStorage2DMultisample _glTexStorage2DMultisample {};
	inline PFN_glTexStorage3D _glTexStorage3D {};
	inline PFN_glTexStorage3DMultisample _glTexStorage3DMultisample {};
	inline PFN_glTexSubImage1D _glTexSubImage1D {};
	inline PFN_glTexSubImage2D _glTexSubImage2D {};
	inline PFN_glTexSubImage3D _glTexSubImage3D {};
	inline PFN_glTextureBarrier _glTextureBarrier {};
	inline PFN_glTextureBuffer _glTextureBuffer {};
	inline PFN_glTextureBufferRange _glTextureBufferRange {};
	inline PFN_glTextureParameterIiv _glTextureParameterIiv {};
	inline PFN_glTextureParameterIuiv _glTextureParameterIuiv {};
	inline PFN_glTextureParameterf _glTextureParameterf {};
	inline PFN_glTextureParameterfv _glTextureParameterfv {};
	inline PFN_glTextureParameteri _glTextureParameteri {};
	inline PFN_glTextureParameteriv _glTextureParameteriv {};
	inline PFN_glTextureStorage1D _glTextureStorage1D {};
	inline PFN_glTextureStorage2D _glTextureStorage2D {};
	inline PFN_glTextureStorage2DMultisample _glTextureStorage2DMultisample {};
	inline PFN_glTextureStorage3D _glTextureStorage3D {};
	inline PFN_glTextureStorage3DMultisample _glTextureStorage3DMultisample {};
	inline PFN_glTextureSubImage1D _glTextureSubImage1D {};
	inline PFN_glTextureSubImage2D _glTextureSubImage2D {};
	inline PFN_glTextureSubImage3D _glTextureSubImage3D {};
	inline PFN_glTextureView _glTextureView {};
	inline PFN_glTransformFeedbackBufferBase _glTransformFeedbackBufferBase {};
	inline PFN_glTransformFeedbackBufferRange _glTransformFeedbackBufferRange {};
	inline PFN_glTransformFeedbackVaryings _glTransformFeedbackVaryings {};
	inline PFN_glTranslated _glTranslated {};
	inline PFN_glTranslatef _glTranslatef {};
	inline PFN_glUniform1d _glUniform1d {};
	inline PFN_glUniform1dv _glUniform1dv {};
	inline PFN_glUniform1f _glUniform1f {};
	inline PFN_glUniform1fv _glUniform1fv {};
	inline PFN_glUniform1i _glUniform1i {};
	inline PFN_glUniform1iv _glUniform1iv {};
	inline PFN_glUniform1ui _glUniform1ui {};
	inline PFN_glUniform1uiv _glUniform1uiv {};
	inline PFN_glUniform2d _glUniform2d {};
	inline PFN_glUniform2dv _glUniform2dv {};
	inline PFN_glUniform2f _glUniform2f {};
	inline PFN_glUniform2fv _glUniform2fv {};
	inline PFN_glUniform2i _glUniform2i {};
	inline PFN_glUniform2iv _glUniform2iv {};
	inline PFN_glUniform2ui _glUniform2ui {};
	inline PFN_glUniform2uiv _glUniform2uiv {};
	inline PFN_glUniform3d _glUniform3d {};
	inline PFN_glUniform3dv _glUniform3dv {};
	inline PFN_glUniform3f _glUniform3f {};
	inline PFN_glUniform3fv _glUniform3fv {};
	inline PFN_glUniform3i _glUniform3i {};
	inline PFN_glUniform3iv _glUniform3iv {};
	inline PFN_glUniform3ui _glUniform3ui {};
	inline PFN_glUniform3uiv _glUniform3uiv {};
	inline PFN_glUniform4d _glUniform4d {};
	inline PFN_glUniform4dv _glUniform4dv {};
	inline PFN_glUniform4f _glUniform4f {};
	inline PFN_glUniform4fv _glUniform4fv {};
	inline PFN_glUniform4i _glUniform4i {};
	inline PFN_glUniform4iv _glUniform4iv {};
	inline PFN_glUniform4ui _glUniform4ui {};
	inline PFN_glUniform4uiv _glUniform4uiv {};
	inline PFN_glUniformBlockBinding _glUniformBlockBinding {};
	inline PFN_glUniformMatrix2dv _glUniformMatrix2dv {};
	inline PFN_glUniformMatrix2fv _glUniformMatrix2fv {};
	inline PFN_glUniformMatrix2x3dv _glUniformMatrix2x3dv {};
	inline PFN_glUniformMatrix2x3fv _glUniformMatrix2x3fv {};
	inline PFN_glUniformMatrix2x4dv _glUniformMatrix2x4dv {};
	inline PFN_glUniformMatrix2x4fv _glUniformMatrix2x4fv {};
	inline PFN_glUniformMatrix3dv _glUniformMatrix3dv {};
	inline PFN_glUniformMatrix3fv _glUniformMatrix3fv {};
	inline PFN_glUniformMatrix3x2dv _glUniformMatrix3x2dv {};
	inline PFN_glUniformMatrix3x2fv _glUniformMatrix3x2fv {};
	inline PFN_glUniformMatrix3x4dv _glUniformMatrix3x4dv {};
	inline PFN_glUniformMatrix3x4fv _glUniformMatrix3x4fv {};
	inline PFN_glUniformMatrix4dv _glUniformMatrix4dv {};
	inline PFN_glUniformMatrix4fv _glUniformMatrix4fv {};
	inline PFN_glUniformMatrix4x2dv _glUniformMatrix4x2dv {};
	inline PFN_glUniformMatrix4x2fv _glUniformMatrix4x2fv {};
	inline PFN_glUniformMatrix4x3dv _glUniformMatrix4x3dv {};
	inline PFN_glUniformMatrix4x3fv _glUniformMatrix4x3fv {};
	inline PFN_glUniformSubroutinesuiv _glUniformSubroutinesuiv {};
	inline PFN_glUnmapBuffer _glUnmapBuffer {};
	inline PFN_glUnmapNamedBuffer _glUnmapNamedBuffer {};
	inline PFN_glUseProgram _glUseProgram {};
	inline PFN_glUseProgramStages _glUseProgramStages {};
	inline PFN_glValidateProgram _glValidateProgram {};
	inline PFN_glValidateProgramPipeline _glValidateProgramPipeline {};
	inline PFN_glVertex2d _glVertex2d {};
	inline PFN_glVertex2dv _glVertex2dv {};
	inline PFN_glVertex2f _glVertex2f {};
	inline PFN_glVertex2fv _glVertex2fv {};
	inline PFN_glVertex2i _glVertex2i {};
	inline PFN_glVertex2iv _glVertex2iv {};
	inline PFN_glVertex2s _glVertex2s {};
	inline PFN_glVertex2sv _glVertex2sv {};
	inline PFN_glVertex3d _glVertex3d {};
	inline PFN_glVertex3dv _glVertex3dv {};
	inline PFN_glVertex3f _glVertex3f {};
	inline PFN_glVertex3fv _glVertex3fv {};
	inline PFN_glVertex3i _glVertex3i {};
	inline PFN_glVertex3iv _glVertex3iv {};
	inline PFN_glVertex3s _glVertex3s {};
	inline PFN_glVertex3sv _glVertex3sv {};
	inline PFN_glVertex4d _glVertex4d {};
	inline PFN_glVertex4dv _glVertex4dv {};
	inline PFN_glVertex4f _glVertex4f {};
	inline PFN_glVertex4fv _glVertex4fv {};
	inline PFN_glVertex4i _glVertex4i {};
	inline PFN_glVertex4iv _glVertex4iv {};
	inline PFN_glVertex4s _glVertex4s {};
	inline PFN_glVertex4sv _glVertex4sv {};
	inline PFN_glVertexArrayAttribBinding _glVertexArrayAttribBinding {};
	inline PFN_glVertexArrayAttribFormat _glVertexArrayAttribFormat {};
	inline PFN_glVertexArrayAttribIFormat _glVertexArrayAttribIFormat {};
	inline PFN_glVertexArrayAttribLFormat _glVertexArrayAttribLFormat {};
	inline PFN_glVertexArrayBindingDivisor _glVertexArrayBindingDivisor {};
	inline PFN_glVertexArrayElementBuffer _glVertexArrayElementBuffer {};
	inline PFN_glVertexArrayVertexBuffer _glVertexArrayVertexBuffer {};
	inline PFN_glVertexArrayVertexBuffers _glVertexArrayVertexBuffers {};
	inline PFN_glVertexAttrib1d _glVertexAttrib1d {};
	inline PFN_glVertexAttrib1dv _glVertexAttrib1dv {};
	inline PFN_glVertexAttrib1f _glVertexAttrib1f {};
	inline PFN_glVertexAttrib1fv _glVertexAttrib1fv {};
	inline PFN_glVertexAttrib1s _glVertexAttrib1s {};
	inline PFN_glVertexAttrib1sv _glVertexAttrib1sv {};
	inline PFN_glVertexAttrib2d _glVertexAttrib2d {};
	inline PFN_glVertexAttrib2dv _glVertexAttrib2dv {};
	inline PFN_glVertexAttrib2f _glVertexAttrib2f {};
	inline PFN_glVertexAttrib2fv _glVertexAttrib2fv {};
	inline PFN_glVertexAttrib2s _glVertexAttrib2s {};
	inline PFN_glVertexAttrib2sv _glVertexAttrib2sv {};
	inline PFN_glVertexAttrib3d _glVertexAttrib3d {};
	inline PFN_glVertexAttrib3dv _glVertexAttrib3dv {};
	inline PFN_glVertexAttrib3f _glVertexAttrib3f {};
	inline PFN_glVertexAttrib3fv _glVertexAttrib3fv {};
	inline PFN_glVertexAttrib3s _glVertexAttrib3s {};
	inline PFN_glVertexAttrib3sv _glVertexAttrib3sv {};
	inline PFN_glVertexAttrib4Nbv _glVertexAttrib4Nbv {};
	inline PFN_glVertexAttrib4Niv _glVertexAttrib4Niv {};
	inline PFN_glVertexAttrib4Nsv _glVertexAttrib4Nsv {};
	inline PFN_glVertexAttrib4Nub _glVertexAttrib4Nub {};
	inline PFN_glVertexAttrib4Nubv _glVertexAttrib4Nubv {};
	inline PFN_glVertexAttrib4Nuiv _glVertexAttrib4Nuiv {};
	inline PFN_glVertexAttrib4Nusv _glVertexAttrib4Nusv {};
	inline PFN_glVertexAttrib4bv _glVertexAttrib4bv {};
	inline PFN_glVertexAttrib4d _glVertexAttrib4d {};
	inline PFN_glVertexAttrib4dv _glVertexAttrib4dv {};
	inline PFN_glVertexAttrib4f _glVertexAttrib4f {};
	inline PFN_glVertexAttrib4fv _glVertexAttrib4fv {};
	inline PFN_glVertexAttrib4iv _glVertexAttrib4iv {};
	inline PFN_glVertexAttrib4s _glVertexAttrib4s {};
	inline PFN_glVertexAttrib4sv _glVertexAttrib4sv {};
	inline PFN_glVertexAttrib4ubv _glVertexAttrib4ubv {};
	inline PFN_glVertexAttrib4uiv _glVertexAttrib4uiv {};
	inline PFN_glVertexAttrib4usv _glVertexAttrib4usv {};
	inline PFN_glVertexAttribBinding _glVertexAttribBinding {};
	inline PFN_glVertexAttribDivisor _glVertexAttribDivisor {};
	inline PFN_glVertexAttribFormat _glVertexAttribFormat {};
	inline PFN_glVertexAttribI1i _glVertexAttribI1i {};
	inline PFN_glVertexAttribI1iv _glVertexAttribI1iv {};
	inline PFN_glVertexAttribI1ui _glVertexAttribI1ui {};
	inline PFN_glVertexAttribI1uiv _glVertexAttribI1uiv {};
	inline PFN_glVertexAttribI2i _glVertexAttribI2i {};
	inline PFN_glVertexAttribI2iv _glVertexAttribI2iv {};
	inline PFN_glVertexAttribI2ui _glVertexAttribI2ui {};
	inline PFN_glVertexAttribI2uiv _glVertexAttribI2uiv {};
	inline PFN_glVertexAttribI3i _glVertexAttribI3i {};
	inline PFN_glVertexAttribI3iv _glVertexAttribI3iv {};
	inline PFN_glVertexAttribI3ui _glVertexAttribI3ui {};
	inline PFN_glVertexAttribI3uiv _glVertexAttribI3uiv {};
	inline PFN_glVertexAttribI4bv _glVertexAttribI4bv {};
	inline PFN_glVertexAttribI4i _glVertexAttribI4i {};
	inline PFN_glVertexAttribI4iv _glVertexAttribI4iv {};
	inline PFN_glVertexAttribI4sv _glVertexAttribI4sv {};
	inline PFN_glVertexAttribI4ubv _glVertexAttribI4ubv {};
	inline PFN_glVertexAttribI4ui _glVertexAttribI4ui {};
	inline PFN_glVertexAttribI4uiv _glVertexAttribI4uiv {};
	inline PFN_glVertexAttribI4usv _glVertexAttribI4usv {};
	inline PFN_glVertexAttribIFormat _glVertexAttribIFormat {};
	inline PFN_glVertexAttribIPointer _glVertexAttribIPointer {};
	inline PFN_glVertexAttribL1d _glVertexAttribL1d {};
	inline PFN_glVertexAttribL1dv _glVertexAttribL1dv {};
	inline PFN_glVertexAttribL2d _glVertexAttribL2d {};
	inline PFN_glVertexAttribL2dv _glVertexAttribL2dv {};
	inline PFN_glVertexAttribL3d _glVertexAttribL3d {};
	inline PFN_glVertexAttribL3dv _glVertexAttribL3dv {};
	inline PFN_glVertexAttribL4d _glVertexAttribL4d {};
	inline PFN_glVertexAttribL4dv _glVertexAttribL4dv {};
	inline PFN_glVertexAttribLFormat _glVertexAttribLFormat {};
	inline PFN_glVertexAttribLPointer _glVertexAttribLPointer {};
	inline PFN_glVertexAttribP1ui _glVertexAttribP1ui {};
	inline PFN_glVertexAttribP1uiv _glVertexAttribP1uiv {};
	inline PFN_glVertexAttribP2ui _glVertexAttribP2ui {};
	inline PFN_glVertexAttribP2uiv _glVertexAttribP2uiv {};
	inline PFN_glVertexAttribP3ui _glVertexAttribP3ui {};
	inline PFN_glVertexAttribP3uiv _glVertexAttribP3uiv {};
	inline PFN_glVertexAttribP4ui _glVertexAttribP4ui {};
	inline PFN_glVertexAttribP4uiv _glVertexAttribP4uiv {};
	inline PFN_glVertexAttribPointer _glVertexAttribPointer {};
	inline PFN_glVertexBindingDivisor _glVertexBindingDivisor {};
	inline PFN_glVertexP2ui _glVertexP2ui {};
	inline PFN_glVertexP2uiv _glVertexP2uiv {};
	inline PFN_glVertexP3ui _glVertexP3ui {};
	inline PFN_glVertexP3uiv _glVertexP3uiv {};
	inline PFN_glVertexP4ui _glVertexP4ui {};
	inline PFN_glVertexP4uiv _glVertexP4uiv {};
	inline PFN_glVertexPointer _glVertexPointer {};
	inline PFN_glViewport _glViewport {};
	inline PFN_glViewportArrayv _glViewportArrayv {};
	inline PFN_glViewportIndexedf _glViewportIndexedf {};
	inline PFN_glViewportIndexedfv _glViewportIndexedfv {};
	inline PFN_glWaitSync _glWaitSync {};
	inline PFN_glWindowPos2d _glWindowPos2d {};
	inline PFN_glWindowPos2dv _glWindowPos2dv {};
	inline PFN_glWindowPos2f _glWindowPos2f {};
	inline PFN_glWindowPos2fv _glWindowPos2fv {};
	inline PFN_glWindowPos2i _glWindowPos2i {};
	inline PFN_glWindowPos2iv _glWindowPos2iv {};
	inline PFN_glWindowPos2s _glWindowPos2s {};
	inline PFN_glWindowPos2sv _glWindowPos2sv {};
	inline PFN_glWindowPos3d _glWindowPos3d {};
	inline PFN_glWindowPos3dv _glWindowPos3dv {};
	inline PFN_glWindowPos3f _glWindowPos3f {};
	inline PFN_glWindowPos3fv _glWindowPos3fv {};
	inline PFN_glWindowPos3i _glWindowPos3i {};
	inline PFN_glWindowPos3iv _glWindowPos3iv {};
	inline PFN_glWindowPos3s _glWindowPos3s {};
	inline PFN_glWindowPos3sv _glWindowPos3sv {};

	static const FnEntry glFnTable_1_0[] = {
		{ "glAccum", (void**)&_glAccum },
		{ "glAlphaFunc", (void**)&_glAlphaFunc },
		{ "glBegin", (void**)&_glBegin },
		{ "glBitmap", (void**)&_glBitmap },
		{ "glBlendFunc", (void**)&_glBlendFunc },
		{ "glCallList", (void**)&_glCallList },
		{ "glCallLists", (void**)&_glCallLists },
		{ "glClear", (void**)&_glClear },
		{ "glClearAccum", (void**)&_glClearAccum },
		{ "glClearColor", (void**)&_glClearColor },
		{ "glClearDepth", (void**)&_glClearDepth },
		{ "glClearIndex", (void**)&_glClearIndex },
		{ "glClearStencil", (void**)&_glClearStencil },
		{ "glClipPlane", (void**)&_glClipPlane },
		{ "glColor3b", (void**)&_glColor3b },
		{ "glColor3bv", (void**)&_glColor3bv },
		{ "glColor3d", (void**)&_glColor3d },
		{ "glColor3dv", (void**)&_glColor3dv },
		{ "glColor3f", (void**)&_glColor3f },
		{ "glColor3fv", (void**)&_glColor3fv },
		{ "glColor3i", (void**)&_glColor3i },
		{ "glColor3iv", (void**)&_glColor3iv },
		{ "glColor3s", (void**)&_glColor3s },
		{ "glColor3sv", (void**)&_glColor3sv },
		{ "glColor3ub", (void**)&_glColor3ub },
		{ "glColor3ubv", (void**)&_glColor3ubv },
		{ "glColor3ui", (void**)&_glColor3ui },
		{ "glColor3uiv", (void**)&_glColor3uiv },
		{ "glColor3us", (void**)&_glColor3us },
		{ "glColor3usv", (void**)&_glColor3usv },
		{ "glColor4b", (void**)&_glColor4b },
		{ "glColor4bv", (void**)&_glColor4bv },
		{ "glColor4d", (void**)&_glColor4d },
		{ "glColor4dv", (void**)&_glColor4dv },
		{ "glColor4f", (void**)&_glColor4f },
		{ "glColor4fv", (void**)&_glColor4fv },
		{ "glColor4i", (void**)&_glColor4i },
		{ "glColor4iv", (void**)&_glColor4iv },
		{ "glColor4s", (void**)&_glColor4s },
		{ "glColor4sv", (void**)&_glColor4sv },
		{ "glColor4ub", (void**)&_glColor4ub },
		{ "glColor4ubv", (void**)&_glColor4ubv },
		{ "glColor4ui", (void**)&_glColor4ui },
		{ "glColor4uiv", (void**)&_glColor4uiv },
		{ "glColor4us", (void**)&_glColor4us },
		{ "glColor4usv", (void**)&_glColor4usv },
		{ "glColorMask", (void**)&_glColorMask },
		{ "glColorMaterial", (void**)&_glColorMaterial },
		{ "glCopyPixels", (void**)&_glCopyPixels },
		{ "glCullFace", (void**)&_glCullFace },
		{ "glDeleteLists", (void**)&_glDeleteLists },
		{ "glDepthFunc", (void**)&_glDepthFunc },
		{ "glDepthMask", (void**)&_glDepthMask },
		{ "glDepthRange", (void**)&_glDepthRange },
		{ "glDisable", (void**)&_glDisable },
		{ "glDrawBuffer", (void**)&_glDrawBuffer },
		{ "glDrawPixels", (void**)&_glDrawPixels },
		{ "glEdgeFlag", (void**)&_glEdgeFlag },
		{ "glEdgeFlagv", (void**)&_glEdgeFlagv },
		{ "glEnable", (void**)&_glEnable },
		{ "glEnd", (void**)&_glEnd },
		{ "glEndList", (void**)&_glEndList },
		{ "glEvalCoord1d", (void**)&_glEvalCoord1d },
		{ "glEvalCoord1dv", (void**)&_glEvalCoord1dv },
		{ "glEvalCoord1f", (void**)&_glEvalCoord1f },
		{ "glEvalCoord1fv", (void**)&_glEvalCoord1fv },
		{ "glEvalCoord2d", (void**)&_glEvalCoord2d },
		{ "glEvalCoord2dv", (void**)&_glEvalCoord2dv },
		{ "glEvalCoord2f", (void**)&_glEvalCoord2f },
		{ "glEvalCoord2fv", (void**)&_glEvalCoord2fv },
		{ "glEvalMesh1", (void**)&_glEvalMesh1 },
		{ "glEvalMesh2", (void**)&_glEvalMesh2 },
		{ "glEvalPoint1", (void**)&_glEvalPoint1 },
		{ "glEvalPoint2", (void**)&_glEvalPoint2 },
		{ "glFeedbackBuffer", (void**)&_glFeedbackBuffer },
		{ "glFinish", (void**)&_glFinish },
		{ "glFlush", (void**)&_glFlush },
		{ "glFogf", (void**)&_glFogf },
		{ "glFogfv", (void**)&_glFogfv },
		{ "glFogi", (void**)&_glFogi },
		{ "glFogiv", (void**)&_glFogiv },
		{ "glFrontFace", (void**)&_glFrontFace },
		{ "glFrustum", (void**)&_glFrustum },
		{ "glGenLists", (void**)&_glGenLists },
		{ "glGetBooleanv", (void**)&_glGetBooleanv },
		{ "glGetClipPlane", (void**)&_glGetClipPlane },
		{ "glGetDoublev", (void**)&_glGetDoublev },
		{ "glGetError", (void**)&_glGetError },
		{ "glGetFloatv", (void**)&_glGetFloatv },
		{ "glGetIntegerv", (void**)&_glGetIntegerv },
		{ "glGetLightfv", (void**)&_glGetLightfv },
		{ "glGetLightiv", (void**)&_glGetLightiv },
		{ "glGetMapdv", (void**)&_glGetMapdv },
		{ "glGetMapfv", (void**)&_glGetMapfv },
		{ "glGetMapiv", (void**)&_glGetMapiv },
		{ "glGetMaterialfv", (void**)&_glGetMaterialfv },
		{ "glGetMaterialiv", (void**)&_glGetMaterialiv },
		{ "glGetPixelMapfv", (void**)&_glGetPixelMapfv },
		{ "glGetPixelMapuiv", (void**)&_glGetPixelMapuiv },
		{ "glGetPixelMapusv", (void**)&_glGetPixelMapusv },
		{ "glGetPolygonStipple", (void**)&_glGetPolygonStipple },
		{ "glGetString", (void**)&_glGetString },
		{ "glGetTexEnvfv", (void**)&_glGetTexEnvfv },
		{ "glGetTexEnviv", (void**)&_glGetTexEnviv },
		{ "glGetTexGendv", (void**)&_glGetTexGendv },
		{ "glGetTexGenfv", (void**)&_glGetTexGenfv },
		{ "glGetTexGeniv", (void**)&_glGetTexGeniv },
		{ "glGetTexImage", (void**)&_glGetTexImage },
		{ "glGetTexLevelParameterfv", (void**)&_glGetTexLevelParameterfv },
		{ "glGetTexLevelParameteriv", (void**)&_glGetTexLevelParameteriv },
		{ "glGetTexParameterfv", (void**)&_glGetTexParameterfv },
		{ "glGetTexParameteriv", (void**)&_glGetTexParameteriv },
		{ "glHint", (void**)&_glHint },
		{ "glIndexMask", (void**)&_glIndexMask },
		{ "glIndexd", (void**)&_glIndexd },
		{ "glIndexdv", (void**)&_glIndexdv },
		{ "glIndexf", (void**)&_glIndexf },
		{ "glIndexfv", (void**)&_glIndexfv },
		{ "glIndexi", (void**)&_glIndexi },
		{ "glIndexiv", (void**)&_glIndexiv },
		{ "glIndexs", (void**)&_glIndexs },
		{ "glIndexsv", (void**)&_glIndexsv },
		{ "glInitNames", (void**)&_glInitNames },
		{ "glIsEnabled", (void**)&_glIsEnabled },
		{ "glIsList", (void**)&_glIsList },
		{ "glLightModelf", (void**)&_glLightModelf },
		{ "glLightModelfv", (void**)&_glLightModelfv },
		{ "glLightModeli", (void**)&_glLightModeli },
		{ "glLightModeliv", (void**)&_glLightModeliv },
		{ "glLightf", (void**)&_glLightf },
		{ "glLightfv", (void**)&_glLightfv },
		{ "glLighti", (void**)&_glLighti },
		{ "glLightiv", (void**)&_glLightiv },
		{ "glLineStipple", (void**)&_glLineStipple },
		{ "glLineWidth", (void**)&_glLineWidth },
		{ "glListBase", (void**)&_glListBase },
		{ "glLoadIdentity", (void**)&_glLoadIdentity },
		{ "glLoadMatrixd", (void**)&_glLoadMatrixd },
		{ "glLoadMatrixf", (void**)&_glLoadMatrixf },
		{ "glLoadName", (void**)&_glLoadName },
		{ "glLogicOp", (void**)&_glLogicOp },
		{ "glMap1d", (void**)&_glMap1d },
		{ "glMap1f", (void**)&_glMap1f },
		{ "glMap2d", (void**)&_glMap2d },
		{ "glMap2f", (void**)&_glMap2f },
		{ "glMapGrid1d", (void**)&_glMapGrid1d },
		{ "glMapGrid1f", (void**)&_glMapGrid1f },
		{ "glMapGrid2d", (void**)&_glMapGrid2d },
		{ "glMapGrid2f", (void**)&_glMapGrid2f },
		{ "glMaterialf", (void**)&_glMaterialf },
		{ "glMaterialfv", (void**)&_glMaterialfv },
		{ "glMateriali", (void**)&_glMateriali },
		{ "glMaterialiv", (void**)&_glMaterialiv },
		{ "glMatrixMode", (void**)&_glMatrixMode },
		{ "glMultMatrixd", (void**)&_glMultMatrixd },
		{ "glMultMatrixf", (void**)&_glMultMatrixf },
		{ "glNewList", (void**)&_glNewList },
		{ "glNormal3b", (void**)&_glNormal3b },
		{ "glNormal3bv", (void**)&_glNormal3bv },
		{ "glNormal3d", (void**)&_glNormal3d },
		{ "glNormal3dv", (void**)&_glNormal3dv },
		{ "glNormal3f", (void**)&_glNormal3f },
		{ "glNormal3fv", (void**)&_glNormal3fv },
		{ "glNormal3i", (void**)&_glNormal3i },
		{ "glNormal3iv", (void**)&_glNormal3iv },
		{ "glNormal3s", (void**)&_glNormal3s },
		{ "glNormal3sv", (void**)&_glNormal3sv },
		{ "glOrtho", (void**)&_glOrtho },
		{ "glPassThrough", (void**)&_glPassThrough },
		{ "glPixelMapfv", (void**)&_glPixelMapfv },
		{ "glPixelMapuiv", (void**)&_glPixelMapuiv },
		{ "glPixelMapusv", (void**)&_glPixelMapusv },
		{ "glPixelStoref", (void**)&_glPixelStoref },
		{ "glPixelStorei", (void**)&_glPixelStorei },
		{ "glPixelTransferf", (void**)&_glPixelTransferf },
		{ "glPixelTransferi", (void**)&_glPixelTransferi },
		{ "glPixelZoom", (void**)&_glPixelZoom },
		{ "glPointSize", (void**)&_glPointSize },
		{ "glPolygonMode", (void**)&_glPolygonMode },
		{ "glPolygonStipple", (void**)&_glPolygonStipple },
		{ "glPopAttrib", (void**)&_glPopAttrib },
		{ "glPopMatrix", (void**)&_glPopMatrix },
		{ "glPopName", (void**)&_glPopName },
		{ "glPushAttrib", (void**)&_glPushAttrib },
		{ "glPushMatrix", (void**)&_glPushMatrix },
		{ "glPushName", (void**)&_glPushName },
		{ "glRasterPos2d", (void**)&_glRasterPos2d },
		{ "glRasterPos2dv", (void**)&_glRasterPos2dv },
		{ "glRasterPos2f", (void**)&_glRasterPos2f },
		{ "glRasterPos2fv", (void**)&_glRasterPos2fv },
		{ "glRasterPos2i", (void**)&_glRasterPos2i },
		{ "glRasterPos2iv", (void**)&_glRasterPos2iv },
		{ "glRasterPos2s", (void**)&_glRasterPos2s },
		{ "glRasterPos2sv", (void**)&_glRasterPos2sv },
		{ "glRasterPos3d", (void**)&_glRasterPos3d },
		{ "glRasterPos3dv", (void**)&_glRasterPos3dv },
		{ "glRasterPos3f", (void**)&_glRasterPos3f },
		{ "glRasterPos3fv", (void**)&_glRasterPos3fv },
		{ "glRasterPos3i", (void**)&_glRasterPos3i },
		{ "glRasterPos3iv", (void**)&_glRasterPos3iv },
		{ "glRasterPos3s", (void**)&_glRasterPos3s },
		{ "glRasterPos3sv", (void**)&_glRasterPos3sv },
		{ "glRasterPos4d", (void**)&_glRasterPos4d },
		{ "glRasterPos4dv", (void**)&_glRasterPos4dv },
		{ "glRasterPos4f", (void**)&_glRasterPos4f },
		{ "glRasterPos4fv", (void**)&_glRasterPos4fv },
		{ "glRasterPos4i", (void**)&_glRasterPos4i },
		{ "glRasterPos4iv", (void**)&_glRasterPos4iv },
		{ "glRasterPos4s", (void**)&_glRasterPos4s },
		{ "glRasterPos4sv", (void**)&_glRasterPos4sv },
		{ "glReadBuffer", (void**)&_glReadBuffer },
		{ "glReadPixels", (void**)&_glReadPixels },
		{ "glRectd", (void**)&_glRectd },
		{ "glRectdv", (void**)&_glRectdv },
		{ "glRectf", (void**)&_glRectf },
		{ "glRectfv", (void**)&_glRectfv },
		{ "glRecti", (void**)&_glRecti },
		{ "glRectiv", (void**)&_glRectiv },
		{ "glRects", (void**)&_glRects },
		{ "glRectsv", (void**)&_glRectsv },
		{ "glRenderMode", (void**)&_glRenderMode },
		{ "glRotated", (void**)&_glRotated },
		{ "glRotatef", (void**)&_glRotatef },
		{ "glScaled", (void**)&_glScaled },
		{ "glScalef", (void**)&_glScalef },
		{ "glScissor", (void**)&_glScissor },
		{ "glSelectBuffer", (void**)&_glSelectBuffer },
		{ "glShadeModel", (void**)&_glShadeModel },
		{ "glStencilFunc", (void**)&_glStencilFunc },
		{ "glStencilMask", (void**)&_glStencilMask },
		{ "glStencilOp", (void**)&_glStencilOp },
		{ "glTexCoord1d", (void**)&_glTexCoord1d },
		{ "glTexCoord1dv", (void**)&_glTexCoord1dv },
		{ "glTexCoord1f", (void**)&_glTexCoord1f },
		{ "glTexCoord1fv", (void**)&_glTexCoord1fv },
		{ "glTexCoord1i", (void**)&_glTexCoord1i },
		{ "glTexCoord1iv", (void**)&_glTexCoord1iv },
		{ "glTexCoord1s", (void**)&_glTexCoord1s },
		{ "glTexCoord1sv", (void**)&_glTexCoord1sv },
		{ "glTexCoord2d", (void**)&_glTexCoord2d },
		{ "glTexCoord2dv", (void**)&_glTexCoord2dv },
		{ "glTexCoord2f", (void**)&_glTexCoord2f },
		{ "glTexCoord2fv", (void**)&_glTexCoord2fv },
		{ "glTexCoord2i", (void**)&_glTexCoord2i },
		{ "glTexCoord2iv", (void**)&_glTexCoord2iv },
		{ "glTexCoord2s", (void**)&_glTexCoord2s },
		{ "glTexCoord2sv", (void**)&_glTexCoord2sv },
		{ "glTexCoord3d", (void**)&_glTexCoord3d },
		{ "glTexCoord3dv", (void**)&_glTexCoord3dv },
		{ "glTexCoord3f", (void**)&_glTexCoord3f },
		{ "glTexCoord3fv", (void**)&_glTexCoord3fv },
		{ "glTexCoord3i", (void**)&_glTexCoord3i },
		{ "glTexCoord3iv", (void**)&_glTexCoord3iv },
		{ "glTexCoord3s", (void**)&_glTexCoord3s },
		{ "glTexCoord3sv", (void**)&_glTexCoord3sv },
		{ "glTexCoord4d", (void**)&_glTexCoord4d },
		{ "glTexCoord4dv", (void**)&_glTexCoord4dv },
		{ "glTexCoord4f", (void**)&_glTexCoord4f },
		{ "glTexCoord4fv", (void**)&_glTexCoord4fv },
		{ "glTexCoord4i", (void**)&_glTexCoord4i },
		{ "glTexCoord4iv", (void**)&_glTexCoord4iv },
		{ "glTexCoord4s", (void**)&_glTexCoord4s },
		{ "glTexCoord4sv", (void**)&_glTexCoord4sv },
		{ "glTexEnvf", (void**)&_glTexEnvf },
		{ "glTexEnvfv", (void**)&_glTexEnvfv },
		{ "glTexEnvi", (void**)&_glTexEnvi },
		{ "glTexEnviv", (void**)&_glTexEnviv },
		{ "glTexGend", (void**)&_glTexGend },
		{ "glTexGendv", (void**)&_glTexGendv },
		{ "glTexGenf", (void**)&_glTexGenf },
		{ "glTexGenfv", (void**)&_glTexGenfv },
		{ "glTexGeni", (void**)&_glTexGeni },
		{ "glTexGeniv", (void**)&_glTexGeniv },
		{ "glTexImage1D", (void**)&_glTexImage1D },
		{ "glTexImage2D", (void**)&_glTexImage2D },
		{ "glTexParameterf", (void**)&_glTexParameterf },
		{ "glTexParameterfv", (void**)&_glTexParameterfv },
		{ "glTexParameteri", (void**)&_glTexParameteri },
		{ "glTexParameteriv", (void**)&_glTexParameteriv },
		{ "glTranslated", (void**)&_glTranslated },
		{ "glTranslatef", (void**)&_glTranslatef },
		{ "glVertex2d", (void**)&_glVertex2d },
		{ "glVertex2dv", (void**)&_glVertex2dv },
		{ "glVertex2f", (void**)&_glVertex2f },
		{ "glVertex2fv", (void**)&_glVertex2fv },
		{ "glVertex2i", (void**)&_glVertex2i },
		{ "glVertex2iv", (void**)&_glVertex2iv },
		{ "glVertex2s", (void**)&_glVertex2s },
		{ "glVertex2sv", (void**)&_glVertex2sv },
		{ "glVertex3d", (void**)&_glVertex3d },
		{ "glVertex3dv", (void**)&_glVertex3dv },
		{ "glVertex3f", (void**)&_glVertex3f },
		{ "glVertex3fv", (void**)&_glVertex3fv },
		{ "glVertex3i", (void**)&_glVertex3i },
		{ "glVertex3iv", (void**)&_glVertex3iv },
		{ "glVertex3s", (void**)&_glVertex3s },
		{ "glVertex3sv", (void**)&_glVertex3sv },
		{ "glVertex4d", (void**)&_glVertex4d },
		{ "glVertex4dv", (void**)&_glVertex4dv },
		{ "glVertex4f", (void**)&_glVertex4f },
		{ "glVertex4fv", (void**)&_glVertex4fv },
		{ "glVertex4i", (void**)&_glVertex4i },
		{ "glVertex4iv", (void**)&_glVertex4iv },
		{ "glVertex4s", (void**)&_glVertex4s },
		{ "glVertex4sv", (void**)&_glVertex4sv },
		{ "glViewport", (void**)&_glViewport },
	};

	static const FnEntry glFnTable_1_1[] = {
		{ "glAreTexturesResident", (void**)&_glAreTexturesResident },
		{ "glArrayElement", (void**)&_glArrayElement },
		{ "glBindTexture", (void**)&_glBindTexture },
		{ "glColorPointer", (void**)&_glColorPointer },
		{ "glCopyTexImage1D", (void**)&_glCopyTexImage1D },
		{ "glCopyTexImage2D", (void**)&_glCopyTexImage2D },
		{ "glCopyTexSubImage1D", (void**)&_glCopyTexSubImage1D },
		{ "glCopyTexSubImage2D", (void**)&_glCopyTexSubImage2D },
		{ "glDeleteTextures", (void**)&_glDeleteTextures },
		{ "glDisableClientState", (void**)&_glDisableClientState },
		{ "glDrawArrays", (void**)&_glDrawArrays },
		{ "glDrawElements", (void**)&_glDrawElements },
		{ "glEdgeFlagPointer", (void**)&_glEdgeFlagPointer },
		{ "glEnableClientState", (void**)&_glEnableClientState },
		{ "glGenTextures", (void**)&_glGenTextures },
		{ "glGetPointerv", (void**)&_glGetPointerv },
		{ "glIndexPointer", (void**)&_glIndexPointer },
		{ "glIndexub", (void**)&_glIndexub },
		{ "glIndexubv", (void**)&_glIndexubv },
		{ "glInterleavedArrays", (void**)&_glInterleavedArrays },
		{ "glIsTexture", (void**)&_glIsTexture },
		{ "glNormalPointer", (void**)&_glNormalPointer },
		{ "glPolygonOffset", (void**)&_glPolygonOffset },
		{ "glPopClientAttrib", (void**)&_glPopClientAttrib },
		{ "glPrioritizeTextures", (void**)&_glPrioritizeTextures },
		{ "glPushClientAttrib", (void**)&_glPushClientAttrib },
		{ "glTexCoordPointer", (void**)&_glTexCoordPointer },
		{ "glTexSubImage1D", (void**)&_glTexSubImage1D },
		{ "glTexSubImage2D", (void**)&_glTexSubImage2D },
		{ "glVertexPointer", (void**)&_glVertexPointer },
	};

	static const FnEntry glFnTable_1_2[] = {
		{ "glCopyTexSubImage3D", (void**)&_glCopyTexSubImage3D },
		{ "glDrawRangeElements", (void**)&_glDrawRangeElements },
		{ "glTexImage3D", (void**)&_glTexImage3D },
		{ "glTexSubImage3D", (void**)&_glTexSubImage3D },
	};

	static const FnEntry glFnTable_1_3[] = {
		{ "glActiveTexture", (void**)&_glActiveTexture },
		{ "glClientActiveTexture", (void**)&_glClientActiveTexture },
		{ "glCompressedTexImage1D", (void**)&_glCompressedTexImage1D },
		{ "glCompressedTexImage2D", (void**)&_glCompressedTexImage2D },
		{ "glCompressedTexImage3D", (void**)&_glCompressedTexImage3D },
		{ "glCompressedTexSubImage1D", (void**)&_glCompressedTexSubImage1D },
		{ "glCompressedTexSubImage2D", (void**)&_glCompressedTexSubImage2D },
		{ "glCompressedTexSubImage3D", (void**)&_glCompressedTexSubImage3D },
		{ "glGetCompressedTexImage", (void**)&_glGetCompressedTexImage },
		{ "glLoadTransposeMatrixd", (void**)&_glLoadTransposeMatrixd },
		{ "glLoadTransposeMatrixf", (void**)&_glLoadTransposeMatrixf },
		{ "glMultTransposeMatrixd", (void**)&_glMultTransposeMatrixd },
		{ "glMultTransposeMatrixf", (void**)&_glMultTransposeMatrixf },
		{ "glMultiTexCoord1d", (void**)&_glMultiTexCoord1d },
		{ "glMultiTexCoord1dv", (void**)&_glMultiTexCoord1dv },
		{ "glMultiTexCoord1f", (void**)&_glMultiTexCoord1f },
		{ "glMultiTexCoord1fv", (void**)&_glMultiTexCoord1fv },
		{ "glMultiTexCoord1i", (void**)&_glMultiTexCoord1i },
		{ "glMultiTexCoord1iv", (void**)&_glMultiTexCoord1iv },
		{ "glMultiTexCoord1s", (void**)&_glMultiTexCoord1s },
		{ "glMultiTexCoord1sv", (void**)&_glMultiTexCoord1sv },
		{ "glMultiTexCoord2d", (void**)&_glMultiTexCoord2d },
		{ "glMultiTexCoord2dv", (void**)&_glMultiTexCoord2dv },
		{ "glMultiTexCoord2f", (void**)&_glMultiTexCoord2f },
		{ "glMultiTexCoord2fv", (void**)&_glMultiTexCoord2fv },
		{ "glMultiTexCoord2i", (void**)&_glMultiTexCoord2i },
		{ "glMultiTexCoord2iv", (void**)&_glMultiTexCoord2iv },
		{ "glMultiTexCoord2s", (void**)&_glMultiTexCoord2s },
		{ "glMultiTexCoord2sv", (void**)&_glMultiTexCoord2sv },
		{ "glMultiTexCoord3d", (void**)&_glMultiTexCoord3d },
		{ "glMultiTexCoord3dv", (void**)&_glMultiTexCoord3dv },
		{ "glMultiTexCoord3f", (void**)&_glMultiTexCoord3f },
		{ "glMultiTexCoord3fv", (void**)&_glMultiTexCoord3fv },
		{ "glMultiTexCoord3i", (void**)&_glMultiTexCoord3i },
		{ "glMultiTexCoord3iv", (void**)&_glMultiTexCoord3iv },
		{ "glMultiTexCoord3s", (void**)&_glMultiTexCoord3s },
		{ "glMultiTexCoord3sv", (void**)&_glMultiTexCoord3sv },
		{ "glMultiTexCoord4d", (void**)&_glMultiTexCoord4d },
		{ "glMultiTexCoord4dv", (void**)&_glMultiTexCoord4dv },
		{ "glMultiTexCoord4f", (void**)&_glMultiTexCoord4f },
		{ "glMultiTexCoord4fv", (void**)&_glMultiTexCoord4fv },
		{ "glMultiTexCoord4i", (void**)&_glMultiTexCoord4i },
		{ "glMultiTexCoord4iv", (void**)&_glMultiTexCoord4iv },
		{ "glMultiTexCoord4s", (void**)&_glMultiTexCoord4s },
		{ "glMultiTexCoord4sv", (void**)&_glMultiTexCoord4sv },
		{ "glSampleCoverage", (void**)&_glSampleCoverage },
	};

	static const FnEntry glFnTable_1_4[] = {
		{ "glBlendColor", (void**)&_glBlendColor },
		{ "glBlendEquation", (void**)&_glBlendEquation },
		{ "glBlendFuncSeparate", (void**)&_glBlendFuncSeparate },
		{ "glFogCoordPointer", (void**)&_glFogCoordPointer },
		{ "glFogCoordd", (void**)&_glFogCoordd },
		{ "glFogCoorddv", (void**)&_glFogCoorddv },
		{ "glFogCoordf", (void**)&_glFogCoordf },
		{ "glFogCoordfv", (void**)&_glFogCoordfv },
		{ "glMultiDrawArrays", (void**)&_glMultiDrawArrays },
		{ "glMultiDrawElements", (void**)&_glMultiDrawElements },
		{ "glPointParameterf", (void**)&_glPointParameterf },
		{ "glPointParameterfv", (void**)&_glPointParameterfv },
		{ "glPointParameteri", (void**)&_glPointParameteri },
		{ "glPointParameteriv", (void**)&_glPointParameteriv },
		{ "glSecondaryColor3b", (void**)&_glSecondaryColor3b },
		{ "glSecondaryColor3bv", (void**)&_glSecondaryColor3bv },
		{ "glSecondaryColor3d", (void**)&_glSecondaryColor3d },
		{ "glSecondaryColor3dv", (void**)&_glSecondaryColor3dv },
		{ "glSecondaryColor3f", (void**)&_glSecondaryColor3f },
		{ "glSecondaryColor3fv", (void**)&_glSecondaryColor3fv },
		{ "glSecondaryColor3i", (void**)&_glSecondaryColor3i },
		{ "glSecondaryColor3iv", (void**)&_glSecondaryColor3iv },
		{ "glSecondaryColor3s", (void**)&_glSecondaryColor3s },
		{ "glSecondaryColor3sv", (void**)&_glSecondaryColor3sv },
		{ "glSecondaryColor3ub", (void**)&_glSecondaryColor3ub },
		{ "glSecondaryColor3ubv", (void**)&_glSecondaryColor3ubv },
		{ "glSecondaryColor3ui", (void**)&_glSecondaryColor3ui },
		{ "glSecondaryColor3uiv", (void**)&_glSecondaryColor3uiv },
		{ "glSecondaryColor3us", (void**)&_glSecondaryColor3us },
		{ "glSecondaryColor3usv", (void**)&_glSecondaryColor3usv },
		{ "glSecondaryColorPointer", (void**)&_glSecondaryColorPointer },
		{ "glWindowPos2d", (void**)&_glWindowPos2d },
		{ "glWindowPos2dv", (void**)&_glWindowPos2dv },
		{ "glWindowPos2f", (void**)&_glWindowPos2f },
		{ "glWindowPos2fv", (void**)&_glWindowPos2fv },
		{ "glWindowPos2i", (void**)&_glWindowPos2i },
		{ "glWindowPos2iv", (void**)&_glWindowPos2iv },
		{ "glWindowPos2s", (void**)&_glWindowPos2s },
		{ "glWindowPos2sv", (void**)&_glWindowPos2sv },
		{ "glWindowPos3d", (void**)&_glWindowPos3d },
		{ "glWindowPos3dv", (void**)&_glWindowPos3dv },
		{ "glWindowPos3f", (void**)&_glWindowPos3f },
		{ "glWindowPos3fv", (void**)&_glWindowPos3fv },
		{ "glWindowPos3i", (void**)&_glWindowPos3i },
		{ "glWindowPos3iv", (void**)&_glWindowPos3iv },
		{ "glWindowPos3s", (void**)&_glWindowPos3s },
		{ "glWindowPos3sv", (void**)&_glWindowPos3sv },
	};

	static const FnEntry glFnTable_1_5[] = {
		{ "glBeginQuery", (void**)&_glBeginQuery },
		{ "glBindBuffer", (void**)&_glBindBuffer },
		{ "glBufferData", (void**)&_glBufferData },
		{ "glBufferSubData", (void**)&_glBufferSubData },
		{ "glDeleteBuffers", (void**)&_glDeleteBuffers },
		{ "glDeleteQueries", (void**)&_glDeleteQueries },
		{ "glEndQuery", (void**)&_glEndQuery },
		{ "glGenBuffers", (void**)&_glGenBuffers },
		{ "glGenQueries", (void**)&_glGenQueries },
		{ "glGetBufferParameteriv", (void**)&_glGetBufferParameteriv },
		{ "glGetBufferPointerv", (void**)&_glGetBufferPointerv },
		{ "glGetBufferSubData", (void**)&_glGetBufferSubData },
		{ "glGetQueryObjectiv", (void**)&_glGetQueryObjectiv },
		{ "glGetQueryObjectuiv", (void**)&_glGetQueryObjectuiv },
		{ "glGetQueryiv", (void**)&_glGetQueryiv },
		{ "glIsBuffer", (void**)&_glIsBuffer },
		{ "glIsQuery", (void**)&_glIsQuery },
		{ "glMapBuffer", (void**)&_glMapBuffer },
		{ "glUnmapBuffer", (void**)&_glUnmapBuffer },
	};

	static const FnEntry glFnTable_2_0[] = {
		{ "glAttachShader", (void**)&_glAttachShader },
		{ "glBindAttribLocation", (void**)&_glBindAttribLocation },
		{ "glBlendEquationSeparate", (void**)&_glBlendEquationSeparate },
		{ "glCompileShader", (void**)&_glCompileShader },
		{ "glCreateProgram", (void**)&_glCreateProgram },
		{ "glCreateShader", (void**)&_glCreateShader },
		{ "glDeleteProgram", (void**)&_glDeleteProgram },
		{ "glDeleteShader", (void**)&_glDeleteShader },
		{ "glDetachShader", (void**)&_glDetachShader },
		{ "glDisableVertexAttribArray", (void**)&_glDisableVertexAttribArray },
		{ "glDrawBuffers", (void**)&_glDrawBuffers },
		{ "glEnableVertexAttribArray", (void**)&_glEnableVertexAttribArray },
		{ "glGetActiveAttrib", (void**)&_glGetActiveAttrib },
		{ "glGetActiveUniform", (void**)&_glGetActiveUniform },
		{ "glGetAttachedShaders", (void**)&_glGetAttachedShaders },
		{ "glGetAttribLocation", (void**)&_glGetAttribLocation },
		{ "glGetProgramInfoLog", (void**)&_glGetProgramInfoLog },
		{ "glGetProgramiv", (void**)&_glGetProgramiv },
		{ "glGetShaderInfoLog", (void**)&_glGetShaderInfoLog },
		{ "glGetShaderSource", (void**)&_glGetShaderSource },
		{ "glGetShaderiv", (void**)&_glGetShaderiv },
		{ "glGetUniformLocation", (void**)&_glGetUniformLocation },
		{ "glGetUniformfv", (void**)&_glGetUniformfv },
		{ "glGetUniformiv", (void**)&_glGetUniformiv },
		{ "glGetVertexAttribPointerv", (void**)&_glGetVertexAttribPointerv },
		{ "glGetVertexAttribdv", (void**)&_glGetVertexAttribdv },
		{ "glGetVertexAttribfv", (void**)&_glGetVertexAttribfv },
		{ "glGetVertexAttribiv", (void**)&_glGetVertexAttribiv },
		{ "glIsProgram", (void**)&_glIsProgram },
		{ "glIsShader", (void**)&_glIsShader },
		{ "glLinkProgram", (void**)&_glLinkProgram },
		{ "glShaderSource", (void**)&_glShaderSource },
		{ "glStencilFuncSeparate", (void**)&_glStencilFuncSeparate },
		{ "glStencilMaskSeparate", (void**)&_glStencilMaskSeparate },
		{ "glStencilOpSeparate", (void**)&_glStencilOpSeparate },
		{ "glUniform1f", (void**)&_glUniform1f },
		{ "glUniform1fv", (void**)&_glUniform1fv },
		{ "glUniform1i", (void**)&_glUniform1i },
		{ "glUniform1iv", (void**)&_glUniform1iv },
		{ "glUniform2f", (void**)&_glUniform2f },
		{ "glUniform2fv", (void**)&_glUniform2fv },
		{ "glUniform2i", (void**)&_glUniform2i },
		{ "glUniform2iv", (void**)&_glUniform2iv },
		{ "glUniform3f", (void**)&_glUniform3f },
		{ "glUniform3fv", (void**)&_glUniform3fv },
		{ "glUniform3i", (void**)&_glUniform3i },
		{ "glUniform3iv", (void**)&_glUniform3iv },
		{ "glUniform4f", (void**)&_glUniform4f },
		{ "glUniform4fv", (void**)&_glUniform4fv },
		{ "glUniform4i", (void**)&_glUniform4i },
		{ "glUniform4iv", (void**)&_glUniform4iv },
		{ "glUniformMatrix2fv", (void**)&_glUniformMatrix2fv },
		{ "glUniformMatrix3fv", (void**)&_glUniformMatrix3fv },
		{ "glUniformMatrix4fv", (void**)&_glUniformMatrix4fv },
		{ "glUseProgram", (void**)&_glUseProgram },
		{ "glValidateProgram", (void**)&_glValidateProgram },
		{ "glVertexAttrib1d", (void**)&_glVertexAttrib1d },
		{ "glVertexAttrib1dv", (void**)&_glVertexAttrib1dv },
		{ "glVertexAttrib1f", (void**)&_glVertexAttrib1f },
		{ "glVertexAttrib1fv", (void**)&_glVertexAttrib1fv },
		{ "glVertexAttrib1s", (void**)&_glVertexAttrib1s },
		{ "glVertexAttrib1sv", (void**)&_glVertexAttrib1sv },
		{ "glVertexAttrib2d", (void**)&_glVertexAttrib2d },
		{ "glVertexAttrib2dv", (void**)&_glVertexAttrib2dv },
		{ "glVertexAttrib2f", (void**)&_glVertexAttrib2f },
		{ "glVertexAttrib2fv", (void**)&_glVertexAttrib2fv },
		{ "glVertexAttrib2s", (void**)&_glVertexAttrib2s },
		{ "glVertexAttrib2sv", (void**)&_glVertexAttrib2sv },
		{ "glVertexAttrib3d", (void**)&_glVertexAttrib3d },
		{ "glVertexAttrib3dv", (void**)&_glVertexAttrib3dv },
		{ "glVertexAttrib3f", (void**)&_glVertexAttrib3f },
		{ "glVertexAttrib3fv", (void**)&_glVertexAttrib3fv },
		{ "glVertexAttrib3s", (void**)&_glVertexAttrib3s },
		{ "glVertexAttrib3sv", (void**)&_glVertexAttrib3sv },
		{ "glVertexAttrib4Nbv", (void**)&_glVertexAttrib4Nbv },
		{ "glVertexAttrib4Niv", (void**)&_glVertexAttrib4Niv },
		{ "glVertexAttrib4Nsv", (void**)&_glVertexAttrib4Nsv },
		{ "glVertexAttrib4Nub", (void**)&_glVertexAttrib4Nub },
		{ "glVertexAttrib4Nubv", (void**)&_glVertexAttrib4Nubv },
		{ "glVertexAttrib4Nuiv", (void**)&_glVertexAttrib4Nuiv },
		{ "glVertexAttrib4Nusv", (void**)&_glVertexAttrib4Nusv },
		{ "glVertexAttrib4bv", (void**)&_glVertexAttrib4bv },
		{ "glVertexAttrib4d", (void**)&_glVertexAttrib4d },
		{ "glVertexAttrib4dv", (void**)&_glVertexAttrib4dv },
		{ "glVertexAttrib4f", (void**)&_glVertexAttrib4f },
		{ "glVertexAttrib4fv", (void**)&_glVertexAttrib4fv },
		{ "glVertexAttrib4iv", (void**)&_glVertexAttrib4iv },
		{ "glVertexAttrib4s", (void**)&_glVertexAttrib4s },
		{ "glVertexAttrib4sv", (void**)&_glVertexAttrib4sv },
		{ "glVertexAttrib4ubv", (void**)&_glVertexAttrib4ubv },
		{ "glVertexAttrib4uiv", (void**)&_glVertexAttrib4uiv },
		{ "glVertexAttrib4usv", (void**)&_glVertexAttrib4usv },
		{ "glVertexAttribPointer", (void**)&_glVertexAttribPointer },
	};

	static const FnEntry glFnTable_2_1[] = {
		{ "glUniformMatrix2x3fv", (void**)&_glUniformMatrix2x3fv },
		{ "glUniformMatrix2x4fv", (void**)&_glUniformMatrix2x4fv },
		{ "glUniformMatrix3x2fv", (void**)&_glUniformMatrix3x2fv },
		{ "glUniformMatrix3x4fv", (void**)&_glUniformMatrix3x4fv },
		{ "glUniformMatrix4x2fv", (void**)&_glUniformMatrix4x2fv },
		{ "glUniformMatrix4x3fv", (void**)&_glUniformMatrix4x3fv },
	};

	static const FnEntry glFnTable_3_0[] = {
		{ "glBeginConditionalRender", (void**)&_glBeginConditionalRender },
		{ "glBeginTransformFeedback", (void**)&_glBeginTransformFeedback },
		{ "glBindBufferBase", (void**)&_glBindBufferBase },
		{ "glBindBufferRange", (void**)&_glBindBufferRange },
		{ "glBindFragDataLocation", (void**)&_glBindFragDataLocation },
		{ "glBindFramebuffer", (void**)&_glBindFramebuffer },
		{ "glBindRenderbuffer", (void**)&_glBindRenderbuffer },
		{ "glBindVertexArray", (void**)&_glBindVertexArray },
		{ "glBlitFramebuffer", (void**)&_glBlitFramebuffer },
		{ "glCheckFramebufferStatus", (void**)&_glCheckFramebufferStatus },
		{ "glClampColor", (void**)&_glClampColor },
		{ "glClearBufferfi", (void**)&_glClearBufferfi },
		{ "glClearBufferfv", (void**)&_glClearBufferfv },
		{ "glClearBufferiv", (void**)&_glClearBufferiv },
		{ "glClearBufferuiv", (void**)&_glClearBufferuiv },
		{ "glColorMaski", (void**)&_glColorMaski },
		{ "glDeleteFramebuffers", (void**)&_glDeleteFramebuffers },
		{ "glDeleteRenderbuffers", (void**)&_glDeleteRenderbuffers },
		{ "glDeleteVertexArrays", (void**)&_glDeleteVertexArrays },
		{ "glDisablei", (void**)&_glDisablei },
		{ "glEnablei", (void**)&_glEnablei },
		{ "glEndConditionalRender", (void**)&_glEndConditionalRender },
		{ "glEndTransformFeedback", (void**)&_glEndTransformFeedback },
		{ "glFlushMappedBufferRange", (void**)&_glFlushMappedBufferRange },
		{ "glFramebufferRenderbuffer", (void**)&_glFramebufferRenderbuffer },
		{ "glFramebufferTexture1D", (void**)&_glFramebufferTexture1D },
		{ "glFramebufferTexture2D", (void**)&_glFramebufferTexture2D },
		{ "glFramebufferTexture3D", (void**)&_glFramebufferTexture3D },
		{ "glFramebufferTextureLayer", (void**)&_glFramebufferTextureLayer },
		{ "glGenFramebuffers", (void**)&_glGenFramebuffers },
		{ "glGenRenderbuffers", (void**)&_glGenRenderbuffers },
		{ "glGenVertexArrays", (void**)&_glGenVertexArrays },
		{ "glGenerateMipmap", (void**)&_glGenerateMipmap },
		{ "glGetBooleani_v", (void**)&_glGetBooleani_v },
		{ "glGetFragDataLocation", (void**)&_glGetFragDataLocation },
		{ "glGetFramebufferAttachmentParameteriv", (void**)&_glGetFramebufferAttachmentParameteriv },
		{ "glGetIntegeri_v", (void**)&_glGetIntegeri_v },
		{ "glGetRenderbufferParameteriv", (void**)&_glGetRenderbufferParameteriv },
		{ "glGetStringi", (void**)&_glGetStringi },
		{ "glGetTexParameterIiv", (void**)&_glGetTexParameterIiv },
		{ "glGetTexParameterIuiv", (void**)&_glGetTexParameterIuiv },
		{ "glGetTransformFeedbackVarying", (void**)&_glGetTransformFeedbackVarying },
		{ "glGetUniformuiv", (void**)&_glGetUniformuiv },
		{ "glGetVertexAttribIiv", (void**)&_glGetVertexAttribIiv },
		{ "glGetVertexAttribIuiv", (void**)&_glGetVertexAttribIuiv },
		{ "glIsEnabledi", (void**)&_glIsEnabledi },
		{ "glIsFramebuffer", (void**)&_glIsFramebuffer },
		{ "glIsRenderbuffer", (void**)&_glIsRenderbuffer },
		{ "glIsVertexArray", (void**)&_glIsVertexArray },
		{ "glMapBufferRange", (void**)&_glMapBufferRange },
		{ "glRenderbufferStorage", (void**)&_glRenderbufferStorage },
		{ "glRenderbufferStorageMultisample", (void**)&_glRenderbufferStorageMultisample },
		{ "glTexParameterIiv", (void**)&_glTexParameterIiv },
		{ "glTexParameterIuiv", (void**)&_glTexParameterIuiv },
		{ "glTransformFeedbackVaryings", (void**)&_glTransformFeedbackVaryings },
		{ "glUniform1ui", (void**)&_glUniform1ui },
		{ "glUniform1uiv", (void**)&_glUniform1uiv },
		{ "glUniform2ui", (void**)&_glUniform2ui },
		{ "glUniform2uiv", (void**)&_glUniform2uiv },
		{ "glUniform3ui", (void**)&_glUniform3ui },
		{ "glUniform3uiv", (void**)&_glUniform3uiv },
		{ "glUniform4ui", (void**)&_glUniform4ui },
		{ "glUniform4uiv", (void**)&_glUniform4uiv },
		{ "glVertexAttribI1i", (void**)&_glVertexAttribI1i },
		{ "glVertexAttribI1iv", (void**)&_glVertexAttribI1iv },
		{ "glVertexAttribI1ui", (void**)&_glVertexAttribI1ui },
		{ "glVertexAttribI1uiv", (void**)&_glVertexAttribI1uiv },
		{ "glVertexAttribI2i", (void**)&_glVertexAttribI2i },
		{ "glVertexAttribI2iv", (void**)&_glVertexAttribI2iv },
		{ "glVertexAttribI2ui", (void**)&_glVertexAttribI2ui },
		{ "glVertexAttribI2uiv", (void**)&_glVertexAttribI2uiv },
		{ "glVertexAttribI3i", (void**)&_glVertexAttribI3i },
		{ "glVertexAttribI3iv", (void**)&_glVertexAttribI3iv },
		{ "glVertexAttribI3ui", (void**)&_glVertexAttribI3ui },
		{ "glVertexAttribI3uiv", (void**)&_glVertexAttribI3uiv },
		{ "glVertexAttribI4bv", (void**)&_glVertexAttribI4bv },
		{ "glVertexAttribI4i", (void**)&_glVertexAttribI4i },
		{ "glVertexAttribI4iv", (void**)&_glVertexAttribI4iv },
		{ "glVertexAttribI4sv", (void**)&_glVertexAttribI4sv },
		{ "glVertexAttribI4ubv", (void**)&_glVertexAttribI4ubv },
		{ "glVertexAttribI4ui", (void**)&_glVertexAttribI4ui },
		{ "glVertexAttribI4uiv", (void**)&_glVertexAttribI4uiv },
		{ "glVertexAttribI4usv", (void**)&_glVertexAttribI4usv },
		{ "glVertexAttribIPointer", (void**)&_glVertexAttribIPointer },
	};

	static const FnEntry glFnTable_3_1[] = {
		{ "glCopyBufferSubData", (void**)&_glCopyBufferSubData },
		{ "glDrawArraysInstanced", (void**)&_glDrawArraysInstanced },
		{ "glDrawElementsInstanced", (void**)&_glDrawElementsInstanced },
		{ "glGetActiveUniformBlockName", (void**)&_glGetActiveUniformBlockName },
		{ "glGetActiveUniformBlockiv", (void**)&_glGetActiveUniformBlockiv },
		{ "glGetActiveUniformName", (void**)&_glGetActiveUniformName },
		{ "glGetActiveUniformsiv", (void**)&_glGetActiveUniformsiv },
		{ "glGetUniformBlockIndex", (void**)&_glGetUniformBlockIndex },
		{ "glGetUniformIndices", (void**)&_glGetUniformIndices },
		{ "glPrimitiveRestartIndex", (void**)&_glPrimitiveRestartIndex },
		{ "glTexBuffer", (void**)&_glTexBuffer },
		{ "glUniformBlockBinding", (void**)&_glUniformBlockBinding },
	};

	static const FnEntry glFnTable_3_2[] = {
		{ "glClientWaitSync", (void**)&_glClientWaitSync },
		{ "glDeleteSync", (void**)&_glDeleteSync },
		{ "glDrawElementsBaseVertex", (void**)&_glDrawElementsBaseVertex },
		{ "glDrawElementsInstancedBaseVertex", (void**)&_glDrawElementsInstancedBaseVertex },
		{ "glDrawRangeElementsBaseVertex", (void**)&_glDrawRangeElementsBaseVertex },
		{ "glFenceSync", (void**)&_glFenceSync },
		{ "glFramebufferTexture", (void**)&_glFramebufferTexture },
		{ "glGetBufferParameteri64v", (void**)&_glGetBufferParameteri64v },
		{ "glGetInteger64i_v", (void**)&_glGetInteger64i_v },
		{ "glGetInteger64v", (void**)&_glGetInteger64v },
		{ "glGetMultisamplefv", (void**)&_glGetMultisamplefv },
		{ "glGetSynciv", (void**)&_glGetSynciv },
		{ "glIsSync", (void**)&_glIsSync },
		{ "glMultiDrawElementsBaseVertex", (void**)&_glMultiDrawElementsBaseVertex },
		{ "glProvokingVertex", (void**)&_glProvokingVertex },
		{ "glSampleMaski", (void**)&_glSampleMaski },
		{ "glTexImage2DMultisample", (void**)&_glTexImage2DMultisample },
		{ "glTexImage3DMultisample", (void**)&_glTexImage3DMultisample },
		{ "glWaitSync", (void**)&_glWaitSync },
	};

	static const FnEntry glFnTable_3_3[] = {
		{ "glBindFragDataLocationIndexed", (void**)&_glBindFragDataLocationIndexed },
		{ "glBindSampler", (void**)&_glBindSampler },
		{ "glColorP3ui", (void**)&_glColorP3ui },
		{ "glColorP3uiv", (void**)&_glColorP3uiv },
		{ "glColorP4ui", (void**)&_glColorP4ui },
		{ "glColorP4uiv", (void**)&_glColorP4uiv },
		{ "glDeleteSamplers", (void**)&_glDeleteSamplers },
		{ "glGenSamplers", (void**)&_glGenSamplers },
		{ "glGetFragDataIndex", (void**)&_glGetFragDataIndex },
		{ "glGetQueryObjecti64v", (void**)&_glGetQueryObjecti64v },
		{ "glGetQueryObjectui64v", (void**)&_glGetQueryObjectui64v },
		{ "glGetSamplerParameterIiv", (void**)&_glGetSamplerParameterIiv },
		{ "glGetSamplerParameterIuiv", (void**)&_glGetSamplerParameterIuiv },
		{ "glGetSamplerParameterfv", (void**)&_glGetSamplerParameterfv },
		{ "glGetSamplerParameteriv", (void**)&_glGetSamplerParameteriv },
		{ "glIsSampler", (void**)&_glIsSampler },
		{ "glMultiTexCoordP1ui", (void**)&_glMultiTexCoordP1ui },
		{ "glMultiTexCoordP1uiv", (void**)&_glMultiTexCoordP1uiv },
		{ "glMultiTexCoordP2ui", (void**)&_glMultiTexCoordP2ui },
		{ "glMultiTexCoordP2uiv", (void**)&_glMultiTexCoordP2uiv },
		{ "glMultiTexCoordP3ui", (void**)&_glMultiTexCoordP3ui },
		{ "glMultiTexCoordP3uiv", (void**)&_glMultiTexCoordP3uiv },
		{ "glMultiTexCoordP4ui", (void**)&_glMultiTexCoordP4ui },
		{ "glMultiTexCoordP4uiv", (void**)&_glMultiTexCoordP4uiv },
		{ "glNormalP3ui", (void**)&_glNormalP3ui },
		{ "glNormalP3uiv", (void**)&_glNormalP3uiv },
		{ "glQueryCounter", (void**)&_glQueryCounter },
		{ "glSamplerParameterIiv", (void**)&_glSamplerParameterIiv },
		{ "glSamplerParameterIuiv", (void**)&_glSamplerParameterIuiv },
		{ "glSamplerParameterf", (void**)&_glSamplerParameterf },
		{ "glSamplerParameterfv", (void**)&_glSamplerParameterfv },
		{ "glSamplerParameteri", (void**)&_glSamplerParameteri },
		{ "glSamplerParameteriv", (void**)&_glSamplerParameteriv },
		{ "glSecondaryColorP3ui", (void**)&_glSecondaryColorP3ui },
		{ "glSecondaryColorP3uiv", (void**)&_glSecondaryColorP3uiv },
		{ "glTexCoordP1ui", (void**)&_glTexCoordP1ui },
		{ "glTexCoordP1uiv", (void**)&_glTexCoordP1uiv },
		{ "glTexCoordP2ui", (void**)&_glTexCoordP2ui },
		{ "glTexCoordP2uiv", (void**)&_glTexCoordP2uiv },
		{ "glTexCoordP3ui", (void**)&_glTexCoordP3ui },
		{ "glTexCoordP3uiv", (void**)&_glTexCoordP3uiv },
		{ "glTexCoordP4ui", (void**)&_glTexCoordP4ui },
		{ "glTexCoordP4uiv", (void**)&_glTexCoordP4uiv },
		{ "glVertexAttribDivisor", (void**)&_glVertexAttribDivisor },
		{ "glVertexAttribP1ui", (void**)&_glVertexAttribP1ui },
		{ "glVertexAttribP1uiv", (void**)&_glVertexAttribP1uiv },
		{ "glVertexAttribP2ui", (void**)&_glVertexAttribP2ui },
		{ "glVertexAttribP2uiv", (void**)&_glVertexAttribP2uiv },
		{ "glVertexAttribP3ui", (void**)&_glVertexAttribP3ui },
		{ "glVertexAttribP3uiv", (void**)&_glVertexAttribP3uiv },
		{ "glVertexAttribP4ui", (void**)&_glVertexAttribP4ui },
		{ "glVertexAttribP4uiv", (void**)&_glVertexAttribP4uiv },
		{ "glVertexP2ui", (void**)&_glVertexP2ui },
		{ "glVertexP2uiv", (void**)&_glVertexP2uiv },
		{ "glVertexP3ui", (void**)&_glVertexP3ui },
		{ "glVertexP3uiv", (void**)&_glVertexP3uiv },
		{ "glVertexP4ui", (void**)&_glVertexP4ui },
		{ "glVertexP4uiv", (void**)&_glVertexP4uiv },
	};

	static const FnEntry glFnTable_4_0[] = {
		{ "glBeginQueryIndexed", (void**)&_glBeginQueryIndexed },
		{ "glBindTransformFeedback", (void**)&_glBindTransformFeedback },
		{ "glBlendEquationSeparatei", (void**)&_glBlendEquationSeparatei },
		{ "glBlendEquationi", (void**)&_glBlendEquationi },
		{ "glBlendFuncSeparatei", (void**)&_glBlendFuncSeparatei },
		{ "glBlendFunci", (void**)&_glBlendFunci },
		{ "glDeleteTransformFeedbacks", (void**)&_glDeleteTransformFeedbacks },
		{ "glDrawArraysIndirect", (void**)&_glDrawArraysIndirect },
		{ "glDrawElementsIndirect", (void**)&_glDrawElementsIndirect },
		{ "glDrawTransformFeedback", (void**)&_glDrawTransformFeedback },
		{ "glDrawTransformFeedbackStream", (void**)&_glDrawTransformFeedbackStream },
		{ "glEndQueryIndexed", (void**)&_glEndQueryIndexed },
		{ "glGenTransformFeedbacks", (void**)&_glGenTransformFeedbacks },
		{ "glGetActiveSubroutineName", (void**)&_glGetActiveSubroutineName },
		{ "glGetActiveSubroutineUniformName", (void**)&_glGetActiveSubroutineUniformName },
		{ "glGetActiveSubroutineUniformiv", (void**)&_glGetActiveSubroutineUniformiv },
		{ "glGetProgramStageiv", (void**)&_glGetProgramStageiv },
		{ "glGetQueryIndexediv", (void**)&_glGetQueryIndexediv },
		{ "glGetSubroutineIndex", (void**)&_glGetSubroutineIndex },
		{ "glGetSubroutineUniformLocation", (void**)&_glGetSubroutineUniformLocation },
		{ "glGetUniformSubroutineuiv", (void**)&_glGetUniformSubroutineuiv },
		{ "glGetUniformdv", (void**)&_glGetUniformdv },
		{ "glIsTransformFeedback", (void**)&_glIsTransformFeedback },
		{ "glMinSampleShading", (void**)&_glMinSampleShading },
		{ "glPatchParameterfv", (void**)&_glPatchParameterfv },
		{ "glPatchParameteri", (void**)&_glPatchParameteri },
		{ "glPauseTransformFeedback", (void**)&_glPauseTransformFeedback },
		{ "glResumeTransformFeedback", (void**)&_glResumeTransformFeedback },
		{ "glUniform1d", (void**)&_glUniform1d },
		{ "glUniform1dv", (void**)&_glUniform1dv },
		{ "glUniform2d", (void**)&_glUniform2d },
		{ "glUniform2dv", (void**)&_glUniform2dv },
		{ "glUniform3d", (void**)&_glUniform3d },
		{ "glUniform3dv", (void**)&_glUniform3dv },
		{ "glUniform4d", (void**)&_glUniform4d },
		{ "glUniform4dv", (void**)&_glUniform4dv },
		{ "glUniformMatrix2dv", (void**)&_glUniformMatrix2dv },
		{ "glUniformMatrix2x3dv", (void**)&_glUniformMatrix2x3dv },
		{ "glUniformMatrix2x4dv", (void**)&_glUniformMatrix2x4dv },
		{ "glUniformMatrix3dv", (void**)&_glUniformMatrix3dv },
		{ "glUniformMatrix3x2dv", (void**)&_glUniformMatrix3x2dv },
		{ "glUniformMatrix3x4dv", (void**)&_glUniformMatrix3x4dv },
		{ "glUniformMatrix4dv", (void**)&_glUniformMatrix4dv },
		{ "glUniformMatrix4x2dv", (void**)&_glUniformMatrix4x2dv },
		{ "glUniformMatrix4x3dv", (void**)&_glUniformMatrix4x3dv },
		{ "glUniformSubroutinesuiv", (void**)&_glUniformSubroutinesuiv },
	};

	static const FnEntry glFnTable_4_1[] = {
		{ "glActiveShaderProgram", (void**)&_glActiveShaderProgram },
		{ "glBindProgramPipeline", (void**)&_glBindProgramPipeline },
		{ "glClearDepthf", (void**)&_glClearDepthf },
		{ "glCreateShaderProgramv", (void**)&_glCreateShaderProgramv },
		{ "glDeleteProgramPipelines", (void**)&_glDeleteProgramPipelines },
		{ "glDepthRangeArrayv", (void**)&_glDepthRangeArrayv },
		{ "glDepthRangeIndexed", (void**)&_glDepthRangeIndexed },
		{ "glDepthRangef", (void**)&_glDepthRangef },
		{ "glGenProgramPipelines", (void**)&_glGenProgramPipelines },
		{ "glGetDoublei_v", (void**)&_glGetDoublei_v },
		{ "glGetFloati_v", (void**)&_glGetFloati_v },
		{ "glGetProgramBinary", (void**)&_glGetProgramBinary },
		{ "glGetProgramPipelineInfoLog", (void**)&_glGetProgramPipelineInfoLog },
		{ "glGetProgramPipelineiv", (void**)&_glGetProgramPipelineiv },
		{ "glGetShaderPrecisionFormat", (void**)&_glGetShaderPrecisionFormat },
		{ "glGetVertexAttribLdv", (void**)&_glGetVertexAttribLdv },
		{ "glIsProgramPipeline", (void**)&_glIsProgramPipeline },
		{ "glProgramBinary", (void**)&_glProgramBinary },
		{ "glProgramParameteri", (void**)&_glProgramParameteri },
		{ "glProgramUniform1d", (void**)&_glProgramUniform1d },
		{ "glProgramUniform1dv", (void**)&_glProgramUniform1dv },
		{ "glProgramUniform1f", (void**)&_glProgramUniform1f },
		{ "glProgramUniform1fv", (void**)&_glProgramUniform1fv },
		{ "glProgramUniform1i", (void**)&_glProgramUniform1i },
		{ "glProgramUniform1iv", (void**)&_glProgramUniform1iv },
		{ "glProgramUniform1ui", (void**)&_glProgramUniform1ui },
		{ "glProgramUniform1uiv", (void**)&_glProgramUniform1uiv },
		{ "glProgramUniform2d", (void**)&_glProgramUniform2d },
		{ "glProgramUniform2dv", (void**)&_glProgramUniform2dv },
		{ "glProgramUniform2f", (void**)&_glProgramUniform2f },
		{ "glProgramUniform2fv", (void**)&_glProgramUniform2fv },
		{ "glProgramUniform2i", (void**)&_glProgramUniform2i },
		{ "glProgramUniform2iv", (void**)&_glProgramUniform2iv },
		{ "glProgramUniform2ui", (void**)&_glProgramUniform2ui },
		{ "glProgramUniform2uiv", (void**)&_glProgramUniform2uiv },
		{ "glProgramUniform3d", (void**)&_glProgramUniform3d },
		{ "glProgramUniform3dv", (void**)&_glProgramUniform3dv },
		{ "glProgramUniform3f", (void**)&_glProgramUniform3f },
		{ "glProgramUniform3fv", (void**)&_glProgramUniform3fv },
		{ "glProgramUniform3i", (void**)&_glProgramUniform3i },
		{ "glProgramUniform3iv", (void**)&_glProgramUniform3iv },
		{ "glProgramUniform3ui", (void**)&_glProgramUniform3ui },
		{ "glProgramUniform3uiv", (void**)&_glProgramUniform3uiv },
		{ "glProgramUniform4d", (void**)&_glProgramUniform4d },
		{ "glProgramUniform4dv", (void**)&_glProgramUniform4dv },
		{ "glProgramUniform4f", (void**)&_glProgramUniform4f },
		{ "glProgramUniform4fv", (void**)&_glProgramUniform4fv },
		{ "glProgramUniform4i", (void**)&_glProgramUniform4i },
		{ "glProgramUniform4iv", (void**)&_glProgramUniform4iv },
		{ "glProgramUniform4ui", (void**)&_glProgramUniform4ui },
		{ "glProgramUniform4uiv", (void**)&_glProgramUniform4uiv },
		{ "glProgramUniformMatrix2dv", (void**)&_glProgramUniformMatrix2dv },
		{ "glProgramUniformMatrix2fv", (void**)&_glProgramUniformMatrix2fv },
		{ "glProgramUniformMatrix2x3dv", (void**)&_glProgramUniformMatrix2x3dv },
		{ "glProgramUniformMatrix2x3fv", (void**)&_glProgramUniformMatrix2x3fv },
		{ "glProgramUniformMatrix2x4dv", (void**)&_glProgramUniformMatrix2x4dv },
		{ "glProgramUniformMatrix2x4fv", (void**)&_glProgramUniformMatrix2x4fv },
		{ "glProgramUniformMatrix3dv", (void**)&_glProgramUniformMatrix3dv },
		{ "glProgramUniformMatrix3fv", (void**)&_glProgramUniformMatrix3fv },
		{ "glProgramUniformMatrix3x2dv", (void**)&_glProgramUniformMatrix3x2dv },
		{ "glProgramUniformMatrix3x2fv", (void**)&_glProgramUniformMatrix3x2fv },
		{ "glProgramUniformMatrix3x4dv", (void**)&_glProgramUniformMatrix3x4dv },
		{ "glProgramUniformMatrix3x4fv", (void**)&_glProgramUniformMatrix3x4fv },
		{ "glProgramUniformMatrix4dv", (void**)&_glProgramUniformMatrix4dv },
		{ "glProgramUniformMatrix4fv", (void**)&_glProgramUniformMatrix4fv },
		{ "glProgramUniformMatrix4x2dv", (void**)&_glProgramUniformMatrix4x2dv },
		{ "glProgramUniformMatrix4x2fv", (void**)&_glProgramUniformMatrix4x2fv },
		{ "glProgramUniformMatrix4x3dv", (void**)&_glProgramUniformMatrix4x3dv },
		{ "glProgramUniformMatrix4x3fv", (void**)&_glProgramUniformMatrix4x3fv },
		{ "glReleaseShaderCompiler", (void**)&_glReleaseShaderCompiler },
		{ "glScissorArrayv", (void**)&_glScissorArrayv },
		{ "glScissorIndexed", (void**)&_glScissorIndexed },
		{ "glScissorIndexedv", (void**)&_glScissorIndexedv },
		{ "glShaderBinary", (void**)&_glShaderBinary },
		{ "glUseProgramStages", (void**)&_glUseProgramStages },
		{ "glValidateProgramPipeline", (void**)&_glValidateProgramPipeline },
		{ "glVertexAttribL1d", (void**)&_glVertexAttribL1d },
		{ "glVertexAttribL1dv", (void**)&_glVertexAttribL1dv },
		{ "glVertexAttribL2d", (void**)&_glVertexAttribL2d },
		{ "glVertexAttribL2dv", (void**)&_glVertexAttribL2dv },
		{ "glVertexAttribL3d", (void**)&_glVertexAttribL3d },
		{ "glVertexAttribL3dv", (void**)&_glVertexAttribL3dv },
		{ "glVertexAttribL4d", (void**)&_glVertexAttribL4d },
		{ "glVertexAttribL4dv", (void**)&_glVertexAttribL4dv },
		{ "glVertexAttribLPointer", (void**)&_glVertexAttribLPointer },
		{ "glViewportArrayv", (void**)&_glViewportArrayv },
		{ "glViewportIndexedf", (void**)&_glViewportIndexedf },
		{ "glViewportIndexedfv", (void**)&_glViewportIndexedfv },
	};

	static const FnEntry glFnTable_4_2[] = {
		{ "glBindImageTexture", (void**)&_glBindImageTexture },
		{ "glDrawArraysInstancedBaseInstance", (void**)&_glDrawArraysInstancedBaseInstance },
		{ "glDrawElementsInstancedBaseInstance", (void**)&_glDrawElementsInstancedBaseInstance },
		{ "glDrawElementsInstancedBaseVertexBaseInstance", (void**)&_glDrawElementsInstancedBaseVertexBaseInstance },
		{ "glDrawTransformFeedbackInstanced", (void**)&_glDrawTransformFeedbackInstanced },
		{ "glDrawTransformFeedbackStreamInstanced", (void**)&_glDrawTransformFeedbackStreamInstanced },
		{ "glGetActiveAtomicCounterBufferiv", (void**)&_glGetActiveAtomicCounterBufferiv },
		{ "glGetInternalformativ", (void**)&_glGetInternalformativ },
		{ "glMemoryBarrier", (void**)&_glMemoryBarrier },
		{ "glTexStorage1D", (void**)&_glTexStorage1D },
		{ "glTexStorage2D", (void**)&_glTexStorage2D },
		{ "glTexStorage3D", (void**)&_glTexStorage3D },
	};

	static const FnEntry glFnTable_4_3[] = {
		{ "glBindVertexBuffer", (void**)&_glBindVertexBuffer },
		{ "glClearBufferData", (void**)&_glClearBufferData },
		{ "glClearBufferSubData", (void**)&_glClearBufferSubData },
		{ "glCopyImageSubData", (void**)&_glCopyImageSubData },
		{ "glDebugMessageCallback", (void**)&_glDebugMessageCallback },
		{ "glDebugMessageControl", (void**)&_glDebugMessageControl },
		{ "glDebugMessageInsert", (void**)&_glDebugMessageInsert },
		{ "glDispatchCompute", (void**)&_glDispatchCompute },
		{ "glDispatchComputeIndirect", (void**)&_glDispatchComputeIndirect },
		{ "glFramebufferParameteri", (void**)&_glFramebufferParameteri },
		{ "glGetDebugMessageLog", (void**)&_glGetDebugMessageLog },
		{ "glGetFramebufferParameteriv", (void**)&_glGetFramebufferParameteriv },
		{ "glGetInternalformati64v", (void**)&_glGetInternalformati64v },
		{ "glGetObjectLabel", (void**)&_glGetObjectLabel },
		{ "glGetObjectPtrLabel", (void**)&_glGetObjectPtrLabel },
		{ "glGetProgramInterfaceiv", (void**)&_glGetProgramInterfaceiv },
		{ "glGetProgramResourceIndex", (void**)&_glGetProgramResourceIndex },
		{ "glGetProgramResourceLocation", (void**)&_glGetProgramResourceLocation },
		{ "glGetProgramResourceLocationIndex", (void**)&_glGetProgramResourceLocationIndex },
		{ "glGetProgramResourceName", (void**)&_glGetProgramResourceName },
		{ "glGetProgramResourceiv", (void**)&_glGetProgramResourceiv },
		{ "glInvalidateBufferData", (void**)&_glInvalidateBufferData },
		{ "glInvalidateBufferSubData", (void**)&_glInvalidateBufferSubData },
		{ "glInvalidateFramebuffer", (void**)&_glInvalidateFramebuffer },
		{ "glInvalidateSubFramebuffer", (void**)&_glInvalidateSubFramebuffer },
		{ "glInvalidateTexImage", (void**)&_glInvalidateTexImage },
		{ "glInvalidateTexSubImage", (void**)&_glInvalidateTexSubImage },
		{ "glMultiDrawArraysIndirect", (void**)&_glMultiDrawArraysIndirect },
		{ "glMultiDrawElementsIndirect", (void**)&_glMultiDrawElementsIndirect },
		{ "glObjectLabel", (void**)&_glObjectLabel },
		{ "glObjectPtrLabel", (void**)&_glObjectPtrLabel },
		{ "glPopDebugGroup", (void**)&_glPopDebugGroup },
		{ "glPushDebugGroup", (void**)&_glPushDebugGroup },
		{ "glShaderStorageBlockBinding", (void**)&_glShaderStorageBlockBinding },
		{ "glTexBufferRange", (void**)&_glTexBufferRange },
		{ "glTexStorage2DMultisample", (void**)&_glTexStorage2DMultisample },
		{ "glTexStorage3DMultisample", (void**)&_glTexStorage3DMultisample },
		{ "glTextureView", (void**)&_glTextureView },
		{ "glVertexAttribBinding", (void**)&_glVertexAttribBinding },
		{ "glVertexAttribFormat", (void**)&_glVertexAttribFormat },
		{ "glVertexAttribIFormat", (void**)&_glVertexAttribIFormat },
		{ "glVertexAttribLFormat", (void**)&_glVertexAttribLFormat },
		{ "glVertexBindingDivisor", (void**)&_glVertexBindingDivisor },
	};

	static const FnEntry glFnTable_4_4[] = {
		{ "glBindBuffersBase", (void**)&_glBindBuffersBase },
		{ "glBindBuffersRange", (void**)&_glBindBuffersRange },
		{ "glBindImageTextures", (void**)&_glBindImageTextures },
		{ "glBindSamplers", (void**)&_glBindSamplers },
		{ "glBindTextures", (void**)&_glBindTextures },
		{ "glBindVertexBuffers", (void**)&_glBindVertexBuffers },
		{ "glBufferStorage", (void**)&_glBufferStorage },
		{ "glClearTexImage", (void**)&_glClearTexImage },
		{ "glClearTexSubImage", (void**)&_glClearTexSubImage },
	};

	static const FnEntry glFnTable_4_5[] = {
		{ "glBindTextureUnit", (void**)&_glBindTextureUnit },
		{ "glBlitNamedFramebuffer", (void**)&_glBlitNamedFramebuffer },
		{ "glCheckNamedFramebufferStatus", (void**)&_glCheckNamedFramebufferStatus },
		{ "glClearNamedBufferData", (void**)&_glClearNamedBufferData },
		{ "glClearNamedBufferSubData", (void**)&_glClearNamedBufferSubData },
		{ "glClearNamedFramebufferfi", (void**)&_glClearNamedFramebufferfi },
		{ "glClearNamedFramebufferfv", (void**)&_glClearNamedFramebufferfv },
		{ "glClearNamedFramebufferiv", (void**)&_glClearNamedFramebufferiv },
		{ "glClearNamedFramebufferuiv", (void**)&_glClearNamedFramebufferuiv },
		{ "glClipControl", (void**)&_glClipControl },
		{ "glCompressedTextureSubImage1D", (void**)&_glCompressedTextureSubImage1D },
		{ "glCompressedTextureSubImage2D", (void**)&_glCompressedTextureSubImage2D },
		{ "glCompressedTextureSubImage3D", (void**)&_glCompressedTextureSubImage3D },
		{ "glCopyNamedBufferSubData", (void**)&_glCopyNamedBufferSubData },
		{ "glCopyTextureSubImage1D", (void**)&_glCopyTextureSubImage1D },
		{ "glCopyTextureSubImage2D", (void**)&_glCopyTextureSubImage2D },
		{ "glCopyTextureSubImage3D", (void**)&_glCopyTextureSubImage3D },
		{ "glCreateBuffers", (void**)&_glCreateBuffers },
		{ "glCreateFramebuffers", (void**)&_glCreateFramebuffers },
		{ "glCreateProgramPipelines", (void**)&_glCreateProgramPipelines },
		{ "glCreateQueries", (void**)&_glCreateQueries },
		{ "glCreateRenderbuffers", (void**)&_glCreateRenderbuffers },
		{ "glCreateSamplers", (void**)&_glCreateSamplers },
		{ "glCreateTextures", (void**)&_glCreateTextures },
		{ "glCreateTransformFeedbacks", (void**)&_glCreateTransformFeedbacks },
		{ "glCreateVertexArrays", (void**)&_glCreateVertexArrays },
		{ "glDisableVertexArrayAttrib", (void**)&_glDisableVertexArrayAttrib },
		{ "glEnableVertexArrayAttrib", (void**)&_glEnableVertexArrayAttrib },
		{ "glFlushMappedNamedBufferRange", (void**)&_glFlushMappedNamedBufferRange },
		{ "glGenerateTextureMipmap", (void**)&_glGenerateTextureMipmap },
		{ "glGetCompressedTextureImage", (void**)&_glGetCompressedTextureImage },
		{ "glGetCompressedTextureSubImage", (void**)&_glGetCompressedTextureSubImage },
		{ "glGetGraphicsResetStatus", (void**)&_glGetGraphicsResetStatus },
		{ "glGetNamedBufferParameteri64v", (void**)&_glGetNamedBufferParameteri64v },
		{ "glGetNamedBufferParameteriv", (void**)&_glGetNamedBufferParameteriv },
		{ "glGetNamedBufferPointerv", (void**)&_glGetNamedBufferPointerv },
		{ "glGetNamedBufferSubData", (void**)&_glGetNamedBufferSubData },
		{ "glGetNamedFramebufferAttachmentParameteriv", (void**)&_glGetNamedFramebufferAttachmentParameteriv },
		{ "glGetNamedFramebufferParameteriv", (void**)&_glGetNamedFramebufferParameteriv },
		{ "glGetNamedRenderbufferParameteriv", (void**)&_glGetNamedRenderbufferParameteriv },
		{ "glGetQueryBufferObjecti64v", (void**)&_glGetQueryBufferObjecti64v },
		{ "glGetQueryBufferObjectiv", (void**)&_glGetQueryBufferObjectiv },
		{ "glGetQueryBufferObjectui64v", (void**)&_glGetQueryBufferObjectui64v },
		{ "glGetQueryBufferObjectuiv", (void**)&_glGetQueryBufferObjectuiv },
		{ "glGetTextureImage", (void**)&_glGetTextureImage },
		{ "glGetTextureLevelParameterfv", (void**)&_glGetTextureLevelParameterfv },
		{ "glGetTextureLevelParameteriv", (void**)&_glGetTextureLevelParameteriv },
		{ "glGetTextureParameterIiv", (void**)&_glGetTextureParameterIiv },
		{ "glGetTextureParameterIuiv", (void**)&_glGetTextureParameterIuiv },
		{ "glGetTextureParameterfv", (void**)&_glGetTextureParameterfv },
		{ "glGetTextureParameteriv", (void**)&_glGetTextureParameteriv },
		{ "glGetTextureSubImage", (void**)&_glGetTextureSubImage },
		{ "glGetTransformFeedbacki64_v", (void**)&_glGetTransformFeedbacki64_v },
		{ "glGetTransformFeedbacki_v", (void**)&_glGetTransformFeedbacki_v },
		{ "glGetTransformFeedbackiv", (void**)&_glGetTransformFeedbackiv },
		{ "glGetVertexArrayIndexed64iv", (void**)&_glGetVertexArrayIndexed64iv },
		{ "glGetVertexArrayIndexediv", (void**)&_glGetVertexArrayIndexediv },
		{ "glGetVertexArrayiv", (void**)&_glGetVertexArrayiv },
		{ "glGetnColorTable", (void**)&_glGetnColorTable },
		{ "glGetnCompressedTexImage", (void**)&_glGetnCompressedTexImage },
		{ "glGetnConvolutionFilter", (void**)&_glGetnConvolutionFilter },
		{ "glGetnHistogram", (void**)&_glGetnHistogram },
		{ "glGetnMapdv", (void**)&_glGetnMapdv },
		{ "glGetnMapfv", (void**)&_glGetnMapfv },
		{ "glGetnMapiv", (void**)&_glGetnMapiv },
		{ "glGetnMinmax", (void**)&_glGetnMinmax },
		{ "glGetnPixelMapfv", (void**)&_glGetnPixelMapfv },
		{ "glGetnPixelMapuiv", (void**)&_glGetnPixelMapuiv },
		{ "glGetnPixelMapusv", (void**)&_glGetnPixelMapusv },
		{ "glGetnPolygonStipple", (void**)&_glGetnPolygonStipple },
		{ "glGetnSeparableFilter", (void**)&_glGetnSeparableFilter },
		{ "glGetnTexImage", (void**)&_glGetnTexImage },
		{ "glGetnUniformdv", (void**)&_glGetnUniformdv },
		{ "glGetnUniformfv", (void**)&_glGetnUniformfv },
		{ "glGetnUniformiv", (void**)&_glGetnUniformiv },
		{ "glGetnUniformuiv", (void**)&_glGetnUniformuiv },
		{ "glInvalidateNamedFramebufferData", (void**)&_glInvalidateNamedFramebufferData },
		{ "glInvalidateNamedFramebufferSubData", (void**)&_glInvalidateNamedFramebufferSubData },
		{ "glMapNamedBuffer", (void**)&_glMapNamedBuffer },
		{ "glMapNamedBufferRange", (void**)&_glMapNamedBufferRange },
		{ "glMemoryBarrierByRegion", (void**)&_glMemoryBarrierByRegion },
		{ "glNamedBufferData", (void**)&_glNamedBufferData },
		{ "glNamedBufferStorage", (void**)&_glNamedBufferStorage },
		{ "glNamedBufferSubData", (void**)&_glNamedBufferSubData },
		{ "glNamedFramebufferDrawBuffer", (void**)&_glNamedFramebufferDrawBuffer },
		{ "glNamedFramebufferDrawBuffers", (void**)&_glNamedFramebufferDrawBuffers },
		{ "glNamedFramebufferParameteri", (void**)&_glNamedFramebufferParameteri },
		{ "glNamedFramebufferReadBuffer", (void**)&_glNamedFramebufferReadBuffer },
		{ "glNamedFramebufferRenderbuffer", (void**)&_glNamedFramebufferRenderbuffer },
		{ "glNamedFramebufferTexture", (void**)&_glNamedFramebufferTexture },
		{ "glNamedFramebufferTextureLayer", (void**)&_glNamedFramebufferTextureLayer },
		{ "glNamedRenderbufferStorage", (void**)&_glNamedRenderbufferStorage },
		{ "glNamedRenderbufferStorageMultisample", (void**)&_glNamedRenderbufferStorageMultisample },
		{ "glReadnPixels", (void**)&_glReadnPixels },
		{ "glTextureBarrier", (void**)&_glTextureBarrier },
		{ "glTextureBuffer", (void**)&_glTextureBuffer },
		{ "glTextureBufferRange", (void**)&_glTextureBufferRange },
		{ "glTextureParameterIiv", (void**)&_glTextureParameterIiv },
		{ "glTextureParameterIuiv", (void**)&_glTextureParameterIuiv },
		{ "glTextureParameterf", (void**)&_glTextureParameterf },
		{ "glTextureParameterfv", (void**)&_glTextureParameterfv },
		{ "glTextureParameteri", (void**)&_glTextureParameteri },
		{ "glTextureParameteriv", (void**)&_glTextureParameteriv },
		{ "glTextureStorage1D", (void**)&_glTextureStorage1D },
		{ "glTextureStorage2D", (void**)&_glTextureStorage2D },
		{ "glTextureStorage2DMultisample", (void**)&_glTextureStorage2DMultisample },
		{ "glTextureStorage3D", (void**)&_glTextureStorage3D },
		{ "glTextureStorage3DMultisample", (void**)&_glTextureStorage3DMultisample },
		{ "glTextureSubImage1D", (void**)&_glTextureSubImage1D },
		{ "glTextureSubImage2D", (void**)&_glTextureSubImage2D },
		{ "glTextureSubImage3D", (void**)&_glTextureSubImage3D },
		{ "glTransformFeedbackBufferBase", (void**)&_glTransformFeedbackBufferBase },
		{ "glTransformFeedbackBufferRange", (void**)&_glTransformFeedbackBufferRange },
		{ "glUnmapNamedBuffer", (void**)&_glUnmapNamedBuffer },
		{ "glVertexArrayAttribBinding", (void**)&_glVertexArrayAttribBinding },
		{ "glVertexArrayAttribFormat", (void**)&_glVertexArrayAttribFormat },
		{ "glVertexArrayAttribIFormat", (void**)&_glVertexArrayAttribIFormat },
		{ "glVertexArrayAttribLFormat", (void**)&_glVertexArrayAttribLFormat },
		{ "glVertexArrayBindingDivisor", (void**)&_glVertexArrayBindingDivisor },
		{ "glVertexArrayElementBuffer", (void**)&_glVertexArrayElementBuffer },
		{ "glVertexArrayVertexBuffer", (void**)&_glVertexArrayVertexBuffer },
		{ "glVertexArrayVertexBuffers", (void**)&_glVertexArrayVertexBuffers },
	};

	static const FnEntry glFnTable_4_6[] = {
		{ "glMultiDrawArraysIndirectCount", (void**)&_glMultiDrawArraysIndirectCount },
		{ "glMultiDrawElementsIndirectCount", (void**)&_glMultiDrawElementsIndirectCount },
		{ "glPolygonOffsetClamp", (void**)&_glPolygonOffsetClamp },
		{ "glSpecializeShader", (void**)&_glSpecializeShader },
	};

    static const FuncTableGroup glFuncGroups[] = {
		{ Version {1, 0}, glFnTable_1_0, 306 },
		{ Version {1, 1}, glFnTable_1_1, 30 },
		{ Version {1, 2}, glFnTable_1_2, 4 },
		{ Version {1, 3}, glFnTable_1_3, 46 },
		{ Version {1, 4}, glFnTable_1_4, 47 },
		{ Version {1, 5}, glFnTable_1_5, 19 },
		{ Version {2, 0}, glFnTable_2_0, 93 },
		{ Version {2, 1}, glFnTable_2_1, 6 },
		{ Version {3, 0}, glFnTable_3_0, 84 },
		{ Version {3, 1}, glFnTable_3_1, 12 },
		{ Version {3, 2}, glFnTable_3_2, 19 },
		{ Version {3, 3}, glFnTable_3_3, 58 },
		{ Version {4, 0}, glFnTable_4_0, 46 },
		{ Version {4, 1}, glFnTable_4_1, 88 },
		{ Version {4, 2}, glFnTable_4_2, 12 },
		{ Version {4, 3}, glFnTable_4_3, 43 },
		{ Version {4, 4}, glFnTable_4_4, 9 },
		{ Version {4, 5}, glFnTable_4_5, 122 },
		{ Version {4, 6}, glFnTable_4_6, 4 },
    };
}

inline void glAccum(GLenum op, GLfloat value) { HLF::GL::_glAccum(op, value); }
inline void glActiveShaderProgram(GLuint pipeline, GLuint program) { HLF::GL::_glActiveShaderProgram(pipeline, program); }
inline void glActiveTexture(GLenum texture) { HLF::GL::_glActiveTexture(texture); }
inline void glAlphaFunc(GLenum func, GLfloat ref) { HLF::GL::_glAlphaFunc(func, ref); }
inline GLboolean glAreTexturesResident(GLsizei n, const GLuint * textures, GLboolean * residences) { return HLF::GL::_glAreTexturesResident(n, textures, residences); }
inline void glArrayElement(GLint i) { HLF::GL::_glArrayElement(i); }
inline void glAttachShader(GLuint program, GLuint shader) { HLF::GL::_glAttachShader(program, shader); }
inline void glBegin(GLenum mode) { HLF::GL::_glBegin(mode); }
inline void glBeginConditionalRender(GLuint id, GLenum mode) { HLF::GL::_glBeginConditionalRender(id, mode); }
inline void glBeginQuery(GLenum target, GLuint id) { HLF::GL::_glBeginQuery(target, id); }
inline void glBeginQueryIndexed(GLenum target, GLuint index, GLuint id) { HLF::GL::_glBeginQueryIndexed(target, index, id); }
inline void glBeginTransformFeedback(GLenum primitiveMode) { HLF::GL::_glBeginTransformFeedback(primitiveMode); }
inline void glBindAttribLocation(GLuint program, GLuint index, const GLchar * name) { HLF::GL::_glBindAttribLocation(program, index, name); }
inline void glBindBuffer(GLenum target, GLuint buffer) { HLF::GL::_glBindBuffer(target, buffer); }
inline void glBindBufferBase(GLenum target, GLuint index, GLuint buffer) { HLF::GL::_glBindBufferBase(target, index, buffer); }
inline void glBindBufferRange(GLenum target, GLuint index, GLuint buffer, GLintptr offset, GLsizeiptr size) { HLF::GL::_glBindBufferRange(target, index, buffer, offset, size); }
inline void glBindBuffersBase(GLenum target, GLuint first, GLsizei count, const GLuint * buffers) { HLF::GL::_glBindBuffersBase(target, first, count, buffers); }
inline void glBindBuffersRange(GLenum target, GLuint first, GLsizei count, const GLuint * buffers, const GLintptr * offsets, const GLsizeiptr * sizes) { HLF::GL::_glBindBuffersRange(target, first, count, buffers, offsets, sizes); }
inline void glBindFragDataLocation(GLuint program, GLuint color, const GLchar * name) { HLF::GL::_glBindFragDataLocation(program, color, name); }
inline void glBindFragDataLocationIndexed(GLuint program, GLuint colorNumber, GLuint index, const GLchar * name) { HLF::GL::_glBindFragDataLocationIndexed(program, colorNumber, index, name); }
inline void glBindFramebuffer(GLenum target, GLuint framebuffer) { HLF::GL::_glBindFramebuffer(target, framebuffer); }
inline void glBindImageTexture(GLuint unit, GLuint texture, GLint level, GLboolean layered, GLint layer, GLenum access, GLenum format) { HLF::GL::_glBindImageTexture(unit, texture, level, layered, layer, access, format); }
inline void glBindImageTextures(GLuint first, GLsizei count, const GLuint * textures) { HLF::GL::_glBindImageTextures(first, count, textures); }
inline void glBindProgramPipeline(GLuint pipeline) { HLF::GL::_glBindProgramPipeline(pipeline); }
inline void glBindRenderbuffer(GLenum target, GLuint renderbuffer) { HLF::GL::_glBindRenderbuffer(target, renderbuffer); }
inline void glBindSampler(GLuint unit, GLuint sampler) { HLF::GL::_glBindSampler(unit, sampler); }
inline void glBindSamplers(GLuint first, GLsizei count, const GLuint * samplers) { HLF::GL::_glBindSamplers(first, count, samplers); }
inline void glBindTexture(GLenum target, GLuint texture) { HLF::GL::_glBindTexture(target, texture); }
inline void glBindTextureUnit(GLuint unit, GLuint texture) { HLF::GL::_glBindTextureUnit(unit, texture); }
inline void glBindTextures(GLuint first, GLsizei count, const GLuint * textures) { HLF::GL::_glBindTextures(first, count, textures); }
inline void glBindTransformFeedback(GLenum target, GLuint id) { HLF::GL::_glBindTransformFeedback(target, id); }
inline void glBindVertexArray(GLuint array) { HLF::GL::_glBindVertexArray(array); }
inline void glBindVertexBuffer(GLuint bindingindex, GLuint buffer, GLintptr offset, GLsizei stride) { HLF::GL::_glBindVertexBuffer(bindingindex, buffer, offset, stride); }
inline void glBindVertexBuffers(GLuint first, GLsizei count, const GLuint * buffers, const GLintptr * offsets, const GLsizei * strides) { HLF::GL::_glBindVertexBuffers(first, count, buffers, offsets, strides); }
inline void glBitmap(GLsizei width, GLsizei height, GLfloat xorig, GLfloat yorig, GLfloat xmove, GLfloat ymove, const GLubyte * bitmap) { HLF::GL::_glBitmap(width, height, xorig, yorig, xmove, ymove, bitmap); }
inline void glBlendColor(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha) { HLF::GL::_glBlendColor(red, green, blue, alpha); }
inline void glBlendEquation(GLenum mode) { HLF::GL::_glBlendEquation(mode); }
inline void glBlendEquationSeparate(GLenum modeRGB, GLenum modeAlpha) { HLF::GL::_glBlendEquationSeparate(modeRGB, modeAlpha); }
inline void glBlendEquationSeparatei(GLuint buf, GLenum modeRGB, GLenum modeAlpha) { HLF::GL::_glBlendEquationSeparatei(buf, modeRGB, modeAlpha); }
inline void glBlendEquationi(GLuint buf, GLenum mode) { HLF::GL::_glBlendEquationi(buf, mode); }
inline void glBlendFunc(GLenum sfactor, GLenum dfactor) { HLF::GL::_glBlendFunc(sfactor, dfactor); }
inline void glBlendFuncSeparate(GLenum sfactorRGB, GLenum dfactorRGB, GLenum sfactorAlpha, GLenum dfactorAlpha) { HLF::GL::_glBlendFuncSeparate(sfactorRGB, dfactorRGB, sfactorAlpha, dfactorAlpha); }
inline void glBlendFuncSeparatei(GLuint buf, GLenum srcRGB, GLenum dstRGB, GLenum srcAlpha, GLenum dstAlpha) { HLF::GL::_glBlendFuncSeparatei(buf, srcRGB, dstRGB, srcAlpha, dstAlpha); }
inline void glBlendFunci(GLuint buf, GLenum src, GLenum dst) { HLF::GL::_glBlendFunci(buf, src, dst); }
inline void glBlitFramebuffer(GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, GLbitfield mask, GLenum filter) { HLF::GL::_glBlitFramebuffer(srcX0, srcY0, srcX1, srcY1, dstX0, dstY0, dstX1, dstY1, mask, filter); }
inline void glBlitNamedFramebuffer(GLuint readFramebuffer, GLuint drawFramebuffer, GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, GLbitfield mask, GLenum filter) { HLF::GL::_glBlitNamedFramebuffer(readFramebuffer, drawFramebuffer, srcX0, srcY0, srcX1, srcY1, dstX0, dstY0, dstX1, dstY1, mask, filter); }
inline void glBufferData(GLenum target, GLsizeiptr size, const void * data, GLenum usage) { HLF::GL::_glBufferData(target, size, data, usage); }
inline void glBufferStorage(GLenum target, GLsizeiptr size, const void * data, GLbitfield flags) { HLF::GL::_glBufferStorage(target, size, data, flags); }
inline void glBufferSubData(GLenum target, GLintptr offset, GLsizeiptr size, const void * data) { HLF::GL::_glBufferSubData(target, offset, size, data); }
inline void glCallList(GLuint list) { HLF::GL::_glCallList(list); }
inline void glCallLists(GLsizei n, GLenum type, const void * lists) { HLF::GL::_glCallLists(n, type, lists); }
inline GLenum glCheckFramebufferStatus(GLenum target) { return HLF::GL::_glCheckFramebufferStatus(target); }
inline GLenum glCheckNamedFramebufferStatus(GLuint framebuffer, GLenum target) { return HLF::GL::_glCheckNamedFramebufferStatus(framebuffer, target); }
inline void glClampColor(GLenum target, GLenum clamp) { HLF::GL::_glClampColor(target, clamp); }
inline void glClear(GLbitfield mask) { HLF::GL::_glClear(mask); }
inline void glClearAccum(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha) { HLF::GL::_glClearAccum(red, green, blue, alpha); }
inline void glClearBufferData(GLenum target, GLenum internalformat, GLenum format, GLenum type, const void * data) { HLF::GL::_glClearBufferData(target, internalformat, format, type, data); }
inline void glClearBufferSubData(GLenum target, GLenum internalformat, GLintptr offset, GLsizeiptr size, GLenum format, GLenum type, const void * data) { HLF::GL::_glClearBufferSubData(target, internalformat, offset, size, format, type, data); }
inline void glClearBufferfi(GLenum buffer, GLint drawbuffer, GLfloat depth, GLint stencil) { HLF::GL::_glClearBufferfi(buffer, drawbuffer, depth, stencil); }
inline void glClearBufferfv(GLenum buffer, GLint drawbuffer, const GLfloat * value) { HLF::GL::_glClearBufferfv(buffer, drawbuffer, value); }
inline void glClearBufferiv(GLenum buffer, GLint drawbuffer, const GLint * value) { HLF::GL::_glClearBufferiv(buffer, drawbuffer, value); }
inline void glClearBufferuiv(GLenum buffer, GLint drawbuffer, const GLuint * value) { HLF::GL::_glClearBufferuiv(buffer, drawbuffer, value); }
inline void glClearColor(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha) { HLF::GL::_glClearColor(red, green, blue, alpha); }
inline void glClearDepth(GLdouble depth) { HLF::GL::_glClearDepth(depth); }
inline void glClearDepthf(GLfloat d) { HLF::GL::_glClearDepthf(d); }
inline void glClearIndex(GLfloat c) { HLF::GL::_glClearIndex(c); }
inline void glClearNamedBufferData(GLuint buffer, GLenum internalformat, GLenum format, GLenum type, const void * data) { HLF::GL::_glClearNamedBufferData(buffer, internalformat, format, type, data); }
inline void glClearNamedBufferSubData(GLuint buffer, GLenum internalformat, GLintptr offset, GLsizeiptr size, GLenum format, GLenum type, const void * data) { HLF::GL::_glClearNamedBufferSubData(buffer, internalformat, offset, size, format, type, data); }
inline void glClearNamedFramebufferfi(GLuint framebuffer, GLenum buffer, GLint drawbuffer, GLfloat depth, GLint stencil) { HLF::GL::_glClearNamedFramebufferfi(framebuffer, buffer, drawbuffer, depth, stencil); }
inline void glClearNamedFramebufferfv(GLuint framebuffer, GLenum buffer, GLint drawbuffer, const GLfloat * value) { HLF::GL::_glClearNamedFramebufferfv(framebuffer, buffer, drawbuffer, value); }
inline void glClearNamedFramebufferiv(GLuint framebuffer, GLenum buffer, GLint drawbuffer, const GLint * value) { HLF::GL::_glClearNamedFramebufferiv(framebuffer, buffer, drawbuffer, value); }
inline void glClearNamedFramebufferuiv(GLuint framebuffer, GLenum buffer, GLint drawbuffer, const GLuint * value) { HLF::GL::_glClearNamedFramebufferuiv(framebuffer, buffer, drawbuffer, value); }
inline void glClearStencil(GLint s) { HLF::GL::_glClearStencil(s); }
inline void glClearTexImage(GLuint texture, GLint level, GLenum format, GLenum type, const void * data) { HLF::GL::_glClearTexImage(texture, level, format, type, data); }
inline void glClearTexSubImage(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const void * data) { HLF::GL::_glClearTexSubImage(texture, level, xoffset, yoffset, zoffset, width, height, depth, format, type, data); }
inline void glClientActiveTexture(GLenum texture) { HLF::GL::_glClientActiveTexture(texture); }
inline GLenum glClientWaitSync(GLsync sync, GLbitfield flags, GLuint64 timeout) { return HLF::GL::_glClientWaitSync(sync, flags, timeout); }
inline void glClipControl(GLenum origin, GLenum depth) { HLF::GL::_glClipControl(origin, depth); }
inline void glClipPlane(GLenum plane, const GLdouble * equation) { HLF::GL::_glClipPlane(plane, equation); }
inline void glColor3b(GLbyte red, GLbyte green, GLbyte blue) { HLF::GL::_glColor3b(red, green, blue); }
inline void glColor3bv(const GLbyte * v) { HLF::GL::_glColor3bv(v); }
inline void glColor3d(GLdouble red, GLdouble green, GLdouble blue) { HLF::GL::_glColor3d(red, green, blue); }
inline void glColor3dv(const GLdouble * v) { HLF::GL::_glColor3dv(v); }
inline void glColor3f(GLfloat red, GLfloat green, GLfloat blue) { HLF::GL::_glColor3f(red, green, blue); }
inline void glColor3fv(const GLfloat * v) { HLF::GL::_glColor3fv(v); }
inline void glColor3i(GLint red, GLint green, GLint blue) { HLF::GL::_glColor3i(red, green, blue); }
inline void glColor3iv(const GLint * v) { HLF::GL::_glColor3iv(v); }
inline void glColor3s(GLshort red, GLshort green, GLshort blue) { HLF::GL::_glColor3s(red, green, blue); }
inline void glColor3sv(const GLshort * v) { HLF::GL::_glColor3sv(v); }
inline void glColor3ub(GLubyte red, GLubyte green, GLubyte blue) { HLF::GL::_glColor3ub(red, green, blue); }
inline void glColor3ubv(const GLubyte * v) { HLF::GL::_glColor3ubv(v); }
inline void glColor3ui(GLuint red, GLuint green, GLuint blue) { HLF::GL::_glColor3ui(red, green, blue); }
inline void glColor3uiv(const GLuint * v) { HLF::GL::_glColor3uiv(v); }
inline void glColor3us(GLushort red, GLushort green, GLushort blue) { HLF::GL::_glColor3us(red, green, blue); }
inline void glColor3usv(const GLushort * v) { HLF::GL::_glColor3usv(v); }
inline void glColor4b(GLbyte red, GLbyte green, GLbyte blue, GLbyte alpha) { HLF::GL::_glColor4b(red, green, blue, alpha); }
inline void glColor4bv(const GLbyte * v) { HLF::GL::_glColor4bv(v); }
inline void glColor4d(GLdouble red, GLdouble green, GLdouble blue, GLdouble alpha) { HLF::GL::_glColor4d(red, green, blue, alpha); }
inline void glColor4dv(const GLdouble * v) { HLF::GL::_glColor4dv(v); }
inline void glColor4f(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha) { HLF::GL::_glColor4f(red, green, blue, alpha); }
inline void glColor4fv(const GLfloat * v) { HLF::GL::_glColor4fv(v); }
inline void glColor4i(GLint red, GLint green, GLint blue, GLint alpha) { HLF::GL::_glColor4i(red, green, blue, alpha); }
inline void glColor4iv(const GLint * v) { HLF::GL::_glColor4iv(v); }
inline void glColor4s(GLshort red, GLshort green, GLshort blue, GLshort alpha) { HLF::GL::_glColor4s(red, green, blue, alpha); }
inline void glColor4sv(const GLshort * v) { HLF::GL::_glColor4sv(v); }
inline void glColor4ub(GLubyte red, GLubyte green, GLubyte blue, GLubyte alpha) { HLF::GL::_glColor4ub(red, green, blue, alpha); }
inline void glColor4ubv(const GLubyte * v) { HLF::GL::_glColor4ubv(v); }
inline void glColor4ui(GLuint red, GLuint green, GLuint blue, GLuint alpha) { HLF::GL::_glColor4ui(red, green, blue, alpha); }
inline void glColor4uiv(const GLuint * v) { HLF::GL::_glColor4uiv(v); }
inline void glColor4us(GLushort red, GLushort green, GLushort blue, GLushort alpha) { HLF::GL::_glColor4us(red, green, blue, alpha); }
inline void glColor4usv(const GLushort * v) { HLF::GL::_glColor4usv(v); }
inline void glColorMask(GLboolean red, GLboolean green, GLboolean blue, GLboolean alpha) { HLF::GL::_glColorMask(red, green, blue, alpha); }
inline void glColorMaski(GLuint index, GLboolean r, GLboolean g, GLboolean b, GLboolean a) { HLF::GL::_glColorMaski(index, r, g, b, a); }
inline void glColorMaterial(GLenum face, GLenum mode) { HLF::GL::_glColorMaterial(face, mode); }
inline void glColorP3ui(GLenum type, GLuint color) { HLF::GL::_glColorP3ui(type, color); }
inline void glColorP3uiv(GLenum type, const GLuint * color) { HLF::GL::_glColorP3uiv(type, color); }
inline void glColorP4ui(GLenum type, GLuint color) { HLF::GL::_glColorP4ui(type, color); }
inline void glColorP4uiv(GLenum type, const GLuint * color) { HLF::GL::_glColorP4uiv(type, color); }
inline void glColorPointer(GLint size, GLenum type, GLsizei stride, const void * pointer) { HLF::GL::_glColorPointer(size, type, stride, pointer); }
inline void glCompileShader(GLuint shader) { HLF::GL::_glCompileShader(shader); }
inline void glCompressedTexImage1D(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLint border, GLsizei imageSize, const void * data) { HLF::GL::_glCompressedTexImage1D(target, level, internalformat, width, border, imageSize, data); }
inline void glCompressedTexImage2D(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const void * data) { HLF::GL::_glCompressedTexImage2D(target, level, internalformat, width, height, border, imageSize, data); }
inline void glCompressedTexImage3D(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLsizei imageSize, const void * data) { HLF::GL::_glCompressedTexImage3D(target, level, internalformat, width, height, depth, border, imageSize, data); }
inline void glCompressedTexSubImage1D(GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLsizei imageSize, const void * data) { HLF::GL::_glCompressedTexSubImage1D(target, level, xoffset, width, format, imageSize, data); }
inline void glCompressedTexSubImage2D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const void * data) { HLF::GL::_glCompressedTexSubImage2D(target, level, xoffset, yoffset, width, height, format, imageSize, data); }
inline void glCompressedTexSubImage3D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const void * data) { HLF::GL::_glCompressedTexSubImage3D(target, level, xoffset, yoffset, zoffset, width, height, depth, format, imageSize, data); }
inline void glCompressedTextureSubImage1D(GLuint texture, GLint level, GLint xoffset, GLsizei width, GLenum format, GLsizei imageSize, const void * data) { HLF::GL::_glCompressedTextureSubImage1D(texture, level, xoffset, width, format, imageSize, data); }
inline void glCompressedTextureSubImage2D(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const void * data) { HLF::GL::_glCompressedTextureSubImage2D(texture, level, xoffset, yoffset, width, height, format, imageSize, data); }
inline void glCompressedTextureSubImage3D(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const void * data) { HLF::GL::_glCompressedTextureSubImage3D(texture, level, xoffset, yoffset, zoffset, width, height, depth, format, imageSize, data); }
inline void glCopyBufferSubData(GLenum readTarget, GLenum writeTarget, GLintptr readOffset, GLintptr writeOffset, GLsizeiptr size) { HLF::GL::_glCopyBufferSubData(readTarget, writeTarget, readOffset, writeOffset, size); }
inline void glCopyImageSubData(GLuint srcName, GLenum srcTarget, GLint srcLevel, GLint srcX, GLint srcY, GLint srcZ, GLuint dstName, GLenum dstTarget, GLint dstLevel, GLint dstX, GLint dstY, GLint dstZ, GLsizei srcWidth, GLsizei srcHeight, GLsizei srcDepth) { HLF::GL::_glCopyImageSubData(srcName, srcTarget, srcLevel, srcX, srcY, srcZ, dstName, dstTarget, dstLevel, dstX, dstY, dstZ, srcWidth, srcHeight, srcDepth); }
inline void glCopyNamedBufferSubData(GLuint readBuffer, GLuint writeBuffer, GLintptr readOffset, GLintptr writeOffset, GLsizeiptr size) { HLF::GL::_glCopyNamedBufferSubData(readBuffer, writeBuffer, readOffset, writeOffset, size); }
inline void glCopyPixels(GLint x, GLint y, GLsizei width, GLsizei height, GLenum type) { HLF::GL::_glCopyPixels(x, y, width, height, type); }
inline void glCopyTexImage1D(GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLint border) { HLF::GL::_glCopyTexImage1D(target, level, internalformat, x, y, width, border); }
inline void glCopyTexImage2D(GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border) { HLF::GL::_glCopyTexImage2D(target, level, internalformat, x, y, width, height, border); }
inline void glCopyTexSubImage1D(GLenum target, GLint level, GLint xoffset, GLint x, GLint y, GLsizei width) { HLF::GL::_glCopyTexSubImage1D(target, level, xoffset, x, y, width); }
inline void glCopyTexSubImage2D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height) { HLF::GL::_glCopyTexSubImage2D(target, level, xoffset, yoffset, x, y, width, height); }
inline void glCopyTexSubImage3D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height) { HLF::GL::_glCopyTexSubImage3D(target, level, xoffset, yoffset, zoffset, x, y, width, height); }
inline void glCopyTextureSubImage1D(GLuint texture, GLint level, GLint xoffset, GLint x, GLint y, GLsizei width) { HLF::GL::_glCopyTextureSubImage1D(texture, level, xoffset, x, y, width); }
inline void glCopyTextureSubImage2D(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height) { HLF::GL::_glCopyTextureSubImage2D(texture, level, xoffset, yoffset, x, y, width, height); }
inline void glCopyTextureSubImage3D(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height) { HLF::GL::_glCopyTextureSubImage3D(texture, level, xoffset, yoffset, zoffset, x, y, width, height); }
inline void glCreateBuffers(GLsizei n, GLuint * buffers) { HLF::GL::_glCreateBuffers(n, buffers); }
inline void glCreateFramebuffers(GLsizei n, GLuint * framebuffers) { HLF::GL::_glCreateFramebuffers(n, framebuffers); }
inline GLuint glCreateProgram(void) { return HLF::GL::_glCreateProgram(); }
inline void glCreateProgramPipelines(GLsizei n, GLuint * pipelines) { HLF::GL::_glCreateProgramPipelines(n, pipelines); }
inline void glCreateQueries(GLenum target, GLsizei n, GLuint * ids) { HLF::GL::_glCreateQueries(target, n, ids); }
inline void glCreateRenderbuffers(GLsizei n, GLuint * renderbuffers) { HLF::GL::_glCreateRenderbuffers(n, renderbuffers); }
inline void glCreateSamplers(GLsizei n, GLuint * samplers) { HLF::GL::_glCreateSamplers(n, samplers); }
inline GLuint glCreateShader(GLenum type) { return HLF::GL::_glCreateShader(type); }
inline GLuint glCreateShaderProgramv(GLenum type, GLsizei count, const GLchar *const* strings) { return HLF::GL::_glCreateShaderProgramv(type, count, strings); }
inline void glCreateTextures(GLenum target, GLsizei n, GLuint * textures) { HLF::GL::_glCreateTextures(target, n, textures); }
inline void glCreateTransformFeedbacks(GLsizei n, GLuint * ids) { HLF::GL::_glCreateTransformFeedbacks(n, ids); }
inline void glCreateVertexArrays(GLsizei n, GLuint * arrays) { HLF::GL::_glCreateVertexArrays(n, arrays); }
inline void glCullFace(GLenum mode) { HLF::GL::_glCullFace(mode); }
inline void glDebugMessageCallback(GLDEBUGPROC callback, const void * userParam) { HLF::GL::_glDebugMessageCallback(callback, userParam); }
inline void glDebugMessageControl(GLenum source, GLenum type, GLenum severity, GLsizei count, const GLuint * ids, GLboolean enabled) { HLF::GL::_glDebugMessageControl(source, type, severity, count, ids, enabled); }
inline void glDebugMessageInsert(GLenum source, GLenum type, GLuint id, GLenum severity, GLsizei length, const GLchar * buf) { HLF::GL::_glDebugMessageInsert(source, type, id, severity, length, buf); }
inline void glDeleteBuffers(GLsizei n, const GLuint * buffers) { HLF::GL::_glDeleteBuffers(n, buffers); }
inline void glDeleteFramebuffers(GLsizei n, const GLuint * framebuffers) { HLF::GL::_glDeleteFramebuffers(n, framebuffers); }
inline void glDeleteLists(GLuint list, GLsizei range) { HLF::GL::_glDeleteLists(list, range); }
inline void glDeleteProgram(GLuint program) { HLF::GL::_glDeleteProgram(program); }
inline void glDeleteProgramPipelines(GLsizei n, const GLuint * pipelines) { HLF::GL::_glDeleteProgramPipelines(n, pipelines); }
inline void glDeleteQueries(GLsizei n, const GLuint * ids) { HLF::GL::_glDeleteQueries(n, ids); }
inline void glDeleteRenderbuffers(GLsizei n, const GLuint * renderbuffers) { HLF::GL::_glDeleteRenderbuffers(n, renderbuffers); }
inline void glDeleteSamplers(GLsizei count, const GLuint * samplers) { HLF::GL::_glDeleteSamplers(count, samplers); }
inline void glDeleteShader(GLuint shader) { HLF::GL::_glDeleteShader(shader); }
inline void glDeleteSync(GLsync sync) { HLF::GL::_glDeleteSync(sync); }
inline void glDeleteTextures(GLsizei n, const GLuint * textures) { HLF::GL::_glDeleteTextures(n, textures); }
inline void glDeleteTransformFeedbacks(GLsizei n, const GLuint * ids) { HLF::GL::_glDeleteTransformFeedbacks(n, ids); }
inline void glDeleteVertexArrays(GLsizei n, const GLuint * arrays) { HLF::GL::_glDeleteVertexArrays(n, arrays); }
inline void glDepthFunc(GLenum func) { HLF::GL::_glDepthFunc(func); }
inline void glDepthMask(GLboolean flag) { HLF::GL::_glDepthMask(flag); }
inline void glDepthRange(GLdouble n, GLdouble f) { HLF::GL::_glDepthRange(n, f); }
inline void glDepthRangeArrayv(GLuint first, GLsizei count, const GLdouble * v) { HLF::GL::_glDepthRangeArrayv(first, count, v); }
inline void glDepthRangeIndexed(GLuint index, GLdouble n, GLdouble f) { HLF::GL::_glDepthRangeIndexed(index, n, f); }
inline void glDepthRangef(GLfloat n, GLfloat f) { HLF::GL::_glDepthRangef(n, f); }
inline void glDetachShader(GLuint program, GLuint shader) { HLF::GL::_glDetachShader(program, shader); }
inline void glDisable(GLenum cap) { HLF::GL::_glDisable(cap); }
inline void glDisableClientState(GLenum array) { HLF::GL::_glDisableClientState(array); }
inline void glDisableVertexArrayAttrib(GLuint vaobj, GLuint index) { HLF::GL::_glDisableVertexArrayAttrib(vaobj, index); }
inline void glDisableVertexAttribArray(GLuint index) { HLF::GL::_glDisableVertexAttribArray(index); }
inline void glDisablei(GLenum target, GLuint index) { HLF::GL::_glDisablei(target, index); }
inline void glDispatchCompute(GLuint num_groups_x, GLuint num_groups_y, GLuint num_groups_z) { HLF::GL::_glDispatchCompute(num_groups_x, num_groups_y, num_groups_z); }
inline void glDispatchComputeIndirect(GLintptr indirect) { HLF::GL::_glDispatchComputeIndirect(indirect); }
inline void glDrawArrays(GLenum mode, GLint first, GLsizei count) { HLF::GL::_glDrawArrays(mode, first, count); }
inline void glDrawArraysIndirect(GLenum mode, const void * indirect) { HLF::GL::_glDrawArraysIndirect(mode, indirect); }
inline void glDrawArraysInstanced(GLenum mode, GLint first, GLsizei count, GLsizei instancecount) { HLF::GL::_glDrawArraysInstanced(mode, first, count, instancecount); }
inline void glDrawArraysInstancedBaseInstance(GLenum mode, GLint first, GLsizei count, GLsizei instancecount, GLuint baseinstance) { HLF::GL::_glDrawArraysInstancedBaseInstance(mode, first, count, instancecount, baseinstance); }
inline void glDrawBuffer(GLenum buf) { HLF::GL::_glDrawBuffer(buf); }
inline void glDrawBuffers(GLsizei n, const GLenum * bufs) { HLF::GL::_glDrawBuffers(n, bufs); }
inline void glDrawElements(GLenum mode, GLsizei count, GLenum type, const void * indices) { HLF::GL::_glDrawElements(mode, count, type, indices); }
inline void glDrawElementsBaseVertex(GLenum mode, GLsizei count, GLenum type, const void * indices, GLint basevertex) { HLF::GL::_glDrawElementsBaseVertex(mode, count, type, indices, basevertex); }
inline void glDrawElementsIndirect(GLenum mode, GLenum type, const void * indirect) { HLF::GL::_glDrawElementsIndirect(mode, type, indirect); }
inline void glDrawElementsInstanced(GLenum mode, GLsizei count, GLenum type, const void * indices, GLsizei instancecount) { HLF::GL::_glDrawElementsInstanced(mode, count, type, indices, instancecount); }
inline void glDrawElementsInstancedBaseInstance(GLenum mode, GLsizei count, GLenum type, const void * indices, GLsizei instancecount, GLuint baseinstance) { HLF::GL::_glDrawElementsInstancedBaseInstance(mode, count, type, indices, instancecount, baseinstance); }
inline void glDrawElementsInstancedBaseVertex(GLenum mode, GLsizei count, GLenum type, const void * indices, GLsizei instancecount, GLint basevertex) { HLF::GL::_glDrawElementsInstancedBaseVertex(mode, count, type, indices, instancecount, basevertex); }
inline void glDrawElementsInstancedBaseVertexBaseInstance(GLenum mode, GLsizei count, GLenum type, const void * indices, GLsizei instancecount, GLint basevertex, GLuint baseinstance) { HLF::GL::_glDrawElementsInstancedBaseVertexBaseInstance(mode, count, type, indices, instancecount, basevertex, baseinstance); }
inline void glDrawPixels(GLsizei width, GLsizei height, GLenum format, GLenum type, const void * pixels) { HLF::GL::_glDrawPixels(width, height, format, type, pixels); }
inline void glDrawRangeElements(GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const void * indices) { HLF::GL::_glDrawRangeElements(mode, start, end, count, type, indices); }
inline void glDrawRangeElementsBaseVertex(GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const void * indices, GLint basevertex) { HLF::GL::_glDrawRangeElementsBaseVertex(mode, start, end, count, type, indices, basevertex); }
inline void glDrawTransformFeedback(GLenum mode, GLuint id) { HLF::GL::_glDrawTransformFeedback(mode, id); }
inline void glDrawTransformFeedbackInstanced(GLenum mode, GLuint id, GLsizei instancecount) { HLF::GL::_glDrawTransformFeedbackInstanced(mode, id, instancecount); }
inline void glDrawTransformFeedbackStream(GLenum mode, GLuint id, GLuint stream) { HLF::GL::_glDrawTransformFeedbackStream(mode, id, stream); }
inline void glDrawTransformFeedbackStreamInstanced(GLenum mode, GLuint id, GLuint stream, GLsizei instancecount) { HLF::GL::_glDrawTransformFeedbackStreamInstanced(mode, id, stream, instancecount); }
inline void glEdgeFlag(GLboolean flag) { HLF::GL::_glEdgeFlag(flag); }
inline void glEdgeFlagPointer(GLsizei stride, const void * pointer) { HLF::GL::_glEdgeFlagPointer(stride, pointer); }
inline void glEdgeFlagv(const GLboolean * flag) { HLF::GL::_glEdgeFlagv(flag); }
inline void glEnable(GLenum cap) { HLF::GL::_glEnable(cap); }
inline void glEnableClientState(GLenum array) { HLF::GL::_glEnableClientState(array); }
inline void glEnableVertexArrayAttrib(GLuint vaobj, GLuint index) { HLF::GL::_glEnableVertexArrayAttrib(vaobj, index); }
inline void glEnableVertexAttribArray(GLuint index) { HLF::GL::_glEnableVertexAttribArray(index); }
inline void glEnablei(GLenum target, GLuint index) { HLF::GL::_glEnablei(target, index); }
inline void glEnd(void) { HLF::GL::_glEnd(); }
inline void glEndConditionalRender(void) { HLF::GL::_glEndConditionalRender(); }
inline void glEndList(void) { HLF::GL::_glEndList(); }
inline void glEndQuery(GLenum target) { HLF::GL::_glEndQuery(target); }
inline void glEndQueryIndexed(GLenum target, GLuint index) { HLF::GL::_glEndQueryIndexed(target, index); }
inline void glEndTransformFeedback(void) { HLF::GL::_glEndTransformFeedback(); }
inline void glEvalCoord1d(GLdouble u) { HLF::GL::_glEvalCoord1d(u); }
inline void glEvalCoord1dv(const GLdouble * u) { HLF::GL::_glEvalCoord1dv(u); }
inline void glEvalCoord1f(GLfloat u) { HLF::GL::_glEvalCoord1f(u); }
inline void glEvalCoord1fv(const GLfloat * u) { HLF::GL::_glEvalCoord1fv(u); }
inline void glEvalCoord2d(GLdouble u, GLdouble v) { HLF::GL::_glEvalCoord2d(u, v); }
inline void glEvalCoord2dv(const GLdouble * u) { HLF::GL::_glEvalCoord2dv(u); }
inline void glEvalCoord2f(GLfloat u, GLfloat v) { HLF::GL::_glEvalCoord2f(u, v); }
inline void glEvalCoord2fv(const GLfloat * u) { HLF::GL::_glEvalCoord2fv(u); }
inline void glEvalMesh1(GLenum mode, GLint i1, GLint i2) { HLF::GL::_glEvalMesh1(mode, i1, i2); }
inline void glEvalMesh2(GLenum mode, GLint i1, GLint i2, GLint j1, GLint j2) { HLF::GL::_glEvalMesh2(mode, i1, i2, j1, j2); }
inline void glEvalPoint1(GLint i) { HLF::GL::_glEvalPoint1(i); }
inline void glEvalPoint2(GLint i, GLint j) { HLF::GL::_glEvalPoint2(i, j); }
inline void glFeedbackBuffer(GLsizei size, GLenum type, GLfloat * buffer) { HLF::GL::_glFeedbackBuffer(size, type, buffer); }
inline GLsync glFenceSync(GLenum condition, GLbitfield flags) { return HLF::GL::_glFenceSync(condition, flags); }
inline void glFinish(void) { HLF::GL::_glFinish(); }
inline void glFlush(void) { HLF::GL::_glFlush(); }
inline void glFlushMappedBufferRange(GLenum target, GLintptr offset, GLsizeiptr length) { HLF::GL::_glFlushMappedBufferRange(target, offset, length); }
inline void glFlushMappedNamedBufferRange(GLuint buffer, GLintptr offset, GLsizeiptr length) { HLF::GL::_glFlushMappedNamedBufferRange(buffer, offset, length); }
inline void glFogCoordPointer(GLenum type, GLsizei stride, const void * pointer) { HLF::GL::_glFogCoordPointer(type, stride, pointer); }
inline void glFogCoordd(GLdouble coord) { HLF::GL::_glFogCoordd(coord); }
inline void glFogCoorddv(const GLdouble * coord) { HLF::GL::_glFogCoorddv(coord); }
inline void glFogCoordf(GLfloat coord) { HLF::GL::_glFogCoordf(coord); }
inline void glFogCoordfv(const GLfloat * coord) { HLF::GL::_glFogCoordfv(coord); }
inline void glFogf(GLenum pname, GLfloat param) { HLF::GL::_glFogf(pname, param); }
inline void glFogfv(GLenum pname, const GLfloat * params) { HLF::GL::_glFogfv(pname, params); }
inline void glFogi(GLenum pname, GLint param) { HLF::GL::_glFogi(pname, param); }
inline void glFogiv(GLenum pname, const GLint * params) { HLF::GL::_glFogiv(pname, params); }
inline void glFramebufferParameteri(GLenum target, GLenum pname, GLint param) { HLF::GL::_glFramebufferParameteri(target, pname, param); }
inline void glFramebufferRenderbuffer(GLenum target, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer) { HLF::GL::_glFramebufferRenderbuffer(target, attachment, renderbuffertarget, renderbuffer); }
inline void glFramebufferTexture(GLenum target, GLenum attachment, GLuint texture, GLint level) { HLF::GL::_glFramebufferTexture(target, attachment, texture, level); }
inline void glFramebufferTexture1D(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level) { HLF::GL::_glFramebufferTexture1D(target, attachment, textarget, texture, level); }
inline void glFramebufferTexture2D(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level) { HLF::GL::_glFramebufferTexture2D(target, attachment, textarget, texture, level); }
inline void glFramebufferTexture3D(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level, GLint zoffset) { HLF::GL::_glFramebufferTexture3D(target, attachment, textarget, texture, level, zoffset); }
inline void glFramebufferTextureLayer(GLenum target, GLenum attachment, GLuint texture, GLint level, GLint layer) { HLF::GL::_glFramebufferTextureLayer(target, attachment, texture, level, layer); }
inline void glFrontFace(GLenum mode) { HLF::GL::_glFrontFace(mode); }
inline void glFrustum(GLdouble left, GLdouble right, GLdouble bottom, GLdouble top, GLdouble zNear, GLdouble zFar) { HLF::GL::_glFrustum(left, right, bottom, top, zNear, zFar); }
inline void glGenBuffers(GLsizei n, GLuint * buffers) { HLF::GL::_glGenBuffers(n, buffers); }
inline void glGenFramebuffers(GLsizei n, GLuint * framebuffers) { HLF::GL::_glGenFramebuffers(n, framebuffers); }
inline GLuint glGenLists(GLsizei range) { return HLF::GL::_glGenLists(range); }
inline void glGenProgramPipelines(GLsizei n, GLuint * pipelines) { HLF::GL::_glGenProgramPipelines(n, pipelines); }
inline void glGenQueries(GLsizei n, GLuint * ids) { HLF::GL::_glGenQueries(n, ids); }
inline void glGenRenderbuffers(GLsizei n, GLuint * renderbuffers) { HLF::GL::_glGenRenderbuffers(n, renderbuffers); }
inline void glGenSamplers(GLsizei count, GLuint * samplers) { HLF::GL::_glGenSamplers(count, samplers); }
inline void glGenTextures(GLsizei n, GLuint * textures) { HLF::GL::_glGenTextures(n, textures); }
inline void glGenTransformFeedbacks(GLsizei n, GLuint * ids) { HLF::GL::_glGenTransformFeedbacks(n, ids); }
inline void glGenVertexArrays(GLsizei n, GLuint * arrays) { HLF::GL::_glGenVertexArrays(n, arrays); }
inline void glGenerateMipmap(GLenum target) { HLF::GL::_glGenerateMipmap(target); }
inline void glGenerateTextureMipmap(GLuint texture) { HLF::GL::_glGenerateTextureMipmap(texture); }
inline void glGetActiveAtomicCounterBufferiv(GLuint program, GLuint bufferIndex, GLenum pname, GLint * params) { HLF::GL::_glGetActiveAtomicCounterBufferiv(program, bufferIndex, pname, params); }
inline void glGetActiveAttrib(GLuint program, GLuint index, GLsizei bufSize, GLsizei * length, GLint * size, GLenum * type, GLchar * name) { HLF::GL::_glGetActiveAttrib(program, index, bufSize, length, size, type, name); }
inline void glGetActiveSubroutineName(GLuint program, GLenum shadertype, GLuint index, GLsizei bufSize, GLsizei * length, GLchar * name) { HLF::GL::_glGetActiveSubroutineName(program, shadertype, index, bufSize, length, name); }
inline void glGetActiveSubroutineUniformName(GLuint program, GLenum shadertype, GLuint index, GLsizei bufSize, GLsizei * length, GLchar * name) { HLF::GL::_glGetActiveSubroutineUniformName(program, shadertype, index, bufSize, length, name); }
inline void glGetActiveSubroutineUniformiv(GLuint program, GLenum shadertype, GLuint index, GLenum pname, GLint * values) { HLF::GL::_glGetActiveSubroutineUniformiv(program, shadertype, index, pname, values); }
inline void glGetActiveUniform(GLuint program, GLuint index, GLsizei bufSize, GLsizei * length, GLint * size, GLenum * type, GLchar * name) { HLF::GL::_glGetActiveUniform(program, index, bufSize, length, size, type, name); }
inline void glGetActiveUniformBlockName(GLuint program, GLuint uniformBlockIndex, GLsizei bufSize, GLsizei * length, GLchar * uniformBlockName) { HLF::GL::_glGetActiveUniformBlockName(program, uniformBlockIndex, bufSize, length, uniformBlockName); }
inline void glGetActiveUniformBlockiv(GLuint program, GLuint uniformBlockIndex, GLenum pname, GLint * params) { HLF::GL::_glGetActiveUniformBlockiv(program, uniformBlockIndex, pname, params); }
inline void glGetActiveUniformName(GLuint program, GLuint uniformIndex, GLsizei bufSize, GLsizei * length, GLchar * uniformName) { HLF::GL::_glGetActiveUniformName(program, uniformIndex, bufSize, length, uniformName); }
inline void glGetActiveUniformsiv(GLuint program, GLsizei uniformCount, const GLuint * uniformIndices, GLenum pname, GLint * params) { HLF::GL::_glGetActiveUniformsiv(program, uniformCount, uniformIndices, pname, params); }
inline void glGetAttachedShaders(GLuint program, GLsizei maxCount, GLsizei * count, GLuint * shaders) { HLF::GL::_glGetAttachedShaders(program, maxCount, count, shaders); }
inline GLint glGetAttribLocation(GLuint program, const GLchar * name) { return HLF::GL::_glGetAttribLocation(program, name); }
inline void glGetBooleani_v(GLenum target, GLuint index, GLboolean * data) { HLF::GL::_glGetBooleani_v(target, index, data); }
inline void glGetBooleanv(GLenum pname, GLboolean * data) { HLF::GL::_glGetBooleanv(pname, data); }
inline void glGetBufferParameteri64v(GLenum target, GLenum pname, GLint64 * params) { HLF::GL::_glGetBufferParameteri64v(target, pname, params); }
inline void glGetBufferParameteriv(GLenum target, GLenum pname, GLint * params) { HLF::GL::_glGetBufferParameteriv(target, pname, params); }
inline void glGetBufferPointerv(GLenum target, GLenum pname, void ** params) { HLF::GL::_glGetBufferPointerv(target, pname, params); }
inline void glGetBufferSubData(GLenum target, GLintptr offset, GLsizeiptr size, void * data) { HLF::GL::_glGetBufferSubData(target, offset, size, data); }
inline void glGetClipPlane(GLenum plane, GLdouble * equation) { HLF::GL::_glGetClipPlane(plane, equation); }
inline void glGetCompressedTexImage(GLenum target, GLint level, void * img) { HLF::GL::_glGetCompressedTexImage(target, level, img); }
inline void glGetCompressedTextureImage(GLuint texture, GLint level, GLsizei bufSize, void * pixels) { HLF::GL::_glGetCompressedTextureImage(texture, level, bufSize, pixels); }
inline void glGetCompressedTextureSubImage(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLsizei bufSize, void * pixels) { HLF::GL::_glGetCompressedTextureSubImage(texture, level, xoffset, yoffset, zoffset, width, height, depth, bufSize, pixels); }
inline GLuint glGetDebugMessageLog(GLuint count, GLsizei bufSize, GLenum * sources, GLenum * types, GLuint * ids, GLenum * severities, GLsizei * lengths, GLchar * messageLog) { return HLF::GL::_glGetDebugMessageLog(count, bufSize, sources, types, ids, severities, lengths, messageLog); }
inline void glGetDoublei_v(GLenum target, GLuint index, GLdouble * data) { HLF::GL::_glGetDoublei_v(target, index, data); }
inline void glGetDoublev(GLenum pname, GLdouble * data) { HLF::GL::_glGetDoublev(pname, data); }
inline GLenum glGetError(void) { return HLF::GL::_glGetError(); }
inline void glGetFloati_v(GLenum target, GLuint index, GLfloat * data) { HLF::GL::_glGetFloati_v(target, index, data); }
inline void glGetFloatv(GLenum pname, GLfloat * data) { HLF::GL::_glGetFloatv(pname, data); }
inline GLint glGetFragDataIndex(GLuint program, const GLchar * name) { return HLF::GL::_glGetFragDataIndex(program, name); }
inline GLint glGetFragDataLocation(GLuint program, const GLchar * name) { return HLF::GL::_glGetFragDataLocation(program, name); }
inline void glGetFramebufferAttachmentParameteriv(GLenum target, GLenum attachment, GLenum pname, GLint * params) { HLF::GL::_glGetFramebufferAttachmentParameteriv(target, attachment, pname, params); }
inline void glGetFramebufferParameteriv(GLenum target, GLenum pname, GLint * params) { HLF::GL::_glGetFramebufferParameteriv(target, pname, params); }
inline GLenum glGetGraphicsResetStatus(void) { return HLF::GL::_glGetGraphicsResetStatus(); }
inline void glGetInteger64i_v(GLenum target, GLuint index, GLint64 * data) { HLF::GL::_glGetInteger64i_v(target, index, data); }
inline void glGetInteger64v(GLenum pname, GLint64 * data) { HLF::GL::_glGetInteger64v(pname, data); }
inline void glGetIntegeri_v(GLenum target, GLuint index, GLint * data) { HLF::GL::_glGetIntegeri_v(target, index, data); }
inline void glGetIntegerv(GLenum pname, GLint * data) { HLF::GL::_glGetIntegerv(pname, data); }
inline void glGetInternalformati64v(GLenum target, GLenum internalformat, GLenum pname, GLsizei count, GLint64 * params) { HLF::GL::_glGetInternalformati64v(target, internalformat, pname, count, params); }
inline void glGetInternalformativ(GLenum target, GLenum internalformat, GLenum pname, GLsizei count, GLint * params) { HLF::GL::_glGetInternalformativ(target, internalformat, pname, count, params); }
inline void glGetLightfv(GLenum light, GLenum pname, GLfloat * params) { HLF::GL::_glGetLightfv(light, pname, params); }
inline void glGetLightiv(GLenum light, GLenum pname, GLint * params) { HLF::GL::_glGetLightiv(light, pname, params); }
inline void glGetMapdv(GLenum target, GLenum query, GLdouble * v) { HLF::GL::_glGetMapdv(target, query, v); }
inline void glGetMapfv(GLenum target, GLenum query, GLfloat * v) { HLF::GL::_glGetMapfv(target, query, v); }
inline void glGetMapiv(GLenum target, GLenum query, GLint * v) { HLF::GL::_glGetMapiv(target, query, v); }
inline void glGetMaterialfv(GLenum face, GLenum pname, GLfloat * params) { HLF::GL::_glGetMaterialfv(face, pname, params); }
inline void glGetMaterialiv(GLenum face, GLenum pname, GLint * params) { HLF::GL::_glGetMaterialiv(face, pname, params); }
inline void glGetMultisamplefv(GLenum pname, GLuint index, GLfloat * val) { HLF::GL::_glGetMultisamplefv(pname, index, val); }
inline void glGetNamedBufferParameteri64v(GLuint buffer, GLenum pname, GLint64 * params) { HLF::GL::_glGetNamedBufferParameteri64v(buffer, pname, params); }
inline void glGetNamedBufferParameteriv(GLuint buffer, GLenum pname, GLint * params) { HLF::GL::_glGetNamedBufferParameteriv(buffer, pname, params); }
inline void glGetNamedBufferPointerv(GLuint buffer, GLenum pname, void ** params) { HLF::GL::_glGetNamedBufferPointerv(buffer, pname, params); }
inline void glGetNamedBufferSubData(GLuint buffer, GLintptr offset, GLsizeiptr size, void * data) { HLF::GL::_glGetNamedBufferSubData(buffer, offset, size, data); }
inline void glGetNamedFramebufferAttachmentParameteriv(GLuint framebuffer, GLenum attachment, GLenum pname, GLint * params) { HLF::GL::_glGetNamedFramebufferAttachmentParameteriv(framebuffer, attachment, pname, params); }
inline void glGetNamedFramebufferParameteriv(GLuint framebuffer, GLenum pname, GLint * param) { HLF::GL::_glGetNamedFramebufferParameteriv(framebuffer, pname, param); }
inline void glGetNamedRenderbufferParameteriv(GLuint renderbuffer, GLenum pname, GLint * params) { HLF::GL::_glGetNamedRenderbufferParameteriv(renderbuffer, pname, params); }
inline void glGetObjectLabel(GLenum identifier, GLuint name, GLsizei bufSize, GLsizei * length, GLchar * label) { HLF::GL::_glGetObjectLabel(identifier, name, bufSize, length, label); }
inline void glGetObjectPtrLabel(const void * ptr, GLsizei bufSize, GLsizei * length, GLchar * label) { HLF::GL::_glGetObjectPtrLabel(ptr, bufSize, length, label); }
inline void glGetPixelMapfv(GLenum map, GLfloat * values) { HLF::GL::_glGetPixelMapfv(map, values); }
inline void glGetPixelMapuiv(GLenum map, GLuint * values) { HLF::GL::_glGetPixelMapuiv(map, values); }
inline void glGetPixelMapusv(GLenum map, GLushort * values) { HLF::GL::_glGetPixelMapusv(map, values); }
inline void glGetPointerv(GLenum pname, void ** params) { HLF::GL::_glGetPointerv(pname, params); }
inline void glGetPolygonStipple(GLubyte * mask) { HLF::GL::_glGetPolygonStipple(mask); }
inline void glGetProgramBinary(GLuint program, GLsizei bufSize, GLsizei * length, GLenum * binaryFormat, void * binary) { HLF::GL::_glGetProgramBinary(program, bufSize, length, binaryFormat, binary); }
inline void glGetProgramInfoLog(GLuint program, GLsizei bufSize, GLsizei * length, GLchar * infoLog) { HLF::GL::_glGetProgramInfoLog(program, bufSize, length, infoLog); }
inline void glGetProgramInterfaceiv(GLuint program, GLenum programInterface, GLenum pname, GLint * params) { HLF::GL::_glGetProgramInterfaceiv(program, programInterface, pname, params); }
inline void glGetProgramPipelineInfoLog(GLuint pipeline, GLsizei bufSize, GLsizei * length, GLchar * infoLog) { HLF::GL::_glGetProgramPipelineInfoLog(pipeline, bufSize, length, infoLog); }
inline void glGetProgramPipelineiv(GLuint pipeline, GLenum pname, GLint * params) { HLF::GL::_glGetProgramPipelineiv(pipeline, pname, params); }
inline GLuint glGetProgramResourceIndex(GLuint program, GLenum programInterface, const GLchar * name) { return HLF::GL::_glGetProgramResourceIndex(program, programInterface, name); }
inline GLint glGetProgramResourceLocation(GLuint program, GLenum programInterface, const GLchar * name) { return HLF::GL::_glGetProgramResourceLocation(program, programInterface, name); }
inline GLint glGetProgramResourceLocationIndex(GLuint program, GLenum programInterface, const GLchar * name) { return HLF::GL::_glGetProgramResourceLocationIndex(program, programInterface, name); }
inline void glGetProgramResourceName(GLuint program, GLenum programInterface, GLuint index, GLsizei bufSize, GLsizei * length, GLchar * name) { HLF::GL::_glGetProgramResourceName(program, programInterface, index, bufSize, length, name); }
inline void glGetProgramResourceiv(GLuint program, GLenum programInterface, GLuint index, GLsizei propCount, const GLenum * props, GLsizei count, GLsizei * length, GLint * params) { HLF::GL::_glGetProgramResourceiv(program, programInterface, index, propCount, props, count, length, params); }
inline void glGetProgramStageiv(GLuint program, GLenum shadertype, GLenum pname, GLint * values) { HLF::GL::_glGetProgramStageiv(program, shadertype, pname, values); }
inline void glGetProgramiv(GLuint program, GLenum pname, GLint * params) { HLF::GL::_glGetProgramiv(program, pname, params); }
inline void glGetQueryBufferObjecti64v(GLuint id, GLuint buffer, GLenum pname, GLintptr offset) { HLF::GL::_glGetQueryBufferObjecti64v(id, buffer, pname, offset); }
inline void glGetQueryBufferObjectiv(GLuint id, GLuint buffer, GLenum pname, GLintptr offset) { HLF::GL::_glGetQueryBufferObjectiv(id, buffer, pname, offset); }
inline void glGetQueryBufferObjectui64v(GLuint id, GLuint buffer, GLenum pname, GLintptr offset) { HLF::GL::_glGetQueryBufferObjectui64v(id, buffer, pname, offset); }
inline void glGetQueryBufferObjectuiv(GLuint id, GLuint buffer, GLenum pname, GLintptr offset) { HLF::GL::_glGetQueryBufferObjectuiv(id, buffer, pname, offset); }
inline void glGetQueryIndexediv(GLenum target, GLuint index, GLenum pname, GLint * params) { HLF::GL::_glGetQueryIndexediv(target, index, pname, params); }
inline void glGetQueryObjecti64v(GLuint id, GLenum pname, GLint64 * params) { HLF::GL::_glGetQueryObjecti64v(id, pname, params); }
inline void glGetQueryObjectiv(GLuint id, GLenum pname, GLint * params) { HLF::GL::_glGetQueryObjectiv(id, pname, params); }
inline void glGetQueryObjectui64v(GLuint id, GLenum pname, GLuint64 * params) { HLF::GL::_glGetQueryObjectui64v(id, pname, params); }
inline void glGetQueryObjectuiv(GLuint id, GLenum pname, GLuint * params) { HLF::GL::_glGetQueryObjectuiv(id, pname, params); }
inline void glGetQueryiv(GLenum target, GLenum pname, GLint * params) { HLF::GL::_glGetQueryiv(target, pname, params); }
inline void glGetRenderbufferParameteriv(GLenum target, GLenum pname, GLint * params) { HLF::GL::_glGetRenderbufferParameteriv(target, pname, params); }
inline void glGetSamplerParameterIiv(GLuint sampler, GLenum pname, GLint * params) { HLF::GL::_glGetSamplerParameterIiv(sampler, pname, params); }
inline void glGetSamplerParameterIuiv(GLuint sampler, GLenum pname, GLuint * params) { HLF::GL::_glGetSamplerParameterIuiv(sampler, pname, params); }
inline void glGetSamplerParameterfv(GLuint sampler, GLenum pname, GLfloat * params) { HLF::GL::_glGetSamplerParameterfv(sampler, pname, params); }
inline void glGetSamplerParameteriv(GLuint sampler, GLenum pname, GLint * params) { HLF::GL::_glGetSamplerParameteriv(sampler, pname, params); }
inline void glGetShaderInfoLog(GLuint shader, GLsizei bufSize, GLsizei * length, GLchar * infoLog) { HLF::GL::_glGetShaderInfoLog(shader, bufSize, length, infoLog); }
inline void glGetShaderPrecisionFormat(GLenum shadertype, GLenum precisiontype, GLint * range, GLint * precision) { HLF::GL::_glGetShaderPrecisionFormat(shadertype, precisiontype, range, precision); }
inline void glGetShaderSource(GLuint shader, GLsizei bufSize, GLsizei * length, GLchar * source) { HLF::GL::_glGetShaderSource(shader, bufSize, length, source); }
inline void glGetShaderiv(GLuint shader, GLenum pname, GLint * params) { HLF::GL::_glGetShaderiv(shader, pname, params); }
inline const GLubyte * glGetString(GLenum name) { return HLF::GL::_glGetString(name); }
inline const GLubyte * glGetStringi(GLenum name, GLuint index) { return HLF::GL::_glGetStringi(name, index); }
inline GLuint glGetSubroutineIndex(GLuint program, GLenum shadertype, const GLchar * name) { return HLF::GL::_glGetSubroutineIndex(program, shadertype, name); }
inline GLint glGetSubroutineUniformLocation(GLuint program, GLenum shadertype, const GLchar * name) { return HLF::GL::_glGetSubroutineUniformLocation(program, shadertype, name); }
inline void glGetSynciv(GLsync sync, GLenum pname, GLsizei count, GLsizei * length, GLint * values) { HLF::GL::_glGetSynciv(sync, pname, count, length, values); }
inline void glGetTexEnvfv(GLenum target, GLenum pname, GLfloat * params) { HLF::GL::_glGetTexEnvfv(target, pname, params); }
inline void glGetTexEnviv(GLenum target, GLenum pname, GLint * params) { HLF::GL::_glGetTexEnviv(target, pname, params); }
inline void glGetTexGendv(GLenum coord, GLenum pname, GLdouble * params) { HLF::GL::_glGetTexGendv(coord, pname, params); }
inline void glGetTexGenfv(GLenum coord, GLenum pname, GLfloat * params) { HLF::GL::_glGetTexGenfv(coord, pname, params); }
inline void glGetTexGeniv(GLenum coord, GLenum pname, GLint * params) { HLF::GL::_glGetTexGeniv(coord, pname, params); }
inline void glGetTexImage(GLenum target, GLint level, GLenum format, GLenum type, void * pixels) { HLF::GL::_glGetTexImage(target, level, format, type, pixels); }
inline void glGetTexLevelParameterfv(GLenum target, GLint level, GLenum pname, GLfloat * params) { HLF::GL::_glGetTexLevelParameterfv(target, level, pname, params); }
inline void glGetTexLevelParameteriv(GLenum target, GLint level, GLenum pname, GLint * params) { HLF::GL::_glGetTexLevelParameteriv(target, level, pname, params); }
inline void glGetTexParameterIiv(GLenum target, GLenum pname, GLint * params) { HLF::GL::_glGetTexParameterIiv(target, pname, params); }
inline void glGetTexParameterIuiv(GLenum target, GLenum pname, GLuint * params) { HLF::GL::_glGetTexParameterIuiv(target, pname, params); }
inline void glGetTexParameterfv(GLenum target, GLenum pname, GLfloat * params) { HLF::GL::_glGetTexParameterfv(target, pname, params); }
inline void glGetTexParameteriv(GLenum target, GLenum pname, GLint * params) { HLF::GL::_glGetTexParameteriv(target, pname, params); }
inline void glGetTextureImage(GLuint texture, GLint level, GLenum format, GLenum type, GLsizei bufSize, void * pixels) { HLF::GL::_glGetTextureImage(texture, level, format, type, bufSize, pixels); }
inline void glGetTextureLevelParameterfv(GLuint texture, GLint level, GLenum pname, GLfloat * params) { HLF::GL::_glGetTextureLevelParameterfv(texture, level, pname, params); }
inline void glGetTextureLevelParameteriv(GLuint texture, GLint level, GLenum pname, GLint * params) { HLF::GL::_glGetTextureLevelParameteriv(texture, level, pname, params); }
inline void glGetTextureParameterIiv(GLuint texture, GLenum pname, GLint * params) { HLF::GL::_glGetTextureParameterIiv(texture, pname, params); }
inline void glGetTextureParameterIuiv(GLuint texture, GLenum pname, GLuint * params) { HLF::GL::_glGetTextureParameterIuiv(texture, pname, params); }
inline void glGetTextureParameterfv(GLuint texture, GLenum pname, GLfloat * params) { HLF::GL::_glGetTextureParameterfv(texture, pname, params); }
inline void glGetTextureParameteriv(GLuint texture, GLenum pname, GLint * params) { HLF::GL::_glGetTextureParameteriv(texture, pname, params); }
inline void glGetTextureSubImage(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, GLsizei bufSize, void * pixels) { HLF::GL::_glGetTextureSubImage(texture, level, xoffset, yoffset, zoffset, width, height, depth, format, type, bufSize, pixels); }
inline void glGetTransformFeedbackVarying(GLuint program, GLuint index, GLsizei bufSize, GLsizei * length, GLsizei * size, GLenum * type, GLchar * name) { HLF::GL::_glGetTransformFeedbackVarying(program, index, bufSize, length, size, type, name); }
inline void glGetTransformFeedbacki64_v(GLuint xfb, GLenum pname, GLuint index, GLint64 * param) { HLF::GL::_glGetTransformFeedbacki64_v(xfb, pname, index, param); }
inline void glGetTransformFeedbacki_v(GLuint xfb, GLenum pname, GLuint index, GLint * param) { HLF::GL::_glGetTransformFeedbacki_v(xfb, pname, index, param); }
inline void glGetTransformFeedbackiv(GLuint xfb, GLenum pname, GLint * param) { HLF::GL::_glGetTransformFeedbackiv(xfb, pname, param); }
inline GLuint glGetUniformBlockIndex(GLuint program, const GLchar * uniformBlockName) { return HLF::GL::_glGetUniformBlockIndex(program, uniformBlockName); }
inline void glGetUniformIndices(GLuint program, GLsizei uniformCount, const GLchar *const* uniformNames, GLuint * uniformIndices) { HLF::GL::_glGetUniformIndices(program, uniformCount, uniformNames, uniformIndices); }
inline GLint glGetUniformLocation(GLuint program, const GLchar * name) { return HLF::GL::_glGetUniformLocation(program, name); }
inline void glGetUniformSubroutineuiv(GLenum shadertype, GLint location, GLuint * params) { HLF::GL::_glGetUniformSubroutineuiv(shadertype, location, params); }
inline void glGetUniformdv(GLuint program, GLint location, GLdouble * params) { HLF::GL::_glGetUniformdv(program, location, params); }
inline void glGetUniformfv(GLuint program, GLint location, GLfloat * params) { HLF::GL::_glGetUniformfv(program, location, params); }
inline void glGetUniformiv(GLuint program, GLint location, GLint * params) { HLF::GL::_glGetUniformiv(program, location, params); }
inline void glGetUniformuiv(GLuint program, GLint location, GLuint * params) { HLF::GL::_glGetUniformuiv(program, location, params); }
inline void glGetVertexArrayIndexed64iv(GLuint vaobj, GLuint index, GLenum pname, GLint64 * param) { HLF::GL::_glGetVertexArrayIndexed64iv(vaobj, index, pname, param); }
inline void glGetVertexArrayIndexediv(GLuint vaobj, GLuint index, GLenum pname, GLint * param) { HLF::GL::_glGetVertexArrayIndexediv(vaobj, index, pname, param); }
inline void glGetVertexArrayiv(GLuint vaobj, GLenum pname, GLint * param) { HLF::GL::_glGetVertexArrayiv(vaobj, pname, param); }
inline void glGetVertexAttribIiv(GLuint index, GLenum pname, GLint * params) { HLF::GL::_glGetVertexAttribIiv(index, pname, params); }
inline void glGetVertexAttribIuiv(GLuint index, GLenum pname, GLuint * params) { HLF::GL::_glGetVertexAttribIuiv(index, pname, params); }
inline void glGetVertexAttribLdv(GLuint index, GLenum pname, GLdouble * params) { HLF::GL::_glGetVertexAttribLdv(index, pname, params); }
inline void glGetVertexAttribPointerv(GLuint index, GLenum pname, void ** pointer) { HLF::GL::_glGetVertexAttribPointerv(index, pname, pointer); }
inline void glGetVertexAttribdv(GLuint index, GLenum pname, GLdouble * params) { HLF::GL::_glGetVertexAttribdv(index, pname, params); }
inline void glGetVertexAttribfv(GLuint index, GLenum pname, GLfloat * params) { HLF::GL::_glGetVertexAttribfv(index, pname, params); }
inline void glGetVertexAttribiv(GLuint index, GLenum pname, GLint * params) { HLF::GL::_glGetVertexAttribiv(index, pname, params); }
inline void glGetnColorTable(GLenum target, GLenum format, GLenum type, GLsizei bufSize, void * table) { HLF::GL::_glGetnColorTable(target, format, type, bufSize, table); }
inline void glGetnCompressedTexImage(GLenum target, GLint lod, GLsizei bufSize, void * pixels) { HLF::GL::_glGetnCompressedTexImage(target, lod, bufSize, pixels); }
inline void glGetnConvolutionFilter(GLenum target, GLenum format, GLenum type, GLsizei bufSize, void * image) { HLF::GL::_glGetnConvolutionFilter(target, format, type, bufSize, image); }
inline void glGetnHistogram(GLenum target, GLboolean reset, GLenum format, GLenum type, GLsizei bufSize, void * values) { HLF::GL::_glGetnHistogram(target, reset, format, type, bufSize, values); }
inline void glGetnMapdv(GLenum target, GLenum query, GLsizei bufSize, GLdouble * v) { HLF::GL::_glGetnMapdv(target, query, bufSize, v); }
inline void glGetnMapfv(GLenum target, GLenum query, GLsizei bufSize, GLfloat * v) { HLF::GL::_glGetnMapfv(target, query, bufSize, v); }
inline void glGetnMapiv(GLenum target, GLenum query, GLsizei bufSize, GLint * v) { HLF::GL::_glGetnMapiv(target, query, bufSize, v); }
inline void glGetnMinmax(GLenum target, GLboolean reset, GLenum format, GLenum type, GLsizei bufSize, void * values) { HLF::GL::_glGetnMinmax(target, reset, format, type, bufSize, values); }
inline void glGetnPixelMapfv(GLenum map, GLsizei bufSize, GLfloat * values) { HLF::GL::_glGetnPixelMapfv(map, bufSize, values); }
inline void glGetnPixelMapuiv(GLenum map, GLsizei bufSize, GLuint * values) { HLF::GL::_glGetnPixelMapuiv(map, bufSize, values); }
inline void glGetnPixelMapusv(GLenum map, GLsizei bufSize, GLushort * values) { HLF::GL::_glGetnPixelMapusv(map, bufSize, values); }
inline void glGetnPolygonStipple(GLsizei bufSize, GLubyte * pattern) { HLF::GL::_glGetnPolygonStipple(bufSize, pattern); }
inline void glGetnSeparableFilter(GLenum target, GLenum format, GLenum type, GLsizei rowBufSize, void * row, GLsizei columnBufSize, void * column, void * span) { HLF::GL::_glGetnSeparableFilter(target, format, type, rowBufSize, row, columnBufSize, column, span); }
inline void glGetnTexImage(GLenum target, GLint level, GLenum format, GLenum type, GLsizei bufSize, void * pixels) { HLF::GL::_glGetnTexImage(target, level, format, type, bufSize, pixels); }
inline void glGetnUniformdv(GLuint program, GLint location, GLsizei bufSize, GLdouble * params) { HLF::GL::_glGetnUniformdv(program, location, bufSize, params); }
inline void glGetnUniformfv(GLuint program, GLint location, GLsizei bufSize, GLfloat * params) { HLF::GL::_glGetnUniformfv(program, location, bufSize, params); }
inline void glGetnUniformiv(GLuint program, GLint location, GLsizei bufSize, GLint * params) { HLF::GL::_glGetnUniformiv(program, location, bufSize, params); }
inline void glGetnUniformuiv(GLuint program, GLint location, GLsizei bufSize, GLuint * params) { HLF::GL::_glGetnUniformuiv(program, location, bufSize, params); }
inline void glHint(GLenum target, GLenum mode) { HLF::GL::_glHint(target, mode); }
inline void glIndexMask(GLuint mask) { HLF::GL::_glIndexMask(mask); }
inline void glIndexPointer(GLenum type, GLsizei stride, const void * pointer) { HLF::GL::_glIndexPointer(type, stride, pointer); }
inline void glIndexd(GLdouble c) { HLF::GL::_glIndexd(c); }
inline void glIndexdv(const GLdouble * c) { HLF::GL::_glIndexdv(c); }
inline void glIndexf(GLfloat c) { HLF::GL::_glIndexf(c); }
inline void glIndexfv(const GLfloat * c) { HLF::GL::_glIndexfv(c); }
inline void glIndexi(GLint c) { HLF::GL::_glIndexi(c); }
inline void glIndexiv(const GLint * c) { HLF::GL::_glIndexiv(c); }
inline void glIndexs(GLshort c) { HLF::GL::_glIndexs(c); }
inline void glIndexsv(const GLshort * c) { HLF::GL::_glIndexsv(c); }
inline void glIndexub(GLubyte c) { HLF::GL::_glIndexub(c); }
inline void glIndexubv(const GLubyte * c) { HLF::GL::_glIndexubv(c); }
inline void glInitNames(void) { HLF::GL::_glInitNames(); }
inline void glInterleavedArrays(GLenum format, GLsizei stride, const void * pointer) { HLF::GL::_glInterleavedArrays(format, stride, pointer); }
inline void glInvalidateBufferData(GLuint buffer) { HLF::GL::_glInvalidateBufferData(buffer); }
inline void glInvalidateBufferSubData(GLuint buffer, GLintptr offset, GLsizeiptr length) { HLF::GL::_glInvalidateBufferSubData(buffer, offset, length); }
inline void glInvalidateFramebuffer(GLenum target, GLsizei numAttachments, const GLenum * attachments) { HLF::GL::_glInvalidateFramebuffer(target, numAttachments, attachments); }
inline void glInvalidateNamedFramebufferData(GLuint framebuffer, GLsizei numAttachments, const GLenum * attachments) { HLF::GL::_glInvalidateNamedFramebufferData(framebuffer, numAttachments, attachments); }
inline void glInvalidateNamedFramebufferSubData(GLuint framebuffer, GLsizei numAttachments, const GLenum * attachments, GLint x, GLint y, GLsizei width, GLsizei height) { HLF::GL::_glInvalidateNamedFramebufferSubData(framebuffer, numAttachments, attachments, x, y, width, height); }
inline void glInvalidateSubFramebuffer(GLenum target, GLsizei numAttachments, const GLenum * attachments, GLint x, GLint y, GLsizei width, GLsizei height) { HLF::GL::_glInvalidateSubFramebuffer(target, numAttachments, attachments, x, y, width, height); }
inline void glInvalidateTexImage(GLuint texture, GLint level) { HLF::GL::_glInvalidateTexImage(texture, level); }
inline void glInvalidateTexSubImage(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth) { HLF::GL::_glInvalidateTexSubImage(texture, level, xoffset, yoffset, zoffset, width, height, depth); }
inline GLboolean glIsBuffer(GLuint buffer) { return HLF::GL::_glIsBuffer(buffer); }
inline GLboolean glIsEnabled(GLenum cap) { return HLF::GL::_glIsEnabled(cap); }
inline GLboolean glIsEnabledi(GLenum target, GLuint index) { return HLF::GL::_glIsEnabledi(target, index); }
inline GLboolean glIsFramebuffer(GLuint framebuffer) { return HLF::GL::_glIsFramebuffer(framebuffer); }
inline GLboolean glIsList(GLuint list) { return HLF::GL::_glIsList(list); }
inline GLboolean glIsProgram(GLuint program) { return HLF::GL::_glIsProgram(program); }
inline GLboolean glIsProgramPipeline(GLuint pipeline) { return HLF::GL::_glIsProgramPipeline(pipeline); }
inline GLboolean glIsQuery(GLuint id) { return HLF::GL::_glIsQuery(id); }
inline GLboolean glIsRenderbuffer(GLuint renderbuffer) { return HLF::GL::_glIsRenderbuffer(renderbuffer); }
inline GLboolean glIsSampler(GLuint sampler) { return HLF::GL::_glIsSampler(sampler); }
inline GLboolean glIsShader(GLuint shader) { return HLF::GL::_glIsShader(shader); }
inline GLboolean glIsSync(GLsync sync) { return HLF::GL::_glIsSync(sync); }
inline GLboolean glIsTexture(GLuint texture) { return HLF::GL::_glIsTexture(texture); }
inline GLboolean glIsTransformFeedback(GLuint id) { return HLF::GL::_glIsTransformFeedback(id); }
inline GLboolean glIsVertexArray(GLuint array) { return HLF::GL::_glIsVertexArray(array); }
inline void glLightModelf(GLenum pname, GLfloat param) { HLF::GL::_glLightModelf(pname, param); }
inline void glLightModelfv(GLenum pname, const GLfloat * params) { HLF::GL::_glLightModelfv(pname, params); }
inline void glLightModeli(GLenum pname, GLint param) { HLF::GL::_glLightModeli(pname, param); }
inline void glLightModeliv(GLenum pname, const GLint * params) { HLF::GL::_glLightModeliv(pname, params); }
inline void glLightf(GLenum light, GLenum pname, GLfloat param) { HLF::GL::_glLightf(light, pname, param); }
inline void glLightfv(GLenum light, GLenum pname, const GLfloat * params) { HLF::GL::_glLightfv(light, pname, params); }
inline void glLighti(GLenum light, GLenum pname, GLint param) { HLF::GL::_glLighti(light, pname, param); }
inline void glLightiv(GLenum light, GLenum pname, const GLint * params) { HLF::GL::_glLightiv(light, pname, params); }
inline void glLineStipple(GLint factor, GLushort pattern) { HLF::GL::_glLineStipple(factor, pattern); }
inline void glLineWidth(GLfloat width) { HLF::GL::_glLineWidth(width); }
inline void glLinkProgram(GLuint program) { HLF::GL::_glLinkProgram(program); }
inline void glListBase(GLuint base) { HLF::GL::_glListBase(base); }
inline void glLoadIdentity(void) { HLF::GL::_glLoadIdentity(); }
inline void glLoadMatrixd(const GLdouble * m) { HLF::GL::_glLoadMatrixd(m); }
inline void glLoadMatrixf(const GLfloat * m) { HLF::GL::_glLoadMatrixf(m); }
inline void glLoadName(GLuint name) { HLF::GL::_glLoadName(name); }
inline void glLoadTransposeMatrixd(const GLdouble * m) { HLF::GL::_glLoadTransposeMatrixd(m); }
inline void glLoadTransposeMatrixf(const GLfloat * m) { HLF::GL::_glLoadTransposeMatrixf(m); }
inline void glLogicOp(GLenum opcode) { HLF::GL::_glLogicOp(opcode); }
inline void glMap1d(GLenum target, GLdouble u1, GLdouble u2, GLint stride, GLint order, const GLdouble * points) { HLF::GL::_glMap1d(target, u1, u2, stride, order, points); }
inline void glMap1f(GLenum target, GLfloat u1, GLfloat u2, GLint stride, GLint order, const GLfloat * points) { HLF::GL::_glMap1f(target, u1, u2, stride, order, points); }
inline void glMap2d(GLenum target, GLdouble u1, GLdouble u2, GLint ustride, GLint uorder, GLdouble v1, GLdouble v2, GLint vstride, GLint vorder, const GLdouble * points) { HLF::GL::_glMap2d(target, u1, u2, ustride, uorder, v1, v2, vstride, vorder, points); }
inline void glMap2f(GLenum target, GLfloat u1, GLfloat u2, GLint ustride, GLint uorder, GLfloat v1, GLfloat v2, GLint vstride, GLint vorder, const GLfloat * points) { HLF::GL::_glMap2f(target, u1, u2, ustride, uorder, v1, v2, vstride, vorder, points); }
inline void * glMapBuffer(GLenum target, GLenum access) { return HLF::GL::_glMapBuffer(target, access); }
inline void * glMapBufferRange(GLenum target, GLintptr offset, GLsizeiptr length, GLbitfield access) { return HLF::GL::_glMapBufferRange(target, offset, length, access); }
inline void glMapGrid1d(GLint un, GLdouble u1, GLdouble u2) { HLF::GL::_glMapGrid1d(un, u1, u2); }
inline void glMapGrid1f(GLint un, GLfloat u1, GLfloat u2) { HLF::GL::_glMapGrid1f(un, u1, u2); }
inline void glMapGrid2d(GLint un, GLdouble u1, GLdouble u2, GLint vn, GLdouble v1, GLdouble v2) { HLF::GL::_glMapGrid2d(un, u1, u2, vn, v1, v2); }
inline void glMapGrid2f(GLint un, GLfloat u1, GLfloat u2, GLint vn, GLfloat v1, GLfloat v2) { HLF::GL::_glMapGrid2f(un, u1, u2, vn, v1, v2); }
inline void * glMapNamedBuffer(GLuint buffer, GLenum access) { return HLF::GL::_glMapNamedBuffer(buffer, access); }
inline void * glMapNamedBufferRange(GLuint buffer, GLintptr offset, GLsizeiptr length, GLbitfield access) { return HLF::GL::_glMapNamedBufferRange(buffer, offset, length, access); }
inline void glMaterialf(GLenum face, GLenum pname, GLfloat param) { HLF::GL::_glMaterialf(face, pname, param); }
inline void glMaterialfv(GLenum face, GLenum pname, const GLfloat * params) { HLF::GL::_glMaterialfv(face, pname, params); }
inline void glMateriali(GLenum face, GLenum pname, GLint param) { HLF::GL::_glMateriali(face, pname, param); }
inline void glMaterialiv(GLenum face, GLenum pname, const GLint * params) { HLF::GL::_glMaterialiv(face, pname, params); }
inline void glMatrixMode(GLenum mode) { HLF::GL::_glMatrixMode(mode); }
inline void glMemoryBarrier(GLbitfield barriers) { HLF::GL::_glMemoryBarrier(barriers); }
inline void glMemoryBarrierByRegion(GLbitfield barriers) { HLF::GL::_glMemoryBarrierByRegion(barriers); }
inline void glMinSampleShading(GLfloat value) { HLF::GL::_glMinSampleShading(value); }
inline void glMultMatrixd(const GLdouble * m) { HLF::GL::_glMultMatrixd(m); }
inline void glMultMatrixf(const GLfloat * m) { HLF::GL::_glMultMatrixf(m); }
inline void glMultTransposeMatrixd(const GLdouble * m) { HLF::GL::_glMultTransposeMatrixd(m); }
inline void glMultTransposeMatrixf(const GLfloat * m) { HLF::GL::_glMultTransposeMatrixf(m); }
inline void glMultiDrawArrays(GLenum mode, const GLint * first, const GLsizei * count, GLsizei drawcount) { HLF::GL::_glMultiDrawArrays(mode, first, count, drawcount); }
inline void glMultiDrawArraysIndirect(GLenum mode, const void * indirect, GLsizei drawcount, GLsizei stride) { HLF::GL::_glMultiDrawArraysIndirect(mode, indirect, drawcount, stride); }
inline void glMultiDrawArraysIndirectCount(GLenum mode, const void * indirect, GLintptr drawcount, GLsizei maxdrawcount, GLsizei stride) { HLF::GL::_glMultiDrawArraysIndirectCount(mode, indirect, drawcount, maxdrawcount, stride); }
inline void glMultiDrawElements(GLenum mode, const GLsizei * count, GLenum type, const void *const* indices, GLsizei drawcount) { HLF::GL::_glMultiDrawElements(mode, count, type, indices, drawcount); }
inline void glMultiDrawElementsBaseVertex(GLenum mode, const GLsizei * count, GLenum type, const void *const* indices, GLsizei drawcount, const GLint * basevertex) { HLF::GL::_glMultiDrawElementsBaseVertex(mode, count, type, indices, drawcount, basevertex); }
inline void glMultiDrawElementsIndirect(GLenum mode, GLenum type, const void * indirect, GLsizei drawcount, GLsizei stride) { HLF::GL::_glMultiDrawElementsIndirect(mode, type, indirect, drawcount, stride); }
inline void glMultiDrawElementsIndirectCount(GLenum mode, GLenum type, const void * indirect, GLintptr drawcount, GLsizei maxdrawcount, GLsizei stride) { HLF::GL::_glMultiDrawElementsIndirectCount(mode, type, indirect, drawcount, maxdrawcount, stride); }
inline void glMultiTexCoord1d(GLenum target, GLdouble s) { HLF::GL::_glMultiTexCoord1d(target, s); }
inline void glMultiTexCoord1dv(GLenum target, const GLdouble * v) { HLF::GL::_glMultiTexCoord1dv(target, v); }
inline void glMultiTexCoord1f(GLenum target, GLfloat s) { HLF::GL::_glMultiTexCoord1f(target, s); }
inline void glMultiTexCoord1fv(GLenum target, const GLfloat * v) { HLF::GL::_glMultiTexCoord1fv(target, v); }
inline void glMultiTexCoord1i(GLenum target, GLint s) { HLF::GL::_glMultiTexCoord1i(target, s); }
inline void glMultiTexCoord1iv(GLenum target, const GLint * v) { HLF::GL::_glMultiTexCoord1iv(target, v); }
inline void glMultiTexCoord1s(GLenum target, GLshort s) { HLF::GL::_glMultiTexCoord1s(target, s); }
inline void glMultiTexCoord1sv(GLenum target, const GLshort * v) { HLF::GL::_glMultiTexCoord1sv(target, v); }
inline void glMultiTexCoord2d(GLenum target, GLdouble s, GLdouble t) { HLF::GL::_glMultiTexCoord2d(target, s, t); }
inline void glMultiTexCoord2dv(GLenum target, const GLdouble * v) { HLF::GL::_glMultiTexCoord2dv(target, v); }
inline void glMultiTexCoord2f(GLenum target, GLfloat s, GLfloat t) { HLF::GL::_glMultiTexCoord2f(target, s, t); }
inline void glMultiTexCoord2fv(GLenum target, const GLfloat * v) { HLF::GL::_glMultiTexCoord2fv(target, v); }
inline void glMultiTexCoord2i(GLenum target, GLint s, GLint t) { HLF::GL::_glMultiTexCoord2i(target, s, t); }
inline void glMultiTexCoord2iv(GLenum target, const GLint * v) { HLF::GL::_glMultiTexCoord2iv(target, v); }
inline void glMultiTexCoord2s(GLenum target, GLshort s, GLshort t) { HLF::GL::_glMultiTexCoord2s(target, s, t); }
inline void glMultiTexCoord2sv(GLenum target, const GLshort * v) { HLF::GL::_glMultiTexCoord2sv(target, v); }
inline void glMultiTexCoord3d(GLenum target, GLdouble s, GLdouble t, GLdouble r) { HLF::GL::_glMultiTexCoord3d(target, s, t, r); }
inline void glMultiTexCoord3dv(GLenum target, const GLdouble * v) { HLF::GL::_glMultiTexCoord3dv(target, v); }
inline void glMultiTexCoord3f(GLenum target, GLfloat s, GLfloat t, GLfloat r) { HLF::GL::_glMultiTexCoord3f(target, s, t, r); }
inline void glMultiTexCoord3fv(GLenum target, const GLfloat * v) { HLF::GL::_glMultiTexCoord3fv(target, v); }
inline void glMultiTexCoord3i(GLenum target, GLint s, GLint t, GLint r) { HLF::GL::_glMultiTexCoord3i(target, s, t, r); }
inline void glMultiTexCoord3iv(GLenum target, const GLint * v) { HLF::GL::_glMultiTexCoord3iv(target, v); }
inline void glMultiTexCoord3s(GLenum target, GLshort s, GLshort t, GLshort r) { HLF::GL::_glMultiTexCoord3s(target, s, t, r); }
inline void glMultiTexCoord3sv(GLenum target, const GLshort * v) { HLF::GL::_glMultiTexCoord3sv(target, v); }
inline void glMultiTexCoord4d(GLenum target, GLdouble s, GLdouble t, GLdouble r, GLdouble q) { HLF::GL::_glMultiTexCoord4d(target, s, t, r, q); }
inline void glMultiTexCoord4dv(GLenum target, const GLdouble * v) { HLF::GL::_glMultiTexCoord4dv(target, v); }
inline void glMultiTexCoord4f(GLenum target, GLfloat s, GLfloat t, GLfloat r, GLfloat q) { HLF::GL::_glMultiTexCoord4f(target, s, t, r, q); }
inline void glMultiTexCoord4fv(GLenum target, const GLfloat * v) { HLF::GL::_glMultiTexCoord4fv(target, v); }
inline void glMultiTexCoord4i(GLenum target, GLint s, GLint t, GLint r, GLint q) { HLF::GL::_glMultiTexCoord4i(target, s, t, r, q); }
inline void glMultiTexCoord4iv(GLenum target, const GLint * v) { HLF::GL::_glMultiTexCoord4iv(target, v); }
inline void glMultiTexCoord4s(GLenum target, GLshort s, GLshort t, GLshort r, GLshort q) { HLF::GL::_glMultiTexCoord4s(target, s, t, r, q); }
inline void glMultiTexCoord4sv(GLenum target, const GLshort * v) { HLF::GL::_glMultiTexCoord4sv(target, v); }
inline void glMultiTexCoordP1ui(GLenum texture, GLenum type, GLuint coords) { HLF::GL::_glMultiTexCoordP1ui(texture, type, coords); }
inline void glMultiTexCoordP1uiv(GLenum texture, GLenum type, const GLuint * coords) { HLF::GL::_glMultiTexCoordP1uiv(texture, type, coords); }
inline void glMultiTexCoordP2ui(GLenum texture, GLenum type, GLuint coords) { HLF::GL::_glMultiTexCoordP2ui(texture, type, coords); }
inline void glMultiTexCoordP2uiv(GLenum texture, GLenum type, const GLuint * coords) { HLF::GL::_glMultiTexCoordP2uiv(texture, type, coords); }
inline void glMultiTexCoordP3ui(GLenum texture, GLenum type, GLuint coords) { HLF::GL::_glMultiTexCoordP3ui(texture, type, coords); }
inline void glMultiTexCoordP3uiv(GLenum texture, GLenum type, const GLuint * coords) { HLF::GL::_glMultiTexCoordP3uiv(texture, type, coords); }
inline void glMultiTexCoordP4ui(GLenum texture, GLenum type, GLuint coords) { HLF::GL::_glMultiTexCoordP4ui(texture, type, coords); }
inline void glMultiTexCoordP4uiv(GLenum texture, GLenum type, const GLuint * coords) { HLF::GL::_glMultiTexCoordP4uiv(texture, type, coords); }
inline void glNamedBufferData(GLuint buffer, GLsizeiptr size, const void * data, GLenum usage) { HLF::GL::_glNamedBufferData(buffer, size, data, usage); }
inline void glNamedBufferStorage(GLuint buffer, GLsizeiptr size, const void * data, GLbitfield flags) { HLF::GL::_glNamedBufferStorage(buffer, size, data, flags); }
inline void glNamedBufferSubData(GLuint buffer, GLintptr offset, GLsizeiptr size, const void * data) { HLF::GL::_glNamedBufferSubData(buffer, offset, size, data); }
inline void glNamedFramebufferDrawBuffer(GLuint framebuffer, GLenum buf) { HLF::GL::_glNamedFramebufferDrawBuffer(framebuffer, buf); }
inline void glNamedFramebufferDrawBuffers(GLuint framebuffer, GLsizei n, const GLenum * bufs) { HLF::GL::_glNamedFramebufferDrawBuffers(framebuffer, n, bufs); }
inline void glNamedFramebufferParameteri(GLuint framebuffer, GLenum pname, GLint param) { HLF::GL::_glNamedFramebufferParameteri(framebuffer, pname, param); }
inline void glNamedFramebufferReadBuffer(GLuint framebuffer, GLenum src) { HLF::GL::_glNamedFramebufferReadBuffer(framebuffer, src); }
inline void glNamedFramebufferRenderbuffer(GLuint framebuffer, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer) { HLF::GL::_glNamedFramebufferRenderbuffer(framebuffer, attachment, renderbuffertarget, renderbuffer); }
inline void glNamedFramebufferTexture(GLuint framebuffer, GLenum attachment, GLuint texture, GLint level) { HLF::GL::_glNamedFramebufferTexture(framebuffer, attachment, texture, level); }
inline void glNamedFramebufferTextureLayer(GLuint framebuffer, GLenum attachment, GLuint texture, GLint level, GLint layer) { HLF::GL::_glNamedFramebufferTextureLayer(framebuffer, attachment, texture, level, layer); }
inline void glNamedRenderbufferStorage(GLuint renderbuffer, GLenum internalformat, GLsizei width, GLsizei height) { HLF::GL::_glNamedRenderbufferStorage(renderbuffer, internalformat, width, height); }
inline void glNamedRenderbufferStorageMultisample(GLuint renderbuffer, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height) { HLF::GL::_glNamedRenderbufferStorageMultisample(renderbuffer, samples, internalformat, width, height); }
inline void glNewList(GLuint list, GLenum mode) { HLF::GL::_glNewList(list, mode); }
inline void glNormal3b(GLbyte nx, GLbyte ny, GLbyte nz) { HLF::GL::_glNormal3b(nx, ny, nz); }
inline void glNormal3bv(const GLbyte * v) { HLF::GL::_glNormal3bv(v); }
inline void glNormal3d(GLdouble nx, GLdouble ny, GLdouble nz) { HLF::GL::_glNormal3d(nx, ny, nz); }
inline void glNormal3dv(const GLdouble * v) { HLF::GL::_glNormal3dv(v); }
inline void glNormal3f(GLfloat nx, GLfloat ny, GLfloat nz) { HLF::GL::_glNormal3f(nx, ny, nz); }
inline void glNormal3fv(const GLfloat * v) { HLF::GL::_glNormal3fv(v); }
inline void glNormal3i(GLint nx, GLint ny, GLint nz) { HLF::GL::_glNormal3i(nx, ny, nz); }
inline void glNormal3iv(const GLint * v) { HLF::GL::_glNormal3iv(v); }
inline void glNormal3s(GLshort nx, GLshort ny, GLshort nz) { HLF::GL::_glNormal3s(nx, ny, nz); }
inline void glNormal3sv(const GLshort * v) { HLF::GL::_glNormal3sv(v); }
inline void glNormalP3ui(GLenum type, GLuint coords) { HLF::GL::_glNormalP3ui(type, coords); }
inline void glNormalP3uiv(GLenum type, const GLuint * coords) { HLF::GL::_glNormalP3uiv(type, coords); }
inline void glNormalPointer(GLenum type, GLsizei stride, const void * pointer) { HLF::GL::_glNormalPointer(type, stride, pointer); }
inline void glObjectLabel(GLenum identifier, GLuint name, GLsizei length, const GLchar * label) { HLF::GL::_glObjectLabel(identifier, name, length, label); }
inline void glObjectPtrLabel(const void * ptr, GLsizei length, const GLchar * label) { HLF::GL::_glObjectPtrLabel(ptr, length, label); }
inline void glOrtho(GLdouble left, GLdouble right, GLdouble bottom, GLdouble top, GLdouble zNear, GLdouble zFar) { HLF::GL::_glOrtho(left, right, bottom, top, zNear, zFar); }
inline void glPassThrough(GLfloat token) { HLF::GL::_glPassThrough(token); }
inline void glPatchParameterfv(GLenum pname, const GLfloat * values) { HLF::GL::_glPatchParameterfv(pname, values); }
inline void glPatchParameteri(GLenum pname, GLint value) { HLF::GL::_glPatchParameteri(pname, value); }
inline void glPauseTransformFeedback(void) { HLF::GL::_glPauseTransformFeedback(); }
inline void glPixelMapfv(GLenum map, GLsizei mapsize, const GLfloat * values) { HLF::GL::_glPixelMapfv(map, mapsize, values); }
inline void glPixelMapuiv(GLenum map, GLsizei mapsize, const GLuint * values) { HLF::GL::_glPixelMapuiv(map, mapsize, values); }
inline void glPixelMapusv(GLenum map, GLsizei mapsize, const GLushort * values) { HLF::GL::_glPixelMapusv(map, mapsize, values); }
inline void glPixelStoref(GLenum pname, GLfloat param) { HLF::GL::_glPixelStoref(pname, param); }
inline void glPixelStorei(GLenum pname, GLint param) { HLF::GL::_glPixelStorei(pname, param); }
inline void glPixelTransferf(GLenum pname, GLfloat param) { HLF::GL::_glPixelTransferf(pname, param); }
inline void glPixelTransferi(GLenum pname, GLint param) { HLF::GL::_glPixelTransferi(pname, param); }
inline void glPixelZoom(GLfloat xfactor, GLfloat yfactor) { HLF::GL::_glPixelZoom(xfactor, yfactor); }
inline void glPointParameterf(GLenum pname, GLfloat param) { HLF::GL::_glPointParameterf(pname, param); }
inline void glPointParameterfv(GLenum pname, const GLfloat * params) { HLF::GL::_glPointParameterfv(pname, params); }
inline void glPointParameteri(GLenum pname, GLint param) { HLF::GL::_glPointParameteri(pname, param); }
inline void glPointParameteriv(GLenum pname, const GLint * params) { HLF::GL::_glPointParameteriv(pname, params); }
inline void glPointSize(GLfloat size) { HLF::GL::_glPointSize(size); }
inline void glPolygonMode(GLenum face, GLenum mode) { HLF::GL::_glPolygonMode(face, mode); }
inline void glPolygonOffset(GLfloat factor, GLfloat units) { HLF::GL::_glPolygonOffset(factor, units); }
inline void glPolygonOffsetClamp(GLfloat factor, GLfloat units, GLfloat clamp) { HLF::GL::_glPolygonOffsetClamp(factor, units, clamp); }
inline void glPolygonStipple(const GLubyte * mask) { HLF::GL::_glPolygonStipple(mask); }
inline void glPopAttrib(void) { HLF::GL::_glPopAttrib(); }
inline void glPopClientAttrib(void) { HLF::GL::_glPopClientAttrib(); }
inline void glPopDebugGroup(void) { HLF::GL::_glPopDebugGroup(); }
inline void glPopMatrix(void) { HLF::GL::_glPopMatrix(); }
inline void glPopName(void) { HLF::GL::_glPopName(); }
inline void glPrimitiveRestartIndex(GLuint index) { HLF::GL::_glPrimitiveRestartIndex(index); }
inline void glPrioritizeTextures(GLsizei n, const GLuint * textures, const GLfloat * priorities) { HLF::GL::_glPrioritizeTextures(n, textures, priorities); }
inline void glProgramBinary(GLuint program, GLenum binaryFormat, const void * binary, GLsizei length) { HLF::GL::_glProgramBinary(program, binaryFormat, binary, length); }
inline void glProgramParameteri(GLuint program, GLenum pname, GLint value) { HLF::GL::_glProgramParameteri(program, pname, value); }
inline void glProgramUniform1d(GLuint program, GLint location, GLdouble v0) { HLF::GL::_glProgramUniform1d(program, location, v0); }
inline void glProgramUniform1dv(GLuint program, GLint location, GLsizei count, const GLdouble * value) { HLF::GL::_glProgramUniform1dv(program, location, count, value); }
inline void glProgramUniform1f(GLuint program, GLint location, GLfloat v0) { HLF::GL::_glProgramUniform1f(program, location, v0); }
inline void glProgramUniform1fv(GLuint program, GLint location, GLsizei count, const GLfloat * value) { HLF::GL::_glProgramUniform1fv(program, location, count, value); }
inline void glProgramUniform1i(GLuint program, GLint location, GLint v0) { HLF::GL::_glProgramUniform1i(program, location, v0); }
inline void glProgramUniform1iv(GLuint program, GLint location, GLsizei count, const GLint * value) { HLF::GL::_glProgramUniform1iv(program, location, count, value); }
inline void glProgramUniform1ui(GLuint program, GLint location, GLuint v0) { HLF::GL::_glProgramUniform1ui(program, location, v0); }
inline void glProgramUniform1uiv(GLuint program, GLint location, GLsizei count, const GLuint * value) { HLF::GL::_glProgramUniform1uiv(program, location, count, value); }
inline void glProgramUniform2d(GLuint program, GLint location, GLdouble v0, GLdouble v1) { HLF::GL::_glProgramUniform2d(program, location, v0, v1); }
inline void glProgramUniform2dv(GLuint program, GLint location, GLsizei count, const GLdouble * value) { HLF::GL::_glProgramUniform2dv(program, location, count, value); }
inline void glProgramUniform2f(GLuint program, GLint location, GLfloat v0, GLfloat v1) { HLF::GL::_glProgramUniform2f(program, location, v0, v1); }
inline void glProgramUniform2fv(GLuint program, GLint location, GLsizei count, const GLfloat * value) { HLF::GL::_glProgramUniform2fv(program, location, count, value); }
inline void glProgramUniform2i(GLuint program, GLint location, GLint v0, GLint v1) { HLF::GL::_glProgramUniform2i(program, location, v0, v1); }
inline void glProgramUniform2iv(GLuint program, GLint location, GLsizei count, const GLint * value) { HLF::GL::_glProgramUniform2iv(program, location, count, value); }
inline void glProgramUniform2ui(GLuint program, GLint location, GLuint v0, GLuint v1) { HLF::GL::_glProgramUniform2ui(program, location, v0, v1); }
inline void glProgramUniform2uiv(GLuint program, GLint location, GLsizei count, const GLuint * value) { HLF::GL::_glProgramUniform2uiv(program, location, count, value); }
inline void glProgramUniform3d(GLuint program, GLint location, GLdouble v0, GLdouble v1, GLdouble v2) { HLF::GL::_glProgramUniform3d(program, location, v0, v1, v2); }
inline void glProgramUniform3dv(GLuint program, GLint location, GLsizei count, const GLdouble * value) { HLF::GL::_glProgramUniform3dv(program, location, count, value); }
inline void glProgramUniform3f(GLuint program, GLint location, GLfloat v0, GLfloat v1, GLfloat v2) { HLF::GL::_glProgramUniform3f(program, location, v0, v1, v2); }
inline void glProgramUniform3fv(GLuint program, GLint location, GLsizei count, const GLfloat * value) { HLF::GL::_glProgramUniform3fv(program, location, count, value); }
inline void glProgramUniform3i(GLuint program, GLint location, GLint v0, GLint v1, GLint v2) { HLF::GL::_glProgramUniform3i(program, location, v0, v1, v2); }
inline void glProgramUniform3iv(GLuint program, GLint location, GLsizei count, const GLint * value) { HLF::GL::_glProgramUniform3iv(program, location, count, value); }
inline void glProgramUniform3ui(GLuint program, GLint location, GLuint v0, GLuint v1, GLuint v2) { HLF::GL::_glProgramUniform3ui(program, location, v0, v1, v2); }
inline void glProgramUniform3uiv(GLuint program, GLint location, GLsizei count, const GLuint * value) { HLF::GL::_glProgramUniform3uiv(program, location, count, value); }
inline void glProgramUniform4d(GLuint program, GLint location, GLdouble v0, GLdouble v1, GLdouble v2, GLdouble v3) { HLF::GL::_glProgramUniform4d(program, location, v0, v1, v2, v3); }
inline void glProgramUniform4dv(GLuint program, GLint location, GLsizei count, const GLdouble * value) { HLF::GL::_glProgramUniform4dv(program, location, count, value); }
inline void glProgramUniform4f(GLuint program, GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3) { HLF::GL::_glProgramUniform4f(program, location, v0, v1, v2, v3); }
inline void glProgramUniform4fv(GLuint program, GLint location, GLsizei count, const GLfloat * value) { HLF::GL::_glProgramUniform4fv(program, location, count, value); }
inline void glProgramUniform4i(GLuint program, GLint location, GLint v0, GLint v1, GLint v2, GLint v3) { HLF::GL::_glProgramUniform4i(program, location, v0, v1, v2, v3); }
inline void glProgramUniform4iv(GLuint program, GLint location, GLsizei count, const GLint * value) { HLF::GL::_glProgramUniform4iv(program, location, count, value); }
inline void glProgramUniform4ui(GLuint program, GLint location, GLuint v0, GLuint v1, GLuint v2, GLuint v3) { HLF::GL::_glProgramUniform4ui(program, location, v0, v1, v2, v3); }
inline void glProgramUniform4uiv(GLuint program, GLint location, GLsizei count, const GLuint * value) { HLF::GL::_glProgramUniform4uiv(program, location, count, value); }
inline void glProgramUniformMatrix2dv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value) { HLF::GL::_glProgramUniformMatrix2dv(program, location, count, transpose, value); }
inline void glProgramUniformMatrix2fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value) { HLF::GL::_glProgramUniformMatrix2fv(program, location, count, transpose, value); }
inline void glProgramUniformMatrix2x3dv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value) { HLF::GL::_glProgramUniformMatrix2x3dv(program, location, count, transpose, value); }
inline void glProgramUniformMatrix2x3fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value) { HLF::GL::_glProgramUniformMatrix2x3fv(program, location, count, transpose, value); }
inline void glProgramUniformMatrix2x4dv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value) { HLF::GL::_glProgramUniformMatrix2x4dv(program, location, count, transpose, value); }
inline void glProgramUniformMatrix2x4fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value) { HLF::GL::_glProgramUniformMatrix2x4fv(program, location, count, transpose, value); }
inline void glProgramUniformMatrix3dv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value) { HLF::GL::_glProgramUniformMatrix3dv(program, location, count, transpose, value); }
inline void glProgramUniformMatrix3fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value) { HLF::GL::_glProgramUniformMatrix3fv(program, location, count, transpose, value); }
inline void glProgramUniformMatrix3x2dv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value) { HLF::GL::_glProgramUniformMatrix3x2dv(program, location, count, transpose, value); }
inline void glProgramUniformMatrix3x2fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value) { HLF::GL::_glProgramUniformMatrix3x2fv(program, location, count, transpose, value); }
inline void glProgramUniformMatrix3x4dv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value) { HLF::GL::_glProgramUniformMatrix3x4dv(program, location, count, transpose, value); }
inline void glProgramUniformMatrix3x4fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value) { HLF::GL::_glProgramUniformMatrix3x4fv(program, location, count, transpose, value); }
inline void glProgramUniformMatrix4dv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value) { HLF::GL::_glProgramUniformMatrix4dv(program, location, count, transpose, value); }
inline void glProgramUniformMatrix4fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value) { HLF::GL::_glProgramUniformMatrix4fv(program, location, count, transpose, value); }
inline void glProgramUniformMatrix4x2dv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value) { HLF::GL::_glProgramUniformMatrix4x2dv(program, location, count, transpose, value); }
inline void glProgramUniformMatrix4x2fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value) { HLF::GL::_glProgramUniformMatrix4x2fv(program, location, count, transpose, value); }
inline void glProgramUniformMatrix4x3dv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value) { HLF::GL::_glProgramUniformMatrix4x3dv(program, location, count, transpose, value); }
inline void glProgramUniformMatrix4x3fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value) { HLF::GL::_glProgramUniformMatrix4x3fv(program, location, count, transpose, value); }
inline void glProvokingVertex(GLenum mode) { HLF::GL::_glProvokingVertex(mode); }
inline void glPushAttrib(GLbitfield mask) { HLF::GL::_glPushAttrib(mask); }
inline void glPushClientAttrib(GLbitfield mask) { HLF::GL::_glPushClientAttrib(mask); }
inline void glPushDebugGroup(GLenum source, GLuint id, GLsizei length, const GLchar * message) { HLF::GL::_glPushDebugGroup(source, id, length, message); }
inline void glPushMatrix(void) { HLF::GL::_glPushMatrix(); }
inline void glPushName(GLuint name) { HLF::GL::_glPushName(name); }
inline void glQueryCounter(GLuint id, GLenum target) { HLF::GL::_glQueryCounter(id, target); }
inline void glRasterPos2d(GLdouble x, GLdouble y) { HLF::GL::_glRasterPos2d(x, y); }
inline void glRasterPos2dv(const GLdouble * v) { HLF::GL::_glRasterPos2dv(v); }
inline void glRasterPos2f(GLfloat x, GLfloat y) { HLF::GL::_glRasterPos2f(x, y); }
inline void glRasterPos2fv(const GLfloat * v) { HLF::GL::_glRasterPos2fv(v); }
inline void glRasterPos2i(GLint x, GLint y) { HLF::GL::_glRasterPos2i(x, y); }
inline void glRasterPos2iv(const GLint * v) { HLF::GL::_glRasterPos2iv(v); }
inline void glRasterPos2s(GLshort x, GLshort y) { HLF::GL::_glRasterPos2s(x, y); }
inline void glRasterPos2sv(const GLshort * v) { HLF::GL::_glRasterPos2sv(v); }
inline void glRasterPos3d(GLdouble x, GLdouble y, GLdouble z) { HLF::GL::_glRasterPos3d(x, y, z); }
inline void glRasterPos3dv(const GLdouble * v) { HLF::GL::_glRasterPos3dv(v); }
inline void glRasterPos3f(GLfloat x, GLfloat y, GLfloat z) { HLF::GL::_glRasterPos3f(x, y, z); }
inline void glRasterPos3fv(const GLfloat * v) { HLF::GL::_glRasterPos3fv(v); }
inline void glRasterPos3i(GLint x, GLint y, GLint z) { HLF::GL::_glRasterPos3i(x, y, z); }
inline void glRasterPos3iv(const GLint * v) { HLF::GL::_glRasterPos3iv(v); }
inline void glRasterPos3s(GLshort x, GLshort y, GLshort z) { HLF::GL::_glRasterPos3s(x, y, z); }
inline void glRasterPos3sv(const GLshort * v) { HLF::GL::_glRasterPos3sv(v); }
inline void glRasterPos4d(GLdouble x, GLdouble y, GLdouble z, GLdouble w) { HLF::GL::_glRasterPos4d(x, y, z, w); }
inline void glRasterPos4dv(const GLdouble * v) { HLF::GL::_glRasterPos4dv(v); }
inline void glRasterPos4f(GLfloat x, GLfloat y, GLfloat z, GLfloat w) { HLF::GL::_glRasterPos4f(x, y, z, w); }
inline void glRasterPos4fv(const GLfloat * v) { HLF::GL::_glRasterPos4fv(v); }
inline void glRasterPos4i(GLint x, GLint y, GLint z, GLint w) { HLF::GL::_glRasterPos4i(x, y, z, w); }
inline void glRasterPos4iv(const GLint * v) { HLF::GL::_glRasterPos4iv(v); }
inline void glRasterPos4s(GLshort x, GLshort y, GLshort z, GLshort w) { HLF::GL::_glRasterPos4s(x, y, z, w); }
inline void glRasterPos4sv(const GLshort * v) { HLF::GL::_glRasterPos4sv(v); }
inline void glReadBuffer(GLenum src) { HLF::GL::_glReadBuffer(src); }
inline void glReadPixels(GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, void * pixels) { HLF::GL::_glReadPixels(x, y, width, height, format, type, pixels); }
inline void glReadnPixels(GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, GLsizei bufSize, void * data) { HLF::GL::_glReadnPixels(x, y, width, height, format, type, bufSize, data); }
inline void glRectd(GLdouble x1, GLdouble y1, GLdouble x2, GLdouble y2) { HLF::GL::_glRectd(x1, y1, x2, y2); }
inline void glRectdv(const GLdouble * v1, const GLdouble * v2) { HLF::GL::_glRectdv(v1, v2); }
inline void glRectf(GLfloat x1, GLfloat y1, GLfloat x2, GLfloat y2) { HLF::GL::_glRectf(x1, y1, x2, y2); }
inline void glRectfv(const GLfloat * v1, const GLfloat * v2) { HLF::GL::_glRectfv(v1, v2); }
inline void glRecti(GLint x1, GLint y1, GLint x2, GLint y2) { HLF::GL::_glRecti(x1, y1, x2, y2); }
inline void glRectiv(const GLint * v1, const GLint * v2) { HLF::GL::_glRectiv(v1, v2); }
inline void glRects(GLshort x1, GLshort y1, GLshort x2, GLshort y2) { HLF::GL::_glRects(x1, y1, x2, y2); }
inline void glRectsv(const GLshort * v1, const GLshort * v2) { HLF::GL::_glRectsv(v1, v2); }
inline void glReleaseShaderCompiler(void) { HLF::GL::_glReleaseShaderCompiler(); }
inline GLint glRenderMode(GLenum mode) { return HLF::GL::_glRenderMode(mode); }
inline void glRenderbufferStorage(GLenum target, GLenum internalformat, GLsizei width, GLsizei height) { HLF::GL::_glRenderbufferStorage(target, internalformat, width, height); }
inline void glRenderbufferStorageMultisample(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height) { HLF::GL::_glRenderbufferStorageMultisample(target, samples, internalformat, width, height); }
inline void glResumeTransformFeedback(void) { HLF::GL::_glResumeTransformFeedback(); }
inline void glRotated(GLdouble angle, GLdouble x, GLdouble y, GLdouble z) { HLF::GL::_glRotated(angle, x, y, z); }
inline void glRotatef(GLfloat angle, GLfloat x, GLfloat y, GLfloat z) { HLF::GL::_glRotatef(angle, x, y, z); }
inline void glSampleCoverage(GLfloat value, GLboolean invert) { HLF::GL::_glSampleCoverage(value, invert); }
inline void glSampleMaski(GLuint maskNumber, GLbitfield mask) { HLF::GL::_glSampleMaski(maskNumber, mask); }
inline void glSamplerParameterIiv(GLuint sampler, GLenum pname, const GLint * param) { HLF::GL::_glSamplerParameterIiv(sampler, pname, param); }
inline void glSamplerParameterIuiv(GLuint sampler, GLenum pname, const GLuint * param) { HLF::GL::_glSamplerParameterIuiv(sampler, pname, param); }
inline void glSamplerParameterf(GLuint sampler, GLenum pname, GLfloat param) { HLF::GL::_glSamplerParameterf(sampler, pname, param); }
inline void glSamplerParameterfv(GLuint sampler, GLenum pname, const GLfloat * param) { HLF::GL::_glSamplerParameterfv(sampler, pname, param); }
inline void glSamplerParameteri(GLuint sampler, GLenum pname, GLint param) { HLF::GL::_glSamplerParameteri(sampler, pname, param); }
inline void glSamplerParameteriv(GLuint sampler, GLenum pname, const GLint * param) { HLF::GL::_glSamplerParameteriv(sampler, pname, param); }
inline void glScaled(GLdouble x, GLdouble y, GLdouble z) { HLF::GL::_glScaled(x, y, z); }
inline void glScalef(GLfloat x, GLfloat y, GLfloat z) { HLF::GL::_glScalef(x, y, z); }
inline void glScissor(GLint x, GLint y, GLsizei width, GLsizei height) { HLF::GL::_glScissor(x, y, width, height); }
inline void glScissorArrayv(GLuint first, GLsizei count, const GLint * v) { HLF::GL::_glScissorArrayv(first, count, v); }
inline void glScissorIndexed(GLuint index, GLint left, GLint bottom, GLsizei width, GLsizei height) { HLF::GL::_glScissorIndexed(index, left, bottom, width, height); }
inline void glScissorIndexedv(GLuint index, const GLint * v) { HLF::GL::_glScissorIndexedv(index, v); }
inline void glSecondaryColor3b(GLbyte red, GLbyte green, GLbyte blue) { HLF::GL::_glSecondaryColor3b(red, green, blue); }
inline void glSecondaryColor3bv(const GLbyte * v) { HLF::GL::_glSecondaryColor3bv(v); }
inline void glSecondaryColor3d(GLdouble red, GLdouble green, GLdouble blue) { HLF::GL::_glSecondaryColor3d(red, green, blue); }
inline void glSecondaryColor3dv(const GLdouble * v) { HLF::GL::_glSecondaryColor3dv(v); }
inline void glSecondaryColor3f(GLfloat red, GLfloat green, GLfloat blue) { HLF::GL::_glSecondaryColor3f(red, green, blue); }
inline void glSecondaryColor3fv(const GLfloat * v) { HLF::GL::_glSecondaryColor3fv(v); }
inline void glSecondaryColor3i(GLint red, GLint green, GLint blue) { HLF::GL::_glSecondaryColor3i(red, green, blue); }
inline void glSecondaryColor3iv(const GLint * v) { HLF::GL::_glSecondaryColor3iv(v); }
inline void glSecondaryColor3s(GLshort red, GLshort green, GLshort blue) { HLF::GL::_glSecondaryColor3s(red, green, blue); }
inline void glSecondaryColor3sv(const GLshort * v) { HLF::GL::_glSecondaryColor3sv(v); }
inline void glSecondaryColor3ub(GLubyte red, GLubyte green, GLubyte blue) { HLF::GL::_glSecondaryColor3ub(red, green, blue); }
inline void glSecondaryColor3ubv(const GLubyte * v) { HLF::GL::_glSecondaryColor3ubv(v); }
inline void glSecondaryColor3ui(GLuint red, GLuint green, GLuint blue) { HLF::GL::_glSecondaryColor3ui(red, green, blue); }
inline void glSecondaryColor3uiv(const GLuint * v) { HLF::GL::_glSecondaryColor3uiv(v); }
inline void glSecondaryColor3us(GLushort red, GLushort green, GLushort blue) { HLF::GL::_glSecondaryColor3us(red, green, blue); }
inline void glSecondaryColor3usv(const GLushort * v) { HLF::GL::_glSecondaryColor3usv(v); }
inline void glSecondaryColorP3ui(GLenum type, GLuint color) { HLF::GL::_glSecondaryColorP3ui(type, color); }
inline void glSecondaryColorP3uiv(GLenum type, const GLuint * color) { HLF::GL::_glSecondaryColorP3uiv(type, color); }
inline void glSecondaryColorPointer(GLint size, GLenum type, GLsizei stride, const void * pointer) { HLF::GL::_glSecondaryColorPointer(size, type, stride, pointer); }
inline void glSelectBuffer(GLsizei size, GLuint * buffer) { HLF::GL::_glSelectBuffer(size, buffer); }
inline void glShadeModel(GLenum mode) { HLF::GL::_glShadeModel(mode); }
inline void glShaderBinary(GLsizei count, const GLuint * shaders, GLenum binaryFormat, const void * binary, GLsizei length) { HLF::GL::_glShaderBinary(count, shaders, binaryFormat, binary, length); }
inline void glShaderSource(GLuint shader, GLsizei count, const GLchar *const* string, const GLint * length) { HLF::GL::_glShaderSource(shader, count, string, length); }
inline void glShaderStorageBlockBinding(GLuint program, GLuint storageBlockIndex, GLuint storageBlockBinding) { HLF::GL::_glShaderStorageBlockBinding(program, storageBlockIndex, storageBlockBinding); }
inline void glSpecializeShader(GLuint shader, const GLchar * pEntryPoint, GLuint numSpecializationConstants, const GLuint * pConstantIndex, const GLuint * pConstantValue) { HLF::GL::_glSpecializeShader(shader, pEntryPoint, numSpecializationConstants, pConstantIndex, pConstantValue); }
inline void glStencilFunc(GLenum func, GLint ref, GLuint mask) { HLF::GL::_glStencilFunc(func, ref, mask); }
inline void glStencilFuncSeparate(GLenum face, GLenum func, GLint ref, GLuint mask) { HLF::GL::_glStencilFuncSeparate(face, func, ref, mask); }
inline void glStencilMask(GLuint mask) { HLF::GL::_glStencilMask(mask); }
inline void glStencilMaskSeparate(GLenum face, GLuint mask) { HLF::GL::_glStencilMaskSeparate(face, mask); }
inline void glStencilOp(GLenum fail, GLenum zfail, GLenum zpass) { HLF::GL::_glStencilOp(fail, zfail, zpass); }
inline void glStencilOpSeparate(GLenum face, GLenum sfail, GLenum dpfail, GLenum dppass) { HLF::GL::_glStencilOpSeparate(face, sfail, dpfail, dppass); }
inline void glTexBuffer(GLenum target, GLenum internalformat, GLuint buffer) { HLF::GL::_glTexBuffer(target, internalformat, buffer); }
inline void glTexBufferRange(GLenum target, GLenum internalformat, GLuint buffer, GLintptr offset, GLsizeiptr size) { HLF::GL::_glTexBufferRange(target, internalformat, buffer, offset, size); }
inline void glTexCoord1d(GLdouble s) { HLF::GL::_glTexCoord1d(s); }
inline void glTexCoord1dv(const GLdouble * v) { HLF::GL::_glTexCoord1dv(v); }
inline void glTexCoord1f(GLfloat s) { HLF::GL::_glTexCoord1f(s); }
inline void glTexCoord1fv(const GLfloat * v) { HLF::GL::_glTexCoord1fv(v); }
inline void glTexCoord1i(GLint s) { HLF::GL::_glTexCoord1i(s); }
inline void glTexCoord1iv(const GLint * v) { HLF::GL::_glTexCoord1iv(v); }
inline void glTexCoord1s(GLshort s) { HLF::GL::_glTexCoord1s(s); }
inline void glTexCoord1sv(const GLshort * v) { HLF::GL::_glTexCoord1sv(v); }
inline void glTexCoord2d(GLdouble s, GLdouble t) { HLF::GL::_glTexCoord2d(s, t); }
inline void glTexCoord2dv(const GLdouble * v) { HLF::GL::_glTexCoord2dv(v); }
inline void glTexCoord2f(GLfloat s, GLfloat t) { HLF::GL::_glTexCoord2f(s, t); }
inline void glTexCoord2fv(const GLfloat * v) { HLF::GL::_glTexCoord2fv(v); }
inline void glTexCoord2i(GLint s, GLint t) { HLF::GL::_glTexCoord2i(s, t); }
inline void glTexCoord2iv(const GLint * v) { HLF::GL::_glTexCoord2iv(v); }
inline void glTexCoord2s(GLshort s, GLshort t) { HLF::GL::_glTexCoord2s(s, t); }
inline void glTexCoord2sv(const GLshort * v) { HLF::GL::_glTexCoord2sv(v); }
inline void glTexCoord3d(GLdouble s, GLdouble t, GLdouble r) { HLF::GL::_glTexCoord3d(s, t, r); }
inline void glTexCoord3dv(const GLdouble * v) { HLF::GL::_glTexCoord3dv(v); }
inline void glTexCoord3f(GLfloat s, GLfloat t, GLfloat r) { HLF::GL::_glTexCoord3f(s, t, r); }
inline void glTexCoord3fv(const GLfloat * v) { HLF::GL::_glTexCoord3fv(v); }
inline void glTexCoord3i(GLint s, GLint t, GLint r) { HLF::GL::_glTexCoord3i(s, t, r); }
inline void glTexCoord3iv(const GLint * v) { HLF::GL::_glTexCoord3iv(v); }
inline void glTexCoord3s(GLshort s, GLshort t, GLshort r) { HLF::GL::_glTexCoord3s(s, t, r); }
inline void glTexCoord3sv(const GLshort * v) { HLF::GL::_glTexCoord3sv(v); }
inline void glTexCoord4d(GLdouble s, GLdouble t, GLdouble r, GLdouble q) { HLF::GL::_glTexCoord4d(s, t, r, q); }
inline void glTexCoord4dv(const GLdouble * v) { HLF::GL::_glTexCoord4dv(v); }
inline void glTexCoord4f(GLfloat s, GLfloat t, GLfloat r, GLfloat q) { HLF::GL::_glTexCoord4f(s, t, r, q); }
inline void glTexCoord4fv(const GLfloat * v) { HLF::GL::_glTexCoord4fv(v); }
inline void glTexCoord4i(GLint s, GLint t, GLint r, GLint q) { HLF::GL::_glTexCoord4i(s, t, r, q); }
inline void glTexCoord4iv(const GLint * v) { HLF::GL::_glTexCoord4iv(v); }
inline void glTexCoord4s(GLshort s, GLshort t, GLshort r, GLshort q) { HLF::GL::_glTexCoord4s(s, t, r, q); }
inline void glTexCoord4sv(const GLshort * v) { HLF::GL::_glTexCoord4sv(v); }
inline void glTexCoordP1ui(GLenum type, GLuint coords) { HLF::GL::_glTexCoordP1ui(type, coords); }
inline void glTexCoordP1uiv(GLenum type, const GLuint * coords) { HLF::GL::_glTexCoordP1uiv(type, coords); }
inline void glTexCoordP2ui(GLenum type, GLuint coords) { HLF::GL::_glTexCoordP2ui(type, coords); }
inline void glTexCoordP2uiv(GLenum type, const GLuint * coords) { HLF::GL::_glTexCoordP2uiv(type, coords); }
inline void glTexCoordP3ui(GLenum type, GLuint coords) { HLF::GL::_glTexCoordP3ui(type, coords); }
inline void glTexCoordP3uiv(GLenum type, const GLuint * coords) { HLF::GL::_glTexCoordP3uiv(type, coords); }
inline void glTexCoordP4ui(GLenum type, GLuint coords) { HLF::GL::_glTexCoordP4ui(type, coords); }
inline void glTexCoordP4uiv(GLenum type, const GLuint * coords) { HLF::GL::_glTexCoordP4uiv(type, coords); }
inline void glTexCoordPointer(GLint size, GLenum type, GLsizei stride, const void * pointer) { HLF::GL::_glTexCoordPointer(size, type, stride, pointer); }
inline void glTexEnvf(GLenum target, GLenum pname, GLfloat param) { HLF::GL::_glTexEnvf(target, pname, param); }
inline void glTexEnvfv(GLenum target, GLenum pname, const GLfloat * params) { HLF::GL::_glTexEnvfv(target, pname, params); }
inline void glTexEnvi(GLenum target, GLenum pname, GLint param) { HLF::GL::_glTexEnvi(target, pname, param); }
inline void glTexEnviv(GLenum target, GLenum pname, const GLint * params) { HLF::GL::_glTexEnviv(target, pname, params); }
inline void glTexGend(GLenum coord, GLenum pname, GLdouble param) { HLF::GL::_glTexGend(coord, pname, param); }
inline void glTexGendv(GLenum coord, GLenum pname, const GLdouble * params) { HLF::GL::_glTexGendv(coord, pname, params); }
inline void glTexGenf(GLenum coord, GLenum pname, GLfloat param) { HLF::GL::_glTexGenf(coord, pname, param); }
inline void glTexGenfv(GLenum coord, GLenum pname, const GLfloat * params) { HLF::GL::_glTexGenfv(coord, pname, params); }
inline void glTexGeni(GLenum coord, GLenum pname, GLint param) { HLF::GL::_glTexGeni(coord, pname, param); }
inline void glTexGeniv(GLenum coord, GLenum pname, const GLint * params) { HLF::GL::_glTexGeniv(coord, pname, params); }
inline void glTexImage1D(GLenum target, GLint level, GLint internalformat, GLsizei width, GLint border, GLenum format, GLenum type, const void * pixels) { HLF::GL::_glTexImage1D(target, level, internalformat, width, border, format, type, pixels); }
inline void glTexImage2D(GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum type, const void * pixels) { HLF::GL::_glTexImage2D(target, level, internalformat, width, height, border, format, type, pixels); }
inline void glTexImage2DMultisample(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLboolean fixedsamplelocations) { HLF::GL::_glTexImage2DMultisample(target, samples, internalformat, width, height, fixedsamplelocations); }
inline void glTexImage3D(GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum type, const void * pixels) { HLF::GL::_glTexImage3D(target, level, internalformat, width, height, depth, border, format, type, pixels); }
inline void glTexImage3DMultisample(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedsamplelocations) { HLF::GL::_glTexImage3DMultisample(target, samples, internalformat, width, height, depth, fixedsamplelocations); }
inline void glTexParameterIiv(GLenum target, GLenum pname, const GLint * params) { HLF::GL::_glTexParameterIiv(target, pname, params); }
inline void glTexParameterIuiv(GLenum target, GLenum pname, const GLuint * params) { HLF::GL::_glTexParameterIuiv(target, pname, params); }
inline void glTexParameterf(GLenum target, GLenum pname, GLfloat param) { HLF::GL::_glTexParameterf(target, pname, param); }
inline void glTexParameterfv(GLenum target, GLenum pname, const GLfloat * params) { HLF::GL::_glTexParameterfv(target, pname, params); }
inline void glTexParameteri(GLenum target, GLenum pname, GLint param) { HLF::GL::_glTexParameteri(target, pname, param); }
inline void glTexParameteriv(GLenum target, GLenum pname, const GLint * params) { HLF::GL::_glTexParameteriv(target, pname, params); }
inline void glTexStorage1D(GLenum target, GLsizei levels, GLenum internalformat, GLsizei width) { HLF::GL::_glTexStorage1D(target, levels, internalformat, width); }
inline void glTexStorage2D(GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height) { HLF::GL::_glTexStorage2D(target, levels, internalformat, width, height); }
inline void glTexStorage2DMultisample(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLboolean fixedsamplelocations) { HLF::GL::_glTexStorage2DMultisample(target, samples, internalformat, width, height, fixedsamplelocations); }
inline void glTexStorage3D(GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth) { HLF::GL::_glTexStorage3D(target, levels, internalformat, width, height, depth); }
inline void glTexStorage3DMultisample(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedsamplelocations) { HLF::GL::_glTexStorage3DMultisample(target, samples, internalformat, width, height, depth, fixedsamplelocations); }
inline void glTexSubImage1D(GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLenum type, const void * pixels) { HLF::GL::_glTexSubImage1D(target, level, xoffset, width, format, type, pixels); }
inline void glTexSubImage2D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const void * pixels) { HLF::GL::_glTexSubImage2D(target, level, xoffset, yoffset, width, height, format, type, pixels); }
inline void glTexSubImage3D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const void * pixels) { HLF::GL::_glTexSubImage3D(target, level, xoffset, yoffset, zoffset, width, height, depth, format, type, pixels); }
inline void glTextureBarrier(void) { HLF::GL::_glTextureBarrier(); }
inline void glTextureBuffer(GLuint texture, GLenum internalformat, GLuint buffer) { HLF::GL::_glTextureBuffer(texture, internalformat, buffer); }
inline void glTextureBufferRange(GLuint texture, GLenum internalformat, GLuint buffer, GLintptr offset, GLsizeiptr size) { HLF::GL::_glTextureBufferRange(texture, internalformat, buffer, offset, size); }
inline void glTextureParameterIiv(GLuint texture, GLenum pname, const GLint * params) { HLF::GL::_glTextureParameterIiv(texture, pname, params); }
inline void glTextureParameterIuiv(GLuint texture, GLenum pname, const GLuint * params) { HLF::GL::_glTextureParameterIuiv(texture, pname, params); }
inline void glTextureParameterf(GLuint texture, GLenum pname, GLfloat param) { HLF::GL::_glTextureParameterf(texture, pname, param); }
inline void glTextureParameterfv(GLuint texture, GLenum pname, const GLfloat * param) { HLF::GL::_glTextureParameterfv(texture, pname, param); }
inline void glTextureParameteri(GLuint texture, GLenum pname, GLint param) { HLF::GL::_glTextureParameteri(texture, pname, param); }
inline void glTextureParameteriv(GLuint texture, GLenum pname, const GLint * param) { HLF::GL::_glTextureParameteriv(texture, pname, param); }
inline void glTextureStorage1D(GLuint texture, GLsizei levels, GLenum internalformat, GLsizei width) { HLF::GL::_glTextureStorage1D(texture, levels, internalformat, width); }
inline void glTextureStorage2D(GLuint texture, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height) { HLF::GL::_glTextureStorage2D(texture, levels, internalformat, width, height); }
inline void glTextureStorage2DMultisample(GLuint texture, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLboolean fixedsamplelocations) { HLF::GL::_glTextureStorage2DMultisample(texture, samples, internalformat, width, height, fixedsamplelocations); }
inline void glTextureStorage3D(GLuint texture, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth) { HLF::GL::_glTextureStorage3D(texture, levels, internalformat, width, height, depth); }
inline void glTextureStorage3DMultisample(GLuint texture, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedsamplelocations) { HLF::GL::_glTextureStorage3DMultisample(texture, samples, internalformat, width, height, depth, fixedsamplelocations); }
inline void glTextureSubImage1D(GLuint texture, GLint level, GLint xoffset, GLsizei width, GLenum format, GLenum type, const void * pixels) { HLF::GL::_glTextureSubImage1D(texture, level, xoffset, width, format, type, pixels); }
inline void glTextureSubImage2D(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const void * pixels) { HLF::GL::_glTextureSubImage2D(texture, level, xoffset, yoffset, width, height, format, type, pixels); }
inline void glTextureSubImage3D(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const void * pixels) { HLF::GL::_glTextureSubImage3D(texture, level, xoffset, yoffset, zoffset, width, height, depth, format, type, pixels); }
inline void glTextureView(GLuint texture, GLenum target, GLuint origtexture, GLenum internalformat, GLuint minlevel, GLuint numlevels, GLuint minlayer, GLuint numlayers) { HLF::GL::_glTextureView(texture, target, origtexture, internalformat, minlevel, numlevels, minlayer, numlayers); }
inline void glTransformFeedbackBufferBase(GLuint xfb, GLuint index, GLuint buffer) { HLF::GL::_glTransformFeedbackBufferBase(xfb, index, buffer); }
inline void glTransformFeedbackBufferRange(GLuint xfb, GLuint index, GLuint buffer, GLintptr offset, GLsizeiptr size) { HLF::GL::_glTransformFeedbackBufferRange(xfb, index, buffer, offset, size); }
inline void glTransformFeedbackVaryings(GLuint program, GLsizei count, const GLchar *const* varyings, GLenum bufferMode) { HLF::GL::_glTransformFeedbackVaryings(program, count, varyings, bufferMode); }
inline void glTranslated(GLdouble x, GLdouble y, GLdouble z) { HLF::GL::_glTranslated(x, y, z); }
inline void glTranslatef(GLfloat x, GLfloat y, GLfloat z) { HLF::GL::_glTranslatef(x, y, z); }
inline void glUniform1d(GLint location, GLdouble x) { HLF::GL::_glUniform1d(location, x); }
inline void glUniform1dv(GLint location, GLsizei count, const GLdouble * value) { HLF::GL::_glUniform1dv(location, count, value); }
inline void glUniform1f(GLint location, GLfloat v0) { HLF::GL::_glUniform1f(location, v0); }
inline void glUniform1fv(GLint location, GLsizei count, const GLfloat * value) { HLF::GL::_glUniform1fv(location, count, value); }
inline void glUniform1i(GLint location, GLint v0) { HLF::GL::_glUniform1i(location, v0); }
inline void glUniform1iv(GLint location, GLsizei count, const GLint * value) { HLF::GL::_glUniform1iv(location, count, value); }
inline void glUniform1ui(GLint location, GLuint v0) { HLF::GL::_glUniform1ui(location, v0); }
inline void glUniform1uiv(GLint location, GLsizei count, const GLuint * value) { HLF::GL::_glUniform1uiv(location, count, value); }
inline void glUniform2d(GLint location, GLdouble x, GLdouble y) { HLF::GL::_glUniform2d(location, x, y); }
inline void glUniform2dv(GLint location, GLsizei count, const GLdouble * value) { HLF::GL::_glUniform2dv(location, count, value); }
inline void glUniform2f(GLint location, GLfloat v0, GLfloat v1) { HLF::GL::_glUniform2f(location, v0, v1); }
inline void glUniform2fv(GLint location, GLsizei count, const GLfloat * value) { HLF::GL::_glUniform2fv(location, count, value); }
inline void glUniform2i(GLint location, GLint v0, GLint v1) { HLF::GL::_glUniform2i(location, v0, v1); }
inline void glUniform2iv(GLint location, GLsizei count, const GLint * value) { HLF::GL::_glUniform2iv(location, count, value); }
inline void glUniform2ui(GLint location, GLuint v0, GLuint v1) { HLF::GL::_glUniform2ui(location, v0, v1); }
inline void glUniform2uiv(GLint location, GLsizei count, const GLuint * value) { HLF::GL::_glUniform2uiv(location, count, value); }
inline void glUniform3d(GLint location, GLdouble x, GLdouble y, GLdouble z) { HLF::GL::_glUniform3d(location, x, y, z); }
inline void glUniform3dv(GLint location, GLsizei count, const GLdouble * value) { HLF::GL::_glUniform3dv(location, count, value); }
inline void glUniform3f(GLint location, GLfloat v0, GLfloat v1, GLfloat v2) { HLF::GL::_glUniform3f(location, v0, v1, v2); }
inline void glUniform3fv(GLint location, GLsizei count, const GLfloat * value) { HLF::GL::_glUniform3fv(location, count, value); }
inline void glUniform3i(GLint location, GLint v0, GLint v1, GLint v2) { HLF::GL::_glUniform3i(location, v0, v1, v2); }
inline void glUniform3iv(GLint location, GLsizei count, const GLint * value) { HLF::GL::_glUniform3iv(location, count, value); }
inline void glUniform3ui(GLint location, GLuint v0, GLuint v1, GLuint v2) { HLF::GL::_glUniform3ui(location, v0, v1, v2); }
inline void glUniform3uiv(GLint location, GLsizei count, const GLuint * value) { HLF::GL::_glUniform3uiv(location, count, value); }
inline void glUniform4d(GLint location, GLdouble x, GLdouble y, GLdouble z, GLdouble w) { HLF::GL::_glUniform4d(location, x, y, z, w); }
inline void glUniform4dv(GLint location, GLsizei count, const GLdouble * value) { HLF::GL::_glUniform4dv(location, count, value); }
inline void glUniform4f(GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3) { HLF::GL::_glUniform4f(location, v0, v1, v2, v3); }
inline void glUniform4fv(GLint location, GLsizei count, const GLfloat * value) { HLF::GL::_glUniform4fv(location, count, value); }
inline void glUniform4i(GLint location, GLint v0, GLint v1, GLint v2, GLint v3) { HLF::GL::_glUniform4i(location, v0, v1, v2, v3); }
inline void glUniform4iv(GLint location, GLsizei count, const GLint * value) { HLF::GL::_glUniform4iv(location, count, value); }
inline void glUniform4ui(GLint location, GLuint v0, GLuint v1, GLuint v2, GLuint v3) { HLF::GL::_glUniform4ui(location, v0, v1, v2, v3); }
inline void glUniform4uiv(GLint location, GLsizei count, const GLuint * value) { HLF::GL::_glUniform4uiv(location, count, value); }
inline void glUniformBlockBinding(GLuint program, GLuint uniformBlockIndex, GLuint uniformBlockBinding) { HLF::GL::_glUniformBlockBinding(program, uniformBlockIndex, uniformBlockBinding); }
inline void glUniformMatrix2dv(GLint location, GLsizei count, GLboolean transpose, const GLdouble * value) { HLF::GL::_glUniformMatrix2dv(location, count, transpose, value); }
inline void glUniformMatrix2fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value) { HLF::GL::_glUniformMatrix2fv(location, count, transpose, value); }
inline void glUniformMatrix2x3dv(GLint location, GLsizei count, GLboolean transpose, const GLdouble * value) { HLF::GL::_glUniformMatrix2x3dv(location, count, transpose, value); }
inline void glUniformMatrix2x3fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value) { HLF::GL::_glUniformMatrix2x3fv(location, count, transpose, value); }
inline void glUniformMatrix2x4dv(GLint location, GLsizei count, GLboolean transpose, const GLdouble * value) { HLF::GL::_glUniformMatrix2x4dv(location, count, transpose, value); }
inline void glUniformMatrix2x4fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value) { HLF::GL::_glUniformMatrix2x4fv(location, count, transpose, value); }
inline void glUniformMatrix3dv(GLint location, GLsizei count, GLboolean transpose, const GLdouble * value) { HLF::GL::_glUniformMatrix3dv(location, count, transpose, value); }
inline void glUniformMatrix3fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value) { HLF::GL::_glUniformMatrix3fv(location, count, transpose, value); }
inline void glUniformMatrix3x2dv(GLint location, GLsizei count, GLboolean transpose, const GLdouble * value) { HLF::GL::_glUniformMatrix3x2dv(location, count, transpose, value); }
inline void glUniformMatrix3x2fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value) { HLF::GL::_glUniformMatrix3x2fv(location, count, transpose, value); }
inline void glUniformMatrix3x4dv(GLint location, GLsizei count, GLboolean transpose, const GLdouble * value) { HLF::GL::_glUniformMatrix3x4dv(location, count, transpose, value); }
inline void glUniformMatrix3x4fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value) { HLF::GL::_glUniformMatrix3x4fv(location, count, transpose, value); }
inline void glUniformMatrix4dv(GLint location, GLsizei count, GLboolean transpose, const GLdouble * value) { HLF::GL::_glUniformMatrix4dv(location, count, transpose, value); }
inline void glUniformMatrix4fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value) { HLF::GL::_glUniformMatrix4fv(location, count, transpose, value); }
inline void glUniformMatrix4x2dv(GLint location, GLsizei count, GLboolean transpose, const GLdouble * value) { HLF::GL::_glUniformMatrix4x2dv(location, count, transpose, value); }
inline void glUniformMatrix4x2fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value) { HLF::GL::_glUniformMatrix4x2fv(location, count, transpose, value); }
inline void glUniformMatrix4x3dv(GLint location, GLsizei count, GLboolean transpose, const GLdouble * value) { HLF::GL::_glUniformMatrix4x3dv(location, count, transpose, value); }
inline void glUniformMatrix4x3fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value) { HLF::GL::_glUniformMatrix4x3fv(location, count, transpose, value); }
inline void glUniformSubroutinesuiv(GLenum shadertype, GLsizei count, const GLuint * indices) { HLF::GL::_glUniformSubroutinesuiv(shadertype, count, indices); }
inline GLboolean glUnmapBuffer(GLenum target) { return HLF::GL::_glUnmapBuffer(target); }
inline GLboolean glUnmapNamedBuffer(GLuint buffer) { return HLF::GL::_glUnmapNamedBuffer(buffer); }
inline void glUseProgram(GLuint program) { HLF::GL::_glUseProgram(program); }
inline void glUseProgramStages(GLuint pipeline, GLbitfield stages, GLuint program) { HLF::GL::_glUseProgramStages(pipeline, stages, program); }
inline void glValidateProgram(GLuint program) { HLF::GL::_glValidateProgram(program); }
inline void glValidateProgramPipeline(GLuint pipeline) { HLF::GL::_glValidateProgramPipeline(pipeline); }
inline void glVertex2d(GLdouble x, GLdouble y) { HLF::GL::_glVertex2d(x, y); }
inline void glVertex2dv(const GLdouble * v) { HLF::GL::_glVertex2dv(v); }
inline void glVertex2f(GLfloat x, GLfloat y) { HLF::GL::_glVertex2f(x, y); }
inline void glVertex2fv(const GLfloat * v) { HLF::GL::_glVertex2fv(v); }
inline void glVertex2i(GLint x, GLint y) { HLF::GL::_glVertex2i(x, y); }
inline void glVertex2iv(const GLint * v) { HLF::GL::_glVertex2iv(v); }
inline void glVertex2s(GLshort x, GLshort y) { HLF::GL::_glVertex2s(x, y); }
inline void glVertex2sv(const GLshort * v) { HLF::GL::_glVertex2sv(v); }
inline void glVertex3d(GLdouble x, GLdouble y, GLdouble z) { HLF::GL::_glVertex3d(x, y, z); }
inline void glVertex3dv(const GLdouble * v) { HLF::GL::_glVertex3dv(v); }
inline void glVertex3f(GLfloat x, GLfloat y, GLfloat z) { HLF::GL::_glVertex3f(x, y, z); }
inline void glVertex3fv(const GLfloat * v) { HLF::GL::_glVertex3fv(v); }
inline void glVertex3i(GLint x, GLint y, GLint z) { HLF::GL::_glVertex3i(x, y, z); }
inline void glVertex3iv(const GLint * v) { HLF::GL::_glVertex3iv(v); }
inline void glVertex3s(GLshort x, GLshort y, GLshort z) { HLF::GL::_glVertex3s(x, y, z); }
inline void glVertex3sv(const GLshort * v) { HLF::GL::_glVertex3sv(v); }
inline void glVertex4d(GLdouble x, GLdouble y, GLdouble z, GLdouble w) { HLF::GL::_glVertex4d(x, y, z, w); }
inline void glVertex4dv(const GLdouble * v) { HLF::GL::_glVertex4dv(v); }
inline void glVertex4f(GLfloat x, GLfloat y, GLfloat z, GLfloat w) { HLF::GL::_glVertex4f(x, y, z, w); }
inline void glVertex4fv(const GLfloat * v) { HLF::GL::_glVertex4fv(v); }
inline void glVertex4i(GLint x, GLint y, GLint z, GLint w) { HLF::GL::_glVertex4i(x, y, z, w); }
inline void glVertex4iv(const GLint * v) { HLF::GL::_glVertex4iv(v); }
inline void glVertex4s(GLshort x, GLshort y, GLshort z, GLshort w) { HLF::GL::_glVertex4s(x, y, z, w); }
inline void glVertex4sv(const GLshort * v) { HLF::GL::_glVertex4sv(v); }
inline void glVertexArrayAttribBinding(GLuint vaobj, GLuint attribindex, GLuint bindingindex) { HLF::GL::_glVertexArrayAttribBinding(vaobj, attribindex, bindingindex); }
inline void glVertexArrayAttribFormat(GLuint vaobj, GLuint attribindex, GLint size, GLenum type, GLboolean normalized, GLuint relativeoffset) { HLF::GL::_glVertexArrayAttribFormat(vaobj, attribindex, size, type, normalized, relativeoffset); }
inline void glVertexArrayAttribIFormat(GLuint vaobj, GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset) { HLF::GL::_glVertexArrayAttribIFormat(vaobj, attribindex, size, type, relativeoffset); }
inline void glVertexArrayAttribLFormat(GLuint vaobj, GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset) { HLF::GL::_glVertexArrayAttribLFormat(vaobj, attribindex, size, type, relativeoffset); }
inline void glVertexArrayBindingDivisor(GLuint vaobj, GLuint bindingindex, GLuint divisor) { HLF::GL::_glVertexArrayBindingDivisor(vaobj, bindingindex, divisor); }
inline void glVertexArrayElementBuffer(GLuint vaobj, GLuint buffer) { HLF::GL::_glVertexArrayElementBuffer(vaobj, buffer); }
inline void glVertexArrayVertexBuffer(GLuint vaobj, GLuint bindingindex, GLuint buffer, GLintptr offset, GLsizei stride) { HLF::GL::_glVertexArrayVertexBuffer(vaobj, bindingindex, buffer, offset, stride); }
inline void glVertexArrayVertexBuffers(GLuint vaobj, GLuint first, GLsizei count, const GLuint * buffers, const GLintptr * offsets, const GLsizei * strides) { HLF::GL::_glVertexArrayVertexBuffers(vaobj, first, count, buffers, offsets, strides); }
inline void glVertexAttrib1d(GLuint index, GLdouble x) { HLF::GL::_glVertexAttrib1d(index, x); }
inline void glVertexAttrib1dv(GLuint index, const GLdouble * v) { HLF::GL::_glVertexAttrib1dv(index, v); }
inline void glVertexAttrib1f(GLuint index, GLfloat x) { HLF::GL::_glVertexAttrib1f(index, x); }
inline void glVertexAttrib1fv(GLuint index, const GLfloat * v) { HLF::GL::_glVertexAttrib1fv(index, v); }
inline void glVertexAttrib1s(GLuint index, GLshort x) { HLF::GL::_glVertexAttrib1s(index, x); }
inline void glVertexAttrib1sv(GLuint index, const GLshort * v) { HLF::GL::_glVertexAttrib1sv(index, v); }
inline void glVertexAttrib2d(GLuint index, GLdouble x, GLdouble y) { HLF::GL::_glVertexAttrib2d(index, x, y); }
inline void glVertexAttrib2dv(GLuint index, const GLdouble * v) { HLF::GL::_glVertexAttrib2dv(index, v); }
inline void glVertexAttrib2f(GLuint index, GLfloat x, GLfloat y) { HLF::GL::_glVertexAttrib2f(index, x, y); }
inline void glVertexAttrib2fv(GLuint index, const GLfloat * v) { HLF::GL::_glVertexAttrib2fv(index, v); }
inline void glVertexAttrib2s(GLuint index, GLshort x, GLshort y) { HLF::GL::_glVertexAttrib2s(index, x, y); }
inline void glVertexAttrib2sv(GLuint index, const GLshort * v) { HLF::GL::_glVertexAttrib2sv(index, v); }
inline void glVertexAttrib3d(GLuint index, GLdouble x, GLdouble y, GLdouble z) { HLF::GL::_glVertexAttrib3d(index, x, y, z); }
inline void glVertexAttrib3dv(GLuint index, const GLdouble * v) { HLF::GL::_glVertexAttrib3dv(index, v); }
inline void glVertexAttrib3f(GLuint index, GLfloat x, GLfloat y, GLfloat z) { HLF::GL::_glVertexAttrib3f(index, x, y, z); }
inline void glVertexAttrib3fv(GLuint index, const GLfloat * v) { HLF::GL::_glVertexAttrib3fv(index, v); }
inline void glVertexAttrib3s(GLuint index, GLshort x, GLshort y, GLshort z) { HLF::GL::_glVertexAttrib3s(index, x, y, z); }
inline void glVertexAttrib3sv(GLuint index, const GLshort * v) { HLF::GL::_glVertexAttrib3sv(index, v); }
inline void glVertexAttrib4Nbv(GLuint index, const GLbyte * v) { HLF::GL::_glVertexAttrib4Nbv(index, v); }
inline void glVertexAttrib4Niv(GLuint index, const GLint * v) { HLF::GL::_glVertexAttrib4Niv(index, v); }
inline void glVertexAttrib4Nsv(GLuint index, const GLshort * v) { HLF::GL::_glVertexAttrib4Nsv(index, v); }
inline void glVertexAttrib4Nub(GLuint index, GLubyte x, GLubyte y, GLubyte z, GLubyte w) { HLF::GL::_glVertexAttrib4Nub(index, x, y, z, w); }
inline void glVertexAttrib4Nubv(GLuint index, const GLubyte * v) { HLF::GL::_glVertexAttrib4Nubv(index, v); }
inline void glVertexAttrib4Nuiv(GLuint index, const GLuint * v) { HLF::GL::_glVertexAttrib4Nuiv(index, v); }
inline void glVertexAttrib4Nusv(GLuint index, const GLushort * v) { HLF::GL::_glVertexAttrib4Nusv(index, v); }
inline void glVertexAttrib4bv(GLuint index, const GLbyte * v) { HLF::GL::_glVertexAttrib4bv(index, v); }
inline void glVertexAttrib4d(GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w) { HLF::GL::_glVertexAttrib4d(index, x, y, z, w); }
inline void glVertexAttrib4dv(GLuint index, const GLdouble * v) { HLF::GL::_glVertexAttrib4dv(index, v); }
inline void glVertexAttrib4f(GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w) { HLF::GL::_glVertexAttrib4f(index, x, y, z, w); }
inline void glVertexAttrib4fv(GLuint index, const GLfloat * v) { HLF::GL::_glVertexAttrib4fv(index, v); }
inline void glVertexAttrib4iv(GLuint index, const GLint * v) { HLF::GL::_glVertexAttrib4iv(index, v); }
inline void glVertexAttrib4s(GLuint index, GLshort x, GLshort y, GLshort z, GLshort w) { HLF::GL::_glVertexAttrib4s(index, x, y, z, w); }
inline void glVertexAttrib4sv(GLuint index, const GLshort * v) { HLF::GL::_glVertexAttrib4sv(index, v); }
inline void glVertexAttrib4ubv(GLuint index, const GLubyte * v) { HLF::GL::_glVertexAttrib4ubv(index, v); }
inline void glVertexAttrib4uiv(GLuint index, const GLuint * v) { HLF::GL::_glVertexAttrib4uiv(index, v); }
inline void glVertexAttrib4usv(GLuint index, const GLushort * v) { HLF::GL::_glVertexAttrib4usv(index, v); }
inline void glVertexAttribBinding(GLuint attribindex, GLuint bindingindex) { HLF::GL::_glVertexAttribBinding(attribindex, bindingindex); }
inline void glVertexAttribDivisor(GLuint index, GLuint divisor) { HLF::GL::_glVertexAttribDivisor(index, divisor); }
inline void glVertexAttribFormat(GLuint attribindex, GLint size, GLenum type, GLboolean normalized, GLuint relativeoffset) { HLF::GL::_glVertexAttribFormat(attribindex, size, type, normalized, relativeoffset); }
inline void glVertexAttribI1i(GLuint index, GLint x) { HLF::GL::_glVertexAttribI1i(index, x); }
inline void glVertexAttribI1iv(GLuint index, const GLint * v) { HLF::GL::_glVertexAttribI1iv(index, v); }
inline void glVertexAttribI1ui(GLuint index, GLuint x) { HLF::GL::_glVertexAttribI1ui(index, x); }
inline void glVertexAttribI1uiv(GLuint index, const GLuint * v) { HLF::GL::_glVertexAttribI1uiv(index, v); }
inline void glVertexAttribI2i(GLuint index, GLint x, GLint y) { HLF::GL::_glVertexAttribI2i(index, x, y); }
inline void glVertexAttribI2iv(GLuint index, const GLint * v) { HLF::GL::_glVertexAttribI2iv(index, v); }
inline void glVertexAttribI2ui(GLuint index, GLuint x, GLuint y) { HLF::GL::_glVertexAttribI2ui(index, x, y); }
inline void glVertexAttribI2uiv(GLuint index, const GLuint * v) { HLF::GL::_glVertexAttribI2uiv(index, v); }
inline void glVertexAttribI3i(GLuint index, GLint x, GLint y, GLint z) { HLF::GL::_glVertexAttribI3i(index, x, y, z); }
inline void glVertexAttribI3iv(GLuint index, const GLint * v) { HLF::GL::_glVertexAttribI3iv(index, v); }
inline void glVertexAttribI3ui(GLuint index, GLuint x, GLuint y, GLuint z) { HLF::GL::_glVertexAttribI3ui(index, x, y, z); }
inline void glVertexAttribI3uiv(GLuint index, const GLuint * v) { HLF::GL::_glVertexAttribI3uiv(index, v); }
inline void glVertexAttribI4bv(GLuint index, const GLbyte * v) { HLF::GL::_glVertexAttribI4bv(index, v); }
inline void glVertexAttribI4i(GLuint index, GLint x, GLint y, GLint z, GLint w) { HLF::GL::_glVertexAttribI4i(index, x, y, z, w); }
inline void glVertexAttribI4iv(GLuint index, const GLint * v) { HLF::GL::_glVertexAttribI4iv(index, v); }
inline void glVertexAttribI4sv(GLuint index, const GLshort * v) { HLF::GL::_glVertexAttribI4sv(index, v); }
inline void glVertexAttribI4ubv(GLuint index, const GLubyte * v) { HLF::GL::_glVertexAttribI4ubv(index, v); }
inline void glVertexAttribI4ui(GLuint index, GLuint x, GLuint y, GLuint z, GLuint w) { HLF::GL::_glVertexAttribI4ui(index, x, y, z, w); }
inline void glVertexAttribI4uiv(GLuint index, const GLuint * v) { HLF::GL::_glVertexAttribI4uiv(index, v); }
inline void glVertexAttribI4usv(GLuint index, const GLushort * v) { HLF::GL::_glVertexAttribI4usv(index, v); }
inline void glVertexAttribIFormat(GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset) { HLF::GL::_glVertexAttribIFormat(attribindex, size, type, relativeoffset); }
inline void glVertexAttribIPointer(GLuint index, GLint size, GLenum type, GLsizei stride, const void * pointer) { HLF::GL::_glVertexAttribIPointer(index, size, type, stride, pointer); }
inline void glVertexAttribL1d(GLuint index, GLdouble x) { HLF::GL::_glVertexAttribL1d(index, x); }
inline void glVertexAttribL1dv(GLuint index, const GLdouble * v) { HLF::GL::_glVertexAttribL1dv(index, v); }
inline void glVertexAttribL2d(GLuint index, GLdouble x, GLdouble y) { HLF::GL::_glVertexAttribL2d(index, x, y); }
inline void glVertexAttribL2dv(GLuint index, const GLdouble * v) { HLF::GL::_glVertexAttribL2dv(index, v); }
inline void glVertexAttribL3d(GLuint index, GLdouble x, GLdouble y, GLdouble z) { HLF::GL::_glVertexAttribL3d(index, x, y, z); }
inline void glVertexAttribL3dv(GLuint index, const GLdouble * v) { HLF::GL::_glVertexAttribL3dv(index, v); }
inline void glVertexAttribL4d(GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w) { HLF::GL::_glVertexAttribL4d(index, x, y, z, w); }
inline void glVertexAttribL4dv(GLuint index, const GLdouble * v) { HLF::GL::_glVertexAttribL4dv(index, v); }
inline void glVertexAttribLFormat(GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset) { HLF::GL::_glVertexAttribLFormat(attribindex, size, type, relativeoffset); }
inline void glVertexAttribLPointer(GLuint index, GLint size, GLenum type, GLsizei stride, const void * pointer) { HLF::GL::_glVertexAttribLPointer(index, size, type, stride, pointer); }
inline void glVertexAttribP1ui(GLuint index, GLenum type, GLboolean normalized, GLuint value) { HLF::GL::_glVertexAttribP1ui(index, type, normalized, value); }
inline void glVertexAttribP1uiv(GLuint index, GLenum type, GLboolean normalized, const GLuint * value) { HLF::GL::_glVertexAttribP1uiv(index, type, normalized, value); }
inline void glVertexAttribP2ui(GLuint index, GLenum type, GLboolean normalized, GLuint value) { HLF::GL::_glVertexAttribP2ui(index, type, normalized, value); }
inline void glVertexAttribP2uiv(GLuint index, GLenum type, GLboolean normalized, const GLuint * value) { HLF::GL::_glVertexAttribP2uiv(index, type, normalized, value); }
inline void glVertexAttribP3ui(GLuint index, GLenum type, GLboolean normalized, GLuint value) { HLF::GL::_glVertexAttribP3ui(index, type, normalized, value); }
inline void glVertexAttribP3uiv(GLuint index, GLenum type, GLboolean normalized, const GLuint * value) { HLF::GL::_glVertexAttribP3uiv(index, type, normalized, value); }
inline void glVertexAttribP4ui(GLuint index, GLenum type, GLboolean normalized, GLuint value) { HLF::GL::_glVertexAttribP4ui(index, type, normalized, value); }
inline void glVertexAttribP4uiv(GLuint index, GLenum type, GLboolean normalized, const GLuint * value) { HLF::GL::_glVertexAttribP4uiv(index, type, normalized, value); }
inline void glVertexAttribPointer(GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride, const void * pointer) { HLF::GL::_glVertexAttribPointer(index, size, type, normalized, stride, pointer); }
inline void glVertexBindingDivisor(GLuint bindingindex, GLuint divisor) { HLF::GL::_glVertexBindingDivisor(bindingindex, divisor); }
inline void glVertexP2ui(GLenum type, GLuint value) { HLF::GL::_glVertexP2ui(type, value); }
inline void glVertexP2uiv(GLenum type, const GLuint * value) { HLF::GL::_glVertexP2uiv(type, value); }
inline void glVertexP3ui(GLenum type, GLuint value) { HLF::GL::_glVertexP3ui(type, value); }
inline void glVertexP3uiv(GLenum type, const GLuint * value) { HLF::GL::_glVertexP3uiv(type, value); }
inline void glVertexP4ui(GLenum type, GLuint value) { HLF::GL::_glVertexP4ui(type, value); }
inline void glVertexP4uiv(GLenum type, const GLuint * value) { HLF::GL::_glVertexP4uiv(type, value); }
inline void glVertexPointer(GLint size, GLenum type, GLsizei stride, const void * pointer) { HLF::GL::_glVertexPointer(size, type, stride, pointer); }
inline void glViewport(GLint x, GLint y, GLsizei width, GLsizei height) { HLF::GL::_glViewport(x, y, width, height); }
inline void glViewportArrayv(GLuint first, GLsizei count, const GLfloat * v) { HLF::GL::_glViewportArrayv(first, count, v); }
inline void glViewportIndexedf(GLuint index, GLfloat x, GLfloat y, GLfloat w, GLfloat h) { HLF::GL::_glViewportIndexedf(index, x, y, w, h); }
inline void glViewportIndexedfv(GLuint index, const GLfloat * v) { HLF::GL::_glViewportIndexedfv(index, v); }
inline void glWaitSync(GLsync sync, GLbitfield flags, GLuint64 timeout) { HLF::GL::_glWaitSync(sync, flags, timeout); }
inline void glWindowPos2d(GLdouble x, GLdouble y) { HLF::GL::_glWindowPos2d(x, y); }
inline void glWindowPos2dv(const GLdouble * v) { HLF::GL::_glWindowPos2dv(v); }
inline void glWindowPos2f(GLfloat x, GLfloat y) { HLF::GL::_glWindowPos2f(x, y); }
inline void glWindowPos2fv(const GLfloat * v) { HLF::GL::_glWindowPos2fv(v); }
inline void glWindowPos2i(GLint x, GLint y) { HLF::GL::_glWindowPos2i(x, y); }
inline void glWindowPos2iv(const GLint * v) { HLF::GL::_glWindowPos2iv(v); }
inline void glWindowPos2s(GLshort x, GLshort y) { HLF::GL::_glWindowPos2s(x, y); }
inline void glWindowPos2sv(const GLshort * v) { HLF::GL::_glWindowPos2sv(v); }
inline void glWindowPos3d(GLdouble x, GLdouble y, GLdouble z) { HLF::GL::_glWindowPos3d(x, y, z); }
inline void glWindowPos3dv(const GLdouble * v) { HLF::GL::_glWindowPos3dv(v); }
inline void glWindowPos3f(GLfloat x, GLfloat y, GLfloat z) { HLF::GL::_glWindowPos3f(x, y, z); }
inline void glWindowPos3fv(const GLfloat * v) { HLF::GL::_glWindowPos3fv(v); }
inline void glWindowPos3i(GLint x, GLint y, GLint z) { HLF::GL::_glWindowPos3i(x, y, z); }
inline void glWindowPos3iv(const GLint * v) { HLF::GL::_glWindowPos3iv(v); }
inline void glWindowPos3s(GLshort x, GLshort y, GLshort z) { HLF::GL::_glWindowPos3s(x, y, z); }
inline void glWindowPos3sv(const GLshort * v) { HLF::GL::_glWindowPos3sv(v); }

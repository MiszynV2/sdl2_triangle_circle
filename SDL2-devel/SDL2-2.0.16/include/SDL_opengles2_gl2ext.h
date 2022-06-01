#ifndef __gl2ext_h_
#define __gl2ext_h_

/* $Revision: 22801 $ on $Date:: 2013-08-21 03:20:48 -0700 #$ */

#ifdef __cplusplus
extern "C" {
#endif

/*
 * This document is licensed under the SGI Free Software B License Version
 * 2.0. For details, see http://oss.sgi.com/projects/FreeB/ .
 */

#ifndef GL_APIENTRYP
#   define GL_APIENTRYP GL_APIENTRY*
#endif

/* New types shared by several extensions */

#ifndef __gl3_h_
/* These are defined with respect to <inttypes.h> in the
 * Apple extension spec, but they are also used by non-APPLE
 * extensions, and in the Khronos header we use the Khronos
 * portable types in khrplatform.h, which must be defined.
 */
typedef khronos_int64_t GLint64;
typedef khronos_uint64_t GLuint64;
typedef struct __GLsync *GLsync;
#endif


/*------------------------------------------------------------------------*
 * OES extension tokens
 *------------------------------------------------------------------------*/

/* GL_OES_compressed_ETC1_RGB8_texture */
#ifndef GL_OES_compressed_ETC1_RGB8_texture
#define GL_ETC1_RGB8_OES                                        0x8D64
#endif

/* GL_OES_compressed_paletted_texture */
#ifndef GL_OES_compressed_paletted_texture
#define GL_PALETTE4_RGB8_OES                                    0x8B90
#define GL_PALETTE4_RGBA8_OES                                   0x8B91
#define GL_PALETTE4_R5_G6_B5_OES                                0x8B92
#define GL_PALETTE4_RGBA4_OES                                   0x8B93
#define GL_PALETTE4_RGB5_A1_OES                                 0x8B94
#define GL_PALETTE8_RGB8_OES                                    0x8B95
#define GL_PALETTE8_RGBA8_OES                                   0x8B96
#define GL_PALETTE8_R5_G6_B5_OES                                0x8B97
#define GL_PALETTE8_RGBA4_OES                                   0x8B98
#define GL_PALETTE8_RGB5_A1_OES                                 0x8B99
#endif

/* GL_OES_depth24 */
#ifndef GL_OES_depth24
#define GL_DEPTH_COMPONENT24_OES                                0x81A6
#endif

/* GL_OES_depth32 */
#ifndef GL_OES_depth32
#define GL_DEPTH_COMPONENT32_OES                                0x81A7
#endif

/* GL_OES_depth_texture */
/* No new tokens introduced by this extension. */

/* GL_OES_EGL_image */
#ifndef GL_OES_EGL_image
typedef void* GLeglImageOES;
#endif

/* GL_OES_EGL_image_external */
#ifndef GL_OES_EGL_image_external
/* GLeglImageOES defined in GL_OES_EGL_image already. */
#define GL_TEXTURE_EXTERNAL_OES                                 0x8D65
#define GL_SAMPLER_EXTERNAL_OES                                 0x8D66
#define GL_TEXTURE_BINDING_EXTERNAL_OES                         0x8D67
#define GL_REQUIRED_TEXTURE_IMAGE_UNITS_OES                     0x8D68
#endif

/* GL_OES_element_index_uint */
#ifndef GL_OES_element_index_uint
#define GL_UNSIGNED_INT                                         0x1405
#endif

/* GL_OES_get_program_binary */
#ifndef GL_OES_get_program_binary
#define GL_PROGRAM_BINARY_LENGTH_OES                            0x8741
#define GL_NUM_PROGRAM_BINARY_FORMATS_OES                       0x87FE
#define GL_PROGRAM_BINARY_FORMATS_OES                           0x87FF
#endif

/* GL_OES_mapbuffer */
#ifndef GL_OES_mapbuffer
#define GL_WRITE_ONLY_OES                                       0x88B9
#define GL_BUFFER_ACCESS_OES                                    0x88BB
#define GL_BUFFER_MAPPED_OES                                    0x88BC
#define GL_BUFFER_MAP_POINTER_OES                               0x88BD
#endif

/* GL_OES_packed_depth_stencil */
#ifndef GL_OES_packed_depth_stencil
#define GL_DEPTH_STENCIL_OES                                    0x84F9
#define GL_UNSIGNED_INT_24_8_OES                                0x84FA
#define GL_DEPTH24_STENCIL8_OES                                 0x88F0
#endif

/* GL_OES_required_internalformat */
#ifndef GL_OES_required_internalformat
#define GL_ALPHA8_OES                                           0x803C
#define GL_DEPTH_COMPONENT16_OES                                0x81A5
/* reuse GL_DEPTH_COMPONENT24_OES */
/* reuse GL_DEPTH24_STENCIL8_OES */
/* reuse GL_DEPTH_COMPONENT32_OES */
#define GL_LUMINANCE4_ALPHA4_OES                                0x8043
#define GL_LUMINANCE8_ALPHA8_OES                                0x8045
#define GL_LUMINANCE8_OES                                       0x8040
#define GL_RGBA4_OES                                            0x8056
#define GL_RGB5_A1_OES                                          0x8057
#define GL_RGB565_OES                                           0x8D62
/* reuse GL_RGB8_OES */
/* reuse GL_RGBA8_OES */
/* reuse GL_RGB10_EXT */
/* reuse GL_RGB10_A2_EXT */
#endif

/* GL_OES_rgb8_rgba8 */
#ifndef GL_OES_rgb8_rgba8
#define GL_RGB8_OES                                             0x8051
#define GL_RGBA8_OES                                            0x8058
#endif

/* GL_OES_standard_derivatives */
#ifndef GL_OES_standard_derivatives
#define GL_FRAGMENT_SHADER_DERIVATIVE_HINT_OES                  0x8B8B
#endif

/* GL_OES_stencil1 */
#ifndef GL_OES_stencil1
#define GL_STENCIL_INDEX1_OES                                   0x8D46
#endif

/* GL_OES_stencil4 */
#ifndef GL_OES_stencil4
#define GL_STENCIL_INDEX4_OES                                   0x8D47
#endif

#ifndef GL_OES_surfaceless_context
#define GL_FRAMEBUFFER_UNDEFINED_OES                            0x8219
#endif

/* GL_OES_texture_3D */
#ifndef GL_OES_texture_3D
#define GL_TEXTURE_WRAP_R_OES                                   0x8072
#define GL_TEXTURE_3D_OES                                       0x806F
#define GL_TEXTURE_BINDING_3D_OES                               0x806A
#define GL_MAX_3D_TEXTURE_SIZE_OES                              0x8073
#define GL_SAMPLER_3D_OES                                       0x8B5F
#define GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_3D_ZOFFSET_OES        0x8CD4
#endif

/* GL_OES_texture_float */
/* No new tokens introduced by this extension. */

/* GL_OES_texture_float_linear */
/* No new tokens introduced by this extension. */

/* GL_OES_texture_half_float */
#ifndef GL_OES_texture_half_float
#define GL_HALF_FLOAT_OES                                       0x8D61
#endif

/* GL_OES_texture_half_float_linear */
/* No new tokens introduced by this extension. */

/* GL_OES_texture_npot */
/* No new tokens introduced by this extension. */

/* GL_OES_vertex_array_object */
#ifndef GL_OES_vertex_array_object
#define GL_VERTEX_ARRAY_BINDING_OES                             0x85B5
#endif

/* GL_OES_vertex_half_float */
/* GL_HALF_FLOAT_OES defined in GL_OES_texture_half_float already. */

/* GL_OES_vertex_type_10_10_10_2 */
#ifndef GL_OES_vertex_type_10_10_10_2
#define GL_UNSIGNED_INT_10_10_10_2_OES                          0x8DF6
#define GL_INT_10_10_10_2_OES                                   0x8DF7
#endif

/*------------------------------------------------------------------------*
 * KHR extension tokens
 *------------------------------------------------------------------------*/

#ifndef GL_KHR_debug
typedef void (GL_APIENTRYP GLDEBUGPROCKHR)(GLenum source,GLenum type,GLuint id,GLenum severity,GLsizei length,const GLchar *message,const void *userParam);
#define GL_DEBUG_OUTPUT_SYNCHRONOUS_KHR                         0x8242
#define GL_DEBUG_NEXT_LOGGED_MESSAGE_LENGTH_KHR                 0x8243
#define GL_DEBUG_CALLBACK_FUNCTION_KHR                          0x8244
#define GL_DEBUG_CALLBACK_USER_PARAM_KHR                        0x8245
#define GL_DEBUG_SOURCE_API_KHR                                 0x8246
#define GL_DEBUG_SOURCE_WINDOW_SYSTEM_KHR                       0x8247
#define GL_DEBUG_SOURCE_SHADER_COMPILER_KHR                     0x8248
#define GL_DEBUG_SOURCE_THIRD_PARTY_KHR                         0x8249
#define GL_DEBUG_SOURCE_APPLICATION_KHR                         0x824A
#define GL_DEBUG_SOURCE_OTHER_KHR                               0x824B
#define GL_DEBUG_TYPE_ERROR_KHR                                 0x824C
#define GL_DEBUG_TYPE_DEPRECATED_BEHAVIOR_KHR                   0x824D
#define GL_DEBUG_TYPE_UNDEFINED_BEHAVIOR_KHR                    0x824E
#define GL_DEBUG_TYPE_PORTABILITY_KHR                           0x824F
#define GL_DEBUG_TYPE_PERFORMANCE_KHR                           0x8250
#define GL_DEBUG_TYPE_OTHER_KHR                                 0x8251
#define GL_DEBUG_TYPE_MARKER_KHR                                0x8268
#define GL_DEBUG_TYPE_PUSH_GROUP_KHR                            0x8269
#define GL_DEBUG_TYPE_POP_GROUP_KHR                             0x826A
#define GL_DEBUG_SEVERITY_NOTIFICATION_KHR                      0x826B
#define GL_MAX_DEBUG_GROUP_STACK_DEPTH_KHR                      0x826C
#define GL_DEBUG_GROUP_STACK_DEPTH_KHR                          0x826D
#define GL_BUFFER_KHR                                           0x82E0
#define GL_SHADER_KHR                                           0x82E1
#define GL_PROGRAM_KHR                                          0x82E2
#define GL_QUERY_KHR                                            0x82E3
/* PROGRAM_PIPELINE only in GL */
#define GL_SAMPLER_KHR                                          0x82E6
/* DISPLAY_LIST only in GL */
#define GL_MAX_LABEL_LENGTH_KHR                                 0x82E8
#define GL_MAX_DEBUG_MESSAGE_LENGTH_KHR                         0x9143
#define GL_MAX_DEBUG_LOGGED_MESSAGES_KHR                        0x9144
#define GL_DEBUG_LOGGED_MESSAGES_KHR                            0x9145
#define GL_DEBUG_SEVERITY_HIGH_KHR                              0x9146
#define GL_DEBUG_SEVERITY_MEDIUM_KHR                            0x9147
#define GL_DEBUG_SEVERITY_LOW_KHR                               0x9148
#define GL_DEBUG_OUTPUT_KHR                                     0x92E0
#define GL_CONTEXT_FLAG_DEBUG_BIT_KHR                           0x00000002
#define GL_STACK_OVERFLOW_KHR                                   0x0503
#define GL_STACK_UNDERFLOW_KHR                                  0x0504
#endif

#ifndef GL_KHR_texture_compression_astc_ldr
#define GL_COMPRESSED_RGBA_ASTC_4x4_KHR                         0x93B0
#define GL_COMPRESSED_RGBA_ASTC_5x4_KHR                         0x93B1
#define GL_COMPRESSED_RGBA_ASTC_5x5_KHR                         0x93B2
#define GL_COMPRESSED_RGBA_ASTC_6x5_KHR                         0x93B3
#define GL_COMPRESSED_RGBA_ASTC_6x6_KHR                         0x93B4
#define GL_COMPRESSED_RGBA_ASTC_8x5_KHR                         0x93B5
#define GL_COMPRESSED_RGBA_ASTC_8x6_KHR                         0x93B6
#define GL_COMPRESSED_RGBA_ASTC_8x8_KHR                         0x93B7
#define GL_COMPRESSED_RGBA_ASTC_10x5_KHR                        0x93B8
#define GL_COMPRESSED_RGBA_ASTC_10x6_KHR                        0x93B9
#define GL_COMPRESSED_RGBA_ASTC_10x8_KHR                        0x93BA
#define GL_COMPRESSED_RGBA_ASTC_10x10_KHR                       0x93BB
#define GL_COMPRESSED_RGBA_ASTC_12x10_KHR                       0x93BC
#define GL_COMPRESSED_RGBA_ASTC_12x12_KHR                       0x93BD
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_4x4_KHR                 0x93D0
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_5x4_KHR                 0x93D1
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_5x5_KHR                 0x93D2
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_6x5_KHR                 0x93D3
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_6x6_KHR                 0x93D4
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_8x5_KHR                 0x93D5
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_8x6_KHR                 0x93D6
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_8x8_KHR                 0x93D7
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_10x5_KHR                0x93D8
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_10x6_KHR                0x93D9
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_10x8_KHR                0x93DA
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_10x10_KHR               0x93DB
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_12x10_KHR               0x93DC
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_12x12_KHR               0x93DD
#endif

/*------------------------------------------------------------------------*
 * AMD extension tokens
 *------------------------------------------------------------------------*/

/* GL_AMD_compressed_3DC_texture */
#ifndef GL_AMD_compressed_3DC_texture
#define GL_3DC_X_AMD                                            0x87F9
#define GL_3DC_XY_AMD                                           0x87FA
#endif

/* GL_AMD_compressed_ATC_texture */
#ifndef GL_AMD_compressed_ATC_texture
#define GL_ATC_RGB_AMD                                          0x8C92
#define GL_ATC_RGBA_EXPLICIT_ALPHA_AMD                          0x8C93
#define GL_ATC_RGBA_INTERPOLATED_ALPHA_AMD                      0x87EE
#endif

/* GL_AMD_performance_monitor */
#ifndef GL_AMD_performance_monitor
#define GL_COUNTER_TYPE_AMD                                     0x8BC0
#define GL_COUNTER_RANGE_AMD                                    0x8BC1
#define GL_UNSIGNED_INT64_AMD                                   0x8BC2
#define GL_PERCENTAGE_AMD                                       0x8BC3
#define GL_PERFMON_RESULT_AVAILABLE_AMD                         0x8BC4
#define GL_PERFMON_RESULT_SIZE_AMD                              0x8BC5
#define GL_PERFMON_RESULT_AMD                                   0x8BC6
#endif

/* GL_AMD_program_binary_Z400 */
#ifndef GL_AMD_program_binary_Z400
#define GL_Z400_BINARY_AMD                                      0x8740
#endif

/*------------------------------------------------------------------------*
 * ANGLE extension tokens
 *------------------------------------------------------------------------*/

/* GL_ANGLE_depth_texture */
#ifndef GL_ANGLE_depth_texture
#define GL_DEPTH_COMPONENT                                      0x1902
#define GL_DEPTH_STENCIL_OES                                    0x84F9
#define GL_UNSIGNED_SHORT                                       0x1403
#define GL_UNSIGNED_INT                                         0x1405
#define GL_UNSIGNED_INT_24_8_OES                                0x84FA
#define GL_DEPTH_COMPONENT16                                    0x81A5
#define GL_DEPTH_COMPONENT32_OES                                0x81A7
#define GL_DEPTH24_STENCIL8_OES                                 0x88F0
#endif

/* GL_ANGLE_framebuffer_blit */
#ifndef GL_ANGLE_framebuffer_blit
#define GL_READ_FRAMEBUFFER_ANGLE                               0x8CA8
#define GL_DRAW_FRAMEBUFFER_ANGLE                               0x8CA9
#define GL_DRAW_FRAMEBUFFER_BINDING_ANGLE                       0x8CA6
#define GL_READ_FRAMEBUFFER_BINDING_ANGLE                       0x8CAA
#endif

/* GL_ANGLE_framebuffer_multisample */
#ifndef GL_ANGLE_framebuffer_multisample
#define GL_RENDERBUFFER_SAMPLES_ANGLE                           0x8CAB
#define GL_FRAMEBUFFER_INCOMPLETE_MULTISAMPLE_ANGLE             0x8D56
#define GL_MAX_SAMPLES_ANGLE                                    0x8D57
#endif

/* GL_ANGLE_instanced_arrays */
#ifndef GL_ANGLE_instanced_arrays
#define GL_VERTEX_ATTRIB_ARRAY_DIVISOR_ANGLE                    0x88FE
#endif

/* GL_ANGLE_pack_reverse_row_order */
#ifndef GL_ANGLE_pack_reverse_row_order
#define GL_PACK_REVERSE_ROW_ORDER_ANGLE                         0x93A4
#endif

/* GL_ANGLE_program_binary */
#ifndef GL_ANGLE_program_binary
#define GL_PROGRAM_BINARY_ANGLE                                 0x93A6
#endif

/* GL_ANGLE_texture_compression_dxt3 */
#ifndef GL_ANGLE_texture_compression_dxt3
#define GL_COMPRESSED_RGBA_S3TC_DXT3_ANGLE                      0x83F2
#endif

/* GL_ANGLE_texture_compression_dxt5 */
#ifndef GL_ANGLE_texture_compression_dxt5
#define GL_COMPRESSED_RGBA_S3TC_DXT5_ANGLE                      0x83F3
#endif

/* GL_ANGLE_texture_usage */
#ifndef GL_ANGLE_texture_usage
#define GL_TEXTURE_USAGE_ANGLE                                  0x93A2
#define GL_FRAMEBUFFER_ATTACHMENT_ANGLE                         0x93A3
#endif

/* GL_ANGLE_translated_shader_source */
#ifndef GL_ANGLE_translated_shader_source
#define GL_TRANSLATED_SHADER_SOURCE_LENGTH_ANGLE                0x93A0
#endif

/*------------------------------------------------------------------------*
 * APPLE extension tokens
 *------------------------------------------------------------------------*/

/* GL_APPLE_copy_texture_levels */
/* No new tokens introduced by this extension. */

/* GL_APPLE_framebuffer_multisample */
#ifndef GL_APPLE_framebuffer_multisample
#define GL_RENDERBUFFER_SAMPLES_APPLE                           0x8CAB
#define GL_FRAMEBUFFER_INCOMPLETE_MULTISAMPLE_APPLE             0x8D56
#define GL_MAX_SAMPLES_APPLE                                    0x8D57
#define GL_READ_FRAMEBUFFER_APPLE                               0x8CA8
#define GL_DRAW_FRAMEBUFFER_APPLE                               0x8CA9
#define GL_DRAW_FRAMEBUFFER_BINDING_APPLE                       0x8CA6
#define GL_READ_FRAMEBUFFER_BINDING_APPLE                       0x8CAA
#endif

/* GL_APPLE_rgb_422 */
#ifndef GL_APPLE_rgb_422
#define GL_RGB_422_APPLE                                        0x8A1F
#define GL_UNSIGNED_SHORT_8_8_APPLE                             0x85BA
#define GL_UNSIGNED_SHORT_8_8_REV_APPLE                         0x85BB
#endif

/* GL_APPLE_sync */
#ifndef GL_APPLE_sync

#define GL_SYNC_OBJECT_APPLE                                    0x8A53
#define GL_MAX_SERVER_WAIT_TIMEOUT_APPLE                        0x9111
#define GL_OBJECT_TYPE_APPLE                                    0x9112
#define GL_SYNC_CONDITION_APPLE                                 0x9113
#define GL_SYNC_STATUS_APPLE                                    0x9114
#define GL_SYNC_FLAGS_APPLE                                     0x9115
#define GL_SYNC_FENCE_APPLE                                     0x9116
#define GL_SYNC_GPU_COMMANDS_COMPLETE_APPLE                     0x9117
#define GL_UNSIGNALED_APPLE                                     0x9118
#define GL_SIGNALED_APPLE                                       0x9119
#define GL_ALREADY_SIGNALED_APPLE                               0x911A
#define GL_TIMEOUT_EXPIRED_APPLE                                0x911B
#define GL_CONDITION_SATISFIED_APPLE                            0x911C
#define GL_WAIT_FAILED_APPLE                                    0x911D
#define GL_SYNC_FLUSH_COMMANDS_BIT_APPLE                        0x00000001
#define GL_TIMEOUT_IGNORED_APPLE                                0xFFFFFFFFFFFFFFFFull
#endif

/* GL_APPLE_texture_format_BGRA8888 */
#ifndef GL_APPLE_texture_format_BGRA8888
#define GL_BGRA_EXT                                             0x80E1
#endif

/* GL_APPLE_texture_max_level */
#ifndef GL_APPLE_texture_max_level
#define GL_TEXTURE_MAX_LEVEL_APPLE                              0x813D
#endif

/*------------------------------------------------------------------------*
 * ARM extension tokens
 *------------------------------------------------------------------------*/

/* GL_ARM_mali_program_binary */
#ifndef GL_ARM_mali_program_binary
#define GL_MALI_PROGRAM_BINARY_ARM                              0x8F61
#endif

/* GL_ARM_mali_shader_binary */
#ifndef GL_ARM_mali_shader_binary
#define GL_MALI_SHADER_BINARY_ARM                               0x8F60
#endif

/* GL_ARM_rgba8 */
/* No new tokens introduced by this extension. */

/*------------------------------------------------------------------------*
 * EXT extension tokens
 *------------------------------------------------------------------------*/

/* GL_EXT_blend_minmax */
#ifndef GL_EXT_blend_minmax
#define GL_MIN_EXT                                              0x8007
#define GL_MAX_EXT                                              0x8008
#endif

/* GL_EXT_color_buffer_half_float */
#ifndef GL_EXT_color_buffer_half_float
#define GL_RGBA16F_EXT                                          0x881A
#define GL_RGB16F_EXT                                           0x881B
#define GL_RG16F_EXT                                            0x822F
#define GL_R16F_EXT                                             0x822D
#define GL_FRAMEBUFFER_ATTACHMENT_COMPONENT_TYPE_EXT            0x8211
#define GL_UNSIGNED_NORMALIZED_EXT                              0x8C17
#endif

/* GL_EXT_debug_label */
#ifndef GL_EXT_debug_label
#define GL_PROGRAM_PIPELINE_OBJECT_EXT                          0x8A4F
#define GL_PROGRAM_OBJECT_EXT                                   0x8B40
#define GL_SHADER_OBJECT_EXT                                    0x8B48
#define GL_BUFFER_OBJECT_EXT                                    0x9151
#define GL_QUERY_OBJECT_EXT                                     0x9153
#define GL_VERTEX_ARRAY_OBJECT_EXT                              0x9154
#endif

/* GL_EXT_debug_marker */
/* No new tokens introduced by this extension. */

/* GL_EXT_discard_framebuffer */
#ifndef GL_EXT_discard_framebuffer
#define GL_COLOR_EXT                                            0x1800
#define GL_DEPTH_EXT                                            0x1801
#define GL_STENCIL_EXT                                          0x1802
#endif

#ifndef GL_EXT_disjoint_timer_query
#define GL_QUERY_COUNTER_BITS_EXT                               0x8864
#define GL_CURRENT_QUERY_EXT                                    0x8865
#define GL_QUERY_RESULT_EXT                                     0x8866
#define GL_QUERY_RESULT_AVAILABLE_EXT                           0x8867
#define GL_TIME_ELAPSED_EXT                                     0x88BF
#define GL_TIMESTAMP_EXT                                        0x8E28
#define GL_GPU_DISJOINT_EXT                                     0x8FBB
#endif

#ifndef GL_EXT_draw_buffers
#define GL_EXT_draw_buffers 1
#define GL_MAX_COLOR_ATTACHMENTS_EXT                            0x8CDF
#define GL_MAX_DRAW_BUFFERS_EXT                                 0x8824
#define GL_DRAW_BUFFER0_EXT                                     0x8825
#define GL_DRAW_BUFFER1_EXT                                     0x8826
#define GL_DRAW_BUFFER2_EXT                                     0x8827
#define GL_DRAW_BUFFER3_EXT                                     0x8828
#define GL_DRAW_BUFFER4_EXT                                     0x8829
#define GL_DRAW_BUFFER5_EXT                                     0x882A
#define GL_DRAW_BUFFER6_EXT                                     0x882B
#define GL_DRAW_BUFFER7_EXT                                     0x882C
#define GL_DRAW_BUFFER8_EXT                                     0x882D
#define GL_DRAW_BUFFER9_EXT                                     0x882E
#define GL_DRAW_BUFFER10_EXT                                    0x882F
#define GL_DRAW_BUFFER11_EXT                                    0x8830
#define GL_DRAW_BUFFER12_EXT                                    0x8831
#define GL_DRAW_BUFFER13_EXT                                    0x8832
#define GL_DRAW_BUFFER14_EXT                                    0x8833
#define GL_DRAW_BUFFER15_EXT                                    0x8834
#define GL_COLOR_ATTACHMENT0_EXT                                0x8CE0
#define GL_COLOR_ATTACHMENT1_EXT                                0x8CE1
#define GL_COLOR_ATTACHMENT2_EXT                                0x8CE2
#define GL_COLOR_ATTACHMENT3_EXT                                0x8CE3
#define GL_COLOR_ATTACHMENT4_EXT                                0x8CE4
#define GL_COLOR_ATTACHMENT5_EXT                                0x8CE5
#define GL_COLOR_ATTACHMENT6_EXT                                0x8CE6
#define GL_COLOR_ATTACHMENT7_EXT                                0x8CE7
#define GL_COLOR_ATTACHMENT8_EXT                                0x8CE8
#define GL_COLOR_ATTACHMENT9_EXT                                0x8CE9
#define GL_COLOR_ATTACHMENT10_EXT                               0x8CEA
#define GL_COLOR_ATTACHMENT11_EXT                               0x8CEB
#define GL_COLOR_ATTACHMENT12_EXT                               0x8CEC
#define GL_COLOR_ATTACHMENT13_EXT                               0x8CED
#define GL_COLOR_ATTACHMENT14_EXT                               0x8CEE
#define GL_COLOR_ATTACHMENT15_EXT                               0x8CEF
#endif

/* GL_EXT_map_buffer_range */
#ifndef GL_EXT_map_buffer_range
#define GL_MAP_READ_BIT_EXT                                     0x0001
#define GL_MAP_WRITE_BIT_EXT                                    0x0002
#define GL_MAP_INVALIDATE_RANGE_BIT_EXT                         0x0004
#define GL_MAP_INVALIDATE_BUFFER_BIT_EXT                        0x0008
#define GL_MAP_FLUSH_EXPLICIT_BIT_EXT                           0x0010
#define GL_MAP_UNSYNCHRONIZED_BIT_EXT                           0x0020
#endif

/* GL_EXT_multisampled_render_to_texture */
#ifndef GL_EXT_multisampled_render_to_texture
#define GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_SAMPLES_EXT           0x8D6C
/* reuse values from GL_EXT_framebuffer_multisample (desktop extension) */
#define GL_RENDERBUFFER_SAMPLES_EXT                             0x8CAB
#define GL_FRAMEBUFFER_INCOMPLETE_MULTISAMPLE_EXT               0x8D56
#define GL_MAX_SAMPLES_EXT                                      0x8D57
#endif

/* GL_EXT_multiview_draw_buffers */
#ifndef GL_EXT_multiview_draw_buffers
#define GL_COLOR_ATTACHMENT_EXT                                 0x90F0
#define GL_MULTIVIEW_EXT                                        0x90F1
#define GL_DRAW_BUFFER_EXT                                      0x0C01
#define GL_READ_BUFFER_EXT                                      0x0C02
#define GL_MAX_MULTIVIEW_BUFFERS_EXT                            0x90F2
#endif

/* GL_EXT_multi_draw_arrays */
/* No new tokens introduced by this extension. */

/* GL_EXT_occlusion_query_boolean */
#ifndef GL_EXT_occlusion_query_boolean
#define GL_ANY_SAMPLES_PASSED_EXT                               0x8C2F
#define GL_ANY_SAMPLES_PASSED_CONSERVATIVE_EXT                  0x8D6A
#define GL_CURRENT_QUERY_EXT                                    0x8865
#define GL_QUERY_RESULT_EXT                                     0x8866
#define GL_QUERY_RESULT_AVAILABLE_EXT                           0x8867
#endif

/* GL_EXT_read_format_bgra */
#ifndef GL_EXT_read_format_bgra
#define GL_BGRA_EXT                                             0x80E1
#define GL_UNSIGNED_SHORT_4_4_4_4_REV_EXT                       0x8365
#define GL_UNSIGNED_SHORT_1_5_5_5_REV_EXT                       0x8366
#endif

/* GL_EXT_robustness */
#ifndef GL_EXT_robustness
/* reuse GL_NO_ERROR */
#define GL_GUILTY_CONTEXT_RESET_EXT                             0x8253
#define GL_INNOCENT_CONTEXT_RESET_EXT                           0x8254
#define GL_UNKNOWN_CONTEXT_RESET_EXT                            0x8255
#define GL_CONTEXT_ROBUST_ACCESS_EXT                            0x90F3
#define GL_RESET_NOTIFICATION_STRATEGY_EXT                      0x8256
#define GL_LOSE_CONTEXT_ON_RESET_EXT                            0x8252
#define GL_NO_RESET_NOTIFICATION_EXT                            0x8261
#endif

/* GL_EXT_separate_shader_objects */
#ifndef GL_EXT_separate_shader_objects
#define GL_VERTEX_SHADER_BIT_EXT                                0x00000001
#define GL_FRAGMENT_SHADER_BIT_EXT                              0x00000002
#define GL_ALL_SHADER_BITS_EXT                                  0xFFFFFFFF
#define GL_PROGRAM_SEPARABLE_EXT                                0x8258
#define GL_ACTIVE_PROGRAM_EXT                                   0x8259
#define GL_PROGRAM_PIPELINE_BINDING_EXT                         0x825A
#endif

/* GL_EXT_shader_framebuffer_fetch */
#ifndef GL_EXT_shader_framebuffer_fetch
#define GL_FRAGMENT_SHADER_DISCARDS_SAMPLES_EXT                 0x8A52
#endif

/* GL_EXT_shader_texture_lod */
/* No new tokens introduced by this extension. */

/* GL_EXT_shadow_samplers */
#ifndef GL_EXT_shadow_samplers
#define GL_TEXTURE_COMPARE_MODE_EXT                             0x884C
#define GL_TEXTURE_COMPARE_FUNC_EXT                             0x884D
#define GL_COMPARE_REF_TO_TEXTURE_EXT                           0x884E
#define GL_SAMPLER_2D_SHADOW_EXT                                0x8B62
#endif

/* GL_EXT_sRGB */
#ifndef GL_EXT_sRGB
#define GL_SRGB_EXT                                             0x8C40
#define GL_SRGB_ALPHA_EXT                                       0x8C42
#define GL_SRGB8_ALPHA8_EXT                                     0x8C43
#define GL_FRAMEBUFFER_ATTACHMENT_COLOR_ENCODING_EXT            0x8210
#endif

/* GL_EXT_sRGB_write_control */
#ifndef GL_EXT_sRGB_write_control
#define GL_EXT_sRGB_write_control 1
#define GL_FRAMEBUFFER_SRGB_EXT                                 0x8DB9
#endif

/* GL_EXT_texture_compression_dxt1 */
#ifndef GL_EXT_texture_compression_dxt1
#define GL_COMPRESSED_RGB_S3TC_DXT1_EXT                         0x83F0
#define GL_COMPRESSED_RGBA_S3TC_DXT1_EXT                        0x83F1
#endif

/* GL_EXT_texture_filter_anisotropic */
#ifndef GL_EXT_texture_filter_anisotropic
#define GL_TEXTURE_MAX_ANISOTROPY_EXT                           0x84FE
#define GL_MAX_TEXTURE_MAX_ANISOTROPY_EXT                       0x84FF
#endif

/* GL_EXT_texture_format_BGRA8888 */
#ifndef GL_EXT_texture_format_BGRA8888
#define GL_BGRA_EXT                                             0x80E1
#endif

/* GL_EXT_texture_rg */
#ifndef GL_EXT_texture_rg
#define GL_RED_EXT                                              0x1903
#define GL_RG_EXT                                               0x8227
#define GL_R8_EXT                                               0x8229
#define GL_RG8_EXT                                              0x822B
#endif

/* GL_EXT_texture_sRGB_decode */
#ifndef GL_EXT_texture_sRGB_decode
#define GL_EXT_texture_sRGB_decode 1
#define GL_TEXTURE_SRGB_DECODE_EXT                              0x8A48
#define GL_DECODE_EXT                                           0x8A49
#define GL_SKIP_DECODE_EXT                                      0x8A4A
#endif

/* GL_EXT_texture_storage */
#ifndef GL_EXT_texture_storage
#define GL_TEXTURE_IMMUTABLE_FORMAT_EXT                         0x912F
#define GL_ALPHA8_EXT                                           0x803C
#define GL_LUMINANCE8_EXT                                       0x8040
#define GL_LUMINANCE8_ALPHA8_EXT                                0x8045
#define GL_RGBA32F_EXT                                          0x8814
#define GL_RGB32F_EXT                                           0x8815
#define GL_ALPHA32F_EXT                                         0x8816
#define GL_LUMINANCE32F_EXT                                     0x8818
#define GL_LUMINANCE_ALPHA32F_EXT                               0x8819
/* reuse GL_RGBA16F_EXT */
/* reuse GL_RGB16F_EXT */
#define GL_ALPHA16F_EXT                                         0x881C
#define GL_LUMINANCE16F_EXT                                     0x881E
#define GL_LUMINANCE_ALPHA16F_EXT                               0x881F
#define GL_RGB10_A2_EXT                                         0x8059
#define GL_RGB10_EXT                                            0x8052
#define GL_BGRA8_EXT                                            0x93A1
#define GL_R8_EXT                                               0x8229
#define GL_RG8_EXT                                              0x822B
#define GL_R32F_EXT                                             0x822E
#define GL_RG32F_EXT                                            0x8230
#define GL_R16F_EXT                                             0x822D
#define GL_RG16F_EXT                                            0x822F
#endif

/* GL_EXT_texture_type_2_10_10_10_REV */
#ifndef GL_EXT_texture_type_2_10_10_10_REV
#define GL_UNSIGNED_INT_2_10_10_10_REV_EXT                      0x8368
#endif

/* GL_EXT_unpack_subimage */
#ifndef GL_EXT_unpack_subimage
#define GL_UNPACK_ROW_LENGTH_EXT                                0x0CF2
#define GL_UNPACK_SKIP_ROWS_EXT                                 0x0CF3
#define GL_UNPACK_SKIP_PIXELS_EXT                               0x0CF4
#endif

/*------------------------------------------------------------------------*
 * DMP extension tokens
 *------------------------------------------------------------------------*/

/* GL_DMP_shad
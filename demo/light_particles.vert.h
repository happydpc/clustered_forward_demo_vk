#include <stdint.h>

#if 0
C:/msys64/home/sydlu/CProjects/clustered-forward-demo-vk/demo/light_particles.vert
// Module Version 10000
// Generated by (magic number): 80001
// Id's are bound by 58

                              Capability Shader
               1:             ExtInstImport  "GLSL.std.450"
                              MemoryModel Logical GLSL450
                              EntryPoint Vertex 4  "main" 9 12 17 34
                              Source GLSL 450
                              Name 4  "main"
                              Name 9  "color_out"
                              Name 12  "color_in"
                              Name 15  "gl_PerVertex"
                              MemberName 15(gl_PerVertex) 0  "gl_Position"
                              MemberName 15(gl_PerVertex) 1  "gl_PointSize"
                              Name 17  ""
                              Name 24  "UBO"
                              MemberName 24(UBO) 0  "view"
                              MemberName 24(UBO) 1  "normal"
                              MemberName 24(UBO) 2  "model"
                              MemberName 24(UBO) 3  "projection_clip"
                              MemberName 24(UBO) 4  "tile_size"
                              MemberName 24(UBO) 5  "grid_dim"
                              MemberName 24(UBO) 6  "cam_pos"
                              MemberName 24(UBO) 7  "cam_far"
                              MemberName 24(UBO) 8  "resolution"
                              MemberName 24(UBO) 9  "num_lights"
                              Name 26  "ubo_in"
                              Name 34  "pos_range_in"
                              Decorate 9(color_out) Location 0
                              Decorate 12(color_in) Location 1
                              MemberDecorate 15(gl_PerVertex) 0 BuiltIn Position
                              MemberDecorate 15(gl_PerVertex) 1 BuiltIn PointSize
                              Decorate 15(gl_PerVertex) Block
                              MemberDecorate 24(UBO) 0 ColMajor
                              MemberDecorate 24(UBO) 0 Offset 0
                              MemberDecorate 24(UBO) 0 MatrixStride 16
                              MemberDecorate 24(UBO) 1 ColMajor
                              MemberDecorate 24(UBO) 1 Offset 64
                              MemberDecorate 24(UBO) 1 MatrixStride 16
                              MemberDecorate 24(UBO) 2 ColMajor
                              MemberDecorate 24(UBO) 2 Offset 128
                              MemberDecorate 24(UBO) 2 MatrixStride 16
                              MemberDecorate 24(UBO) 3 ColMajor
                              MemberDecorate 24(UBO) 3 Offset 192
                              MemberDecorate 24(UBO) 3 MatrixStride 16
                              MemberDecorate 24(UBO) 4 Offset 256
                              MemberDecorate 24(UBO) 5 Offset 264
                              MemberDecorate 24(UBO) 6 Offset 272
                              MemberDecorate 24(UBO) 7 Offset 284
                              MemberDecorate 24(UBO) 8 Offset 288
                              MemberDecorate 24(UBO) 9 Offset 296
                              Decorate 24(UBO) Block
                              Decorate 26(ubo_in) DescriptorSet 0
                              Decorate 26(ubo_in) Binding 0
                              Decorate 34(pos_range_in) Location 0
               2:             TypeVoid
               3:             TypeFunction 2
               6:             TypeFloat 32
               7:             TypeVector 6(float) 3
               8:             TypePointer Output 7(fvec3)
    9(color_out):      8(ptr) Variable Output
              10:             TypeVector 6(float) 4
              11:             TypePointer Input 10(fvec4)
    12(color_in):     11(ptr) Variable Input
15(gl_PerVertex):             TypeStruct 10(fvec4) 6(float)
              16:             TypePointer Output 15(gl_PerVertex)
              17:     16(ptr) Variable Output
              18:             TypeInt 32 1
              19:     18(int) Constant 0
              20:             TypeMatrix 10(fvec4) 4
              21:             TypeVector 6(float) 2
              22:             TypeInt 32 0
              23:             TypeVector 22(int) 2
         24(UBO):             TypeStruct 20 20 20 20 21(fvec2) 23(ivec2) 7(fvec3) 6(float) 21(fvec2) 22(int)
              25:             TypePointer Uniform 24(UBO)
      26(ubo_in):     25(ptr) Variable Uniform
              27:     18(int) Constant 3
              28:             TypePointer Uniform 20
34(pos_range_in):     11(ptr) Variable Input
              37:    6(float) Constant 1065353216
              43:             TypePointer Output 10(fvec4)
              45:     18(int) Constant 1
              46:    6(float) Constant 1045220557
              47:     18(int) Constant 7
              48:             TypePointer Uniform 6(float)
              52:     22(int) Constant 2
              53:             TypePointer Output 6(float)
         4(main):           2 Function None 3
               5:             Label
              13:   10(fvec4) Load 12(color_in)
              14:    7(fvec3) VectorShuffle 13 13 0 1 2
                              Store 9(color_out) 14
              29:     28(ptr) AccessChain 26(ubo_in) 27
              30:          20 Load 29
              31:     28(ptr) AccessChain 26(ubo_in) 19
              32:          20 Load 31
              33:          20 MatrixTimesMatrix 30 32
              35:   10(fvec4) Load 34(pos_range_in)
              36:    7(fvec3) VectorShuffle 35 35 0 1 2
              38:    6(float) CompositeExtract 36 0
              39:    6(float) CompositeExtract 36 1
              40:    6(float) CompositeExtract 36 2
              41:   10(fvec4) CompositeConstruct 38 39 40 37
              42:   10(fvec4) MatrixTimesVector 33 41
              44:     43(ptr) AccessChain 17 19
                              Store 44 42
              49:     48(ptr) AccessChain 26(ubo_in) 47
              50:    6(float) Load 49
              51:    6(float) FMul 46 50
              54:     53(ptr) AccessChain 17 19 52
              55:    6(float) Load 54
              56:    6(float) FDiv 51 55
              57:     53(ptr) AccessChain 17 45
                              Store 57 56
                              Return
                              FunctionEnd
#endif

static const uint32_t light_particles_vert[518] = {
    0x07230203, 0x00010000, 0x00080001, 0x0000003a,
    0x00000000, 0x00020011, 0x00000001, 0x0006000b,
    0x00000001, 0x4c534c47, 0x6474732e, 0x3035342e,
    0x00000000, 0x0003000e, 0x00000000, 0x00000001,
    0x0009000f, 0x00000000, 0x00000004, 0x6e69616d,
    0x00000000, 0x00000009, 0x0000000c, 0x00000011,
    0x00000022, 0x00030003, 0x00000002, 0x000001c2,
    0x00040005, 0x00000004, 0x6e69616d, 0x00000000,
    0x00050005, 0x00000009, 0x6f6c6f63, 0x756f5f72,
    0x00000074, 0x00050005, 0x0000000c, 0x6f6c6f63,
    0x6e695f72, 0x00000000, 0x00060005, 0x0000000f,
    0x505f6c67, 0x65567265, 0x78657472, 0x00000000,
    0x00060006, 0x0000000f, 0x00000000, 0x505f6c67,
    0x7469736f, 0x006e6f69, 0x00070006, 0x0000000f,
    0x00000001, 0x505f6c67, 0x746e696f, 0x657a6953,
    0x00000000, 0x00030005, 0x00000011, 0x00000000,
    0x00030005, 0x00000018, 0x004f4255, 0x00050006,
    0x00000018, 0x00000000, 0x77656976, 0x00000000,
    0x00050006, 0x00000018, 0x00000001, 0x6d726f6e,
    0x00006c61, 0x00050006, 0x00000018, 0x00000002,
    0x65646f6d, 0x0000006c, 0x00070006, 0x00000018,
    0x00000003, 0x6a6f7270, 0x69746365, 0x635f6e6f,
    0x0070696c, 0x00060006, 0x00000018, 0x00000004,
    0x656c6974, 0x7a69735f, 0x00000065, 0x00060006,
    0x00000018, 0x00000005, 0x64697267, 0x6d69645f,
    0x00000000, 0x00050006, 0x00000018, 0x00000006,
    0x5f6d6163, 0x00736f70, 0x00050006, 0x00000018,
    0x00000007, 0x5f6d6163, 0x00726166, 0x00060006,
    0x00000018, 0x00000008, 0x6f736572, 0x6974756c,
    0x00006e6f, 0x00060006, 0x00000018, 0x00000009,
    0x5f6d756e, 0x6867696c, 0x00007374, 0x00040005,
    0x0000001a, 0x5f6f6275, 0x00006e69, 0x00060005,
    0x00000022, 0x5f736f70, 0x676e6172, 0x6e695f65,
    0x00000000, 0x00040047, 0x00000009, 0x0000001e,
    0x00000000, 0x00040047, 0x0000000c, 0x0000001e,
    0x00000001, 0x00050048, 0x0000000f, 0x00000000,
    0x0000000b, 0x00000000, 0x00050048, 0x0000000f,
    0x00000001, 0x0000000b, 0x00000001, 0x00030047,
    0x0000000f, 0x00000002, 0x00040048, 0x00000018,
    0x00000000, 0x00000005, 0x00050048, 0x00000018,
    0x00000000, 0x00000023, 0x00000000, 0x00050048,
    0x00000018, 0x00000000, 0x00000007, 0x00000010,
    0x00040048, 0x00000018, 0x00000001, 0x00000005,
    0x00050048, 0x00000018, 0x00000001, 0x00000023,
    0x00000040, 0x00050048, 0x00000018, 0x00000001,
    0x00000007, 0x00000010, 0x00040048, 0x00000018,
    0x00000002, 0x00000005, 0x00050048, 0x00000018,
    0x00000002, 0x00000023, 0x00000080, 0x00050048,
    0x00000018, 0x00000002, 0x00000007, 0x00000010,
    0x00040048, 0x00000018, 0x00000003, 0x00000005,
    0x00050048, 0x00000018, 0x00000003, 0x00000023,
    0x000000c0, 0x00050048, 0x00000018, 0x00000003,
    0x00000007, 0x00000010, 0x00050048, 0x00000018,
    0x00000004, 0x00000023, 0x00000100, 0x00050048,
    0x00000018, 0x00000005, 0x00000023, 0x00000108,
    0x00050048, 0x00000018, 0x00000006, 0x00000023,
    0x00000110, 0x00050048, 0x00000018, 0x00000007,
    0x00000023, 0x0000011c, 0x00050048, 0x00000018,
    0x00000008, 0x00000023, 0x00000120, 0x00050048,
    0x00000018, 0x00000009, 0x00000023, 0x00000128,
    0x00030047, 0x00000018, 0x00000002, 0x00040047,
    0x0000001a, 0x00000022, 0x00000000, 0x00040047,
    0x0000001a, 0x00000021, 0x00000000, 0x00040047,
    0x00000022, 0x0000001e, 0x00000000, 0x00020013,
    0x00000002, 0x00030021, 0x00000003, 0x00000002,
    0x00030016, 0x00000006, 0x00000020, 0x00040017,
    0x00000007, 0x00000006, 0x00000003, 0x00040020,
    0x00000008, 0x00000003, 0x00000007, 0x0004003b,
    0x00000008, 0x00000009, 0x00000003, 0x00040017,
    0x0000000a, 0x00000006, 0x00000004, 0x00040020,
    0x0000000b, 0x00000001, 0x0000000a, 0x0004003b,
    0x0000000b, 0x0000000c, 0x00000001, 0x0004001e,
    0x0000000f, 0x0000000a, 0x00000006, 0x00040020,
    0x00000010, 0x00000003, 0x0000000f, 0x0004003b,
    0x00000010, 0x00000011, 0x00000003, 0x00040015,
    0x00000012, 0x00000020, 0x00000001, 0x0004002b,
    0x00000012, 0x00000013, 0x00000000, 0x00040018,
    0x00000014, 0x0000000a, 0x00000004, 0x00040017,
    0x00000015, 0x00000006, 0x00000002, 0x00040015,
    0x00000016, 0x00000020, 0x00000000, 0x00040017,
    0x00000017, 0x00000016, 0x00000002, 0x000c001e,
    0x00000018, 0x00000014, 0x00000014, 0x00000014,
    0x00000014, 0x00000015, 0x00000017, 0x00000007,
    0x00000006, 0x00000015, 0x00000016, 0x00040020,
    0x00000019, 0x00000002, 0x00000018, 0x0004003b,
    0x00000019, 0x0000001a, 0x00000002, 0x0004002b,
    0x00000012, 0x0000001b, 0x00000003, 0x00040020,
    0x0000001c, 0x00000002, 0x00000014, 0x0004003b,
    0x0000000b, 0x00000022, 0x00000001, 0x0004002b,
    0x00000006, 0x00000025, 0x3f800000, 0x00040020,
    0x0000002b, 0x00000003, 0x0000000a, 0x0004002b,
    0x00000012, 0x0000002d, 0x00000001, 0x0004002b,
    0x00000006, 0x0000002e, 0x3e4ccccd, 0x0004002b,
    0x00000012, 0x0000002f, 0x00000007, 0x00040020,
    0x00000030, 0x00000002, 0x00000006, 0x0004002b,
    0x00000016, 0x00000034, 0x00000002, 0x00040020,
    0x00000035, 0x00000003, 0x00000006, 0x00050036,
    0x00000002, 0x00000004, 0x00000000, 0x00000003,
    0x000200f8, 0x00000005, 0x0004003d, 0x0000000a,
    0x0000000d, 0x0000000c, 0x0008004f, 0x00000007,
    0x0000000e, 0x0000000d, 0x0000000d, 0x00000000,
    0x00000001, 0x00000002, 0x0003003e, 0x00000009,
    0x0000000e, 0x00050041, 0x0000001c, 0x0000001d,
    0x0000001a, 0x0000001b, 0x0004003d, 0x00000014,
    0x0000001e, 0x0000001d, 0x00050041, 0x0000001c,
    0x0000001f, 0x0000001a, 0x00000013, 0x0004003d,
    0x00000014, 0x00000020, 0x0000001f, 0x00050092,
    0x00000014, 0x00000021, 0x0000001e, 0x00000020,
    0x0004003d, 0x0000000a, 0x00000023, 0x00000022,
    0x0008004f, 0x00000007, 0x00000024, 0x00000023,
    0x00000023, 0x00000000, 0x00000001, 0x00000002,
    0x00050051, 0x00000006, 0x00000026, 0x00000024,
    0x00000000, 0x00050051, 0x00000006, 0x00000027,
    0x00000024, 0x00000001, 0x00050051, 0x00000006,
    0x00000028, 0x00000024, 0x00000002, 0x00070050,
    0x0000000a, 0x00000029, 0x00000026, 0x00000027,
    0x00000028, 0x00000025, 0x00050091, 0x0000000a,
    0x0000002a, 0x00000021, 0x00000029, 0x00050041,
    0x0000002b, 0x0000002c, 0x00000011, 0x00000013,
    0x0003003e, 0x0000002c, 0x0000002a, 0x00050041,
    0x00000030, 0x00000031, 0x0000001a, 0x0000002f,
    0x0004003d, 0x00000006, 0x00000032, 0x00000031,
    0x00050085, 0x00000006, 0x00000033, 0x0000002e,
    0x00000032, 0x00060041, 0x00000035, 0x00000036,
    0x00000011, 0x00000013, 0x00000034, 0x0004003d,
    0x00000006, 0x00000037, 0x00000036, 0x00050088,
    0x00000006, 0x00000038, 0x00000033, 0x00000037,
    0x00050041, 0x00000035, 0x00000039, 0x00000011,
    0x0000002d, 0x0003003e, 0x00000039, 0x00000038,
    0x000100fd, 0x00010038,
};
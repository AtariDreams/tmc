#define START_SCRIPT(name) const unsigned short name[] = {
#define END_SCRIPT() \
    }                \
    ;

/*const unsigned char test[] = {
     0x01, 0x04, 0x67, 0x08, 0x40, 0x00, 0x79, 0x08, 0x07, 0x00, 0x02, 0x04, 0x50, 0x08, 0x20, 0x00, 0x33, 0x0c, 0x04, 0x00, 0x00, 0x00, 0x50, 0x08, 0x22, 0x00, 0x0b, 0x0c, 0xc9, 0xf3, 0x07, 0x08, 0x5c, 0x0c, 0x02, 0x11, 0x0c, 0x00, 0x59, 0x04, 0x50, 0x08, 0x20, 0x00, 0x28, 0x0c, 0x08, 0x00, 0x00, 0x00, 0x33, 0x0c, 0x04, 0x00, 0x00, 0x00, 0x50, 0x08, 0x21, 0x00, 0x0b, 0x0c, 0xc9, 0xf3, 0x07, 0x08, 0x5c, 0x0c, 0x03, 0x11, 0x0c, 0x00, 0x59, 0x04, 0x50, 0x08, 0x20, 0x00, 0x28, 0x0c, 0x08, 0x00, 0x00, 0x00, 0x33, 0x0c, 0x04, 0x00, 0x00, 0x00, 0x79, 0x08, 0x04, 0x00, 0x31, 0x08, 0x3c, 0x00, 0x28, 0x0c, 0x08, 0x00, 0x00, 0x00, 0x33, 0x0c, 0x04, 0x00, 0x00, 0x00, 0x79, 0x08, 0x11, 0x00, 0x50, 0x08, 0x1c, 0x00, 0x5c, 0x0c, 0x05, 0x11, 0x0c, 0x00, 0x59, 0x04, 0x50, 0x08, 0x20, 0x00, 0x28, 0x0c, 0x08, 0x00, 0x00, 0x00, 0x33, 0x0c, 0x04, 0x00, 0x00, 0x00, 0x50, 0x08, 0x22, 0x00, 0x0b, 0x0c, 0xc9, 0xf3, 0x07, 0x08, 0x5c, 0x0c, 0x06, 0x11, 0x0c, 0x00, 0x59, 0x04, 0x50, 0x08, 0x1c, 0x00, 0x0b, 0x0c, 0x6d, 0xd9, 0x06, 0x08, 0x5c, 0x0c, 0x07, 0x11, 0x0c, 0x00, 0x59, 0x04, 0x50, 0x08, 0x20, 0x00, 0x28, 0x0c, 0x08, 0x00, 0x00, 0x00, 0x33, 0x0c, 0x04, 0x00, 0x00, 0x00, 0x50, 0x08, 0x21, 0x00, 0x0b, 0x0c, 0xc9, 0xf3, 0x07, 0x08, 0x5c, 0x0c, 0x08, 0x11, 0x0c, 0x00, 0x59, 0x04, 0x50, 0x08, 0x1c, 0x00, 0x0b, 0x0c, 0x6d, 0xd9, 0x06, 0x08, 0x5c, 0x0c, 0x09, 0x11, 0x0c, 0x00, 0x59, 0x04, 0x50, 0x08, 0x20, 0x00, 0x79, 0x08, 0x0a, 0x00, 0x53, 0x04, 0x28, 0x0c, 0x08, 0x00, 0x00, 0x00, 0x02, 0x04, 0x01, 0x04, 0x15, 0x08, 0x00, 0x00, 0x04, 0x08, 0x28, 0x00, 0x18, 0x04, 0x05, 0x08, 0xf0, 0xff, 0x02, 0x04, 0x43, 0x04, 0x0b, 0x0c, 0x45, 0xd9, 0x06, 0x08, 0x50, 0x08, 0x10, 0x00, 0x5c, 0x0c, 0x14, 0x11, 0x0c, 0x00, 0x59, 0x04, 0x50, 0x08, 0x20, 0x00, 0x44, 0x04, 0x03, 0x08, 0xd0, 0xff, 0x43, 0x04, 0x54, 0x04, 0x0c, 0x14, 0xb1, 0xf5, 0x07, 0x08, 0x3c, 0x00, 0x00, 0x00, 0x0b, 0x0c, 0xd1, 0x91, 0x07, 0x08, 0x02, 0x04, 0x28, 0x0c, 0x08, 0x00, 0x00, 0x00, 0x33, 0x0c, 0x04, 0x00, 0x00, 0x00, 0x79, 0x08, 0x0b, 0x00, 0x28, 0x0c, 0x08, 0x00, 0x00, 0x00, 0x33, 0x0c, 0x04, 0x00, 0x00, 0x00, 0x0b, 0x0c, 0x45, 0xd9, 0x06, 0x08, 0x50, 0x08, 0x10, 0x00, 0x5c, 0x0c, 0x0a, 0x11, 0x0c, 0x00, 0x59, 0x04, 0x50, 0x08, 0x1f, 0x00, 0x28, 0x0c, 0x08, 0x00, 0x00, 0x00, 0x33, 0x0c, 0x04, 0x00, 0x00, 0x00, 0x50, 0x08, 0x10, 0x00, 0x5c, 0x0c, 0x0b, 0x11, 0x0c, 0x00, 0x59, 0x04, 0x50, 0x08, 0x1f, 0x00, 0x28, 0x0c, 0x08, 0x00, 0x00, 0x00, 0x33, 0x0c, 0x04, 0x00, 0x00, 0x00, 0x79, 0x08, 0x04, 0x00, 0x31, 0x08, 0x3c, 0x00, 0x50, 0x08, 0x10, 0x00, 0x5c, 0x0c, 0x0c, 0x11, 0x0c, 0x00, 0x59, 0x04, 0x50, 0x08, 0x1f, 0x00, 0x28, 0x0c, 0x08, 0x00, 0x00, 0x00, 0x33, 0x0c, 0x04, 0x00, 0x00, 0x00, 0x50, 0x08, 0x10, 0x00, 0x5c, 0x0c, 0x0d, 0x11, 0x0c, 0x00, 0x59, 0x04, 0x50, 0x08, 0x1f, 0x00, 0x28, 0x0c, 0x08, 0x00, 0x00, 0x00, 0x33, 0x0c, 0x04, 0x00, 0x00, 0x00, 0x50, 0x08, 0x10, 0x00, 0x5c, 0x0c, 0x0e, 0x11, 0x0c, 0x00, 0x59, 0x04, 0x50, 0x08, 0x18, 0x00, 0x67, 0x08, 0x80, 0x00, 0x0b, 0x0c, 0x09, 0xd9, 0x06, 0x08, 0x6d, 0x08, 0x10, 0x00, 0x79, 0x08, 0x0a, 0x00, 0x53, 0x04, 0x28, 0x0c, 0x08, 0x00, 0x00, 0x00, 0x33, 0x0c, 0x04, 0x00, 0x00, 0x00, 0x02, 0x04, 0x01, 0x04, 0x0b, 0x0c, 0x45, 0xd9, 0x06, 0x08, 0x18, 0x04, 0x04, 0x08, 0x0e, 0x00, 0x17, 0x08, 0x30, 0x30, 0x05, 0x08, 0x20, 0x00, 0x03, 0x08, 0xe6, 0xff, 0x43, 0x04, 0x50, 0x08, 0x10, 0x00, 0x02, 0x04, 0x5c, 0x0c, 0x15, 0x11, 0x0c, 0x00, 0x59, 0x04, 0x50, 0x08, 0x18, 0x00, 0x44, 0x04, 0x03, 0x08, 0xcc, 0xff, 0x02, 0x04, 0x43, 0x04, 0x0b, 0x0c, 0xa5, 0xf9, 0x07, 0x08, 0x0b, 0x0c, 0x29, 0xdf, 0x07, 0x08, 0x64, 0x04, 0x0b, 0x0c, 0x45, 0xd9, 0x06, 0x08, 0x50, 0x08, 0x10, 0x00, 0x5c, 0x0c, 0x0f, 0x11, 0x0c, 0x00, 0x50, 0x08, 0x18, 0x00, 0x67, 0x08, 0x80, 0x00, 0x0b, 0x0c, 0x09, 0xd9, 0x06, 0x08, 0x6d, 0x08, 0x50, 0x00, 0x59, 0x04, 0x0b, 0x0c, 0x51, 0xdf, 0x07, 0x08, 0x44, 0x04, 0x28, 0x0c, 0x08, 0x00, 0x00, 0x00, 0x33, 0x0c, 0x04, 0x00, 0x00, 0x00, 0x02, 0x04, 0x01, 0x04, 0x0b, 0x0c, 0x45, 0xd9, 0x06, 0x08, 0x18, 0x04, 0x04, 0x08, 0x0e, 0x00, 0x17, 0x08, 0x30, 0x30, 0x05, 0x08, 0x20, 0x00, 0x03, 0x08, 0xe6, 0xff, 0x43, 0x04, 0x50, 0x08, 0x10, 0x00, 0x02, 0x04, 0x5c, 0x0c, 0x15, 0x11, 0x0c, 0x00, 0x59, 0x04, 0x50, 0x08, 0x18, 0x00, 0x44, 0x04, 0x03, 0x08, 0xcc, 0xff, 0x02, 0x04, 0x43, 0x04, 0x0b, 0x0c, 0xa5, 0xf9, 0x07, 0x08, 0x0b, 0x0c, 0x29, 0xdf, 0x07, 0x08, 0x64, 0x04, 0x0b, 0x0c, 0x45, 0xd9, 0x06, 0x08, 0x50, 0x08, 0x10, 0x00, 0x5c, 0x0c, 0x10, 0x11, 0x0c, 0x00, 0x50, 0x08, 0x18, 0x00, 0x67, 0x08, 0x80, 0x00, 0x0b, 0x0c, 0x09, 0xd9, 0x06, 0x08, 0x6d, 0x08, 0x50, 0x00, 0x50, 0x08, 0x18, 0x00, 0x59, 0x04, 0x0b, 0x0c, 0x51, 0xdf, 0x07, 0x08, 0x44, 0x04, 0x28, 0x0c, 0x08, 0x00, 0x00, 0x00, 0x33, 0x0c, 0x04, 0x00, 0x00, 0x00, 0x02, 0x04, 0x01, 0x04, 0x0b, 0x0c, 0x45, 0xd9, 0x06, 0x08, 0x18, 0x04, 0x04, 0x08, 0x0e, 0x00, 0x17, 0x08, 0x30, 0x30, 0x05, 0x08, 0x20, 0x00, 0x03, 0x08, 0xe6, 0xff, 0x43, 0x04, 0x50, 0x08, 0x10, 0x00, 0x02, 0x04, 0x5c, 0x0c, 0x15, 0x11, 0x0c, 0x00, 0x59, 0x04, 0x50, 0x08, 0x18, 0x00, 0x44, 0x04, 0x03, 0x08, 0xcc, 0xff, 0x02, 0x04, 0x43, 0x04, 0x0b, 0x0c, 0xa5, 0xf9, 0x07, 0x08, 0x0b, 0x0c, 0x29, 0xdf, 0x07, 0x08, 0x7e, 0x04, 0x79, 0x08, 0x0b, 0x00, 0x64, 0x04, 0x0b, 0x0c, 0x45, 0xd9, 0x06, 0x08, 0x50, 0x08, 0x10, 0x00, 0x5c, 0x0c, 0x11, 0x11, 0x0c, 0x00, 0x50, 0x08, 0x18, 0x00, 0x67, 0x08, 0x80, 0x00, 0x0b, 0x0c, 0xa1, 0xd8, 0x06, 0x08, 0x75, 0x04, 0x05, 0x08, 0xfc, 0xff, 0x50, 0x08, 0x1f, 0x00, 0x59, 0x04, 0x47, 0x0c, 0x18, 0x2b, 0x01, 0x08, 0x0b, 0x0c, 0xa5, 0xd9, 0x06, 0x08, 0x79, 0x08, 0x08, 0x00, 0x31, 0x08, 0x78, 0x00, 0x7c, 0x08, 0x0e, 0x00, 0x01, 0x04, 0x4b, 0x04, 0x5f, 0x08, 0x12, 0x11, 0x02, 0x04, 0x59, 0x04, 0x28, 0x0c, 0x08, 0x00, 0x00, 0x00, 0x79, 0x08, 0x06, 0x00, 0xff, 0xff 
};*/

// clang-format off
START_SCRIPT(gUnk_080126FC)
0x0401, 0x0867, 0x0040, 0x0879, 0x0007, 0x0402, 0x0850, 0x0020, 0x0c33, 0x0004, 0x0000, 0x0850, 0x0022, 0x0c0b, 0xf3c9, 0x0807, 0x0c5c, 0x1102, 0x000c, 0x0459, 0x0850, 0x0020, 0x0c28, 0x0008, 0x0000, 0x0c33, 0x0004, 0x0000, 0x0850, 0x0021, 0x0c0b, 0xf3c9, 0x0807, 0x0c5c, 0x1103, 0x000c, 0x0459, 0x0850, 0x0020, 0x0c28, 0x0008, 0x0000, 0x0c33, 0x0004, 0x0000, 0x0879, 0x0004, 0x0831, 0x003c, 0x0c28, 0x0008, 0x0000, 0x0c33, 0x0004, 0x0000, 0x0879, 0x0011, 0x0850, 0x001c, 0x0c5c, 0x1105, 0x000c, 0x0459, 0x0850, 0x0020, 0x0c28, 0x0008, 0x0000, 0x0c33, 0x0004, 0x0000, 0x0850, 0x0022, 0x0c0b, 0xf3c9, 0x0807, 0x0c5c, 0x1106, 0x000c, 0x0459, 0x0850, 0x001c, 0x0c0b, 0xd96d, 0x0806, 0x0c5c, 0x1107, 0x000c, 0x0459, 0x0850, 0x0020, 0x0c28, 0x0008, 0x0000, 0x0c33, 0x0004, 0x0000, 0x0850, 0x0021, 0x0c0b, 0xf3c9, 0x0807, 0x0c5c, 0x1108, 0x000c, 0x0459, 0x0850, 0x001c, 0x0c0b, 0xd96d, 0x0806, 0x0c5c, 0x1109, 0x000c, 0x0459, 0x0850, 0x0020, 0x0879, 0x000a, 0x0453, 0x0c28, 0x0008, 0x0000, 0x0402, 0x0401, 0x0815, 0x0000, 0x0804, 0x0028, 0x0418, 0x0805, 0xfff0, 0x0402, 0x0443, 0x0c0b, 0xd945, 0x0806, 0x0850, 0x0010, 0x0c5c, 0x1114, 0x000c, 0x0459, 0x0850, 0x0020, 0x0444, 0x0803, 0xffd0, 0x0443, 0x0454, 0x140c, 0xf5b1, 0x0807, 0x003c, 0x0000, 0x0c0b, 0x91d1, 0x0807, 0x0402, 0x0c28, 0x0008, 0x0000, 0x0c33, 0x0004, 0x0000, 0x0879, 0x000b, 0x0c28, 0x0008, 0x0000, 0x0c33, 0x0004, 0x0000, 0x0c0b, 0xd945, 0x0806, 0x0850, 0x0010, 0x0c5c, 0x110a, 0x000c, 0x0459, 0x0850, 0x001f, 0x0c28, 0x0008, 0x0000, 0x0c33, 0x0004, 0x0000, 0x0850, 0x0010, 0x0c5c, 0x110b, 0x000c, 0x0459, 0x0850, 0x001f, 0x0c28, 0x0008, 0x0000, 0x0c33, 0x0004, 0x0000, 0x0879, 0x0004, 0x0831, 0x003c, 0x0850, 0x0010, 0x0c5c, 0x110c, 0x000c, 0x0459, 0x0850, 0x001f, 0x0c28, 0x0008, 0x0000, 0x0c33, 0x0004, 0x0000, 0x0850, 0x0010, 0x0c5c, 0x110d, 0x000c, 0x0459, 0x0850, 0x001f, 0x0c28, 0x0008, 0x0000, 0x0c33, 0x0004, 0x0000, 0x0850, 0x0010, 0x0c5c, 0x110e, 0x000c, 0x0459, 0x0850, 0x0018, 0x0867, 0x0080, 0x0c0b, 0xd909, 0x0806, 0x086d, 0x0010, 0x0879, 0x000a, 0x0453, 0x0c28, 0x0008, 0x0000, 0x0c33, 0x0004, 0x0000, 0x0402, 0x0401, 0x0c0b, 0xd945, 0x0806, 0x0418, 0x0804, 0x000e, 0x0817, 0x3030, 0x0805, 0x0020, 0x0803, 0xffe6, 0x0443, 0x0850, 0x0010, 0x0402, 0x0c5c, 0x1115, 0x000c, 0x0459, 0x0850, 0x0018, 0x0444, 0x0803, 0xffcc, 0x0402, 0x0443, 0x0c0b, 0xf9a5, 0x0807, 0x0c0b, 0xdf29, 0x0807, 0x0464, 0x0c0b, 0xd945, 0x0806, 0x0850, 0x0010, 0x0c5c, 0x110f, 0x000c, 0x0850, 0x0018, 0x0867, 0x0080, 0x0c0b, 0xd909, 0x0806, 0x086d, 0x0050, 0x0459, 0x0c0b, 0xdf51, 0x0807, 0x0444, 0x0c28, 0x0008, 0x0000, 0x0c33, 0x0004, 0x0000, 0x0402, 0x0401, 0x0c0b, 0xd945, 0x0806, 0x0418, 0x0804, 0x000e, 0x0817, 0x3030, 0x0805, 0x0020, 0x0803, 0xffe6, 0x0443, 0x0850, 0x0010, 0x0402, 0x0c5c, 0x1115, 0x000c, 0x0459, 0x0850, 0x0018, 0x0444, 0x0803, 0xffcc, 0x0402, 0x0443, 0x0c0b, 0xf9a5, 0x0807, 0x0c0b, 0xdf29, 0x0807, 0x0464, 0x0c0b, 0xd945, 0x0806, 0x0850, 0x0010, 0x0c5c, 0x1110, 0x000c, 0x0850, 0x0018, 0x0867, 0x0080, 0x0c0b, 0xd909, 0x0806, 0x086d, 0x0050, 0x0850, 0x0018, 0x0459, 0x0c0b, 0xdf51, 0x0807, 0x0444, 0x0c28, 0x0008, 0x0000, 0x0c33, 0x0004, 0x0000, 0x0402, 0x0401, 0x0c0b, 0xd945, 0x0806, 0x0418, 0x0804, 0x000e, 0x0817, 0x3030, 0x0805, 0x0020, 0x0803, 0xffe6, 0x0443, 0x0850, 0x0010, 0x0402, 0x0c5c, 0x1115, 0x000c, 0x0459, 0x0850, 0x0018, 0x0444, 0x0803, 0xffcc, 0x0402, 0x0443, 0x0c0b, 0xf9a5, 0x0807, 0x0c0b, 0xdf29, 0x0807, 0x047e, 0x0879, 0x000b, 0x0464, 0x0c0b, 0xd945, 0x0806, 0x0850, 0x0010, 0x0c5c, 0x1111, 0x000c, 0x0850, 0x0018, 0x0867, 0x0080, 0x0c0b, 0xd8a1, 0x0806, 0x0475, 0x0805, 0xfffc, 0x0850, 0x001f, 0x0459, 0x0c47, 0x2b18, 0x0801, 0x0c0b, 0xd9a5, 0x0806, 0x0879, 0x0008, 0x0831, 0x0078, 0x087c, 0x000e, 0x0401, 0x044b, 0x085f, 0x1112, 0x0402, 0x0459, 0x0c28, 0x0008, 0x0000, 0x0879, 0x0006, 0xffff
END_SCRIPT()
    // clang-format on
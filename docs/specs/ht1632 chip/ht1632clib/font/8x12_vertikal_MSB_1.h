const char font[256][16]={
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	// 0x00
{0xF8,0x03,0x0C,0x06,0xA4,0x04,0x34,0x04,0x34,0x04,0xA4,0x04,0x0C,0x06,0xF8,0x03},	// 0x01
{0xF8,0x03,0xFC,0x07,0x5C,0x07,0xCC,0x07,0xCC,0x07,0x5C,0x07,0xFC,0x07,0xF8,0x03},	// 0x02
{0xE0,0x01,0xF0,0x03,0xF8,0x01,0xFC,0x00,0xF8,0x01,0xF0,0x03,0xE0,0x01,0x00,0x00},	// 0x03
{0xC0,0x00,0xE0,0x01,0xF0,0x03,0xF8,0x07,0xF0,0x03,0xE0,0x01,0xC0,0x00,0x00,0x00},	// 0x04
{0xE0,0x00,0xE4,0x00,0xE4,0x03,0x9C,0x07,0x9C,0x07,0xE4,0x03,0xE4,0x00,0xE0,0x00},	// 0x05
{0xC0,0x00,0xE4,0x01,0xE4,0x03,0xFC,0x07,0xFC,0x07,0xE4,0x03,0xE4,0x01,0xC0,0x00},	// 0x06
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	// 0x07
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	// 0x08
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	// 0x09
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	// 0x0A
{0x78,0x00,0xFC,0x00,0xC4,0x05,0xC4,0x05,0x7C,0x07,0x38,0x06,0x80,0x07,0x00,0x00},	// 0x0B
{0x00,0x00,0x90,0x03,0xD0,0x07,0x7C,0x04,0x7C,0x04,0xD0,0x07,0x90,0x03,0x00,0x00},	// 0x0C
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	// 0x0D
{0x0E,0x00,0xFE,0x07,0xFC,0x07,0x00,0x05,0x00,0x05,0x1C,0x05,0xFC,0x07,0xF8,0x07},	// 0x0E
{0x68,0x01,0xF8,0x01,0xF0,0x00,0x9C,0x03,0x9C,0x03,0xF0,0x00,0xF8,0x01,0x68,0x01},	// 0x0F
{0xFC,0x07,0xF8,0x03,0xF0,0x01,0xE0,0x00,0xE0,0x00,0x40,0x00,0x40,0x00,0x00,0x00},	// 0x10
{0x40,0x00,0x40,0x00,0xE0,0x00,0xE0,0x00,0xF0,0x01,0xF8,0x03,0xFC,0x07,0x00,0x00},	// 0x11
{0x00,0x00,0x10,0x01,0x18,0x03,0xFC,0x07,0xFC,0x07,0x18,0x03,0x10,0x01,0x00,0x00},	// 0x12
{0x00,0x00,0xCC,0x07,0xCC,0x07,0x00,0x00,0x00,0x00,0xCC,0x07,0xCC,0x07,0x00,0x00},	// 0x13
{0x80,0x03,0xC0,0x07,0x40,0x04,0xFC,0x07,0xFC,0x07,0x00,0x04,0xFC,0x07,0xFC,0x07},	// 0x14
{0x04,0x00,0x66,0x06,0xF2,0x07,0x92,0x05,0x9A,0x04,0xFE,0x04,0x66,0x06,0x00,0x02},	// 0x15
{0x1C,0x00,0x1C,0x00,0x1C,0x00,0x1C,0x00,0x1C,0x00,0x1C,0x00,0x1C,0x00,0x00,0x00},	// 0x16
{0x00,0x00,0x12,0x01,0x1A,0x03,0xFE,0x07,0xFE,0x07,0x1A,0x03,0x12,0x01,0x00,0x00},	// 0x17
{0x00,0x00,0x00,0x01,0x00,0x03,0xFC,0x07,0xFC,0x07,0x00,0x03,0x00,0x01,0x00,0x00},	// 0x18
{0x00,0x00,0x10,0x00,0x18,0x00,0xFC,0x07,0xFC,0x07,0x18,0x00,0x10,0x00,0x00,0x00},	// 0x19
{0x40,0x00,0x40,0x00,0x40,0x00,0x50,0x01,0xF0,0x01,0xE0,0x00,0x40,0x00,0x00,0x00},	// 0x1A
{0x40,0x00,0xE0,0x00,0xF0,0x01,0x50,0x01,0x40,0x00,0x40,0x00,0x40,0x00,0x00,0x00},	// 0x1B
{0xF0,0x00,0xF0,0x00,0x10,0x00,0x10,0x00,0x10,0x00,0x10,0x00,0x10,0x00,0x00,0x00},	// 0x1C
{0x40,0x00,0xE0,0x00,0xF0,0x01,0x40,0x00,0x40,0x00,0xF0,0x01,0xE0,0x00,0x40,0x00},	// 0x1D
{0x0C,0x00,0x3C,0x00,0xFC,0x00,0xFC,0x03,0xFC,0x00,0x3C,0x00,0x0C,0x00,0x00,0x00},	// 0x1E
{0x00,0x03,0xC0,0x03,0xF0,0x03,0xFC,0x03,0xF0,0x03,0xC0,0x03,0x00,0x03,0x00,0x00},	// 0x1F
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	// 0x20
{0x00,0x00,0x80,0x03,0xEC,0x07,0xEC,0x07,0x80,0x03,0x00,0x00,0x00,0x00,0x00,0x00},	// 0x21
{0x00,0x00,0x00,0x07,0x80,0x07,0x00,0x00,0x00,0x00,0x80,0x07,0x00,0x07,0x00,0x00},	// 0x22
{0x10,0x01,0xFC,0x07,0xFC,0x07,0x10,0x01,0xFC,0x07,0xFC,0x07,0x10,0x01,0x00,0x00},	// 0x23
{0x88,0x01,0xC8,0x03,0x4E,0x0E,0x4E,0x0E,0x78,0x02,0x30,0x02,0x00,0x00,0x00,0x00},	// 0x24
{0x8C,0x01,0x98,0x01,0x30,0x00,0x60,0x00,0xCC,0x00,0x8C,0x01,0x00,0x00,0x00,0x00},	// 0x25
{0x78,0x03,0xFC,0x07,0xC4,0x04,0xEC,0x07,0x78,0x03,0x3C,0x00,0x64,0x00,0x00,0x00},	// 0x26
{0x00,0x00,0x80,0x00,0x80,0x07,0x00,0x07,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	// 0x27
{0x00,0x00,0xE0,0x00,0xF0,0x01,0x18,0x03,0x0C,0x06,0x04,0x04,0x00,0x00,0x00,0x00},	// 0x28
{0x00,0x00,0x04,0x04,0x0C,0x06,0x18,0x03,0xF0,0x01,0xE0,0x00,0x00,0x00,0x00,0x00},	// 0x29
{0x40,0x00,0x50,0x01,0xF0,0x01,0xE0,0x00,0xE0,0x00,0xF0,0x01,0x50,0x01,0x40,0x00},	// 0x2A
{0x00,0x00,0x40,0x00,0x40,0x00,0xF0,0x01,0xF0,0x01,0x40,0x00,0x40,0x00,0x00,0x00},	// 0x2B
{0x00,0x00,0x02,0x00,0x0E,0x00,0x0C,0x00,0x0C,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	// 0x2C
{0x40,0x00,0x40,0x00,0x40,0x00,0x40,0x00,0x40,0x00,0x40,0x00,0x40,0x00,0x00,0x00},	// 0x2D
{0x00,0x00,0x00,0x00,0x0C,0x00,0x0C,0x00,0x0C,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	// 0x2E
{0x0C,0x00,0x18,0x00,0x30,0x00,0x60,0x00,0xC0,0x00,0x80,0x01,0x00,0x03,0x00,0x00},	// 0x2F
{0xF8,0x03,0xFC,0x07,0x34,0x04,0xE4,0x04,0x84,0x05,0xFC,0x07,0xF8,0x03,0x00,0x00},	// 0x30
{0x04,0x01,0x04,0x01,0xFC,0x03,0xFC,0x07,0x04,0x00,0x04,0x00,0x00,0x00,0x00,0x00},	// 0x31
{0x0C,0x03,0x1C,0x07,0x34,0x04,0x64,0x04,0xCC,0x07,0x8C,0x03,0x00,0x00,0x00,0x00},	// 0x32
{0x08,0x02,0x0C,0x06,0x44,0x04,0x44,0x04,0xFC,0x07,0xB8,0x03,0x00,0x00,0x00,0x00},	// 0x33
{0x60,0x00,0xE0,0x00,0xA0,0x01,0x24,0x03,0xFC,0x07,0xFC,0x07,0x24,0x00,0x00,0x00},	// 0x34
{0xC8,0x07,0xCC,0x07,0x44,0x04,0x44,0x04,0x7C,0x04,0x38,0x04,0x00,0x00,0x00,0x00},	// 0x35
{0xF8,0x01,0xFC,0x03,0x44,0x06,0x44,0x04,0x7C,0x04,0x38,0x00,0x00,0x00,0x00,0x00},	// 0x36
{0x00,0x07,0x00,0x07,0x1C,0x04,0x3C,0x04,0x60,0x04,0xC0,0x07,0x80,0x07,0x00,0x00},	// 0x37
{0xB8,0x03,0xFC,0x07,0x44,0x04,0x44,0x04,0xFC,0x07,0xB8,0x03,0x00,0x00,0x00,0x00},	// 0x38
{0x80,0x03,0xC4,0x07,0x4C,0x04,0x7C,0x04,0xF0,0x07,0xC0,0x03,0x00,0x00,0x00,0x00},	// 0x39
{0x00,0x00,0x00,0x00,0x98,0x01,0x98,0x01,0x98,0x01,0x00,0x00,0x00,0x00,0x00,0x00},	// 0x3A
{0x00,0x00,0x00,0x00,0x9A,0x01,0x9E,0x01,0x9C,0x01,0x00,0x00,0x00,0x00,0x00,0x00},	// 0x3B
{0x40,0x00,0xE0,0x00,0xB0,0x01,0x18,0x03,0x0C,0x06,0x04,0x04,0x00,0x00,0x00,0x00},	// 0x3C
{0x00,0x00,0xA0,0x00,0xA0,0x00,0xA0,0x00,0xA0,0x00,0xA0,0x00,0xA0,0x00,0x00,0x00},	// 0x3D
{0x00,0x00,0x04,0x04,0x0C,0x06,0x18,0x03,0xB0,0x01,0xE0,0x00,0x40,0x00,0x00,0x00},	// 0x3E
{0x00,0x02,0x00,0x06,0x6C,0x04,0xEC,0x04,0x80,0x07,0x00,0x03,0x00,0x00,0x00,0x00},	// 0x3F
{0xF8,0x03,0xFC,0x07,0x04,0x04,0xE4,0x04,0xE4,0x04,0xE4,0x07,0xE0,0x03,0x00,0x00},	// 0x40
{0xFC,0x01,0xFC,0x03,0x20,0x06,0x20,0x06,0xFC,0x03,0xFC,0x01,0x00,0x00,0x00,0x00},	// 0x41
{0x04,0x04,0xFC,0x07,0xFC,0x07,0x44,0x04,0x44,0x04,0xFC,0x07,0xB8,0x03,0x00,0x00},	// 0x42
{0xF0,0x01,0xF8,0x03,0x0C,0x06,0x04,0x04,0x04,0x04,0x1C,0x07,0x18,0x03,0x00,0x00},	// 0x43
{0x04,0x04,0xFC,0x07,0xFC,0x07,0x04,0x04,0x0C,0x06,0xF8,0x03,0xF0,0x01,0x00,0x00},	// 0x44
{0x04,0x04,0xFC,0x07,0xFC,0x07,0x44,0x04,0x44,0x04,0xE4,0x04,0x0C,0x06,0x00,0x00},	// 0x45
{0x04,0x04,0xFC,0x07,0xFC,0x07,0x44,0x04,0x40,0x04,0xE0,0x06,0x00,0x07,0x00,0x00},	// 0x46
{0xF0,0x01,0xF8,0x03,0x0C,0x06,0x04,0x04,0x24,0x04,0x3C,0x07,0x3C,0x03,0x00,0x00},	// 0x47
{0xFC,0x07,0xFC,0x07,0x40,0x00,0x40,0x00,0xFC,0x07,0xFC,0x07,0x00,0x00,0x00,0x00},	// 0x48
{0x00,0x00,0x04,0x04,0xFC,0x07,0xFC,0x07,0x04,0x04,0x00,0x00,0x00,0x00,0x00,0x00},	// 0x49
{0x38,0x00,0x3C,0x00,0x04,0x00,0x04,0x04,0xFC,0x07,0xF8,0x07,0x00,0x04,0x00,0x00},	// 0x4A
{0x04,0x04,0xFC,0x07,0xFC,0x07,0x40,0x00,0xF0,0x01,0xBC,0x07,0x0C,0x06,0x00,0x00},	// 0x4B
{0x04,0x04,0xFC,0x07,0xFC,0x07,0x04,0x04,0x04,0x00,0x1C,0x00,0x3C,0x00,0x00,0x00},	// 0x4C
{0xFC,0x07,0xFC,0x07,0x80,0x03,0xC0,0x01,0x80,0x03,0xFC,0x07,0xFC,0x07,0x00,0x00},	// 0x4D
{0xFC,0x07,0xFC,0x07,0xC0,0x01,0xE0,0x00,0x70,0x00,0xFC,0x07,0xFC,0x07,0x00,0x00},	// 0x4E
{0xF0,0x01,0xF8,0x03,0x0C,0x06,0x04,0x04,0x0C,0x06,0xF8,0x03,0xF0,0x01,0x00,0x00},	// 0x4F
{0x04,0x04,0xFC,0x07,0xFC,0x07,0x44,0x04,0x40,0x04,0xC0,0x07,0x80,0x03,0x00,0x00},	// 0x50
{0xF0,0x01,0xF8,0x03,0x08,0x06,0x1A,0x04,0x3E,0x06,0xFE,0x03,0xF2,0x01,0x00,0x00},	// 0x51
{0x04,0x04,0xFC,0x07,0xFC,0x07,0x40,0x04,0x60,0x04,0xFC,0x07,0x9C,0x03,0x00,0x00},	// 0x52
{0x98,0x03,0xDC,0x07,0x44,0x04,0x64,0x04,0x3C,0x07,0x18,0x03,0x00,0x00,0x00,0x00},	// 0x53
{0x00,0x06,0x04,0x04,0xFC,0x07,0xFC,0x07,0x04,0x04,0x00,0x06,0x00,0x00,0x00,0x00},	// 0x54
{0xF8,0x07,0xFC,0x07,0x04,0x00,0x04,0x00,0xFC,0x07,0xF8,0x07,0x00,0x00,0x00,0x00},	// 0x55
{0xF0,0x07,0xF8,0x07,0x0C,0x00,0x0C,0x00,0xF8,0x07,0xF0,0x07,0x00,0x00,0x00,0x00},	// 0x56
{0xE0,0x07,0xFC,0x07,0x1C,0x00,0x60,0x00,0x1C,0x00,0xFC,0x07,0xE0,0x07,0x00,0x00},	// 0x57
{0x1C,0x07,0xBC,0x07,0xE0,0x00,0xE0,0x00,0xBC,0x07,0x1C,0x07,0x00,0x00,0x00,0x00},	// 0x58
{0x80,0x07,0xC4,0x07,0x7C,0x00,0x7C,0x00,0xC4,0x07,0x80,0x07,0x00,0x00,0x00,0x00},	// 0x59
{0x0C,0x07,0x3C,0x06,0x74,0x04,0xC4,0x05,0x84,0x07,0x0C,0x06,0x1C,0x06,0x00,0x00},	// 0x5A
{0x00,0x00,0x00,0x00,0xFC,0x07,0xFC,0x07,0x04,0x04,0x04,0x04,0x00,0x00,0x00,0x00},	// 0x5B
{0x00,0x03,0x80,0x01,0xC0,0x00,0x60,0x00,0x30,0x00,0x18,0x00,0x0C,0x00,0x00,0x00},	// 0x5C
{0x00,0x00,0x00,0x00,0x04,0x04,0x04,0x04,0xFC,0x07,0xFC,0x07,0x00,0x00,0x00,0x00},	// 0x5D
{0x00,0x01,0x00,0x03,0x00,0x06,0x00,0x0C,0x00,0x06,0x00,0x03,0x00,0x01,0x00,0x00},	// 0x5E
{0x02,0x00,0x02,0x00,0x02,0x00,0x02,0x00,0x02,0x00,0x02,0x00,0x02,0x00,0x02,0x00},	// 0x5F
{0x00,0x00,0x00,0x00,0x00,0x0C,0x00,0x0E,0x00,0x02,0x00,0x00,0x00,0x00,0x00,0x00},	// 0x60
{0x18,0x00,0xBC,0x00,0xA4,0x00,0xA4,0x00,0xF8,0x00,0x7C,0x00,0x04,0x00,0x00,0x00},	// 0x61
{0x04,0x04,0xFC,0x07,0xF8,0x07,0x84,0x00,0x84,0x00,0xFC,0x00,0x78,0x00,0x00,0x00},	// 0x62
{0x78,0x00,0xFC,0x00,0x84,0x00,0x84,0x00,0xCC,0x00,0x48,0x00,0x00,0x00,0x00,0x00},	// 0x63
{0x78,0x00,0xFC,0x00,0x84,0x00,0x84,0x04,0xF8,0x07,0xFC,0x07,0x04,0x00,0x00,0x00},	// 0x64
{0x78,0x00,0xFC,0x00,0xA4,0x00,0xA4,0x00,0xEC,0x00,0x68,0x00,0x00,0x00,0x00,0x00},	// 0x65
{0x44,0x00,0xFC,0x03,0xFC,0x07,0x44,0x04,0x40,0x06,0x00,0x02,0x00,0x00,0x00,0x00},	// 0x66
{0x72,0x00,0xFB,0x00,0x89,0x00,0x89,0x00,0x7F,0x00,0xFE,0x00,0x80,0x00,0x00,0x00},	// 0x67
{0x04,0x04,0xFC,0x07,0xFC,0x07,0x40,0x00,0x80,0x00,0xFC,0x00,0x7C,0x00,0x00,0x00},	// 0x68
{0x00,0x00,0x84,0x00,0x84,0x00,0xFC,0x06,0xFC,0x06,0x04,0x00,0x04,0x00,0x00,0x00},	// 0x69
{0x06,0x00,0x07,0x00,0x81,0x00,0x81,0x00,0xFF,0x06,0xFE,0x06,0x00,0x00,0x00,0x00},	// 0x6A
{0x04,0x04,0xFC,0x07,0xFC,0x07,0x20,0x00,0x70,0x00,0xDC,0x00,0x8C,0x00,0x00,0x00},	// 0x6B
{0x00,0x00,0x04,0x04,0x04,0x04,0xFC,0x07,0xFC,0x07,0x04,0x00,0x04,0x00,0x00,0x00},	// 0x6C
{0xFC,0x00,0xFC,0x00,0x80,0x00,0xF8,0x00,0x80,0x00,0xFC,0x00,0x7C,0x00,0x00,0x00},	// 0x6D
{0xFC,0x00,0xFC,0x00,0x80,0x00,0x80,0x00,0xFC,0x00,0x7C,0x00,0x00,0x00,0x00,0x00},	// 0x6E
{0x78,0x00,0xFC,0x00,0x84,0x00,0x84,0x00,0xFC,0x00,0x78,0x00,0x00,0x00,0x00,0x00},	// 0x6F
{0x81,0x00,0xFF,0x00,0x7F,0x00,0x85,0x00,0x84,0x00,0xFC,0x00,0x78,0x00,0x00,0x00},	// 0x70
{0x78,0x00,0xFC,0x00,0x84,0x00,0x85,0x00,0x7F,0x00,0xFF,0x00,0x81,0x00,0x00,0x00},	// 0x71
{0x84,0x00,0xFC,0x00,0xFC,0x00,0x24,0x00,0xC0,0x00,0xE0,0x00,0x60,0x00,0x00,0x00},	// 0x72
{0x48,0x00,0xEC,0x00,0xA4,0x00,0x94,0x00,0xDC,0x00,0x48,0x00,0x00,0x00,0x00,0x00},	// 0x73
{0x80,0x00,0xF8,0x01,0xFC,0x03,0x84,0x00,0x8C,0x00,0x88,0x00,0x00,0x00,0x00,0x00},	// 0x74
{0xF8,0x00,0xFC,0x00,0x04,0x00,0x04,0x00,0xF8,0x00,0xFC,0x00,0x04,0x00,0x00,0x00},	// 0x75
{0xF0,0x00,0xF8,0x00,0x0C,0x00,0x0C,0x00,0xF8,0x00,0xF0,0x00,0x00,0x00,0x00,0x00},	// 0x76
{0xF0,0x00,0xFC,0x00,0x0C,0x00,0x30,0x00,0x0C,0x00,0xFC,0x00,0xF0,0x00,0x00,0x00},	// 0x77
{0x84,0x00,0xCC,0x00,0x78,0x00,0x30,0x00,0x78,0x00,0xCC,0x00,0x84,0x00,0x00,0x00},	// 0x78
{0x01,0x00,0xF1,0x00,0xF9,0x00,0x0B,0x00,0x0E,0x00,0xFC,0x00,0xF0,0x00,0x00,0x00},	// 0x79
{0xCC,0x00,0x9C,0x00,0x94,0x00,0xA4,0x00,0xE4,0x00,0xCC,0x00,0x00,0x00,0x00,0x00},	// 0x7A
{0x40,0x00,0xE0,0x00,0xB8,0x03,0x1C,0x07,0x04,0x04,0x04,0x04,0x00,0x00,0x00,0x00},	// 0x7B
{0x00,0x00,0x00,0x00,0x00,0x00,0xBC,0x07,0xBC,0x07,0x00,0x00,0x00,0x00,0x00,0x00},	// 0x7C
{0x04,0x04,0x04,0x04,0x1C,0x07,0xB8,0x03,0xE0,0x00,0x40,0x00,0x00,0x00,0x00,0x00},	// 0x7D
{0x00,0x03,0x00,0x07,0x00,0x04,0x00,0x06,0x00,0x03,0x00,0x01,0x00,0x07,0x00,0x04},	// 0x7E
{0x38,0x00,0x78,0x00,0xC8,0x00,0x88,0x01,0xC8,0x00,0x78,0x00,0x38,0x00,0x00,0x00},	// 0x7F
{0xF8,0x03,0xFD,0x07,0x07,0x04,0x06,0x04,0x1C,0x07,0x18,0x03,0x00,0x00,0x00,0x00},	// 0x80
{0xF8,0x06,0xFC,0x06,0x04,0x00,0x04,0x00,0xF8,0x06,0xFC,0x06,0x04,0x00,0x00,0x00},	// 0x81
{0x78,0x00,0xFC,0x00,0xA4,0x02,0xA4,0x06,0xEC,0x0C,0x68,0x08,0x00,0x00,0x00,0x00},	// 0x82
{0x18,0x02,0xBC,0x06,0xA4,0x0C,0xA4,0x0C,0xF8,0x06,0x7C,0x02,0x04,0x00,0x00,0x00},	// 0x83
{0x18,0x06,0xBC,0x06,0xA4,0x00,0xA4,0x00,0xF8,0x06,0x7C,0x06,0x04,0x00,0x00,0x00},	// 0x84
{0x18,0x08,0xBC,0x0C,0xA4,0x06,0xA4,0x02,0xF8,0x00,0x7C,0x00,0x04,0x00,0x00,0x00},	// 0x85
{0x98,0x00,0xBC,0x06,0xA4,0x0F,0xA4,0x09,0xF8,0x0F,0x7C,0x06,0x04,0x00,0x00,0x00},	// 0x86
{0x78,0x00,0xFD,0x00,0x87,0x00,0x86,0x00,0xCC,0x00,0x48,0x00,0x00,0x00,0x00,0x00},	// 0x87
{0x78,0x02,0xFC,0x06,0xA4,0x0C,0xA4,0x0C,0xE4,0x06,0x64,0x02,0x00,0x00,0x00,0x00},	// 0x88
{0x78,0x06,0xFC,0x06,0xA4,0x00,0xA4,0x00,0xE4,0x06,0x64,0x06,0x00,0x00,0x00,0x00},	// 0x89
{0x78,0x08,0xFC,0x0C,0xA4,0x06,0xA4,0x02,0xE4,0x00,0x64,0x00,0x00,0x00,0x00,0x00},	// 0x8A
{0x00,0x00,0x84,0x06,0x84,0x06,0xFC,0x00,0xFC,0x06,0x04,0x06,0x04,0x00,0x00,0x00},	// 0x8B
{0x00,0x00,0x84,0x02,0x84,0x06,0xFC,0x0C,0xFC,0x06,0x04,0x02,0x04,0x00,0x00,0x00},	// 0x8C
{0x00,0x00,0x84,0x08,0x84,0x0C,0xFC,0x06,0xFC,0x02,0x04,0x00,0x04,0x00,0x00,0x00},	// 0x8D
{0x7C,0x04,0xFC,0x04,0x90,0x01,0x90,0x01,0xFC,0x04,0x7C,0x04,0x00,0x00,0x00,0x00},	// 0x8E
{0x7C,0x06,0xFC,0x0F,0x90,0x09,0x90,0x09,0xFC,0x0F,0x7C,0x06,0x00,0x00,0x00,0x00},	// 0x8F
{0xFC,0x01,0xFC,0x01,0x24,0x01,0x24,0x05,0x24,0x0D,0x8C,0x09,0x00,0x00,0x00,0x00},	// 0x90
{0x9C,0x00,0xBC,0x00,0xA4,0x00,0xF8,0x00,0xFC,0x00,0xA4,0x00,0xE4,0x00,0x64,0x00},	// 0x91
{0xFC,0x01,0xFC,0x03,0x40,0x06,0xFC,0x07,0xFC,0x07,0x44,0x04,0x44,0x04,0x00,0x00},	// 0x92
{0x78,0x02,0xFC,0x06,0x84,0x0C,0x84,0x0C,0xFC,0x06,0x78,0x02,0x00,0x00,0x00,0x00},	// 0x93
{0x78,0x06,0xFC,0x06,0x84,0x00,0x84,0x00,0xFC,0x06,0x78,0x06,0x00,0x00,0x00,0x00},	// 0x94
{0x78,0x08,0xFC,0x0C,0x84,0x06,0x84,0x02,0xFC,0x00,0x78,0x00,0x00,0x00,0x00,0x00},	// 0x95
{0xF8,0x02,0xFC,0x06,0x04,0x0C,0x04,0x0C,0xF8,0x06,0xFC,0x02,0x04,0x00,0x00,0x00},	// 0x96
{0xF8,0x08,0xFC,0x0C,0x04,0x06,0x04,0x02,0xF8,0x00,0xFC,0x00,0x04,0x00,0x00,0x00},	// 0x97
{0x01,0x00,0xF1,0x06,0xF9,0x06,0x0B,0x00,0x0E,0x00,0xFC,0x06,0xF0,0x06,0x00,0x00},	// 0x98
{0xF8,0x04,0xFC,0x05,0x04,0x01,0x04,0x01,0xFC,0x05,0xF8,0x04,0x00,0x00,0x00,0x00},	// 0x99
{0xF8,0x0B,0xFC,0x0B,0x04,0x00,0x04,0x00,0xFC,0x0B,0xF8,0x0B,0x00,0x00,0x00,0x00},	// 0x9A
{0x78,0x00,0xFC,0x00,0x94,0x00,0xA4,0x00,0xFC,0x00,0x78,0x00,0x00,0x00,0x00,0x00},	// 0x9B
{0x4C,0x00,0xFC,0x07,0xF4,0x0F,0x44,0x08,0x44,0x08,0x44,0x0C,0x04,0x04,0x00,0x00},	// 0x9C
{0xF4,0x01,0xF8,0x03,0x1C,0x06,0xE4,0x04,0x0C,0x07,0xF8,0x03,0xF0,0x05,0x00,0x00},	// 0x9D
{0x44,0x00,0x6C,0x00,0x38,0x00,0x10,0x00,0x38,0x00,0x6C,0x00,0x44,0x00,0x00,0x00},	// 0x9E
{0x08,0x00,0x8C,0x00,0x84,0x00,0xFC,0x07,0xF8,0x0F,0x80,0x08,0x80,0x0C,0x00,0x04},	// 0x9F
{0x18,0x00,0xBC,0x00,0xA4,0x02,0xA4,0x06,0xF8,0x0C,0x7C,0x08,0x04,0x00,0x00,0x00},	// 0xA0
{0x00,0x00,0x84,0x00,0x84,0x02,0xFC,0x06,0xFC,0x0C,0x04,0x08,0x04,0x00,0x00,0x00},	// 0xA1
{0x78,0x00,0xFC,0x00,0x84,0x02,0x84,0x06,0xFC,0x0C,0x78,0x08,0x00,0x00,0x00,0x00},	// 0xA2
{0xF8,0x00,0xFC,0x00,0x04,0x02,0x04,0x06,0xF8,0x0C,0xFC,0x08,0x04,0x00,0x00,0x00},	// 0xA3
{0xFC,0x02,0xFC,0x06,0x80,0x04,0x80,0x06,0xFC,0x02,0x7C,0x06,0x00,0x04,0x00,0x00},	// 0xA4
{0xFC,0x05,0xFC,0x0D,0xC0,0x08,0x60,0x0C,0x30,0x04,0xFC,0x0D,0xFC,0x09,0x00,0x00},	// 0xA5
{0x20,0x03,0xA0,0x07,0xA0,0x04,0xA0,0x04,0xA0,0x07,0xA0,0x03,0xA0,0x00,0x00,0x00},	// 0xA6
{0x20,0x03,0xA0,0x07,0xA0,0x04,0xA0,0x04,0xA0,0x07,0x20,0x03,0x20,0x00,0x00,0x00},	// 0xA7
{0x38,0x00,0x7C,0x00,0xC4,0x06,0x84,0x06,0x0C,0x00,0x08,0x00,0x00,0x00,0x00,0x00},	// 0xA8
{0xF0,0x01,0x08,0x02,0xF4,0x05,0x64,0x05,0xD4,0x05,0x08,0x02,0xF0,0x01,0x00,0x00},	// 0xA9
{0x40,0x00,0x40,0x00,0x40,0x00,0x40,0x00,0x78,0x00,0x78,0x00,0x00,0x00,0x00,0x00},	// 0xAA
{0x18,0x02,0xB0,0x07,0xE0,0x07,0xC2,0x00,0xA6,0x01,0x2E,0x03,0x3A,0x06,0x12,0x00},	// 0xAB
{0x18,0x02,0xB0,0x07,0xEC,0x07,0xDC,0x00,0xB4,0x01,0x64,0x03,0x7E,0x06,0x7E,0x04},	// 0xAC
{0x00,0x00,0x38,0x00,0xFC,0x06,0xFC,0x06,0x38,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	// 0xAD
{0x30,0x00,0x78,0x00,0xCC,0x00,0x84,0x00,0x30,0x00,0x78,0x00,0xCC,0x00,0x84,0x00},	// 0xAE
{0x84,0x00,0xCC,0x00,0x78,0x00,0x30,0x00,0x84,0x00,0xCC,0x00,0x78,0x00,0x30,0x00},	// 0xAF
{0x92,0x04,0x49,0x02,0x24,0x09,0x92,0x04,0x49,0x02,0x24,0x09,0x92,0x04,0x49,0x02},	// 0xB0
{0x55,0x05,0xAA,0x0A,0x55,0x05,0xAA,0x0A,0x55,0x05,0xAA,0x0A,0x55,0x05,0xAA,0x0A},	// 0xB1
{0xDB,0x06,0xB6,0x0D,0x6D,0x0B,0xDB,0x06,0xB6,0x0D,0x6D,0x0B,0xDB,0x06,0xB6,0x0D},	// 0xB2
{0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0x0F,0xFF,0x0F,0x00,0x00,0x00,0x00,0x00,0x00},	// 0xB3
{0x40,0x00,0x40,0x00,0x40,0x00,0xFF,0x0F,0xFF,0x0F,0x00,0x00,0x00,0x00,0x00,0x00},	// 0xB4
{0x7C,0x00,0xFC,0x00,0x90,0x01,0x90,0x05,0xFC,0x0C,0x7C,0x08,0x00,0x00,0x00,0x00},	// 0xB5
{0x7C,0x04,0xFC,0x0C,0x90,0x09,0x90,0x09,0xFC,0x0C,0x7C,0x04,0x00,0x00,0x00,0x00},	// 0xB6
{0x7C,0x00,0xFC,0x08,0x90,0x0D,0x90,0x05,0xFC,0x00,0x7C,0x00,0x00,0x00,0x00,0x00},	// 0xB7
{0xF0,0x01,0x08,0x02,0xF4,0x05,0x14,0x05,0x14,0x05,0x08,0x02,0xF0,0x01,0x00,0x00},	// 0xB8
{0x90,0x00,0x9F,0x0F,0x9F,0x0F,0x00,0x00,0x00,0x00,0xFF,0x0F,0xFF,0x0F,0x00,0x00},	// 0xB9
{0x00,0x00,0xFF,0x0F,0xFF,0x0F,0x00,0x00,0x00,0x00,0xFF,0x0F,0xFF,0x0F,0x00,0x00},	// 0xBA
{0x90,0x00,0x9F,0x00,0x9F,0x00,0x80,0x00,0x80,0x00,0xFF,0x00,0xFF,0x00,0x00,0x00},	// 0xBB
{0x90,0x00,0x90,0x0F,0x90,0x0F,0x10,0x00,0x10,0x00,0xF0,0x0F,0xF0,0x0F,0x00,0x00},	// 0xBC
{0xF0,0x00,0xF8,0x01,0x0E,0x07,0x0E,0x07,0x98,0x01,0x90,0x00,0x00,0x00,0x00,0x00},	// 0xBD
{0x50,0x0F,0xD0,0x0F,0xFC,0x00,0xFC,0x00,0xD0,0x0F,0x50,0x0F,0x00,0x00,0x00,0x00},	// 0xBE
{0x40,0x00,0x40,0x00,0x40,0x00,0x7F,0x00,0x7F,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	// 0xBF
{0x00,0x00,0x00,0x00,0x00,0x00,0xC0,0x0F,0xC0,0x0F,0x40,0x00,0x40,0x00,0x40,0x00},	// 0xC0
{0x40,0x00,0x40,0x00,0x40,0x00,0xC0,0x0F,0xC0,0x0F,0x40,0x00,0x40,0x00,0x40,0x00},	// 0xC1
{0x40,0x00,0x40,0x00,0x40,0x00,0x7F,0x00,0x7F,0x00,0x40,0x00,0x40,0x00,0x40,0x00},	// 0xC2
{0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0x0F,0xFF,0x0F,0x40,0x00,0x40,0x00,0x40,0x00},	// 0xC3
{0x40,0x00,0x40,0x00,0x40,0x00,0x40,0x00,0x40,0x00,0x40,0x00,0x40,0x00,0x40,0x00},	// 0xC4
{0x40,0x00,0x40,0x00,0x40,0x00,0xFF,0x0F,0xFF,0x0F,0x40,0x00,0x40,0x00,0x40,0x00},	// 0xC5
{0x18,0x02,0xBC,0x06,0xA4,0x04,0xA4,0x06,0xF8,0x02,0x7C,0x06,0x04,0x04,0x00,0x00},	// 0xC6
{0x7C,0x04,0xFC,0x0C,0x90,0x09,0x90,0x0D,0xFC,0x04,0x7C,0x0C,0x00,0x08,0x00,0x00},	// 0xC7
{0x00,0x00,0xF0,0x0F,0xF0,0x0F,0x10,0x00,0x10,0x00,0x90,0x0F,0x90,0x0F,0x90,0x00},	// 0xC8
{0x00,0x00,0xFF,0x00,0xFF,0x00,0x80,0x00,0x80,0x00,0x9F,0x00,0x9F,0x00,0x90,0x00},	// 0xC9
{0x90,0x00,0x90,0x0F,0x90,0x0F,0x10,0x00,0x10,0x00,0x90,0x0F,0x90,0x0F,0x90,0x00},	// 0xCA
{0x90,0x00,0x9F,0x00,0x9F,0x00,0x80,0x00,0x80,0x00,0x9F,0x00,0x9F,0x00,0x90,0x00},	// 0xCB
{0x00,0x00,0xFF,0x0F,0xFF,0x0F,0x00,0x00,0x00,0x00,0x9F,0x0F,0x9F,0x0F,0x90,0x00},	// 0xCC
{0x90,0x00,0x90,0x00,0x90,0x00,0x90,0x00,0x90,0x00,0x90,0x00,0x90,0x00,0x90,0x00},	// 0xCD
{0x90,0x00,0x9F,0x0F,0x9F,0x0F,0x00,0x00,0x00,0x00,0x9F,0x0F,0x9F,0x0F,0x90,0x00},	// 0xCE
{0x44,0x00,0x7C,0x00,0x38,0x00,0x28,0x00,0x38,0x00,0x7C,0x00,0x44,0x00,0x00,0x00},	// 0xCF
{0x38,0x0A,0x7C,0x0A,0x44,0x04,0x44,0x06,0x44,0x0B,0xFC,0x09,0xF8,0x00,0x00,0x00},	// 0xD0
{0x44,0x04,0xFC,0x07,0xFC,0x07,0x44,0x04,0x0C,0x06,0xF8,0x03,0xF0,0x01,0x00,0x00},	// 0xD1
{0xFC,0x05,0xFC,0x0D,0x24,0x09,0x24,0x09,0x24,0x0D,0x8C,0x05,0x00,0x00,0x00,0x00},	// 0xD2
{0xFC,0x05,0xFC,0x05,0x24,0x01,0x24,0x01,0x24,0x05,0x8C,0x05,0x00,0x00,0x00,0x00},	// 0xD3
{0xFC,0x01,0xFC,0x09,0x24,0x0D,0x24,0x05,0x24,0x01,0x8C,0x01,0x00,0x00,0x00,0x00},	// 0xD4
{0x40,0x04,0x40,0x04,0xC0,0x07,0xC0,0x07,0x40,0x00,0x40,0x00,0x00,0x00,0x00,0x00},	// 0xD5
{0x00,0x00,0x04,0x01,0xFC,0x05,0xFC,0x0D,0x04,0x09,0x00,0x00,0x00,0x00,0x00,0x00},	// 0xD6
{0x00,0x04,0x04,0x0D,0xFC,0x09,0xFC,0x09,0x04,0x0D,0x00,0x04,0x00,0x00,0x00,0x00},	// 0xD7
{0x00,0x04,0x04,0x05,0xFC,0x01,0xFC,0x01,0x04,0x05,0x00,0x04,0x00,0x00,0x00,0x00},	// 0xD8
{0x40,0x00,0x40,0x00,0x40,0x00,0xC0,0x0F,0xC0,0x0F,0x00,0x00,0x00,0x00,0x00,0x00},	// 0xD9
{0x00,0x00,0x00,0x00,0x00,0x00,0x7F,0x00,0x7F,0x00,0x40,0x00,0x40,0x00,0x40,0x00},	// 0xDA
{0xFF,0x0F,0xFF,0x0F,0xFF,0x0F,0xFF,0x0F,0xFF,0x0F,0xFF,0x0F,0xFF,0x0F,0xFF,0x0F},	// 0xDB
{0x3F,0x00,0x3F,0x00,0x3F,0x00,0x3F,0x00,0x3F,0x00,0x3F,0x00,0x3F,0x00,0x3F,0x00},	// 0xDC
{0x00,0x00,0x00,0x00,0x00,0x00,0xBC,0x07,0xBC,0x07,0x00,0x00,0x00,0x00,0x00,0x00},	// 0xDD
{0x00,0x00,0x04,0x09,0xFC,0x0D,0xFC,0x05,0x04,0x01,0x00,0x00,0x00,0x00,0x00,0x00},	// 0xDE
{0xC0,0x0F,0xC0,0x0F,0xC0,0x0F,0xC0,0x0F,0xC0,0x0F,0xC0,0x0F,0xC0,0x0F,0xC0,0x0F},	// 0xDF
{0xF8,0x00,0xFC,0x01,0x04,0x05,0x04,0x0D,0xFC,0x09,0xF8,0x00,0x00,0x00,0x00,0x00},	// 0xE0
{0xFC,0x03,0xFE,0x07,0x0A,0x04,0x88,0x04,0xF8,0x07,0x70,0x03,0x00,0x00,0x00,0x00},	// 0xE1
{0xF8,0x04,0xFC,0x0D,0x04,0x09,0x04,0x09,0xFC,0x0D,0xF8,0x04,0x00,0x00,0x00,0x00},	// 0xE2
{0xF8,0x00,0xFC,0x09,0x04,0x0D,0x04,0x05,0xFC,0x01,0xF8,0x00,0x00,0x00,0x00,0x00},	// 0xE3
{0x78,0x02,0xFC,0x06,0x84,0x04,0x84,0x06,0xFC,0x02,0x78,0x06,0x00,0x04,0x00,0x00},	// 0xE4
{0xF8,0x04,0xFC,0x0D,0x04,0x09,0x04,0x0D,0xFC,0x05,0xF8,0x0C,0x00,0x08,0x00,0x00},	// 0xE5
{0x01,0x00,0xFF,0x00,0xFE,0x00,0x04,0x00,0x04,0x00,0xF8,0x00,0xFC,0x00,0x04,0x00},	// 0xE6
{0x04,0x02,0xFC,0x03,0xFC,0x03,0x94,0x00,0x90,0x00,0xF0,0x00,0x60,0x00,0x00,0x00},	// 0xE7
{0x04,0x04,0xFC,0x07,0xFC,0x07,0x14,0x05,0x10,0x01,0xF0,0x01,0xE0,0x00,0x00,0x00},	// 0xE8
{0xF8,0x01,0xFC,0x01,0x04,0x04,0x04,0x0C,0xFC,0x09,0xF8,0x01,0x00,0x00,0x00,0x00},	// 0xE9
{0xF8,0x05,0xFC,0x0D,0x04,0x08,0x04,0x08,0xFC,0x0D,0xF8,0x05,0x00,0x00,0x00,0x00},	// 0xEA
{0xF8,0x01,0xFC,0x09,0x04,0x0C,0x04,0x04,0xFC,0x01,0xF8,0x01,0x00,0x00,0x00,0x00},	// 0xEB
{0x01,0x00,0xF1,0x00,0xF9,0x00,0x0B,0x02,0x0E,0x06,0xFC,0x0C,0xF0,0x08,0x00,0x00},	// 0xEC
{0xC0,0x01,0xE4,0x01,0x3C,0x04,0x3C,0x0C,0xE4,0x09,0xC0,0x01,0x00,0x00,0x00,0x00},	// 0xED
{0x00,0x04,0x00,0x04,0x00,0x04,0x00,0x04,0x00,0x04,0x00,0x04,0x00,0x00,0x00,0x00},	// 0xEE
{0x00,0x00,0x00,0x00,0x00,0x02,0x00,0x06,0x00,0x0C,0x00,0x08,0x00,0x00,0x00,0x00},	// 0xEF
{0x40,0x00,0x40,0x00,0x40,0x00,0x40,0x00,0x40,0x00,0x40,0x00,0x00,0x00,0x00,0x00},	// 0xF0
{0x88,0x00,0x88,0x00,0xE8,0x03,0xE8,0x03,0x88,0x00,0x88,0x00,0x00,0x00,0x00,0x00},	// 0xF1
{0x48,0x00,0x48,0x00,0x48,0x00,0x48,0x00,0x48,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	// 0xF2
{0x98,0x08,0xB0,0x0A,0xEC,0x0F,0xDC,0x05,0xB4,0x01,0x64,0x03,0x7E,0x06,0x7E,0x04},	// 0xF3
{0x80,0x03,0xC0,0x07,0x40,0x04,0xFC,0x07,0xFC,0x07,0x00,0x04,0xFC,0x07,0xFC,0x07},	// 0xF4
{0x04,0x00,0x66,0x06,0xF2,0x07,0x92,0x05,0x9A,0x04,0xFE,0x04,0x66,0x06,0x00,0x02},	// 0xF5
{0x40,0x00,0x40,0x00,0x58,0x03,0x58,0x03,0x40,0x00,0x40,0x00,0x00,0x00,0x00,0x00},	// 0xF6
{0x00,0x00,0x01,0x00,0x03,0x00,0x03,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	// 0xF7
{0x00,0x00,0x80,0x03,0xC0,0x07,0x40,0x04,0x40,0x04,0xC0,0x07,0x80,0x03,0x00,0x00},	// 0xF8
{0x00,0x04,0x00,0x04,0x00,0x00,0x00,0x00,0x00,0x04,0x00,0x04,0x00,0x00,0x00,0x00},	// 0xF9
{0x00,0x00,0x00,0x00,0x00,0x00,0x40,0x00,0x40,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	// 0xFA
{0x00,0x00,0x40,0x02,0xC0,0x07,0xC0,0x07,0x40,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	// 0xFB
{0x00,0x00,0x40,0x04,0x40,0x05,0x40,0x05,0xC0,0x07,0x80,0x02,0x00,0x00,0x00,0x00},	// 0xFC
{0x00,0x00,0x40,0x04,0xC0,0x04,0xC0,0x05,0x40,0x07,0x40,0x02,0x00,0x00,0x00,0x00},	// 0xFD
{0xF8,0x01,0xF8,0x01,0xF8,0x01,0xF8,0x01,0xF8,0x01,0xF8,0x01,0x00,0x00,0x00,0x00},	// 0xFE
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00} 	// 0xFF
};
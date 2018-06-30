
#include "dos_inc.h"

static const unsigned char bin_device_com[] = {
	 0xE9, 0x06, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x17, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x44,
	 0x45, 0x56, 0x49, 0x43, 0x45, 0x3A, 0x20, 0x24, 0x43, 0x6F, 0x75, 0x6C, 0x64, 0x20, 0x6E, 0x6F,
	 0x74, 0x20, 0x6C, 0x6F, 0x61, 0x64, 0x20, 0x24, 0x0D, 0x0A, 0x50, 0x72, 0x65, 0x73, 0x73, 0x20,
	 0x61, 0x6E, 0x79, 0x20, 0x6B, 0x65, 0x79, 0x20, 0x74, 0x6F, 0x20, 0x65, 0x78, 0x69, 0x74, 0x20,
	 0x2E, 0x2E, 0x2E, 0x20, 0x24, 0x20, 0x69, 0x73, 0x20, 0x61, 0x20, 0x62, 0x6C, 0x6F, 0x63, 0x6B,
	 0x20, 0x64, 0x65, 0x76, 0x69, 0x63, 0x65, 0x2E, 0x0D, 0x0A, 0x49, 0x74, 0x20, 0x6D, 0x75, 0x73,
	 0x74, 0x20, 0x62, 0x65, 0x20, 0x6C, 0x6F, 0x61, 0x64, 0x65, 0x64, 0x20, 0x69, 0x6E, 0x20, 0x43,
	 0x4F, 0x4E, 0x46, 0x49, 0x47, 0x2E, 0x53, 0x59, 0x53, 0x2E, 0x24, 0x0D, 0x0A, 0x49, 0x74, 0x20,
	 0x6D, 0x61, 0x79, 0x20, 0x62, 0x65, 0x20, 0x64, 0x61, 0x6E, 0x67, 0x65, 0x72, 0x6F, 0x75, 0x73,
	 0x20, 0x74, 0x6F, 0x20, 0x63, 0x6F, 0x6E, 0x74, 0x69, 0x6E, 0x75, 0x65, 0x20, 0x72, 0x75, 0x6E,
	 0x6E, 0x69, 0x6E, 0x67, 0x20, 0x74, 0x68, 0x69, 0x73, 0x20, 0x73, 0x65, 0x73, 0x73, 0x69, 0x6F,
	 0x6E, 0x2E, 0x24, 0x24, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	 0x0D, 0x1E, 0x07, 0xBF, 0x03, 0x01, 0x8B, 0xD7, 0x32, 0xC0, 0xB9, 0x41, 0x00, 0xF2, 0xAE, 0xC6,
	 0x45, 0xFF, 0x24, 0xB4, 0x09, 0xCD, 0x21, 0xC3, 0x0E, 0x1F, 0x52, 0xBA, 0x5F, 0x01, 0xB4, 0x09,
	 0xCD, 0x21, 0x5A, 0xB4, 0x09, 0xCD, 0x21, 0x57, 0xE8, 0xD6, 0xFF, 0x5A, 0xB4, 0x09, 0xCD, 0x21,
	 0x80, 0x3E, 0x08, 0x02, 0x00, 0x74, 0x07, 0xBA, 0xCB, 0x01, 0xB4, 0x09, 0xCD, 0x21, 0xBA, 0x78,
	 0x01, 0xB4, 0x09, 0xCD, 0x21, 0xB4, 0x00, 0xCD, 0x16, 0x80, 0x3E, 0x08, 0x02, 0x00, 0x74, 0x0C,
	 0xE8, 0x11, 0x00, 0x8B, 0x16, 0x09, 0x02, 0xB8, 0x01, 0x31, 0xCD, 0x21, 0xE8, 0x91, 0x01, 0xB8,
	 0x01, 0x4C, 0xCD, 0x21, 0x33, 0xDB, 0xB4, 0x3E, 0xCD, 0x21, 0x43, 0x83, 0xFB, 0x05, 0x72, 0xF6,
	 0xC3, 0xCD, 0x21, 0x73, 0x08, 0xBA, 0x68, 0x01, 0xBF, 0x03, 0x02, 0xEB, 0x9B, 0x33, 0xF6, 0x0E,
	 0x07, 0xBB, 0x48, 0x01, 0x8E, 0x1E, 0x06, 0x02, 0xF6, 0x44, 0x05, 0x80, 0x75, 0x02, 0xEB, 0x7A,
	 0x8B, 0x44, 0x06, 0x2E, 0xA3, 0x04, 0x02, 0x56, 0x1E, 0x2E, 0xFF, 0x1E, 0x04, 0x02, 0x1F, 0x5E,
	 0x8B, 0x44, 0x08, 0x2E, 0xA3, 0x04, 0x02, 0x56, 0x2E, 0xFF, 0x1E, 0x04, 0x02, 0x5E, 0x0E, 0x1F,
	 0xC6, 0x06, 0x08, 0x02, 0x01, 0x8B, 0x1E, 0x56, 0x01, 0x83, 0xC3, 0x0F, 0xB1, 0x04, 0xD3, 0xEB,
	 0x03, 0x1E, 0x58, 0x01, 0xA1, 0x06, 0x02, 0x8B, 0xD3, 0x2B, 0xD8, 0x76, 0x35, 0xE8, 0x43, 0x00,
	 0x8E, 0xC0, 0x26, 0xFF, 0x34, 0xE8, 0x7D, 0x00, 0x5E, 0x83, 0xFE, 0xFF, 0x75, 0xA1, 0x8C, 0xC8,
	 0x2B, 0xD0, 0x89, 0x16, 0x09, 0x02, 0x8E, 0x06, 0x2C, 0x00, 0xB4, 0x49, 0xCD, 0x21, 0x8E, 0x06,
	 0x06, 0x02, 0x26, 0xF6, 0x06, 0x05, 0x00, 0x80, 0x74, 0x10, 0xE8, 0x67, 0xFF, 0xB8, 0x00, 0x31,
	 0xCD, 0x21, 0xE8, 0xEB, 0x00, 0xB8, 0x01, 0x4C, 0xCD, 0x21, 0xBA, 0x03, 0x02, 0xBF, 0x95, 0x01,
	 0xE9, 0x05, 0xFF, 0x50, 0x53, 0x1E, 0x06, 0x8E, 0xD8, 0xB4, 0x52, 0xCD, 0x21, 0x8B, 0x44, 0x04,
	 0xF6, 0xC4, 0x80, 0x74, 0x2B, 0x2E, 0xF6, 0x06, 0x20, 0x02, 0x04, 0x74, 0x0D, 0xA8, 0x01, 0x74,
	 0x09, 0xFA, 0x26, 0x89, 0x77, 0x0C, 0x26, 0x8C, 0x5F, 0x0E, 0x2E, 0xF6, 0x06, 0x20, 0x02, 0x08,
	 0x74, 0x0D, 0xA8, 0x08, 0x74, 0x09, 0xFA, 0x26, 0x89, 0x77, 0x08, 0x26, 0x8C, 0x5F, 0x0A, 0xFB,
	 0x07, 0x1F, 0x5B, 0x58, 0xC3, 0x2E, 0xF6, 0x06, 0x20, 0x02, 0x01, 0x74, 0x28, 0x50, 0x53, 0x1E,
	 0x2E, 0xC5, 0x1E, 0x0B, 0x02, 0xFA, 0x8B, 0x07, 0x26, 0x89, 0x04, 0x8B, 0x47, 0x02, 0x26, 0x89,
	 0x44, 0x02, 0x8C, 0x47, 0x02, 0x89, 0x37, 0x2E, 0x8C, 0x06, 0x15, 0x02, 0x2E, 0x89, 0x36, 0x13,
	 0x02, 0xFB, 0x1F, 0x5B, 0x58, 0xC3, 0x56, 0x06, 0x2E, 0xC4, 0x36, 0x13, 0x02, 0xEB, 0x07, 0x56,
	 0x06, 0x2E, 0xC4, 0x36, 0x0F, 0x02, 0x53, 0x1E, 0x2E, 0xC5, 0x1E, 0x0B, 0x02, 0x8C, 0x47, 0x02,
	 0x89, 0x37, 0x1F, 0x5B, 0x07, 0x5E, 0xC3, 0x2E, 0x3A, 0x26, 0x1F, 0x02, 0x74, 0x05, 0x2E, 0xFF,
	 0x2E, 0x1B, 0x02, 0xFB, 0x3C, 0x00, 0x74, 0x10, 0x3C, 0x09, 0x74, 0x2A, 0x3C, 0x08, 0x75, 0x03,
	 0xE8, 0xCC, 0xFF, 0xEA, 0x00, 0x00, 0x00, 0x00, 0xB0, 0xFF, 0x81, 0xFB, 0x56, 0x44, 0x75, 0x15,
	 0x81, 0xF9, 0x44, 0x58, 0x75, 0x0F, 0x81, 0xFA, 0x31, 0x49, 0x75, 0x09, 0xBB, 0x45, 0x48, 0xB9,
	 0x45, 0x52, 0xBA, 0x56, 0x44, 0xCF, 0x9C, 0x2E, 0xFF, 0x1E, 0xE4, 0x03, 0xE8, 0x97, 0xFF, 0xCF,
	 0x2E, 0xF6, 0x06, 0x20, 0x02, 0x02, 0x74, 0x10, 0x50, 0x52, 0x1E, 0x2E, 0xC5, 0x16, 0x17, 0x02,
	 0xB8, 0x2F, 0x25, 0xCD, 0x21, 0x1F, 0x5A, 0x58, 0xC3, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x2E, 0xF6, 0x06, 0x20, 0x02, 0x02, 0x74,
	 0x21, 0x50, 0x53, 0x52, 0x1E, 0x06, 0x0E, 0x1F, 0xB8, 0x2F, 0x35, 0xCD, 0x21, 0x89, 0x1E, 0x17,
	 0x02, 0x8C, 0x06, 0x19, 0x02, 0xBA, 0xC7, 0x03, 0xB8, 0x2F, 0x25, 0xCD, 0x21, 0x07, 0x1F, 0x5A,
	 0x5B, 0x58, 0xC3, 0x50, 0x53, 0x53, 0x51, 0x52, 0xB8, 0x01, 0x2B, 0x33, 0xDB, 0xB9, 0x45, 0x44,
	 0xBA, 0x51, 0x53, 0xCD, 0x21, 0x8B, 0xC3, 0x3D, 0x02, 0x00, 0x75, 0x02, 0x86, 0xE0, 0x5A, 0x59,
	 0x5B, 0x85, 0xC0, 0x74, 0x17, 0xB3, 0x00, 0x3D, 0x1A, 0x02, 0x72, 0x0B, 0x80, 0xCB, 0x05, 0x3D,
	 0x32, 0x02, 0x73, 0x03, 0x80, 0xCB, 0x02, 0x2E, 0x88, 0x1E, 0x20, 0x02, 0x5B, 0x58, 0xC3, 0x50,
	 0x53, 0x57, 0x06, 0xB4, 0x52, 0xCD, 0x21, 0x83, 0xEB, 0x02, 0x53, 0xBF, 0x19, 0x00, 0xB4, 0x30,
	 0xCD, 0x21, 0x3C, 0x02, 0x74, 0x0B, 0xBF, 0x24, 0x00, 0x3D, 0x03, 0x00, 0x75, 0x03, 0xBF, 0x2A,
	 0x00, 0x5B, 0x03, 0xDF, 0x2E, 0x8C, 0x06, 0x0D, 0x02, 0x2E, 0x89, 0x1E, 0x0B, 0x02, 0x26, 0xC4,
	 0x1F, 0x2E, 0x8C, 0x06, 0x11, 0x02, 0x2E, 0x89, 0x1E, 0x0F, 0x02, 0x2E, 0x8C, 0x06, 0x15, 0x02,
	 0x2E, 0x89, 0x1E, 0x13, 0x02, 0x07, 0x5F, 0x5B, 0x58, 0xC3, 0x50, 0x53, 0x51, 0x52, 0x57, 0x56,
	 0x06, 0xB8, 0x2F, 0x35, 0xCD, 0x21, 0x8C, 0xC1, 0x85, 0xC9, 0x75, 0x05, 0xBB, 0x05, 0x04, 0x8C,
	 0xD9, 0x89, 0x1E, 0x1B, 0x02, 0x89, 0x0E, 0x1D, 0x02, 0x89, 0x1E, 0xE4, 0x03, 0x89, 0x0E, 0xE6,
	 0x03, 0x8A, 0x26, 0x1F, 0x02, 0x84, 0xE4, 0x75, 0x02, 0xB4, 0xDE, 0x8C, 0xC1, 0xE3, 0x51, 0xB0,
	 0x00, 0xBB, 0x56, 0x44, 0xB9, 0x44, 0x58, 0xBA, 0x31, 0x49, 0x50, 0x1E, 0xCD, 0x2F, 0x8B, 0xF8,
	 0x81, 0xE7, 0xFF, 0x00, 0x1F, 0x58, 0x74, 0x2E, 0x81, 0xFF, 0xFF, 0x00, 0x75, 0x14, 0x81, 0xFB,
	 0x45, 0x48, 0x75, 0x0E, 0x81, 0xF9, 0x45, 0x52, 0x75, 0x08, 0x81, 0xFA, 0x56, 0x44, 0x75, 0x02,
	 0xEB, 0x1E, 0x80, 0x3E, 0x1F, 0x02, 0x00, 0x75, 0x0D, 0xFE, 0xC4, 0x75, 0x02, 0xB4, 0xC0, 0x80,
	 0xFC, 0xDE, 0x75, 0xBD, 0x32, 0xE4, 0xC7, 0x06, 0xE4, 0x03, 0x05, 0x04, 0x8C, 0x1E, 0xE6, 0x03,
	 0x88, 0x26, 0x1F, 0x02, 0x07, 0x5E, 0x5F, 0x5A, 0x59, 0x5B, 0x58, 0xC3, 0x45, 0x72, 0x72, 0x6F,
	 0x72, 0x20, 0x61, 0x63, 0x63, 0x65, 0x73, 0x73, 0x69, 0x6E, 0x67, 0x20, 0x58, 0x44, 0x49, 0x2E,
	 0x20, 0x20, 0x54, 0x65, 0x72, 0x6D, 0x69, 0x6E, 0x61, 0x74, 0x69, 0x6E, 0x67, 0x20, 0x2E, 0x20,
	 0x2E, 0x20, 0x2E, 0x0D, 0x0A, 0x24, 0x1E, 0x0E, 0x1F, 0xF6, 0x06, 0x20, 0x02, 0x02, 0x74, 0x16,
	 0xE8, 0x37, 0xFF, 0x80, 0x3E, 0x1F, 0x02, 0x00, 0x75, 0x0C, 0xBA, 0x6C, 0x06, 0xB4, 0x09, 0xCD,
	 0x21, 0xB8, 0x01, 0x4C, 0xCD, 0x21, 0x1F, 0xC3, 0x50, 0x56, 0x57, 0x06, 0x1E, 0x07, 0xFC, 0x8D,
	 0x7C, 0xFF, 0xAC, 0x3C, 0x20, 0x74, 0x0B, 0x3C, 0x0D, 0x74, 0x07, 0x3C, 0x0A, 0x74, 0x03, 0xAA,
	 0xEB, 0xF0, 0xB0, 0x20, 0xAA, 0x07, 0x5F, 0x5E, 0x58, 0x4E, 0xC3, 0xFC, 0xBF, 0x03, 0x01, 0xBE,
	 0x81, 0x00, 0x8A, 0x0E, 0x80, 0x00, 0x32, 0xED, 0xE3, 0x0E, 0x8B, 0xD9, 0xC6, 0x40, 0x01, 0x0A,
	 0x80, 0x3C, 0x20, 0x75, 0x04, 0x46, 0xE2, 0xF8, 0xC3, 0xE8, 0xBC, 0xFF, 0x89, 0x36, 0x5A, 0x01,
	 0x80, 0x3C, 0x20, 0x74, 0x03, 0xA4, 0xE2, 0xF8, 0xC3, 0xBC, 0x29, 0x05, 0xE8, 0x44, 0xFE, 0xE8,
	 0x7D, 0xFE, 0xE8, 0x81, 0xFF, 0xE8, 0x11, 0xFE, 0xE8, 0xC0, 0xFF, 0x8C, 0x0E, 0x5C, 0x01, 0xA1,
	 0x02, 0x00, 0xA3, 0x58, 0x01, 0x8B, 0xDC, 0x83, 0xC3, 0x0F, 0xB1, 0x04, 0xD3, 0xEB, 0x8C, 0xC8,
	 0x03, 0xC3, 0xBB, 0x44, 0x01, 0x89, 0x07, 0x89, 0x47, 0x02, 0xA3, 0x06, 0x02, 0xBA, 0x03, 0x01,
	 0x1E, 0x07, 0xB8, 0x03, 0x4B, 0xE9, 0x49, 0xFB };

struct BuiltinFileBlob bfb_DEVICE_COM = {
	/*recommended file name*/	"DEVICE.COM",
	/*data*/			bin_device_com,
	/*length*/			sizeof(bin_device_com)
};

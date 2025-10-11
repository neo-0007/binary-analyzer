
undefined8 FUN_004daf90(long param_1)

{
  if (param_1 != 0) {
    return *(undefined8 *)(param_1 + 0x38);
  }
  FUN_0051f420();
  FUN_0051f540("../crypto/dso/dso_lib.c",0xe0,"DSO_get_filename");
  FUN_0051f8f0(0x25,0xc0102,0);
  return 0;
}



undefined8 FUN_0051a7e0(long param_1,long param_2)

{
  if (param_2 != 0) {
    *(long *)(param_1 + 8) = param_2;
    return 1;
  }
  FUN_0051f420();
  FUN_0051f540("../crypto/engine/eng_lib.c",0xcf,"ENGINE_set_name");
  FUN_0051f8f0(0x26,0xc0102,0);
  return 0;
}


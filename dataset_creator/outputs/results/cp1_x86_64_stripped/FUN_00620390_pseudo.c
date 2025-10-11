
undefined8 FUN_00620390(long param_1,uint param_2)

{
  *(undefined4 *)(param_1 + 0x60) = 0;
  if (param_2 < 2) {
    *(uint *)(param_1 + 0x58) = param_2;
    return 1;
  }
  FUN_0051f420();
  FUN_0051f540("../crypto/ct/ct_sct.c",0x4c,"SCT_set_log_entry_type");
  FUN_0051f8f0(0x32,0x66,0);
  return 0;
}


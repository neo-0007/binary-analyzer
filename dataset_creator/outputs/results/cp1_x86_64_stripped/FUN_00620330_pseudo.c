
undefined8 FUN_00620330(undefined4 *param_1,int param_2)

{
  if (param_2 == 0) {
    *param_1 = 0;
    param_1[0x18] = 0;
    return 1;
  }
  FUN_0051f420();
  FUN_0051f540("../crypto/ct/ct_sct.c",0x38,"SCT_set_version");
  FUN_0051f8f0(0x32,0x67,0);
  return 0;
}


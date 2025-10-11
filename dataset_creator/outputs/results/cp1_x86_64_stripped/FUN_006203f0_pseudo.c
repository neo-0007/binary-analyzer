
undefined8 FUN_006203f0(int *param_1,undefined8 param_2,long param_3)

{
  if ((*param_1 == 0) && (param_3 != 0x20)) {
    FUN_0051f420();
    FUN_0051f540("../crypto/ct/ct_sct.c",0x53,"SCT_set0_log_id");
    FUN_0051f8f0(0x32,100,0);
    return 0;
  }
  FUN_0041ad60(*(undefined8 *)(param_1 + 6),"../crypto/ct/ct_sct.c",0x57);
  *(undefined8 *)(param_1 + 6) = param_2;
  *(long *)(param_1 + 8) = param_3;
  param_1[0x18] = 0;
  return 1;
}


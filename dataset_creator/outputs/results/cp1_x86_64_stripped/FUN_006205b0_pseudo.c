
undefined8 FUN_006205b0(long param_1,int param_2)

{
  if (param_2 == 0x29c) {
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined2 *)(param_1 + 0x40) = 0x104;
    return 1;
  }
  if (param_2 == 0x31a) {
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined2 *)(param_1 + 0x40) = 0x304;
    return 1;
  }
  FUN_0051f420();
  FUN_0051f540("../crypto/ct/ct_sct.c",0x8a,"SCT_set_signature_nid");
  FUN_0051f8f0(0x32,0x65,0);
  return 0;
}


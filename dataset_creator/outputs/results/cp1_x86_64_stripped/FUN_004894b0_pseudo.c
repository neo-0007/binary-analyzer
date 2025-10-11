
undefined4 FUN_004894b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = FUN_0041cdd0(param_1,"blocksize");
  if (lVar2 != 0) {
    iVar1 = thunk_FUN_0041d9c0(lVar2,param_2);
    if (iVar1 == 0) {
      FUN_0051f420();
      uVar3 = 0x15;
      goto LAB_00489599;
    }
  }
  lVar2 = FUN_0041cdd0(param_1,"size");
  if (lVar2 != 0) {
    iVar1 = thunk_FUN_0041d9c0(lVar2,param_3);
    if (iVar1 == 0) {
      FUN_0051f420();
      uVar3 = 0x1a;
      goto LAB_00489599;
    }
  }
  lVar2 = FUN_0041cdd0(param_1,&DAT_007ce0ba);
  if (lVar2 != 0) {
    iVar1 = thunk_FUN_0041d0b0(lVar2,(uint)param_4 & 1);
    if (iVar1 == 0) {
      FUN_0051f420();
      uVar3 = 0x20;
      goto LAB_00489599;
    }
  }
  lVar2 = FUN_0041cdd0(param_1,"algid-absent");
  if (lVar2 != 0) {
    iVar1 = thunk_FUN_0041d0b0(lVar2,(uint)(param_4 >> 1) & 1);
    if (iVar1 == 0) {
      FUN_0051f420();
      uVar3 = 0x26;
LAB_00489599:
      FUN_0051f540("../providers/implementations/digests/digestcommon.c",uVar3,
                   "ossl_digest_default_get_params");
      FUN_0051f8f0(0x39,0x68,0);
      return 0;
    }
  }
  return 1;
}


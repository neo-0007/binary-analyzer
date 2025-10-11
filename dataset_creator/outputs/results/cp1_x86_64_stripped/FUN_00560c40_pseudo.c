
ulong FUN_00560c40(long param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  ulong uVar4;
  bool bVar5;
  
  iVar1 = FUN_00423da0(*(undefined8 *)(param_1 + 0x18));
  if (param_2 == 1) {
    if (iVar1 != 0x16) {
      FUN_0051f420();
      uVar3 = 0x27;
      goto LAB_00560d41;
    }
    *(int *)(param_1 + 0x14) = param_3;
    uVar4 = (ulong)param_3;
    if (uVar4 != 0) {
      iVar1 = FUN_00423da0(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 0x28) + 0x18));
      if (iVar1 == 0x15) {
        thunk_FUN_004a2270(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 0x28) + 0x20));
        *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 0x28) + 0x20) = 0;
      }
    }
  }
  else {
    if (param_2 == 2) {
      if (iVar1 == 0x16) {
        if (*(long *)(param_1 + 0x20) == 0) {
          uVar2 = 1;
          uVar4 = 1;
        }
        else {
          bVar5 = *(long *)(*(long *)(*(long *)(param_1 + 0x20) + 0x28) + 0x20) == 0;
          uVar4 = (ulong)bVar5;
          uVar2 = (uint)bVar5;
        }
        *(uint *)(param_1 + 0x14) = uVar2;
        return uVar4;
      }
      FUN_0051f420();
      uVar3 = 0x35;
LAB_00560d41:
      FUN_0051f540("../crypto/pkcs7/pk7_lib.c",uVar3,"PKCS7_ctrl");
      FUN_0051f8f0(0x21,0x68,0);
      return 0;
    }
    FUN_0051f420();
    uVar4 = 0;
    FUN_0051f540("../crypto/pkcs7/pk7_lib.c",0x3c,"PKCS7_ctrl");
    FUN_0051f8f0(0x21,0x6e,0);
  }
  return uVar4;
}


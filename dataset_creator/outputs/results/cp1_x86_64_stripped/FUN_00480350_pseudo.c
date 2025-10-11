
undefined8
FUN_00480350(long param_1,long param_2,ulong *param_3,ulong param_4,undefined8 param_5,
            undefined4 param_6)

{
  byte bVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  long in_FS_OFFSET;
  int local_48 [2];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(param_1 + 0x20) == 0) {
    iVar3 = FUN_0056b0a0(param_6,param_5,param_2,*(undefined8 *)(param_1 + 0x10));
    if (iVar3 < 0) {
      FUN_0051f420();
      uVar7 = 0x2e9;
LAB_00480541:
      FUN_0051f540("../providers/implementations/signature/rsa_sig.c",uVar7,"rsa_verify_recover");
      FUN_0051f8f0(0x39,0x80004,0);
      uVar7 = 0;
      goto LAB_004803d3;
    }
    uVar8 = (ulong)iVar3;
  }
  else if (*(int *)(param_1 + 0x68) == 1) {
    iVar3 = FUN_00433d30(*(undefined4 *)(param_1 + 0x30),0,0,param_2,local_48,param_5);
    if (iVar3 < 1) {
      FUN_0051f420();
      uVar7 = 0x2d9;
      goto LAB_00480541;
    }
    uVar8 = (ulong)local_48[0];
  }
  else {
    if (*(int *)(param_1 + 0x68) != 5) {
      FUN_0051f420();
      FUN_0051f540("../providers/implementations/signature/rsa_sig.c",0x2e1,"rsa_verify_recover");
      FUN_0051f8f0(0x39,0xa8,"Only X.931 or PKCS#1 v1.5 padding allowed");
      uVar7 = 0;
      goto LAB_004803d3;
    }
    uVar7 = FUN_004802c0();
    if ((int)uVar7 == 0) goto LAB_004803d3;
    iVar3 = FUN_0056b0a0(param_6,param_5,*(undefined8 *)(param_1 + 0xb8),
                         *(undefined8 *)(param_1 + 0x10),5);
    if (iVar3 < 1) {
      FUN_0051f420();
      uVar7 = 0x2b7;
      goto LAB_00480541;
    }
    iVar3 = iVar3 + -1;
    uVar8 = (ulong)iVar3;
    bVar1 = *(byte *)(*(long *)(param_1 + 0xb8) + uVar8);
    uVar4 = FUN_00434500(*(undefined4 *)(param_1 + 0x30));
    if (bVar1 != uVar4) {
      FUN_0051f420();
      FUN_0051f540("../providers/implementations/signature/rsa_sig.c",700,"rsa_verify_recover");
      FUN_0051f8f0(0x39,0xad,0);
      uVar7 = 0;
      goto LAB_004803d3;
    }
    iVar5 = FUN_0040ac10(*(undefined8 *)(param_1 + 0x20));
    if (iVar3 != iVar5) {
      FUN_0051f420();
      FUN_0051f540("../providers/implementations/signature/rsa_sig.c",0x2c0,"rsa_verify_recover");
      uVar6 = FUN_0040ac10(*(undefined8 *)(param_1 + 0x20));
      FUN_0051f8f0(0x39,0xa6,"Should be %d, but got %d",uVar6,iVar3);
      uVar7 = 0;
      goto LAB_004803d3;
    }
    lVar2 = *(long *)(param_1 + 0xb8);
    *param_3 = uVar8;
    if (lVar2 != param_2) {
      if (param_4 < uVar8) {
        FUN_0051f420();
        FUN_0051f540("../providers/implementations/signature/rsa_sig.c",0x2c9,"rsa_verify_recover");
        FUN_0051f8f0(0x39,0x6a,"buffer size is %d, should be %d",param_4,iVar3);
        uVar7 = 0;
        goto LAB_004803d3;
      }
      thunk_FUN_00713a50(param_2,lVar2,uVar8);
    }
  }
  *param_3 = uVar8;
  uVar7 = 1;
LAB_004803d3:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}


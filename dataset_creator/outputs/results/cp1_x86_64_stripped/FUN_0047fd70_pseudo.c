
bool FUN_0047fd70(undefined8 *param_1,long param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  
  if (param_2 == 0) {
    param_2 = param_1[2];
    if (param_2 == 0) {
      FUN_0051f420();
      FUN_0051f540("../providers/implementations/signature/rsa_sig.c",0x18b,"rsa_signverify_init");
      FUN_0051f8f0(0x39,0x72,0);
      return false;
    }
  }
  else {
    iVar1 = FUN_005b1e50(*param_1,param_2,param_4);
    if (iVar1 == 0) {
      return false;
    }
    iVar1 = FUN_0042bcf0(param_2);
    if (iVar1 == 0) {
      return false;
    }
    FUN_0042b980(param_1[2]);
    param_1[2] = param_2;
  }
  *(undefined4 *)(param_1 + 3) = param_4;
  param_1[0x16] = 0xfffffffffffffffe;
  iVar1 = FUN_0042c5e0(param_2,0xf000);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0xd) = 1;
  }
  else {
    if (iVar1 != 0x1000) {
      FUN_0051f420();
      FUN_0051f540("../providers/implementations/signature/rsa_sig.c",0x1d9,"rsa_signverify_init");
      FUN_0051f8f0(4,0xb2,0);
      return false;
    }
    *(undefined4 *)(param_1 + 0xd) = 6;
    uVar7 = FUN_0042c5c0(param_1[2]);
    iVar1 = FUN_00433230(uVar7);
    if (iVar1 == 0) {
      uVar2 = FUN_00433340(uVar7);
      uVar3 = FUN_00433380(uVar7);
      iVar1 = FUN_004333a0(uVar7);
      lVar8 = FUN_00433790(uVar2);
      lVar9 = FUN_00433790(uVar3);
      if (lVar8 == 0) {
        FUN_0051f420();
        FUN_0051f540("../providers/implementations/signature/rsa_sig.c",0x1b5,"rsa_signverify_init")
        ;
        FUN_0051f8f0(0x39,0x7a,"PSS restrictions lack hash algorithm");
        return false;
      }
      if (lVar9 == 0) {
        FUN_0051f420();
        FUN_0051f540("../providers/implementations/signature/rsa_sig.c",0x1ba,"rsa_signverify_init")
        ;
        FUN_0051f8f0(0x39,0x7a,"PSS restrictions lack MGF1 hash algorithm");
        return false;
      }
      uVar10 = FUN_0041c470((long)param_1 + 0x34,lVar8,0x32);
      if (0x31 < uVar10) {
        FUN_0051f420();
        FUN_0051f540("../providers/implementations/signature/rsa_sig.c",0x1c2,"rsa_signverify_init")
        ;
        FUN_0051f8f0(0x39,0x7a,"hash algorithm name too long");
        return false;
      }
      uVar10 = FUN_0041c470((long)param_1 + 0x7c,lVar9,0x32);
      if (0x31 < uVar10) {
        FUN_0051f420();
        FUN_0051f540("../providers/implementations/signature/rsa_sig.c",0x1c9,"rsa_signverify_init")
        ;
        FUN_0051f8f0(0x39,0x7a,"MGF1 hash algorithm name too long");
        return false;
      }
      *(int *)(param_1 + 0x16) = iVar1;
      iVar4 = FUN_0047f030(param_1,lVar9,param_1[1]);
      if (iVar4 == 0) {
        return false;
      }
      iVar4 = FUN_0047f1c0(param_1,lVar8,param_1[1]);
      if (iVar4 == 0) {
        return false;
      }
      if (*(int *)(param_1 + 0xd) == 6) {
        iVar4 = FUN_0056b040(param_1[2]);
        iVar5 = FUN_0040ac10(param_1[4]);
        iVar4 = iVar4 - iVar5;
        uVar6 = FUN_0056b030(param_1[2]);
        if ((uVar6 & 7) == 1) {
          iVar4 = iVar4 + -1;
        }
        if ((iVar1 < 0) || (iVar4 < iVar1)) {
          FUN_0051f420();
          FUN_0051f540("../providers/implementations/signature/rsa_sig.c",0xa5,
                       "rsa_check_parameters");
          FUN_0051f8f0(0x39,0x70,0);
          return false;
        }
        *(int *)((long)param_1 + 0xb4) = iVar1;
      }
    }
  }
  iVar1 = FUN_0047f480(param_1,param_3);
  return iVar1 != 0;
}



ulong FUN_004074f0(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  
  if (param_2 == (undefined8 *)0x0) {
    FUN_0051f420();
    FUN_0051f540("../crypto/evp/digest.c",0x211,"EVP_MD_CTX_copy_ex");
    FUN_0051f8f0(6,0xc0102,0);
    return 0;
  }
  lVar3 = param_2[1];
  if (lVar3 == 0) {
    FUN_00406b30();
    if (param_1[8] != 0) {
      FUN_00406a50();
    }
    uVar6 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = uVar6;
    uVar6 = param_2[3];
    param_1[2] = param_2[2];
    param_1[3] = uVar6;
    uVar6 = param_2[5];
    param_1[4] = param_2[4];
    param_1[5] = uVar6;
    uVar6 = param_2[7];
    param_1[6] = param_2[6];
    param_1[7] = uVar6;
    param_1[8] = param_2[8];
  }
  else {
    if ((*(long *)(lVar3 + 0x70) == 0) || ((*(byte *)((long)param_2 + 0x19) & 1) != 0)) {
      if (param_2[2] != 0) {
        uVar2 = FUN_0051a180();
        if (uVar2 == 0) {
          FUN_0051f420();
          FUN_0051f540("../crypto/evp/digest.c",0x250,"EVP_MD_CTX_copy_ex");
          FUN_0051f8f0(6,0x80026,0);
          return (ulong)uVar2;
        }
        lVar3 = param_2[1];
      }
      lVar5 = 0;
      if (param_1[1] == lVar3) {
        lVar5 = param_1[4];
        FUN_0040b0c0(param_1,4);
      }
      FUN_00406b30(param_1);
      uVar6 = param_2[1];
      *param_1 = *param_2;
      param_1[1] = uVar6;
      uVar6 = param_2[3];
      param_1[2] = param_2[2];
      param_1[3] = uVar6;
      uVar6 = param_2[5];
      param_1[4] = param_2[4];
      param_1[5] = uVar6;
      uVar6 = param_2[7];
      param_1[6] = param_2[6];
      param_1[7] = uVar6;
      param_1[8] = param_2[8];
      FUN_0040b0d0(param_1,0x400);
      param_1[4] = 0;
      lVar3 = param_2[4];
      param_1[5] = 0;
      if ((lVar3 != 0) && (iVar1 = *(int *)(param_1[1] + 0x4c), iVar1 != 0)) {
        if (lVar5 == 0) {
          lVar5 = FUN_0041ad90((long)iVar1,"../crypto/evp/digest.c",0x26b);
          param_1[4] = lVar5;
          if (lVar5 == 0) {
            FUN_0051f420();
            FUN_0051f540("../crypto/evp/digest.c",0x26d,"EVP_MD_CTX_copy_ex");
            FUN_0051f8f0(6,0xc0100,0);
            return 0;
          }
          iVar1 = *(int *)(param_1[1] + 0x4c);
        }
        else {
          param_1[4] = lVar5;
        }
        thunk_FUN_00713a50(lVar5,param_2[4],(long)iVar1);
      }
      lVar3 = param_2[5];
      param_1[6] = param_2[6];
      if (lVar3 != 0) {
        lVar3 = FUN_00413680();
        param_1[5] = lVar3;
        if (lVar3 == 0) {
          FUN_00406b30(param_1);
          return 0;
        }
      }
      if (*(code **)(param_1[1] + 0x38) == (code *)0x0) {
        return 1;
      }
                    /* WARNING: Could not recover jumptable at 0x0040772a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar4 = (**(code **)(param_1[1] + 0x38))(param_1,param_2);
      return uVar4;
    }
    if (*(long *)(lVar3 + 0xb8) == 0) {
      FUN_0051f420();
      uVar6 = 0x223;
LAB_00407871:
      FUN_0051f540("../crypto/evp/digest.c",uVar6,"EVP_MD_CTX_copy_ex");
      FUN_0051f8f0(6,0xbe,0);
      return 0;
    }
    if (param_1 != (undefined8 *)0x0) {
      iVar1 = FUN_0040b0e0(param_1,0x400);
      if (iVar1 == 0) {
        FUN_00412f00(param_1[5]);
        param_1[5] = 0;
      }
      FUN_00406a90(param_1,0,1);
    }
    if (param_1[8] == param_2[8]) {
      uVar6 = param_2[1];
      *param_1 = *param_2;
      param_1[1] = uVar6;
      uVar6 = param_2[3];
      param_1[2] = param_2[2];
      param_1[3] = uVar6;
      uVar6 = param_2[5];
      param_1[4] = param_2[4];
      param_1[5] = uVar6;
      uVar6 = param_2[7];
      param_1[6] = param_2[6];
      param_1[7] = uVar6;
      uVar6 = param_2[8];
      param_1[5] = 0;
      param_1[8] = uVar6;
      param_1[7] = 0;
    }
    else {
      if (param_1[8] != 0) {
        FUN_00406a50();
      }
      uVar6 = param_2[1];
      *param_1 = *param_2;
      param_1[1] = uVar6;
      uVar6 = param_2[3];
      param_1[2] = param_2[2];
      param_1[3] = uVar6;
      uVar6 = param_2[5];
      param_1[4] = param_2[4];
      param_1[5] = uVar6;
      uVar6 = param_2[7];
      param_1[6] = param_2[6];
      param_1[7] = uVar6;
      uVar6 = param_2[8];
      param_1[5] = 0;
      param_1[8] = uVar6;
      lVar3 = param_2[8];
      param_1[7] = 0;
      if (lVar3 != 0) {
        FUN_00406a10();
      }
    }
    if (param_2[7] != 0) {
      lVar3 = (**(code **)(param_2[1] + 0xb8))();
      param_1[7] = lVar3;
      if (lVar3 == 0) {
        FUN_0051f420();
        uVar6 = 0x236;
        goto LAB_00407871;
      }
    }
  }
  FUN_0040b0d0(param_1,0x400);
  if (param_2[5] != 0) {
    lVar3 = FUN_00413680();
    param_1[5] = lVar3;
    if (lVar3 == 0) {
      FUN_0051f420();
      FUN_0051f540("../crypto/evp/digest.c",0x242,"EVP_MD_CTX_copy_ex");
      FUN_0051f8f0(6,0xbe,0);
      FUN_00406b30(param_1);
      return 0;
    }
  }
  return 1;
}


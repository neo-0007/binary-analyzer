
bool FUN_005358f0(long *param_1,long param_2,uint *param_3,long param_4,uint param_5)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  uint uVar4;
  int iVar5;
  undefined8 uVar6;
  
  iVar2 = FUN_0040b2f0(param_1,0x2000);
  uVar4 = param_5;
  if (iVar2 != 0) {
    iVar2 = param_5 + 0xe;
    if (-1 < (int)(param_5 + 7)) {
      iVar2 = param_5 + 7;
    }
    uVar4 = iVar2 >> 3;
  }
  lVar3 = *param_1;
  uVar1 = *(uint *)(lVar3 + 4);
  if ((*(byte *)(lVar3 + 0x12) & 0x10) == 0) {
    if ((int)param_5 < 1) {
      *param_3 = 0;
      return param_5 == 0;
    }
    iVar2 = FUN_005358b0(*(int *)((long)param_1 + 0x14) + param_2,param_4,uVar4);
    if (iVar2 == 0) {
      iVar2 = *(int *)((long)param_1 + 0x14);
      if (iVar2 == 0) {
        if ((param_5 & *(uint *)((long)param_1 + 0x84)) == 0) {
          iVar2 = (**(code **)(*param_1 + 0x28))(param_1,param_2,param_4,(long)(int)param_5);
          if (iVar2 != 0) {
            *param_3 = param_5;
            return true;
          }
          *param_3 = 0;
          return false;
        }
        uVar4 = 0;
        if (0x20 < (int)uVar1) goto LAB_00535bd5;
      }
      else {
        if (0x20 < (int)uVar1) {
LAB_00535bd5:
                    /* WARNING: Subroutine does not return */
          FUN_00418e30("assertion failed: bl <= (int)sizeof(ctx->buf)","../crypto/evp/evp_enc.c",
                       0x24a);
        }
        iVar5 = uVar1 - iVar2;
        if ((int)param_5 < iVar5) {
          thunk_FUN_00713a50((long)param_1 + (long)iVar2 + 0x38,param_4,(long)(int)param_5);
          *(int *)((long)param_1 + 0x14) = *(int *)((long)param_1 + 0x14) + param_5;
          *param_3 = 0;
          return true;
        }
        param_5 = param_5 - iVar5;
        if ((int)(0x7fffffff - uVar1) < (int)(-uVar1 & param_5)) {
          FUN_0051f420();
          FUN_0051f540("../crypto/evp/evp_enc.c",0x25c,"evp_EncryptDecryptUpdate");
          FUN_0051f8f0(6,0xca,0);
          return false;
        }
        thunk_FUN_00713a50((long)param_1 + (long)iVar2 + 0x38,param_4,(long)iVar5);
        iVar2 = (**(code **)(*param_1 + 0x28))(param_1,param_2,param_1 + 7);
        if (iVar2 == 0) {
          return false;
        }
        param_4 = param_4 + iVar5;
        param_2 = param_2 + (int)uVar1;
        uVar4 = uVar1;
      }
      *param_3 = uVar4;
      uVar4 = uVar1 - 1 & param_5;
      iVar2 = param_5 - uVar4;
      if (0 < iVar2) {
        iVar5 = (**(code **)(*param_1 + 0x28))(param_1,param_2,param_4,(long)iVar2);
        if (iVar5 == 0) {
          return false;
        }
        *param_3 = *param_3 + iVar2;
      }
      if (uVar4 != 0) {
        thunk_FUN_00713a50(param_1 + 7,param_4 + iVar2,(long)(int)uVar4);
      }
      *(uint *)((long)param_1 + 0x14) = uVar4;
      return true;
    }
    FUN_0051f420();
    uVar6 = 0x23c;
LAB_00535a59:
    FUN_0051f540("../crypto/evp/evp_enc.c",uVar6,"evp_EncryptDecryptUpdate");
    FUN_0051f8f0(6,0xa2,0);
  }
  else {
    if (uVar1 == 1) {
      iVar2 = FUN_005358b0(param_2,param_4,uVar4);
      if (iVar2 != 0) {
        FUN_0051f420();
        uVar6 = 0x22b;
        goto LAB_00535a59;
      }
      lVar3 = *param_1;
    }
    uVar4 = (**(code **)(lVar3 + 0x28))(param_1,param_2,param_4,(long)(int)param_5);
    if (-1 < (int)uVar4) {
      *param_3 = uVar4;
      return true;
    }
  }
  return false;
}


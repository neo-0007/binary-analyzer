
undefined4
FUN_004bb230(undefined4 param_1,undefined8 param_2,long param_3,undefined4 param_4,
            undefined8 param_5)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int local_40;
  int local_3c;
  
  if ((*(int *)(param_3 + 0x10) == 0) && (iVar1 = FUN_004b7ba0(param_3), iVar1 == 0)) {
    iVar1 = FUN_004b7bb0(param_3);
    if (iVar1 == 1) {
      uVar3 = 1;
      FUN_004b7b50(param_2);
    }
    else {
      iVar2 = FUN_004b78f0(param_3,iVar1 + -2);
      if ((iVar2 == 0) && (iVar2 = FUN_004b78f0(param_3,iVar1 + -3), iVar2 == 0)) {
        local_3c = 100;
        do {
          iVar2 = FUN_004baef0(param_1,param_2,iVar1 + 1,0xffffffff,0,param_4,param_5);
          if (iVar2 == 0) {
            return 0;
          }
          iVar2 = FUN_004b7840(param_2,param_3);
          if (-1 < iVar2) {
            iVar2 = FUN_004b18d0(param_2,param_2,param_3);
            if (iVar2 == 0) {
              return 0;
            }
            iVar2 = FUN_004b7840(param_2,param_3);
            if ((-1 < iVar2) && (iVar2 = FUN_004b18d0(param_2,param_2,param_3), iVar2 == 0)) {
              return 0;
            }
          }
          local_3c = local_3c + -1;
          if (local_3c == 0) {
            FUN_0051f420();
            FUN_0051f540("../crypto/bn/bn_rand.c",0xaf,"bnrand_range");
            FUN_0051f8f0(3,0x71,0);
            return 0;
          }
          iVar2 = FUN_004b7840(param_2,param_3);
        } while (-1 < iVar2);
      }
      else {
        local_40 = 100;
        do {
          iVar2 = FUN_004baef0(param_1,param_2,iVar1,0xffffffff,0,0);
          if (iVar2 == 0) {
            return 0;
          }
          local_40 = local_40 + -1;
          if (local_40 == 0) {
            FUN_0051f420();
            FUN_0051f540("../crypto/bn/bn_rand.c",0xbd,"bnrand_range");
            FUN_0051f8f0(3,0x71,0);
            return 0;
          }
          iVar2 = FUN_004b7840(param_2,param_3);
        } while (-1 < iVar2);
      }
      uVar3 = 1;
    }
  }
  else {
    FUN_0051f420();
    uVar3 = 0;
    FUN_0051f540("../crypto/bn/bn_rand.c",0x8c,"bnrand_range");
    FUN_0051f8f0(3,0x73,0);
  }
  return uVar3;
}


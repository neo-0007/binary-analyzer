
ulong FUN_005290e0(undefined8 param_1,long param_2,long param_3,ulong param_4)

{
  int iVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  
  lVar3 = FUN_004098f0();
  iVar1 = FUN_00409920(param_1);
  if (param_3 == 0) {
    return 0;
  }
  if (param_4 == 0) {
    return 0xffffffff;
  }
  iVar2 = FUN_004098b0(param_1);
  if (iVar2 == 0) {
    if (param_4 < 0x10) {
      return 0xffffffff;
    }
  }
  else if (iVar1 == 4) goto LAB_0052913a;
  if ((param_4 & 7) != 0) {
    return 0xffffffff;
  }
LAB_0052913a:
  iVar2 = FUN_005358b0(param_2,param_3,param_4 & 0xffffffff);
  if (iVar2 != 0) {
    FUN_0051f420();
    FUN_0051f540("../crypto/evp/e_aes.c",0xe1e,"aes_wrap_cipher");
    FUN_0051f8f0(6,0xa2,0);
    return 0;
  }
  if (param_2 != 0) {
    if (iVar1 == 4) {
      iVar1 = FUN_004098b0(param_1);
      if (iVar1 == 0) {
        uVar4 = FUN_005534c0(lVar3,*(undefined8 *)(lVar3 + 0xf8),param_2,param_3,param_4,
                             FUN_0048a530);
      }
      else {
        uVar4 = FUN_005533a0(lVar3,*(undefined8 *)(lVar3 + 0xf8),param_2,param_3,param_4,
                             FUN_00489fa0);
      }
    }
    else {
      iVar1 = FUN_004098b0(param_1);
      if (iVar1 == 0) {
        uVar4 = FUN_00553300(lVar3,*(undefined8 *)(lVar3 + 0xf8),param_2,param_3,param_4,
                             FUN_0048a530);
      }
      else {
        uVar4 = FUN_00553190(lVar3,*(undefined8 *)(lVar3 + 0xf8),param_2,param_3,param_4,
                             FUN_00489fa0);
      }
    }
    if (uVar4 == 0) {
      return 0xffffffff;
    }
    return uVar4;
  }
  iVar2 = FUN_004098b0(param_1);
  if (iVar2 != 0) {
    if (iVar1 == 4) {
      param_4 = param_4 + 7 & 0xfffffffffffffff8;
    }
    return (ulong)((int)param_4 + 8);
  }
  return (ulong)((int)param_4 - 8);
}



int FUN_00435a60(int *param_1,int param_2,int param_3)

{
  int iVar1;
  long lVar2;
  
  if (0x7fffffff - *param_1 < param_2) {
    return 0;
  }
  param_2 = *param_1 + param_2;
  if (param_2 < 4) {
    param_2 = 4;
  }
  if (*(long *)(param_1 + 2) == 0) {
    lVar2 = FUN_0041aec0((long)param_2 << 3,"../crypto/stack/stack.c",0xc0);
    *(long *)(param_1 + 2) = lVar2;
    if (lVar2 == 0) {
      FUN_0051f420();
      FUN_0051f540("../crypto/stack/stack.c",0xc1,"sk_reserve");
      FUN_0051f8f0(0xf,0xc0100,0);
      return 0;
    }
  }
  else {
    iVar1 = param_1[5];
    if (param_3 == 0) {
      if (param_2 <= iVar1) {
        return 1;
      }
      do {
        if (0x55555554 < iVar1) {
          lVar2 = 0x3fffffff8;
          param_2 = 0x7fffffff;
          goto LAB_00435aa1;
        }
        iVar1 = iVar1 + iVar1 / 2;
      } while (iVar1 < param_2);
      lVar2 = (long)iVar1 << 3;
      param_2 = iVar1;
    }
    else {
      if (param_2 == iVar1) {
        return param_3;
      }
      lVar2 = (long)param_2 << 3;
    }
LAB_00435aa1:
    lVar2 = FUN_0041ade0(*(long *)(param_1 + 2),lVar2,"../crypto/stack/stack.c",0xd2);
    if (lVar2 == 0) {
      return 0;
    }
    *(long *)(param_1 + 2) = lVar2;
  }
  param_1[5] = param_2;
  return 1;
}


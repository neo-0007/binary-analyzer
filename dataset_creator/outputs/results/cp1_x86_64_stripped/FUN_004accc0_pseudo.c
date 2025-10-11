
undefined8
FUN_004accc0(long *param_1,long *param_2,ulong *param_3,ulong *param_4,undefined1 param_5)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  lVar2 = *param_1;
  if (lVar2 == 0) {
    if (param_2 == (long *)0x0) {
      return 0;
    }
    uVar3 = *param_3;
    uVar1 = *param_4;
    if (uVar1 < uVar3) {
      return 0;
    }
  }
  else {
    uVar3 = *param_3;
    uVar1 = *param_4;
    if (uVar1 < uVar3) {
      return 0;
    }
    if (param_2 == (long *)0x0) {
      if (uVar1 <= uVar3) {
        return 1;
      }
      goto LAB_004acd08;
    }
  }
  if (uVar3 == uVar1) {
    if (0x7ffffbff < uVar3) {
      return 0;
    }
    lVar2 = *param_2;
    uVar3 = uVar3 + 0x400;
    *param_4 = uVar3;
    if (lVar2 == 0) {
      lVar2 = FUN_0041ad90(uVar3,"../crypto/bio/bio_print.c",0x352);
      *param_2 = lVar2;
      if (lVar2 == 0) {
        FUN_0051f420();
        uVar4 = 0x353;
        goto LAB_004ace52;
      }
      uVar3 = *param_3;
      if (uVar3 != 0) {
        if (*param_1 == 0) {
          return 0;
        }
        thunk_FUN_00713a50(lVar2);
        uVar3 = *param_3;
      }
      *param_1 = 0;
      if (*param_4 <= uVar3) {
        return 1;
      }
      goto LAB_004ace28;
    }
    lVar2 = FUN_0041ade0(lVar2,uVar3,"../crypto/bio/bio_print.c",0x35f);
    if (lVar2 == 0) {
      FUN_0051f420();
      uVar4 = 0x361;
LAB_004ace52:
      FUN_0051f540("../crypto/bio/bio_print.c",uVar4,"doapr_outch");
      FUN_0051f8f0(0x20,0xc0100,0);
      return 0;
    }
    *param_2 = lVar2;
    uVar3 = *param_3;
    uVar1 = *param_4;
  }
  if (uVar1 <= uVar3) {
    return 1;
  }
  lVar2 = *param_1;
  if (lVar2 != 0) {
LAB_004acd08:
    *param_3 = uVar3 + 1;
    *(undefined1 *)(lVar2 + uVar3) = param_5;
    return 1;
  }
LAB_004ace28:
  lVar2 = *param_2;
  *param_3 = uVar3 + 1;
  *(undefined1 *)(lVar2 + uVar3) = param_5;
  return 1;
}


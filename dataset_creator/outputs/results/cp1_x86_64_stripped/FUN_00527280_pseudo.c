
undefined8 FUN_00527280(undefined8 *param_1,undefined4 param_2,uint param_3,undefined8 *param_4)

{
  char *pcVar1;
  ushort uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  uint uVar10;
  uint uVar11;
  ulong uVar12;
  
  uVar12 = (ulong)param_3;
  lVar6 = FUN_004098f0();
  switch(param_2) {
  case 0:
    *(undefined8 *)(lVar6 + 0xf8) = 0;
    uVar3 = FUN_00409910(*param_1);
    *(undefined8 **)(lVar6 + 0x2b8) = param_1 + 5;
    *(undefined4 *)(lVar6 + 0x2c0) = uVar3;
    *(undefined8 *)(lVar6 + 0x2c4) = 0xffffffff;
    uVar7 = 1;
    *(undefined4 *)(lVar6 + 0x2d0) = 0xffffffff;
    break;
  default:
    uVar7 = 0xffffffff;
    break;
  case 8:
    lVar9 = FUN_004098f0(param_4);
    if (*(long *)(lVar6 + 0x280) != 0) {
      if (*(long *)(lVar6 + 0x280) != lVar6) {
        return 0;
      }
      *(long *)(lVar9 + 0x280) = lVar9;
    }
    if (*(undefined8 **)(lVar6 + 0x2b8) == param_1 + 5) {
      *(undefined8 **)(lVar9 + 0x2b8) = param_4 + 5;
      return 1;
    }
    lVar8 = FUN_0041ad90((long)*(int *)(lVar6 + 0x2c0),"../crypto/evp/e_aes.c",0xa87);
    *(long *)(lVar9 + 0x2b8) = lVar8;
    if (lVar8 == 0) {
      FUN_0051f420(0);
      uVar7 = 0xa88;
LAB_005273df:
      FUN_0051f540("../crypto/evp/e_aes.c",uVar7,"aes_gcm_ctrl");
      FUN_0051f8f0(6,0xc0100,0);
      return 0;
    }
    thunk_FUN_00713a50(lVar8,*(undefined8 *)(lVar6 + 0x2b8),(long)*(int *)(lVar6 + 0x2c0));
    goto LAB_005276eb;
  case 9:
    if ((int)param_3 < 1) {
      return 0;
    }
    if ((0x10 < (int)param_3) && (*(int *)(lVar6 + 0x2c0) < (int)param_3)) {
      if (*(undefined8 **)(lVar6 + 0x2b8) != param_1 + 5) {
        FUN_0041ad60(*(undefined8 **)(lVar6 + 0x2b8),"../crypto/evp/e_aes.c",0xa20);
      }
      lVar9 = FUN_0041ad90((long)(int)param_3,"../crypto/evp/e_aes.c",0xa21);
      *(long *)(lVar6 + 0x2b8) = lVar9;
      if (lVar9 == 0) {
        FUN_0051f420();
        uVar7 = 0xa22;
        goto LAB_005273df;
      }
    }
    *(uint *)(lVar6 + 0x2c0) = param_3;
    uVar7 = 1;
    break;
  case 0x10:
    if (0xf < param_3 - 1) {
      return 0;
    }
    if (*(int *)(param_1 + 2) == 0) {
      return 0;
    }
    if (*(int *)(lVar6 + 0x2c4) < 0) {
      return 0;
    }
    if (param_3 < 8) {
      if ((param_3 & 4) == 0) {
        if ((param_3 != 0) &&
           (*(undefined1 *)param_4 = *(undefined1 *)(param_1 + 7), (param_3 & 2) != 0)) {
          *(undefined2 *)((long)param_4 + (uVar12 - 2)) =
               *(undefined2 *)((long)param_1 + uVar12 + 0x36);
        }
      }
      else {
        *(undefined4 *)param_4 = *(undefined4 *)(param_1 + 7);
        *(undefined4 *)((long)param_4 + (uVar12 - 4)) =
             *(undefined4 *)((long)param_1 + uVar12 + 0x34);
      }
    }
    else {
      *param_4 = param_1[7];
      *(undefined8 *)((long)param_4 + (uVar12 - 8)) = *(undefined8 *)((long)param_1 + uVar12 + 0x30)
      ;
      lVar6 = (long)param_4 - ((ulong)(param_4 + 1) & 0xfffffffffffffff8);
      uVar10 = param_3 + (int)lVar6 & 0xfffffff8;
      if (7 < uVar10) {
        uVar11 = 0;
        do {
          uVar12 = (ulong)uVar11;
          uVar11 = uVar11 + 8;
          *(undefined8 *)(((ulong)(param_4 + 1) & 0xfffffffffffffff8) + uVar12) =
               *(undefined8 *)((long)param_1 + uVar12 + (0x38 - lVar6));
        } while (uVar11 < uVar10);
      }
    }
    goto LAB_005276eb;
  case 0x11:
    if (0xf < param_3 - 1) {
      return 0;
    }
    if (*(int *)(param_1 + 2) != 0) {
      return 0;
    }
    if (param_3 < 8) {
      if ((param_3 & 4) == 0) {
        if ((param_3 != 0) &&
           (*(undefined1 *)(param_1 + 7) = *(undefined1 *)param_4, (param_3 & 2) != 0)) {
          *(undefined2 *)((long)param_1 + uVar12 + 0x36) =
               *(undefined2 *)((long)param_4 + (uVar12 - 2));
        }
      }
      else {
        *(undefined4 *)(param_1 + 7) = *(undefined4 *)param_4;
        *(undefined4 *)((long)param_1 + uVar12 + 0x34) =
             *(undefined4 *)((long)param_4 + (uVar12 - 4));
      }
    }
    else {
      param_1[7] = *param_4;
      *(undefined8 *)((long)param_1 + uVar12 + 0x30) = *(undefined8 *)((long)param_4 + (uVar12 - 8))
      ;
      lVar9 = (long)param_1 + (0x38 - ((ulong)(param_1 + 8) & 0xfffffffffffffff8));
      uVar10 = (int)lVar9 + param_3 & 0xfffffff8;
      if (7 < uVar10) {
        uVar12 = 0;
        do {
          uVar11 = (int)uVar12 + 8;
          *(undefined8 *)(((ulong)(param_1 + 8) & 0xfffffffffffffff8) + uVar12) =
               *(undefined8 *)((long)param_4 + (uVar12 - lVar9));
          uVar12 = (ulong)uVar11;
        } while (uVar11 < uVar10);
      }
    }
    *(uint *)(lVar6 + 0x2c4) = param_3;
    uVar7 = 1;
    break;
  case 0x12:
    if (param_3 != 0xffffffff) {
      if ((int)param_3 < 4) {
        return 0;
      }
      if ((int)(*(int *)(lVar6 + 0x2c0) - param_3) < 8) {
        return 0;
      }
      thunk_FUN_00713a50(*(undefined8 *)(lVar6 + 0x2b8),param_4,(long)(int)param_3);
      if ((*(int *)(param_1 + 2) != 0) &&
         (iVar5 = FUN_00429650((long)(int)param_3 + *(long *)(lVar6 + 0x2b8),
                               *(int *)(lVar6 + 0x2c0) - param_3), iVar5 < 1)) {
        return 0;
      }
      *(undefined4 *)(lVar6 + 0x2c8) = 1;
      return 1;
    }
    thunk_FUN_00713a50(*(undefined8 *)(lVar6 + 0x2b8),param_4,(long)*(int *)(lVar6 + 0x2c0));
    uVar7 = 1;
    *(undefined4 *)(lVar6 + 0x2c8) = 1;
    break;
  case 0x13:
    if (*(int *)(lVar6 + 0x2c8) == 0) {
      return 0;
    }
    if (*(int *)(lVar6 + 0xf8) == 0) {
      return 0;
    }
    FUN_0054e250(lVar6 + 0x100,*(undefined8 *)(lVar6 + 0x2b8),(long)*(int *)(lVar6 + 0x2c0));
    uVar10 = *(uint *)(lVar6 + 0x2c0);
    uVar11 = uVar10;
    if ((0 < (int)param_3) && ((int)param_3 <= (int)uVar10)) {
      uVar11 = param_3;
    }
    thunk_FUN_00713a50(param_4,((long)(int)uVar10 - (long)(int)uVar11) + *(long *)(lVar6 + 0x2b8));
    iVar5 = *(int *)(lVar6 + 0x2c0);
    lVar8 = 7;
    lVar9 = *(long *)(lVar6 + 0x2b8);
    do {
      pcVar1 = (char *)(iVar5 + lVar9 + -8 + lVar8);
      *pcVar1 = *pcVar1 + '\x01';
      iVar4 = (int)lVar8;
      lVar8 = lVar8 + -1;
    } while (*pcVar1 == '\0' && iVar4 != 0);
    goto LAB_005276df;
  case 0x16:
    if (param_3 != 0xd) {
      return 0;
    }
    param_1[7] = *param_4;
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_4 + 1);
    *(undefined1 *)((long)param_1 + 0x44) = *(undefined1 *)((long)param_4 + 0xc);
    *(undefined4 *)(lVar6 + 0x2d0) = 0xd;
    *(undefined8 *)(lVar6 + 0x2d8) = 0;
    uVar2 = *(ushort *)((long)param_1 + 0x43) << 8 | *(ushort *)((long)param_1 + 0x43) >> 8;
    if (uVar2 < 8) {
      return 0;
    }
    uVar10 = uVar2 - 8;
    if (*(int *)(param_1 + 2) == 0) {
      if (uVar10 < 0x10) {
        return 0;
      }
      uVar10 = uVar2 - 0x18;
    }
    *(ushort *)((long)param_1 + 0x43) = (ushort)uVar10 << 8 | (ushort)uVar10 >> 8;
    return 0x10;
  case 0x18:
    if (*(int *)(lVar6 + 0x2c8) == 0) {
      return 0;
    }
    if (*(int *)(lVar6 + 0xf8) == 0) {
      return 0;
    }
    if (*(int *)(param_1 + 2) != 0) {
      return 0;
    }
    thunk_FUN_00713a50(((long)*(int *)(lVar6 + 0x2c0) - (long)(int)param_3) +
                       *(long *)(lVar6 + 0x2b8),param_4);
    FUN_0054e250(lVar6 + 0x100,*(undefined8 *)(lVar6 + 0x2b8),(long)*(int *)(lVar6 + 0x2c0));
LAB_005276df:
    *(undefined4 *)(lVar6 + 0xfc) = 1;
LAB_005276eb:
    uVar7 = 1;
    break;
  case 0x25:
    *(undefined4 *)param_4 = *(undefined4 *)(lVar6 + 0x2c0);
    uVar7 = 1;
  }
  return uVar7;
}


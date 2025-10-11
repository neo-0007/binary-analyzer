
undefined8 FUN_0052e220(undefined8 *param_1,undefined4 param_2,uint param_3,undefined8 *param_4)

{
  char *pcVar1;
  undefined1 uVar2;
  ushort uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 *puVar11;
  long lVar12;
  uint uVar13;
  ulong uVar14;
  
  uVar14 = (ulong)param_3;
  lVar8 = FUN_004098f0();
  switch(param_2) {
  case 0:
    *(undefined8 *)(lVar8 + 0x118) = 0;
    uVar4 = FUN_00409910(*param_1);
    *(undefined8 **)(lVar8 + 0x2d8) = param_1 + 5;
    *(undefined4 *)(lVar8 + 0x2e0) = uVar4;
    *(undefined8 *)(lVar8 + 0x2e8) = 0xffffffff00000000;
    uVar9 = 1;
    *(undefined4 *)(lVar8 + 0x2e4) = 0xffffffff;
    break;
  default:
    uVar9 = 0xffffffff;
    break;
  case 8:
    lVar12 = FUN_004098f0(param_4);
    if (*(long *)(lVar8 + 0x2a0) != 0) {
      if (*(long *)(lVar8 + 0x2a0) != lVar8) {
        return 0;
      }
      *(long *)(lVar12 + 0x2a0) = lVar12;
    }
    if (*(undefined8 **)(lVar8 + 0x2d8) == param_1 + 5) {
      *(undefined8 **)(lVar12 + 0x2d8) = param_4 + 5;
      return 1;
    }
    lVar10 = FUN_0041ad90((long)*(int *)(lVar8 + 0x2e0),"../crypto/evp/e_aria.c",0x183);
    *(long *)(lVar12 + 0x2d8) = lVar10;
    if (lVar10 == 0) {
      FUN_0051f420(0);
      uVar9 = 0x184;
LAB_0052e387:
      FUN_0051f540("../crypto/evp/e_aria.c",uVar9,"aria_gcm_ctrl");
      FUN_0051f8f0(6,0xc0100,0);
      return 0;
    }
    thunk_FUN_00713a50(lVar10,*(undefined8 *)(lVar8 + 0x2d8),(long)*(int *)(lVar8 + 0x2e0));
    goto LAB_0052e430;
  case 9:
    if ((int)param_3 < 1) {
      return 0;
    }
    if ((0x10 < (int)param_3) && (*(int *)(lVar8 + 0x2e0) < (int)param_3)) {
      if (*(undefined8 **)(lVar8 + 0x2d8) != param_1 + 5) {
        FUN_0041ad60(*(undefined8 **)(lVar8 + 0x2d8),"../crypto/evp/e_aria.c",0x119);
      }
      lVar12 = FUN_0041ad90((long)(int)param_3,"../crypto/evp/e_aria.c",0x11a);
      *(long *)(lVar8 + 0x2d8) = lVar12;
      if (lVar12 == 0) {
        FUN_0051f420();
        uVar9 = 0x11b;
        goto LAB_0052e387;
      }
    }
    *(uint *)(lVar8 + 0x2e0) = param_3;
    uVar9 = 1;
    break;
  case 0x10:
    if (0xf < param_3 - 1) {
      return 0;
    }
    iVar6 = FUN_004098b0(param_1);
    if (iVar6 == 0) {
      return 0;
    }
    if (*(int *)(lVar8 + 0x2e4) < 0) {
      return 0;
    }
    puVar11 = (undefined8 *)FUN_00409fc0(param_1);
    if (param_3 < 8) {
      if ((param_3 & 4) == 0) {
        if ((param_3 != 0) && (*(undefined1 *)param_4 = *(undefined1 *)puVar11, (param_3 & 2) != 0))
        {
          *(undefined2 *)((long)param_4 + (uVar14 - 2)) =
               *(undefined2 *)((long)puVar11 + (uVar14 - 2));
        }
      }
      else {
        *(undefined4 *)param_4 = *(undefined4 *)puVar11;
        *(undefined4 *)((long)param_4 + (uVar14 - 4)) =
             *(undefined4 *)((long)puVar11 + (uVar14 - 4));
      }
    }
    else {
      *param_4 = *puVar11;
      *(undefined8 *)((long)param_4 + (uVar14 - 8)) = *(undefined8 *)((long)puVar11 + (uVar14 - 8));
      lVar8 = (long)param_4 - ((ulong)(param_4 + 1) & 0xfffffffffffffff8);
      uVar7 = param_3 + (int)lVar8 & 0xfffffff8;
      if (7 < uVar7) {
        uVar13 = 0;
        do {
          uVar14 = (ulong)uVar13;
          uVar13 = uVar13 + 8;
          *(undefined8 *)(((ulong)(param_4 + 1) & 0xfffffffffffffff8) + uVar14) =
               *(undefined8 *)((long)puVar11 + (uVar14 - lVar8));
        } while (uVar13 < uVar7);
      }
    }
    goto LAB_0052e430;
  case 0x11:
    if (0xf < param_3 - 1) {
      return 0;
    }
    iVar6 = FUN_004098b0(param_1);
    if (iVar6 != 0) {
      return 0;
    }
    puVar11 = (undefined8 *)FUN_00409fc0(param_1);
    if (param_3 < 8) {
      if ((param_3 & 4) == 0) {
        if ((param_3 != 0) && (*(undefined1 *)puVar11 = *(undefined1 *)param_4, (param_3 & 2) != 0))
        {
          *(undefined2 *)((long)puVar11 + (uVar14 - 2)) =
               *(undefined2 *)((long)param_4 + (uVar14 - 2));
        }
      }
      else {
        *(undefined4 *)puVar11 = *(undefined4 *)param_4;
        *(undefined4 *)((long)puVar11 + (uVar14 - 4)) =
             *(undefined4 *)((long)param_4 + (uVar14 - 4));
      }
    }
    else {
      *puVar11 = *param_4;
      *(undefined8 *)((long)puVar11 + (uVar14 - 8)) = *(undefined8 *)((long)param_4 + (uVar14 - 8));
      lVar12 = (long)puVar11 - ((ulong)(puVar11 + 1) & 0xfffffffffffffff8);
      uVar7 = (int)lVar12 + param_3 & 0xfffffff8;
      if (7 < uVar7) {
        uVar14 = 0;
        do {
          uVar13 = (int)uVar14 + 8;
          *(undefined8 *)(((ulong)(puVar11 + 1) & 0xfffffffffffffff8) + uVar14) =
               *(undefined8 *)((long)param_4 + (uVar14 - lVar12));
          uVar14 = (ulong)uVar13;
        } while (uVar13 < uVar7);
      }
    }
    *(uint *)(lVar8 + 0x2e4) = param_3;
    uVar9 = 1;
    break;
  case 0x12:
    if (param_3 != 0xffffffff) {
      if ((int)param_3 < 4) {
        return 0;
      }
      if ((int)(*(int *)(lVar8 + 0x2e0) - param_3) < 8) {
        return 0;
      }
      thunk_FUN_00713a50(*(undefined8 *)(lVar8 + 0x2d8),param_4,(long)(int)param_3);
      iVar6 = FUN_004098b0(param_1);
      if ((iVar6 != 0) &&
         (iVar6 = FUN_00429650((long)(int)param_3 + *(long *)(lVar8 + 0x2d8),
                               *(int *)(lVar8 + 0x2e0) - param_3), iVar6 < 1)) {
        return 0;
      }
      *(undefined4 *)(lVar8 + 0x2e8) = 1;
      return 1;
    }
    thunk_FUN_00713a50(*(undefined8 *)(lVar8 + 0x2d8),param_4,(long)*(int *)(lVar8 + 0x2e0));
    uVar9 = 1;
    *(undefined4 *)(lVar8 + 0x2e8) = 1;
    break;
  case 0x13:
    if (*(int *)(lVar8 + 0x2e8) == 0) {
      return 0;
    }
    if (*(int *)(lVar8 + 0x118) == 0) {
      return 0;
    }
    FUN_0054e250(lVar8 + 0x120,*(undefined8 *)(lVar8 + 0x2d8),(long)*(int *)(lVar8 + 0x2e0));
    uVar7 = *(uint *)(lVar8 + 0x2e0);
    uVar13 = uVar7;
    if ((0 < (int)param_3) && ((int)param_3 <= (int)uVar7)) {
      uVar13 = param_3;
    }
    thunk_FUN_00713a50(param_4,((long)(int)uVar7 - (long)(int)uVar13) + *(long *)(lVar8 + 0x2d8));
    iVar6 = *(int *)(lVar8 + 0x2e0);
    lVar10 = 7;
    lVar12 = *(long *)(lVar8 + 0x2d8);
    do {
      pcVar1 = (char *)(iVar6 + lVar12 + -8 + lVar10);
      *pcVar1 = *pcVar1 + '\x01';
      iVar5 = (int)lVar10;
      lVar10 = lVar10 + -1;
    } while (*pcVar1 == '\0' && iVar5 != 0);
    goto LAB_0052e6cb;
  case 0x16:
    if (param_3 != 0xd) {
      return 0;
    }
    puVar11 = (undefined8 *)FUN_00409fc0(param_1);
    *puVar11 = *param_4;
    *(undefined4 *)(puVar11 + 1) = *(undefined4 *)(param_4 + 1);
    *(undefined1 *)((long)puVar11 + 0xc) = *(undefined1 *)((long)param_4 + 0xc);
    *(undefined4 *)(lVar8 + 0x2ec) = 0xd;
    lVar8 = FUN_00409fc0(param_1);
    uVar2 = *(undefined1 *)(lVar8 + 0xb);
    lVar8 = FUN_00409fc0(param_1);
    uVar3 = CONCAT11(uVar2,*(undefined1 *)(lVar8 + 0xc));
    if (uVar3 < 8) {
      return 0;
    }
    uVar7 = uVar3 - 8;
    iVar6 = FUN_004098b0(param_1);
    if (iVar6 == 0) {
      if (uVar7 < 0x10) {
        return 0;
      }
      uVar7 = uVar3 - 0x18;
    }
    lVar8 = FUN_00409fc0(param_1);
    *(char *)(lVar8 + 0xb) = (char)(uVar7 >> 8);
    lVar8 = FUN_00409fc0(param_1);
    *(char *)(lVar8 + 0xc) = (char)uVar7;
    return 0x10;
  case 0x18:
    if (*(int *)(lVar8 + 0x2e8) == 0) {
      return 0;
    }
    if (*(int *)(lVar8 + 0x118) == 0) {
      return 0;
    }
    iVar6 = FUN_004098b0(param_1);
    if (iVar6 != 0) {
      return 0;
    }
    thunk_FUN_00713a50(((long)*(int *)(lVar8 + 0x2e0) - (long)(int)param_3) +
                       *(long *)(lVar8 + 0x2d8),param_4);
    FUN_0054e250(lVar8 + 0x120,*(undefined8 *)(lVar8 + 0x2d8),(long)*(int *)(lVar8 + 0x2e0));
LAB_0052e6cb:
    *(undefined4 *)(lVar8 + 0x11c) = 1;
LAB_0052e430:
    uVar9 = 1;
    break;
  case 0x25:
    *(undefined4 *)param_4 = *(undefined4 *)(lVar8 + 0x2e0);
    uVar9 = 1;
  }
  return uVar9;
}



undefined4 FUN_0052ecf0(long param_1,undefined4 param_2,uint param_3,int *param_4)

{
  undefined1 uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  int *piVar8;
  uint uVar9;
  ulong uVar10;
  ushort uVar11;
  
  uVar10 = (ulong)param_3;
  lVar5 = FUN_004098f0();
  switch(param_2) {
  case 0:
    *(undefined8 *)(lVar5 + 0x118) = 0;
    *(undefined8 *)(lVar5 + 0x128) = 0xc00000008;
    *(undefined8 *)(lVar5 + 0x120) = 0;
    *(undefined4 *)(lVar5 + 0x130) = 0xffffffff;
    return 1;
  default:
    uVar2 = 0xffffffff;
    break;
  case 8:
    lVar7 = FUN_004098f0(param_4);
    uVar2 = 1;
    if (*(long *)(lVar5 + 0x168) != 0) {
      if (*(long *)(lVar5 + 0x168) != lVar5) {
        return 0;
      }
      *(long *)(lVar7 + 0x168) = lVar7;
    }
    break;
  case 9:
    param_3 = 0xf - param_3;
  case 0x14:
    if (6 < param_3 - 2) {
      return 0;
    }
    *(uint *)(lVar5 + 0x128) = param_3;
    return 1;
  case 0x10:
    iVar3 = FUN_004098b0(param_1);
    if (iVar3 == 0) {
      return 0;
    }
    if (*(int *)(lVar5 + 0x120) == 0) {
      return 0;
    }
    lVar7 = FUN_0054d5c0(lVar5 + 0x138,param_4,(long)(int)param_3);
    if (lVar7 == 0) {
      return 0;
    }
    *(undefined4 *)(lVar5 + 0x11c) = 0;
    uVar2 = 1;
    *(undefined8 *)(lVar5 + 0x120) = 0;
    break;
  case 0x11:
    if ((param_3 & 1) != 0) {
      return 0;
    }
    if (0xc < param_3 - 4) {
      return 0;
    }
    iVar3 = FUN_004098b0(param_1);
    if (iVar3 == 0) {
      if (param_4 != (int *)0x0) {
        *(undefined4 *)(lVar5 + 0x120) = 1;
        piVar8 = (int *)FUN_00409fc0(param_1);
        if (param_3 < 8) {
          if ((param_3 & 4) == 0) {
            if ((param_3 != 0) && (*(char *)piVar8 = (char)*param_4, (param_3 & 2) != 0)) {
              *(undefined2 *)((long)piVar8 + (uVar10 - 2)) =
                   *(undefined2 *)((long)param_4 + (uVar10 - 2));
            }
          }
          else {
            *piVar8 = *param_4;
            *(undefined4 *)((long)piVar8 + (uVar10 - 4)) =
                 *(undefined4 *)((long)param_4 + (uVar10 - 4));
          }
        }
        else {
          *(undefined8 *)piVar8 = *(undefined8 *)param_4;
          *(undefined8 *)((long)piVar8 + (uVar10 - 8)) =
               *(undefined8 *)((long)param_4 + (uVar10 - 8));
          lVar7 = (long)piVar8 - ((ulong)(piVar8 + 2) & 0xfffffffffffffff8);
          uVar4 = (int)lVar7 + param_3 & 0xfffffff8;
          if (7 < uVar4) {
            uVar10 = 0;
            do {
              uVar9 = (int)uVar10 + 8;
              *(undefined8 *)(((ulong)(piVar8 + 2) & 0xfffffffffffffff8) + uVar10) =
                   *(undefined8 *)((long)param_4 + (uVar10 - lVar7));
              uVar10 = (ulong)uVar9;
            } while (uVar9 < uVar4);
          }
        }
      }
    }
    else if (param_4 != (int *)0x0) {
      return 0;
    }
    *(uint *)(lVar5 + 300) = param_3;
    uVar2 = 1;
    break;
  case 0x12:
    if (param_3 != 4) {
      return 0;
    }
    *(int *)(param_1 + 0x28) = *param_4;
    uVar2 = 1;
    break;
  case 0x16:
    if (param_3 != 0xd) {
      return 0;
    }
    puVar6 = (undefined8 *)FUN_00409fc0(param_1);
    *puVar6 = *(undefined8 *)param_4;
    *(int *)(puVar6 + 1) = param_4[2];
    *(char *)((long)puVar6 + 0xc) = (char)param_4[3];
    *(undefined4 *)(lVar5 + 0x130) = 0xd;
    lVar7 = FUN_00409fc0(param_1);
    uVar1 = *(undefined1 *)(lVar7 + 0xb);
    lVar7 = FUN_00409fc0(param_1);
    uVar11 = CONCAT11(uVar1,*(undefined1 *)(lVar7 + 0xc));
    if (uVar11 < 8) {
      return 0;
    }
    uVar11 = uVar11 - 8;
    iVar3 = FUN_004098b0(param_1);
    if (iVar3 == 0) {
      if ((int)(uint)uVar11 < *(int *)(lVar5 + 300)) {
        return 0;
      }
      uVar11 = uVar11 - (short)*(int *)(lVar5 + 300);
    }
    lVar7 = FUN_00409fc0(param_1);
    *(char *)(lVar7 + 0xb) = (char)(uVar11 >> 8);
    lVar7 = FUN_00409fc0(param_1);
    *(char *)(lVar7 + 0xc) = (char)uVar11;
    return *(undefined4 *)(lVar5 + 300);
  case 0x25:
    *param_4 = 0xf - *(int *)(lVar5 + 0x128);
    return 1;
  }
  return uVar2;
}


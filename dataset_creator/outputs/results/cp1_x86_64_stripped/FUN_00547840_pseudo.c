
undefined8 FUN_00547840(long *param_1,long *param_2,int param_3)

{
  int iVar1;
  undefined1 *puVar2;
  ulong uVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  
  uVar7 = param_1[3] - param_2[3];
  if (uVar7 == 0) {
    uVar5 = *(uint *)(param_2 + 4);
    if ((uVar5 & 1) != 0) {
      return 0;
    }
    if ((uVar5 & 2) == 0) goto LAB_00547900;
    if (param_3 == 0) {
      return 0;
    }
    lVar6 = param_2[2];
    lVar4 = param_1[2] - lVar6;
    if (lVar4 == param_2[1]) {
      param_1[2] = lVar4;
      param_1[3] = param_1[3] - lVar6;
    }
    param_2[1] = 0;
    param_2[2] = 0;
    if ((*(byte *)(param_1 + 6) & 1) == 0) goto LAB_005479b8;
    if (*param_2 != 0) {
LAB_005478bd:
      if ((uVar5 & 2) == 0) {
        uVar7 = 0;
        goto LAB_005478c9;
      }
    }
  }
  else {
LAB_00547900:
    if (param_2[2] == 0) {
      if (((*(byte *)(param_1 + 6) & 1) != 0) && (*param_2 != 0)) {
        if (uVar7 == 0) {
          uVar5 = *(uint *)(param_2 + 4);
          goto LAB_005478bd;
        }
        uVar8 = 1;
        uVar3 = uVar7 >> 8;
        if (uVar3 == 0) {
          iVar1 = FUN_005477a0(param_1,uVar7 & 0xffffffff,1);
          if (iVar1 == 0) {
            return 0;
          }
          if (uVar7 < 0x80) goto LAB_005478e0;
        }
        else {
          do {
            uVar8 = uVar8 + 1;
            uVar3 = uVar3 >> 8;
          } while (uVar3 != 0);
          iVar1 = FUN_005477a0(param_1,uVar7 & 0xffffffff,uVar8);
          if (iVar1 == 0) {
            return 0;
          }
        }
        uVar7 = uVar8 & 0xffffffff | 0x80;
LAB_005478c9:
        iVar1 = FUN_005477a0(param_1,uVar7,1);
        if (iVar1 == 0) {
          return 0;
        }
      }
    }
    else {
      lVar6 = param_1[1];
      if ((lVar6 != 0) || ((*param_1 != 0 && (lVar6 = *(long *)(*param_1 + 8), lVar6 != 0)))) {
        lVar4 = param_2[1];
        puVar2 = (undefined1 *)(lVar6 + lVar4 + -1 + param_2[2]);
        do {
          *puVar2 = (char)uVar7;
          puVar2 = puVar2 + -1;
          uVar7 = uVar7 >> 8;
        } while ((undefined1 *)(lVar6 + lVar4 + -1) != puVar2);
        if (uVar7 != 0) {
          return 0;
        }
      }
    }
  }
LAB_005478e0:
  if (param_3 == 0) {
    return 1;
  }
LAB_005479b8:
  param_1[5] = *param_2;
  FUN_0041ad60(param_2,"../crypto/packet.c",0x120);
  return 1;
}


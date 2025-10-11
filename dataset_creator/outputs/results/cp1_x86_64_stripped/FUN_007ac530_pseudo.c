
undefined8
FUN_007ac530(byte *param_1,undefined8 *param_2,byte *param_3,long param_4,undefined4 *param_5)

{
  byte *pbVar1;
  byte bVar2;
  undefined1 *puVar3;
  long lVar4;
  byte *pbVar5;
  ulong uVar6;
  byte *pbVar7;
  undefined8 *puVar8;
  long *plVar9;
  long *plVar10;
  undefined8 *puVar11;
  long in_FS_OFFSET;
  
  pbVar1 = param_3 + param_4;
  pbVar5 = param_3;
  if ((param_3 <= param_1) && (param_1 < pbVar1)) {
    lVar4 = thunk_FUN_007129d0();
    pbVar5 = param_1 + lVar4 + 1;
  }
  puVar3 = (undefined1 *)thunk_FUN_00712710(param_1,10);
  if (puVar3 != (undefined1 *)0x0) {
    *puVar3 = 0;
  }
  *param_2 = param_1;
  bVar2 = *param_1;
  while (bVar2 != 0) {
    if (bVar2 == 0x3a) {
      pbVar7 = param_1 + 1;
      *param_1 = 0;
      param_1 = param_1 + 1;
      if (*pbVar7 != 0) goto LAB_007ac5bd;
      break;
    }
    pbVar7 = param_1 + 1;
    param_1 = param_1 + 1;
    bVar2 = *pbVar7;
  }
  if ((*(char *)*param_2 - 0x2bU & 0xfd) == 0) {
    param_2[3] = 0;
    *(undefined1 (*) [16])(param_2 + 1) = (undefined1  [16])0x0;
    if (((pbVar5 == (byte *)0x0) && (pbVar5 = param_3, param_3 <= param_1)) && (param_1 < pbVar1)) {
      lVar4 = thunk_FUN_007129d0(param_1);
      pbVar5 = param_1 + lVar4 + 1;
    }
    goto LAB_007ac710;
  }
LAB_007ac5bd:
  param_2[1] = param_1;
  bVar2 = *param_1;
  if (bVar2 == 0x3a) {
LAB_007ac867:
    if (bVar2 != 0) {
      *param_1 = 0;
      param_1 = param_1 + 1;
    }
  }
  else if (bVar2 != 0) {
    do {
      bVar2 = param_1[1];
      param_1 = param_1 + 1;
      if (bVar2 == 0) goto LAB_007ac5ec;
    } while (bVar2 != 0x3a);
    goto LAB_007ac867;
  }
LAB_007ac5ec:
  plVar10 = (long *)((ulong)(pbVar5 + 7) & 0xfffffffffffffff8);
  plVar9 = plVar10;
  do {
    do {
      if (pbVar1 < plVar9 + 2) goto LAB_007ac6a9;
      bVar2 = *param_1;
      uVar6 = (ulong)bVar2;
      if (bVar2 == 0) goto LAB_007ac831;
      if (bVar2 == 0x3a) {
        param_1 = param_1 + 1;
        goto LAB_007ac831;
      }
      bVar2 = *(byte *)(*(long *)(in_FS_OFFSET + -0x40) + 1 + (long)(char)bVar2 * 2);
      pbVar5 = param_1;
      while ((bVar2 & 0x20) != 0) {
        uVar6 = (ulong)(char)pbVar5[1];
        pbVar5 = pbVar5 + 1;
        bVar2 = *(byte *)(*(long *)(in_FS_OFFSET + -0x40) + 1 + uVar6 * 2);
      }
      bVar2 = (byte)uVar6;
      param_1 = pbVar5;
      if ((0x3a < bVar2) || ((0xfbffeffffffffffeU >> (uVar6 & 0x3f) & 1) != 0)) {
        do {
          do {
            pbVar7 = param_1;
            bVar2 = pbVar7[1];
            param_1 = pbVar7 + 1;
          } while (0x3a < bVar2);
        } while ((0xfbffeffffffffffeU >> ((ulong)bVar2 & 0x3f) & 1) != 0);
        if (pbVar5 < param_1) {
          *plVar9 = (long)pbVar5;
          bVar2 = pbVar7[1];
          plVar9 = plVar9 + 1;
        }
      }
    } while (bVar2 == 0);
    *param_1 = 0;
    param_1 = param_1 + 1;
  } while (bVar2 != 0x3a);
LAB_007ac831:
  *plVar9 = 0;
  if (plVar10 == (long *)0x0) {
    return 0xffffffff;
  }
  lVar4 = *plVar10;
  param_2[2] = plVar10;
  while (lVar4 != 0) {
    plVar10 = plVar10 + 1;
    lVar4 = *plVar10;
  }
  pbVar5 = (byte *)(plVar10 + 1);
LAB_007ac710:
  puVar11 = (undefined8 *)((ulong)(pbVar5 + 7) & 0xfffffffffffffff8);
  if (puVar11 + 2 <= pbVar1) {
    bVar2 = *param_1;
    puVar8 = puVar11;
    do {
      if (bVar2 == 0) {
        *puVar8 = 0;
        if (puVar11 == (undefined8 *)0x0) {
          return 0xffffffff;
        }
        param_2[3] = puVar11;
        return 1;
      }
      if ((*(byte *)(*(long *)(in_FS_OFFSET + -0x40) + 1 + (long)(char)bVar2 * 2) & 0x20) == 0) {
        pbVar5 = param_1;
        if (bVar2 != 0x2c) goto LAB_007ac784;
LAB_007ac7aa:
        *param_1 = 0;
        param_1 = param_1 + 1;
      }
      else {
        do {
          bVar2 = param_1[1];
          param_1 = param_1 + 1;
        } while ((*(byte *)(*(long *)(in_FS_OFFSET + -0x40) + 1 + (long)(char)bVar2 * 2) & 0x20) !=
                 0);
        if ((bVar2 != 0) && (pbVar5 = param_1, bVar2 != 0x2c)) {
LAB_007ac784:
          do {
            pbVar7 = param_1;
            bVar2 = pbVar7[1];
            param_1 = pbVar7 + 1;
            if (bVar2 == 0) break;
          } while (bVar2 != 0x2c);
          if (pbVar5 < param_1) {
            *puVar8 = pbVar5;
            bVar2 = pbVar7[1];
            puVar8 = puVar8 + 1;
          }
        }
        if (bVar2 != 0) goto LAB_007ac7aa;
      }
      if (pbVar1 < puVar8 + 2) break;
      bVar2 = *param_1;
    } while( true );
  }
LAB_007ac6a9:
  *param_5 = 0x22;
  return 0xffffffff;
}


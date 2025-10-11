
undefined8
FUN_00779270(undefined8 param_1,byte *param_2,long *param_3,long *param_4,ulong *param_5,
            ulong param_6,undefined8 *param_7,undefined4 *param_8,int param_9,undefined4 *param_10)

{
  ulong uVar1;
  byte bVar2;
  byte bVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  byte *pbVar10;
  undefined8 uVar11;
  byte *pbVar12;
  ushort uVar13;
  undefined4 uVar14;
  long in_FS_OFFSET;
  
  bVar2 = *param_2;
  if ((((int)(char)bVar2 - 0x30U < 10) ||
      ((*(byte *)(*(long *)(in_FS_OFFSET + -0x40) + 1 + (long)(char)bVar2 * 2) & 0x10) != 0)) ||
     (bVar2 == 0x3a)) {
    uVar14 = 0x10;
    if (param_9 != 10) {
      param_9 = 2;
      uVar14 = 4;
    }
    lVar8 = thunk_FUN_007129d0(param_2);
    uVar1 = lVar8 + 0x29;
    if (param_5 == (ulong *)0x0) {
      if (param_6 < uVar1) {
        *param_8 = 0xfffffffe;
        if (param_10 != (undefined4 *)0x0) {
          *param_10 = 0xffffffff;
        }
        *(undefined4 *)(in_FS_OFFSET + -0x58) = 0x22;
        return 1;
      }
      lVar8 = *param_4;
    }
    else {
      lVar8 = *param_4;
      if (*param_5 < uVar1) {
        *param_5 = uVar1;
        lVar8 = FUN_00710840(lVar8,uVar1);
        if (lVar8 == 0) {
          uVar14 = *(undefined4 *)(in_FS_OFFSET + -0x58);
          FUN_007104f0(*param_4);
          *param_4 = 0;
          *param_5 = 0;
          *(undefined4 *)(in_FS_OFFSET + -0x58) = uVar14;
          if (param_10 != (undefined4 *)0x0) {
            *param_10 = 0xffffffff;
          }
          goto LAB_007793b8;
        }
        *param_4 = lVar8;
      }
    }
    thunk_FUN_00713720(lVar8,0,uVar1);
    lVar4 = *param_4;
    bVar2 = *param_2;
    uVar6 = (uint)(char)bVar2;
    lVar8 = lVar4 + 0x28;
    if (uVar6 - 0x30 < 10) {
      pbVar12 = param_2;
      if (bVar2 != 0) {
        do {
          bVar3 = pbVar12[1];
          pbVar12 = pbVar12 + 1;
          if (bVar3 == 0) goto LAB_00779400;
        } while (((int)(char)bVar3 - 0x30U < 10) || (bVar3 == 0x2e));
        goto LAB_00779358;
      }
LAB_00779400:
      if (pbVar12[-1] == 0x2e) goto LAB_00779358;
      if (param_9 == 2) {
        iVar7 = FUN_00776880(param_2,lVar4);
        if (iVar7 != 0) goto LAB_0077942d;
      }
      else {
        iVar7 = FUN_007774c0(10,param_2,lVar4);
        if (0 < iVar7) {
LAB_0077942d:
          thunk_FUN_00712800(lVar8,param_2);
          *param_3 = lVar8;
          *(undefined8 *)(lVar4 + 0x20) = 0;
          param_3[1] = lVar4 + 0x20;
          *(long *)(lVar4 + 0x10) = lVar4;
          *(undefined8 *)(lVar4 + 0x18) = 0;
          param_3[3] = lVar4 + 0x10;
          *(undefined4 *)((long)param_3 + 0x14) = uVar14;
          *(int *)(param_3 + 2) = param_9;
          if (param_10 != (undefined4 *)0x0) {
            *param_10 = 0;
          }
          goto joined_r0x00779484;
        }
      }
    }
    else {
LAB_00779358:
      lVar5 = *(long *)(in_FS_OFFSET + -0x40);
      uVar13 = *(ushort *)(lVar5 + (long)(char)bVar2 * 2);
      pbVar12 = param_2;
      if ((uVar13 & 0x1000) == 0) {
LAB_007793e0:
        if ((char)uVar6 != ':') goto LAB_007793e9;
        if (param_9 != 10) goto LAB_007793a4;
LAB_007794f9:
        while( true ) {
          if (((char)uVar6 != ':' && (char)uVar6 != '.') && ((uVar13 & 0x1000) == 0))
          goto LAB_007793e9;
          bVar2 = pbVar12[1];
          uVar6 = (uint)bVar2;
          pbVar10 = pbVar12 + 1;
          if (bVar2 == 0) break;
          uVar13 = *(ushort *)(lVar5 + (long)(char)bVar2 * 2);
          pbVar12 = pbVar12 + 1;
        }
      }
      else {
        lVar9 = thunk_FUN_00712710(param_2,0x3a);
        uVar6 = (uint)bVar2;
        if (lVar9 == 0) goto LAB_007793e0;
        if (param_9 != 10) goto LAB_007793a4;
        pbVar10 = param_2;
        if (bVar2 != 0) goto LAB_007794f9;
      }
      if (pbVar10[-1] == 0x2e) goto LAB_007793e9;
      iVar7 = FUN_007774c0(10,param_2,lVar4);
      if (0 < iVar7) {
        thunk_FUN_00712800(lVar8,param_2);
        *param_3 = lVar8;
        *(undefined8 *)(lVar4 + 0x20) = 0;
        param_3[1] = lVar4 + 0x20;
        *(long *)(lVar4 + 0x10) = lVar4;
        *(undefined8 *)(lVar4 + 0x18) = 0;
        param_3[3] = lVar4 + 0x10;
        param_3[2] = DAT_0082e2d8;
        *param_10 = 0;
joined_r0x00779484:
        if (param_5 == (ulong *)0x0) {
          *param_8 = 1;
          return 1;
        }
        *param_7 = param_3;
        return 1;
      }
    }
LAB_007793a4:
    *param_10 = 1;
    if (param_5 != (ulong *)0x0) {
LAB_007793b8:
      *param_7 = 0;
      return 1;
    }
    *param_8 = 0;
    uVar11 = 1;
  }
  else {
LAB_007793e9:
    uVar11 = 0;
  }
  return uVar11;
}


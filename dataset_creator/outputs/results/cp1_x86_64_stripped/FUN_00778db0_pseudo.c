
undefined8
FUN_00778db0(byte *param_1,undefined8 *param_2,long *param_3,ulong *param_4,ulong param_5,
            undefined8 *param_6,undefined4 *param_7,int param_8,undefined4 *param_9)

{
  ulong uVar1;
  byte bVar2;
  byte bVar3;
  ushort uVar4;
  undefined4 uVar5;
  long lVar6;
  uint uVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  byte *pbVar12;
  byte *pbVar13;
  undefined8 uVar14;
  long in_FS_OFFSET;
  undefined4 local_40;
  
  lVar9 = FUN_00778500();
  if (lVar9 == 0) {
    if (param_9 != (undefined4 *)0x0) {
      *param_9 = 0xffffffff;
    }
    if (param_4 != (ulong *)0x0) {
      *param_6 = 0;
      return 0xffffffff;
    }
    *param_7 = 0xfffffffe;
    return 0xffffffff;
  }
  bVar2 = *param_1;
  if ((((int)(char)bVar2 - 0x30U < 10) ||
      ((*(byte *)(*(long *)(in_FS_OFFSET + -0x40) + 1 + (long)(char)bVar2 * 2) & 0x10) != 0)) ||
     (bVar2 == 0x3a)) {
    if (param_8 == 10) {
      local_40 = 0x10;
    }
    else {
      local_40 = 4;
      param_8 = 2;
    }
    lVar10 = thunk_FUN_007129d0(param_1);
    uVar1 = lVar10 + 0x29;
    if (param_4 != (ulong *)0x0) {
      lVar10 = *param_3;
      if (uVar1 <= *param_4) goto LAB_00778e36;
      *param_4 = uVar1;
      lVar10 = FUN_00710840(lVar10,uVar1);
      if (lVar10 != 0) {
        *param_3 = lVar10;
        goto LAB_00778e36;
      }
      uVar5 = *(undefined4 *)(in_FS_OFFSET + -0x58);
      FUN_007104f0(*param_3);
      *param_3 = 0;
      *param_4 = 0;
      *(undefined4 *)(in_FS_OFFSET + -0x58) = uVar5;
      if (param_9 != (undefined4 *)0x0) {
        *param_9 = 0xffffffff;
      }
LAB_00778fdf:
      *param_6 = 0;
      uVar14 = 1;
      goto LAB_00778ec0;
    }
    if (param_5 < uVar1) {
      *param_7 = 0xfffffffe;
      if (param_9 != (undefined4 *)0x0) {
        *param_9 = 0xffffffff;
      }
      uVar14 = 1;
      *(undefined4 *)(in_FS_OFFSET + -0x58) = 0x22;
      goto LAB_00778ec0;
    }
    lVar10 = *param_3;
LAB_00778e36:
    thunk_FUN_00713720(lVar10,0);
    lVar10 = *param_3;
    bVar2 = *param_1;
    uVar7 = (uint)(char)bVar2;
    if (uVar7 - 0x30 < 10) {
      pbVar13 = param_1;
      if (bVar2 != 0) {
        do {
          bVar3 = pbVar13[1];
          pbVar13 = pbVar13 + 1;
          if (bVar3 == 0) goto LAB_00778ff8;
        } while (((int)(char)bVar3 - 0x30U < 10) || (bVar3 == 0x2e));
        goto LAB_00778e98;
      }
LAB_00778ff8:
      if (pbVar13[-1] == 0x2e) goto LAB_00778e98;
      if (param_8 != 2) {
        iVar8 = FUN_007774c0(10,param_1,lVar10);
        if (0 < iVar8) goto LAB_00779021;
        goto LAB_00778fc8;
      }
      iVar8 = FUN_00776880(param_1,lVar10);
      if (iVar8 == 0) goto LAB_00778fc8;
LAB_00779021:
      uVar14 = thunk_FUN_00712800(lVar10 + 0x28,param_1);
      *param_2 = uVar14;
      *(undefined8 *)(lVar10 + 0x20) = 0;
      param_2[1] = lVar10 + 0x20;
      *(long *)(lVar10 + 0x10) = lVar10;
      *(undefined8 *)(lVar10 + 0x18) = 0;
      param_2[3] = lVar10 + 0x10;
      *(int *)(param_2 + 2) = param_8;
      *(undefined4 *)((long)param_2 + 0x14) = local_40;
      if (param_9 != (undefined4 *)0x0) {
        *param_9 = 0;
      }
    }
    else {
LAB_00778e98:
      lVar6 = *(long *)(in_FS_OFFSET + -0x40);
      uVar4 = *(ushort *)(lVar6 + (long)(char)bVar2 * 2);
      pbVar13 = param_1;
      if ((uVar4 & 0x1000) == 0) {
LAB_00778eb4:
        if ((char)uVar7 != ':') goto LAB_00778ebd;
        if (param_8 != 10) goto LAB_00778fc8;
LAB_00778f79:
        while( true ) {
          if (((char)uVar7 != '.' && (char)uVar7 != ':') && ((uVar4 & 0x1000) == 0))
          goto LAB_00778ebd;
          bVar2 = pbVar13[1];
          uVar7 = (uint)bVar2;
          pbVar12 = pbVar13 + 1;
          if (bVar2 == 0) break;
          uVar4 = *(ushort *)(lVar6 + (long)(char)bVar2 * 2);
          pbVar13 = pbVar13 + 1;
        }
      }
      else {
        lVar11 = thunk_FUN_00712710(param_1,0x3a);
        uVar7 = (uint)bVar2;
        if (lVar11 == 0) goto LAB_00778eb4;
        if (param_8 != 10) goto LAB_00778fc8;
        pbVar12 = param_1;
        if (bVar2 != 0) goto LAB_00778f79;
      }
      if (pbVar12[-1] == 0x2e) goto LAB_00778ebd;
      iVar8 = FUN_007774c0(10,param_1,lVar10);
      if (iVar8 < 1) {
LAB_00778fc8:
        *param_9 = 1;
        if (param_4 == (ulong *)0x0) {
          uVar14 = 1;
          *param_7 = 0;
          goto LAB_00778ec0;
        }
        goto LAB_00778fdf;
      }
      uVar14 = thunk_FUN_00712800(lVar10 + 0x28,param_1);
      *param_2 = uVar14;
      *(undefined8 *)(lVar10 + 0x20) = 0;
      param_2[1] = lVar10 + 0x20;
      *(long *)(lVar10 + 0x10) = lVar10;
      *(undefined8 *)(lVar10 + 0x18) = 0;
      param_2[3] = lVar10 + 0x10;
      param_2[2] = DAT_0082e2d8;
      *param_9 = 0;
    }
    if (param_4 == (ulong *)0x0) {
      uVar14 = 1;
      *param_7 = 1;
    }
    else {
      *param_6 = param_2;
      uVar14 = 1;
    }
  }
  else {
LAB_00778ebd:
    uVar14 = 0;
  }
LAB_00778ec0:
  FUN_00778a10(lVar9);
  return uVar14;
}


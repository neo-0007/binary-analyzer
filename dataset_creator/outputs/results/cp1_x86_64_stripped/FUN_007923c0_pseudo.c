
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007923c0(undefined1 (*param_1) [16],long param_2,int param_3,ulong param_4,byte param_5,
                 uint param_6)

{
  long lVar1;
  ushort uVar2;
  ulong uVar3;
  uint uVar4;
  long lVar5;
  byte bVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  ulong uVar10;
  long in_FS_OFFSET;
  bool bVar11;
  ushort in_FPUControlWord;
  undefined8 uVar12;
  byte local_60;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  uVar2 = in_FPUControlWord & 0xc00;
  if (uVar2 == 0x800) {
    uVar8 = 0x800;
LAB_00792413:
    if (param_2 < -0x3ffe) goto LAB_00792420;
LAB_0079256d:
    if (0x3fff < param_2) {
LAB_00792670:
      *(undefined4 *)(in_FS_OFFSET + -0x58) = 0x22;
      uVar12 = _DAT_0083ee20;
      if (param_3 == 0) {
        uVar12 = _DAT_0083ee30;
      }
      FUN_007cacb0(uVar12,_DAT_0083ee30);
      goto LAB_0079277c;
    }
    lVar5 = *(long *)*param_1;
    local_60 = (byte)(param_4 >> (param_5 & 0x3f)) & 1;
    bVar6 = (byte)lVar5;
LAB_00792596:
    bVar6 = bVar6 & 1;
    if (param_6 == 0) goto LAB_0079259b;
LAB_0079251c:
    if (uVar8 == 0x800) {
      bVar11 = true;
      goto LAB_007927c6;
    }
    if (uVar8 < 0x801) {
      if (uVar8 != 0) {
        if (uVar8 != 0x400) {
          FUN_00405147();
          return;
        }
        bVar11 = true;
        goto LAB_007926b5;
      }
      bVar11 = true;
LAB_007925ce:
      if (local_60 == 0) goto LAB_007926c0;
      goto LAB_007925d7;
    }
    if (uVar8 != 0xc00) {
code_r0x00405147:
                    /* WARNING: Subroutine does not return */
      FUN_00404713();
    }
    iVar9 = (int)param_2;
LAB_00792710:
    FUN_007c99d0(_DAT_0083ee40,_DAT_0083ee10);
  }
  else {
    if (uVar2 < 0x801) {
      if (uVar2 == 0) {
        uVar8 = 0;
      }
      else {
        if (uVar2 != 0x400) {
          FUN_00405147();
          return;
        }
        uVar8 = 0x400;
      }
      goto LAB_00792413;
    }
    if (uVar2 != 0xc00) goto code_r0x00405147;
    uVar8 = 0xc00;
    if (-0x3fff < param_2) goto LAB_0079256d;
LAB_00792420:
    if (param_2 < -0x406f) {
      *(undefined4 *)(in_FS_OFFSET + -0x58) = 0x22;
      uVar12 = _DAT_0083ee00;
      if (param_3 == 0) {
        uVar12 = _DAT_0083ee10;
      }
      FUN_007cacb0(uVar12,_DAT_0083ee10);
LAB_0079277c:
      if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_00792a63;
    }
    uVar3 = -param_2 - 0x3ffe;
    uVar4 = (uint)((~(-1L << (param_5 & 0x3f)) & param_4) != 0);
    uVar7 = param_6 | uVar4;
    if (uVar3 == 0x71) {
      uVar10 = *(ulong *)(*param_1 + 8);
      *param_1 = (undefined1  [16])0x0;
      bVar6 = 0;
      param_5 = 0x30;
      uVar7 = uVar7 | *(long *)*param_1 != 0;
      lVar5 = 0;
LAB_007924b0:
      uVar3 = uVar10 >> (param_5 & 0x3f);
      local_60 = (byte)uVar3 & 1;
      if ((uVar7 != 0) || ((~(-1L << (param_5 & 0x3f)) & uVar10) != 0 || (uVar3 & 1) != 0))
      goto LAB_007924c9;
LAB_00792a54:
      bVar11 = false;
      param_2 = -0x3fff;
    }
    else {
      if (0x3f < (long)uVar3) {
        param_5 = (byte)(-0x3fff - param_2);
        lVar5 = -0x3fff - param_2 >> 6;
        uVar10 = *(ulong *)(*param_1 + lVar5 * 8);
        if (lVar5 == 1) {
          uVar7 = uVar7 | *(long *)*param_1 != 0;
        }
        uVar7 = uVar7 | (~(-1L << (param_5 & 0x3f)) & uVar10) != 0;
        if ((uVar3 & 0x3f) == 0) {
          lVar5 = *(long *)(*param_1 + 8);
          *(long *)*param_1 = lVar5;
        }
        else {
          FUN_006f3040(param_1,*param_1 + 8,1,(uint)uVar3 & 0x3f);
          lVar5 = *(long *)*param_1;
        }
        param_5 = param_5 & 0x3f;
        *(undefined8 *)(*param_1 + 8) = 0;
        bVar6 = (byte)lVar5 & 1;
        goto LAB_007924b0;
      }
      uVar10 = *(ulong *)*param_1;
      if (uVar3 != 1) {
        FUN_006f3040(param_1,param_1,2,uVar3 & 0xffffffff);
        lVar5 = *(long *)*param_1;
        param_5 = 1 - (char)param_2;
        bVar6 = (byte)lVar5 & 1;
        goto LAB_007924b0;
      }
      local_60 = (byte)uVar10;
      param_4 = param_4 >> (param_5 & 0x3f);
      uVar3 = param_4 & 1;
      local_60 = local_60 & 1;
      if (uVar8 == 0x800) {
        if (param_3 == 0) goto joined_r0x00792993;
LAB_00792912:
        FUN_006f3040(param_1,param_1,2,1);
LAB_0079292c:
        lVar5 = *(long *)*param_1;
        bVar6 = (byte)lVar5 & 1;
        if (((uVar10 & 1) != 0) || ((param_6 & 1) != 0 || uVar4 != 0)) {
          param_5 = 0;
          goto LAB_007924c9;
        }
        goto LAB_00792a54;
      }
      if (0x800 < uVar8) {
        if (uVar8 != 0xc00) goto code_r0x00405147;
        goto LAB_00792912;
      }
      if (uVar8 != 0) {
        if (uVar8 != 0x400) {
          FUN_00405147();
          return;
        }
        if (param_3 != 0) goto joined_r0x00792993;
        goto LAB_00792912;
      }
      param_4 = uVar10;
      if (uVar3 == 0) goto LAB_00792912;
joined_r0x00792993:
      if (((param_4 & 1) == 0) && ((param_6 & 1) == 0 && uVar4 == 0)) goto LAB_00792912;
      uVar3 = *(ulong *)(*param_1 + 8);
      if (uVar10 != 0xffffffffffffffff) {
        FUN_006f3040(param_1,param_1,2,1);
        if ((uVar3 >> 0x31 & 1) != 0) {
LAB_007929cf:
          lVar5 = *(long *)*param_1;
          param_5 = 0;
          param_2 = -0x3fff;
          bVar6 = (byte)lVar5;
          param_4 = uVar10;
          param_6 = uVar7;
          goto LAB_00792596;
        }
        goto LAB_0079292c;
      }
      uVar3 = uVar3 + 1;
      if (uVar3 == 0) goto LAB_00792912;
      FUN_006f3040(param_1,param_1,2,1);
      if ((uVar3 >> 0x31 & 1) != 0) goto LAB_007929cf;
      lVar5 = *(long *)*param_1;
      uVar10 = 0xffffffffffffffff;
      param_5 = 0;
      bVar6 = (byte)lVar5 & 1;
LAB_007924c9:
      uVar12 = _DAT_0083ee10;
      *(undefined4 *)(in_FS_OFFSET + -0x58) = 0x22;
      FUN_007cacb0(uVar12);
      param_2 = -0x3fff;
      param_4 = uVar10;
      if (uVar7 != 0) goto LAB_0079251c;
LAB_0079259b:
      bVar11 = (~(-1L << (param_5 & 0x3f)) & param_4) != 0;
    }
    if (uVar8 == 0x800) {
LAB_007927c6:
      bVar6 = local_60;
      if (param_3 != 0) goto LAB_007926c0;
LAB_007925d7:
      if (bVar6 == 0 && !bVar11) goto LAB_007926c0;
      *(long *)*param_1 = lVar5 + 1;
      uVar3 = *(ulong *)(*param_1 + 8);
      if (lVar5 == -1) {
        uVar3 = uVar3 + 1;
        *(ulong *)(*param_1 + 8) = uVar3;
      }
      if ((uVar3 >> 0x31 & 1) != 0) {
        FUN_006f3040(param_1,param_1,2,1);
        param_2 = param_2 + 1;
        *(ulong *)(*param_1 + 8) = *(ulong *)(*param_1 + 8) | 0x1000000000000;
        if (param_2 == 0x4000) goto LAB_00792670;
        goto LAB_007926c0;
      }
      if (param_2 != -0x3fff) goto LAB_007926c0;
      iVar9 = ((uVar3 & 0x1000000000000) != 0) - 0x3fff;
    }
    else {
      if (uVar8 < 0x801) {
        if (uVar8 == 0) goto LAB_007925ce;
        if (uVar8 != 0x400) {
          FUN_00405147();
          return;
        }
LAB_007926b5:
        bVar6 = local_60;
        if (param_3 != 0) goto LAB_007925d7;
      }
      else if (uVar8 != 0xc00) {
        FUN_00405147();
        return;
      }
LAB_007926c0:
      iVar9 = (int)param_2;
    }
    if ((local_60 != 0) || (bVar11)) goto LAB_00792710;
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    FUN_007951a0(param_1,iVar9,param_3);
    return;
  }
LAB_00792a63:
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}


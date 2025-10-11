
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void round_and_return(undefined1 (*param_1) [16],long param_2,int param_3,ulong param_4,byte param_5
                     ,uint param_6)

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
LAB_00788ae3:
    if (param_2 < -0x3ffe) goto LAB_00788af0;
LAB_00788c3d:
    if (0x3fff < param_2) {
LAB_00788d40:
      *(undefined4 *)(in_FS_OFFSET + -0x58) = 0x22;
      uVar12 = _DAT_00834c00;
      if (param_3 == 0) {
        uVar12 = _DAT_00834c10;
      }
      __multf3(uVar12,_DAT_00834c10);
      goto LAB_00788e4c;
    }
    lVar5 = *(long *)*param_1;
    local_60 = (byte)(param_4 >> (param_5 & 0x3f)) & 1;
    bVar6 = (byte)lVar5;
LAB_00788c66:
    bVar6 = bVar6 & 1;
    if (param_6 == 0) goto LAB_00788c6b;
LAB_00788bec:
    if (uVar8 == 0x800) {
      bVar11 = true;
      goto LAB_00788e96;
    }
    if (uVar8 < 0x801) {
      if (uVar8 != 0) {
        if (uVar8 != 0x400) {
                    /* WARNING: Subroutine does not return */
          round_and_return_cold();
        }
        bVar11 = true;
        bVar6 = local_60;
        goto LAB_00788d85;
      }
      bVar11 = true;
LAB_00788c9e:
      if (local_60 == 0) goto LAB_00788d90;
      goto LAB_00788ca7;
    }
    if (uVar8 != 0xc00) {
code_r0x00404fbf:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    iVar9 = (int)param_2;
LAB_00788de0:
    __addtf3(_DAT_00834c20,_DAT_00834bf0);
  }
  else {
    if (uVar2 < 0x801) {
      if (uVar2 == 0) {
        uVar8 = 0;
      }
      else {
        if (uVar2 != 0x400) {
                    /* WARNING: Subroutine does not return */
          round_and_return_cold();
        }
        uVar8 = 0x400;
      }
      goto LAB_00788ae3;
    }
    if (uVar2 != 0xc00) goto code_r0x00404fbf;
    uVar8 = 0xc00;
    if (-0x3fff < param_2) goto LAB_00788c3d;
LAB_00788af0:
    if (param_2 < -0x406f) {
      *(undefined4 *)(in_FS_OFFSET + -0x58) = 0x22;
      uVar12 = _DAT_00834be0;
      if (param_3 == 0) {
        uVar12 = _DAT_00834bf0;
      }
      __multf3(uVar12,_DAT_00834bf0);
LAB_00788e4c:
      if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_00789133;
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
LAB_00788b80:
      uVar3 = uVar10 >> (param_5 & 0x3f);
      local_60 = (byte)uVar3 & 1;
      if ((uVar7 != 0) || ((~(-1L << (param_5 & 0x3f)) & uVar10) != 0 || (uVar3 & 1) != 0))
      goto LAB_00788b99;
LAB_00789124:
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
          __mpn_rshift(param_1,*param_1 + 8,1,(uint)uVar3 & 0x3f);
          lVar5 = *(long *)*param_1;
        }
        param_5 = param_5 & 0x3f;
        *(undefined8 *)(*param_1 + 8) = 0;
        bVar6 = (byte)lVar5 & 1;
        goto LAB_00788b80;
      }
      uVar10 = *(ulong *)*param_1;
      if (uVar3 != 1) {
        __mpn_rshift(param_1,param_1,2,uVar3 & 0xffffffff);
        lVar5 = *(long *)*param_1;
        param_5 = 1 - (char)param_2;
        bVar6 = (byte)lVar5 & 1;
        goto LAB_00788b80;
      }
      local_60 = (byte)uVar10;
      param_4 = param_4 >> (param_5 & 0x3f);
      uVar3 = param_4 & 1;
      local_60 = local_60 & 1;
      if (uVar8 == 0x800) {
        if (param_3 == 0) goto joined_r0x00789063;
LAB_00788fe2:
        __mpn_rshift(param_1,param_1,2,1);
LAB_00788ffc:
        lVar5 = *(long *)*param_1;
        bVar6 = (byte)lVar5 & 1;
        if (((uVar10 & 1) != 0) || ((param_6 & 1) != 0 || uVar4 != 0)) {
          param_5 = 0;
          goto LAB_00788b99;
        }
        goto LAB_00789124;
      }
      if (0x800 < uVar8) {
        if (uVar8 != 0xc00) goto code_r0x00404fbf;
        goto LAB_00788fe2;
      }
      if (uVar8 != 0) {
        if (uVar8 != 0x400) {
                    /* WARNING: Subroutine does not return */
          round_and_return_cold();
        }
        if (param_3 != 0) goto joined_r0x00789063;
        goto LAB_00788fe2;
      }
      param_4 = uVar10;
      if (uVar3 == 0) goto LAB_00788fe2;
joined_r0x00789063:
      if (((param_4 & 1) == 0) && ((param_6 & 1) == 0 && uVar4 == 0)) goto LAB_00788fe2;
      uVar3 = *(ulong *)(*param_1 + 8);
      if (uVar10 != 0xffffffffffffffff) {
        __mpn_rshift(param_1,param_1,2,1);
        if ((uVar3 >> 0x31 & 1) != 0) {
LAB_0078909f:
          lVar5 = *(long *)*param_1;
          param_5 = 0;
          param_2 = -0x3fff;
          bVar6 = (byte)lVar5;
          param_4 = uVar10;
          param_6 = uVar7;
          goto LAB_00788c66;
        }
        goto LAB_00788ffc;
      }
      uVar3 = uVar3 + 1;
      if (uVar3 == 0) goto LAB_00788fe2;
      __mpn_rshift(param_1,param_1,2,1);
      if ((uVar3 >> 0x31 & 1) != 0) goto LAB_0078909f;
      lVar5 = *(long *)*param_1;
      uVar10 = 0xffffffffffffffff;
      param_5 = 0;
      bVar6 = (byte)lVar5 & 1;
LAB_00788b99:
      uVar12 = _DAT_00834bf0;
      *(undefined4 *)(in_FS_OFFSET + -0x58) = 0x22;
      __multf3(uVar12);
      param_2 = -0x3fff;
      param_4 = uVar10;
      if (uVar7 != 0) goto LAB_00788bec;
LAB_00788c6b:
      bVar11 = (~(-1L << (param_5 & 0x3f)) & param_4) != 0;
    }
    if (uVar8 == 0x800) {
LAB_00788e96:
      bVar6 = local_60;
      local_60 = bVar6;
      if (param_3 != 0) goto LAB_00788d90;
LAB_00788ca7:
      if (bVar6 == 0 && !bVar11) goto LAB_00788d90;
      *(long *)*param_1 = lVar5 + 1;
      uVar3 = *(ulong *)(*param_1 + 8);
      if (lVar5 == -1) {
        uVar3 = uVar3 + 1;
        *(ulong *)(*param_1 + 8) = uVar3;
      }
      if ((uVar3 >> 0x31 & 1) != 0) {
        __mpn_rshift(param_1,param_1,2,1);
        param_2 = param_2 + 1;
        *(ulong *)(*param_1 + 8) = *(ulong *)(*param_1 + 8) | 0x1000000000000;
        if (param_2 == 0x4000) goto LAB_00788d40;
        goto LAB_00788d90;
      }
      if (param_2 != -0x3fff) goto LAB_00788d90;
      iVar9 = ((uVar3 & 0x1000000000000) != 0) - 0x3fff;
    }
    else {
      if (uVar8 < 0x801) {
        if (uVar8 == 0) goto LAB_00788c9e;
        bVar6 = local_60;
        if (uVar8 != 0x400) {
                    /* WARNING: Subroutine does not return */
          round_and_return_cold();
        }
LAB_00788d85:
        local_60 = bVar6;
        if (param_3 != 0) goto LAB_00788ca7;
      }
      else if (uVar8 != 0xc00) {
                    /* WARNING: Subroutine does not return */
        round_and_return_cold();
      }
LAB_00788d90:
      iVar9 = (int)param_2;
    }
    if ((local_60 != 0) || (bVar11)) goto LAB_00788de0;
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    __mpn_construct_float128(param_1,iVar9,param_3);
    return;
  }
LAB_00789133:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}


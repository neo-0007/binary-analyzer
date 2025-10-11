
void FUN_006efd80(ulong *param_1,ulong param_2,int param_3,ulong param_4,byte param_5,uint param_6)

{
  long lVar1;
  ushort uVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  byte bVar7;
  uint uVar8;
  uint uVar9;
  byte bVar10;
  long in_FS_OFFSET;
  bool bVar11;
  ushort in_FPUControlWord;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  uVar2 = in_FPUControlWord & 0xc00;
  if (uVar2 == 0x800) {
    uVar8 = 0x800;
LAB_006efdd9:
    if ((long)param_2 < -0x3ffe) goto LAB_006efdf0;
LAB_006eff3d:
    if ((long)param_2 < 0x4000) {
      uVar5 = *param_1;
      bVar10 = (byte)(param_4 >> (param_5 & 0x3f)) & 1;
      bVar7 = (byte)uVar5 & 1;
      goto joined_r0x006eff63;
    }
LAB_006f0044:
    *(undefined4 *)(in_FS_OFFSET + -0x58) = 0x22;
  }
  else {
    if (uVar2 < 0x801) {
      if (uVar2 == 0) {
        uVar8 = 0;
      }
      else {
        if (uVar2 != 0x400) {
          FUN_004048b6();
          return;
        }
        uVar8 = 0x400;
      }
      goto LAB_006efdd9;
    }
    if (uVar2 != 0xc00) goto code_r0x004048b6;
    uVar8 = 0xc00;
    if (-0x3fff < (long)param_2) goto LAB_006eff3d;
LAB_006efdf0:
    if (-0x403f < (long)param_2) {
      uVar4 = *param_1;
      uVar5 = -param_2 - 0x3ffe;
      uVar3 = (uint)((~(-1L << (param_5 & 0x3f)) & param_4) != 0);
      uVar9 = param_6 | uVar3;
      if (uVar5 == 0x40) {
        *param_1 = 0;
        bVar7 = 0;
        uVar5 = 0;
        param_5 = 0x3f;
      }
      else {
        if (uVar5 == 1) {
          param_4 = param_4 >> (param_5 & 0x3f);
          uVar6 = param_4 & 1;
          if (uVar8 == 0x800) {
            if (param_3 == 0) goto joined_r0x006efe6c;
          }
          else if (uVar8 < 0x801) {
            if (uVar8 == 0) {
              param_4 = uVar4;
              if (uVar6 != 0) {
joined_r0x006efe6c:
                if ((((param_4 & 1) != 0) || ((param_6 & 1) != 0 || uVar3 != 0)) &&
                   (uVar4 == 0xffffffffffffffff)) {
                  FUN_006f3040(param_1,param_1,1,1);
                  uVar5 = *param_1;
                  bVar10 = 1;
                  param_5 = 0;
                  param_2 = 0xffffffffffffc001;
                  bVar7 = (byte)uVar5 & 1;
                  param_4 = 0xffffffffffffffff;
                  param_6 = uVar9;
                  goto joined_r0x006eff63;
                }
              }
            }
            else {
              if (uVar8 != 0x400) {
                FUN_004048b6();
                return;
              }
              if (param_3 != 0) goto joined_r0x006efe6c;
            }
          }
          else if (uVar8 != 0xc00) {
            FUN_004048b6();
            return;
          }
        }
        FUN_006f3040(param_1,param_1,1,uVar5 & 0xffffffff);
        uVar5 = *param_1;
        param_5 = 1 - (char)param_2;
        bVar7 = (byte)uVar5 & 1;
      }
      uVar6 = uVar4 >> (param_5 & 0x3f);
      bVar10 = (byte)uVar6 & 1;
      if ((uVar9 == 0) && ((~(-1L << (param_5 & 0x3f)) & uVar4) == 0 && (uVar6 & 1) == 0)) {
        param_2 = 0xffffffffffffc001;
        param_4 = 0;
LAB_006eff7c:
        bVar11 = param_4 != 0;
        if (uVar8 == 0x800) {
LAB_006f016e:
          if (param_3 == 0) {
            bVar7 = bVar11 | bVar10;
            goto LAB_006efeec;
          }
        }
        else if (uVar8 < 0x801) {
          if (uVar8 == 0) {
LAB_006efee0:
            bVar7 = bVar7 | bVar11;
            if (bVar10 != 0) {
LAB_006efeec:
              if (bVar7 != 0) {
                *param_1 = uVar5 + 1;
                if (uVar5 != 0xffffffffffffffff) {
                  uVar4 = param_2 & 0xffffffff;
                  if (param_2 == 0xffffffffffffc001) {
                    uVar4 = (ulong)(-(int)((long)(uVar5 + 1) >> 0x3f) - 0x3fff);
                  }
                  goto LAB_006effcc;
                }
                FUN_006f3040(param_1,param_1,1,1);
                param_2 = param_2 + 1;
                *param_1 = *param_1 | 0x8000000000000000;
                if (param_2 == 0x4000) goto LAB_006f0044;
              }
            }
          }
          else {
            if (uVar8 != 0x400) {
              FUN_004048b6();
              return;
            }
LAB_006effac:
            if (param_3 != 0) {
              bVar7 = bVar10 | bVar11;
              goto LAB_006efeec;
            }
          }
        }
        else if (uVar8 != 0xc00) {
          FUN_004048b6();
          return;
        }
        uVar4 = param_2 & 0xffffffff;
      }
      else {
        *(undefined4 *)(in_FS_OFFSET + -0x58) = 0x22;
        param_2 = 0xffffffffffffc001;
        param_4 = uVar4;
        param_6 = uVar9;
joined_r0x006eff63:
        if (param_6 == 0) {
          param_4 = param_4 & ~(-1L << (param_5 & 0x3f));
          goto LAB_006eff7c;
        }
        if (uVar8 == 0x800) {
          bVar11 = true;
          goto LAB_006f016e;
        }
        if (uVar8 < 0x801) {
          if (uVar8 != 0) {
            if (uVar8 != 0x400) {
              FUN_004048b6();
              return;
            }
            bVar11 = true;
            goto LAB_006effac;
          }
          bVar11 = true;
          goto LAB_006efee0;
        }
        if (uVar8 != 0xc00) {
code_r0x004048b6:
                    /* WARNING: Subroutine does not return */
          FUN_00404713();
        }
        uVar4 = param_2 & 0xffffffff;
      }
LAB_006effcc:
      if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
        FUN_006f46f0(param_1,uVar4,param_3);
        return;
      }
      goto LAB_006f026c;
    }
    *(undefined4 *)(in_FS_OFFSET + -0x58) = 0x22;
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_006f026c:
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}


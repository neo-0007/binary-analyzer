
void FUN_006ed0e0(double param_1,ulong *param_2,ulong param_3,int param_4,ulong param_5,byte param_6
                 ,uint param_7)

{
  long lVar1;
  ulong uVar2;
  ushort uVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  byte bVar7;
  uint uVar8;
  uint uVar9;
  byte bVar10;
  long in_FS_OFFSET;
  bool bVar11;
  ushort in_FPUControlWord;
  double dVar12;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = in_FPUControlWord & 0xc00;
  if (uVar3 == 0x800) {
    uVar8 = 0x800;
LAB_006ed139:
    if ((long)param_3 < -0x3fe) goto LAB_006ed150;
LAB_006ed2bd:
    if ((long)param_3 < 0x400) {
      uVar6 = *param_2;
      bVar10 = (byte)(param_5 >> (param_6 & 0x3f)) & 1;
      bVar7 = (byte)uVar6 & 1;
      goto joined_r0x006ed2e6;
    }
LAB_006ed3cc:
    *(undefined4 *)(in_FS_OFFSET + -0x58) = 0x22;
    param_1 = DAT_00821c60;
    dVar12 = DAT_00821c60;
    if (param_4 != 0) {
      param_1 = DAT_00821c70;
    }
  }
  else {
    if (uVar3 < 0x801) {
      if (uVar3 == 0) {
        uVar8 = 0;
      }
      else {
        if (uVar3 != 0x400) {
          FUN_004048b1();
          return;
        }
        uVar8 = 0x400;
      }
      goto LAB_006ed139;
    }
    if (uVar3 != 0xc00) goto code_r0x004048b1;
    uVar8 = 0xc00;
    if (-0x3ff < (long)param_3) goto LAB_006ed2bd;
LAB_006ed150:
    if (-0x434 < (long)param_3) {
      uVar2 = *param_2;
      uVar6 = -param_3 - 0x3fe;
      uVar4 = (uint)((~(-1L << (param_6 & 0x3f)) & param_5) != 0);
      uVar9 = param_7 | uVar4;
      if (uVar6 == 0x35) {
        *param_2 = 0;
        bVar7 = 0;
        uVar6 = 0;
        param_6 = 0x34;
      }
      else {
        if (uVar6 == 1) {
          param_5 = param_5 >> (param_6 & 0x3f);
          uVar5 = param_5 & 1;
          bVar10 = (byte)uVar2 & 1;
          if (uVar8 == 0x800) {
            if (param_4 == 0) goto joined_r0x006ed1d2;
          }
          else if (uVar8 < 0x801) {
            if (uVar8 == 0) {
              param_5 = uVar2;
              if (uVar5 != 0) {
joined_r0x006ed1d2:
                if ((((param_5 & 1) != 0) || ((param_7 & 1) != 0 || uVar4 != 0)) &&
                   ((uVar2 + 1 >> 0x35 & 1) != 0)) {
                  param_3 = 0xfffffffffffffc01;
                  param_1 = (double)FUN_006f3040(param_2,param_2,1,1);
                  uVar6 = *param_2;
                  param_6 = 0;
                  bVar7 = (byte)uVar6 & 1;
                  param_5 = uVar2;
                  param_7 = uVar9;
                  goto joined_r0x006ed2e6;
                }
              }
            }
            else {
              if (uVar8 != 0x400) {
                FUN_004048b1();
                return;
              }
              if (param_4 != 0) goto joined_r0x006ed1d2;
            }
          }
          else if (uVar8 != 0xc00) {
            FUN_004048b1();
            return;
          }
        }
        param_1 = (double)FUN_006f3040(param_2,param_2,1,uVar6 & 0xffffffff);
        uVar6 = *param_2;
        param_6 = 1 - (char)param_3;
        bVar7 = (byte)uVar6 & 1;
      }
      dVar12 = DAT_00825440;
      uVar5 = uVar2 >> (param_6 & 0x3f);
      bVar10 = (byte)uVar5 & 1;
      if ((uVar9 == 0) && ((~(-1L << (param_6 & 0x3f)) & uVar2) == 0 && (uVar5 & 1) == 0)) {
        param_3 = 0xfffffffffffffc01;
        param_5 = 0;
LAB_006ed2ff:
        bVar11 = param_5 != 0;
        if (uVar8 == 0x800) {
LAB_006ed4d6:
          if (param_4 != 0) goto LAB_006ed340;
LAB_006ed4df:
          bVar7 = bVar11 | bVar10;
LAB_006ed254:
          if (bVar7 == 0) goto LAB_006ed340;
          uVar6 = uVar6 + 1;
          *param_2 = uVar6;
          if ((uVar6 >> 0x35 & 1) != 0) {
            param_1 = (double)FUN_006f3040(param_2,param_2,1,1);
            param_3 = param_3 + 1;
            *param_2 = *param_2 | 0x10000000000000;
            if (param_3 == 0x400) goto LAB_006ed3cc;
            goto LAB_006ed340;
          }
          if (param_3 != 0xfffffffffffffc01) goto LAB_006ed340;
          param_3 = (ulong)(((uVar6 & 0x10000000000000) != 0) - 0x3ff);
        }
        else {
          if (uVar8 < 0x801) {
            if (uVar8 == 0) {
LAB_006ed248:
              bVar7 = bVar7 | bVar11;
              if (bVar10 != 0) goto LAB_006ed254;
            }
            else {
              if (uVar8 != 0x400) {
                FUN_004048b1(param_1);
                return;
              }
LAB_006ed32f:
              if (param_4 != 0) goto LAB_006ed4df;
            }
          }
          else if (uVar8 != 0xc00) {
            FUN_004048b1(param_1);
            return;
          }
LAB_006ed340:
          param_3 = param_3 & 0xffffffff;
        }
        if ((bVar11 != false) || (bVar10 != 0)) goto LAB_006ed42f;
      }
      else {
        *(undefined4 *)(in_FS_OFFSET + -0x58) = 0x22;
        param_1 = dVar12 * dVar12;
        param_3 = 0xfffffffffffffc01;
        param_5 = uVar2;
        param_7 = uVar9;
joined_r0x006ed2e6:
        if (param_7 == 0) {
          param_5 = ~(-1L << (param_6 & 0x3f)) & param_5;
          goto LAB_006ed2ff;
        }
        if (uVar8 == 0x800) {
          bVar11 = true;
          goto LAB_006ed4d6;
        }
        if (uVar8 < 0x801) {
          if (uVar8 != 0) {
            if (uVar8 != 0x400) {
              FUN_004048b1(param_1);
              return;
            }
            bVar11 = true;
            goto LAB_006ed32f;
          }
          bVar11 = true;
          goto LAB_006ed248;
        }
        if (uVar8 != 0xc00) {
code_r0x004048b1:
                    /* WARNING: Subroutine does not return */
          FUN_00404713();
        }
        param_3 = param_3 & 0xffffffff;
LAB_006ed42f:
        param_1 = DAT_00825440 + DAT_007e8fb8;
      }
      if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
        FUN_006f46b0(param_2,param_3,param_4);
        return;
      }
      goto LAB_006ed5fa;
    }
    *(undefined4 *)(in_FS_OFFSET + -0x58) = 0x22;
    param_1 = DAT_00825438;
    dVar12 = DAT_00825440;
    if (param_4 == 0) {
      param_1 = DAT_00825440;
      dVar12 = DAT_00825440;
    }
  }
  param_1 = param_1 * dVar12;
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_006ed5fa:
                    /* WARNING: Subroutine does not return */
  FUN_00771f60(param_1);
}


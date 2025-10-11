
void FUN_006ea1d0(float param_1,ulong *param_2,ulong param_3,int param_4,ulong param_5,byte param_6,
                 uint param_7)

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
  float fVar12;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = in_FPUControlWord & 0xc00;
  if (uVar3 == 0x800) {
    uVar8 = 0x800;
LAB_006ea229:
    if ((long)param_3 < -0x7e) goto LAB_006ea238;
LAB_006ea39a:
    if ((long)param_3 < 0x80) {
      uVar6 = *param_2;
      bVar10 = (byte)(param_5 >> (param_6 & 0x3f)) & 1;
      bVar7 = (byte)uVar6 & 1;
      goto joined_r0x006ea3c0;
    }
LAB_006ea4a6:
    *(undefined4 *)(in_FS_OFFSET + -0x58) = 0x22;
    param_1 = DAT_00825384;
    fVar12 = DAT_00825384;
    if (param_4 != 0) {
      param_1 = DAT_00825380;
    }
  }
  else {
    if (uVar3 < 0x801) {
      if (uVar3 == 0) {
        uVar8 = 0;
      }
      else {
        if (uVar3 != 0x400) {
          FUN_004048ac();
          return;
        }
        uVar8 = 0x400;
      }
      goto LAB_006ea229;
    }
    if (uVar3 != 0xc00) goto code_r0x004048ac;
    uVar8 = 0xc00;
    if (-0x7f < (long)param_3) goto LAB_006ea39a;
LAB_006ea238:
    if (-0x97 < (long)param_3) {
      uVar2 = *param_2;
      uVar6 = -param_3 - 0x7e;
      uVar4 = (uint)((~(-1L << (param_6 & 0x3f)) & param_5) != 0);
      uVar9 = param_7 | uVar4;
      if (uVar6 == 0x18) {
        *param_2 = 0;
        bVar7 = 0;
        uVar6 = 0;
        param_6 = 0x17;
      }
      else {
        if (uVar6 == 1) {
          param_5 = param_5 >> (param_6 & 0x3f);
          uVar5 = param_5 & 1;
          bVar10 = (byte)uVar2 & 1;
          if (uVar8 == 0x800) {
            if (param_4 == 0) goto joined_r0x006ea2ba;
          }
          else if (uVar8 < 0x801) {
            if (uVar8 == 0) {
              param_5 = uVar2;
              if (uVar5 != 0) {
joined_r0x006ea2ba:
                if ((((param_5 & 1) != 0) || ((param_7 & 1) != 0 || uVar4 != 0)) &&
                   ((uVar2 + 1 & 0x1000000) != 0)) {
                  param_3 = 0xffffffffffffff81;
                  param_1 = (float)FUN_006f3040(param_2,param_2,1,1);
                  uVar6 = *param_2;
                  param_6 = 0;
                  bVar7 = (byte)uVar6 & 1;
                  param_5 = uVar2;
                  param_7 = uVar9;
                  goto joined_r0x006ea3c0;
                }
              }
            }
            else {
              if (uVar8 != 0x400) {
                FUN_004048ac();
                return;
              }
              if (param_4 != 0) goto joined_r0x006ea2ba;
            }
          }
          else if (uVar8 != 0xc00) {
            FUN_004048ac();
            return;
          }
        }
        param_1 = (float)FUN_006f3040(param_2,param_2,1,uVar6 & 0xffffffff);
        uVar6 = *param_2;
        param_6 = 0x81 - (char)param_3;
        bVar7 = (byte)uVar6 & 1;
      }
      fVar12 = DAT_0082537c;
      uVar5 = uVar2 >> (param_6 & 0x3f);
      bVar10 = (byte)uVar5 & 1;
      if ((uVar9 == 0) && ((~(-1L << (param_6 & 0x3f)) & uVar2) == 0 && (uVar5 & 1) == 0)) {
        param_3 = 0xffffffffffffff81;
        param_5 = 0;
LAB_006ea3d9:
        bVar11 = param_5 != 0;
        if (uVar8 == 0x800) {
LAB_006ea5a6:
          if (param_4 != 0) goto LAB_006ea418;
LAB_006ea5af:
          bVar7 = bVar11 | bVar10;
LAB_006ea33c:
          if (bVar7 == 0) goto LAB_006ea418;
          uVar6 = uVar6 + 1;
          *param_2 = uVar6;
          if ((uVar6 & 0x1000000) != 0) {
            param_1 = (float)FUN_006f3040(param_2,param_2,1,1);
            param_3 = param_3 + 1;
            *param_2 = *param_2 | 0x800000;
            if (param_3 == 0x80) goto LAB_006ea4a6;
            goto LAB_006ea418;
          }
          if (param_3 != 0xffffffffffffff81) goto LAB_006ea418;
          param_3 = (ulong)(((uVar6 & 0x800000) != 0) - 0x7f);
        }
        else {
          if (uVar8 < 0x801) {
            if (uVar8 == 0) {
LAB_006ea330:
              bVar7 = bVar7 | bVar11;
              if (bVar10 != 0) goto LAB_006ea33c;
            }
            else {
              if (uVar8 != 0x400) {
                FUN_004048ac(param_1);
                return;
              }
LAB_006ea409:
              if (param_4 != 0) goto LAB_006ea5af;
            }
          }
          else if (uVar8 != 0xc00) {
            FUN_004048ac(param_1);
            return;
          }
LAB_006ea418:
          param_3 = param_3 & 0xffffffff;
        }
        if ((bVar11 != false) || (bVar10 != 0)) goto LAB_006ea4ff;
      }
      else {
        *(undefined4 *)(in_FS_OFFSET + -0x58) = 0x22;
        param_1 = fVar12 * fVar12;
        param_3 = 0xffffffffffffff81;
        param_5 = uVar2;
        param_7 = uVar9;
joined_r0x006ea3c0:
        if (param_7 == 0) {
          param_5 = ~(-1L << (param_6 & 0x3f)) & param_5;
          goto LAB_006ea3d9;
        }
        if (uVar8 == 0x800) {
          bVar11 = true;
          goto LAB_006ea5a6;
        }
        if (uVar8 < 0x801) {
          if (uVar8 != 0) {
            if (uVar8 != 0x400) {
              FUN_004048ac(param_1);
              return;
            }
            bVar11 = true;
            goto LAB_006ea409;
          }
          bVar11 = true;
          goto LAB_006ea330;
        }
        if (uVar8 != 0xc00) {
code_r0x004048ac:
                    /* WARNING: Subroutine does not return */
          FUN_00404713();
        }
        param_3 = param_3 & 0xffffffff;
LAB_006ea4ff:
        param_1 = DAT_0082537c + DAT_00825388;
      }
      if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
        FUN_006f4680(param_2,param_3,param_4);
        return;
      }
      goto LAB_006ea6ca;
    }
    *(undefined4 *)(in_FS_OFFSET + -0x58) = 0x22;
    param_1 = DAT_00825378;
    fVar12 = DAT_0082537c;
    if (param_4 == 0) {
      param_1 = DAT_0082537c;
      fVar12 = DAT_0082537c;
    }
  }
  param_1 = param_1 * fVar12;
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_006ea6ca:
                    /* WARNING: Subroutine does not return */
  FUN_00771f60(param_1);
}


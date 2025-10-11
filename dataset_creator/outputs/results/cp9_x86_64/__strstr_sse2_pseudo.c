
byte * __strstr_sse2(byte *param_1,byte *param_2)

{
  ulong __n;
  byte bVar1;
  byte bVar2;
  char cVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  size_t __n_00;
  size_t sVar7;
  ulong uVar8;
  byte *pbVar9;
  uint uVar10;
  long lVar11;
  ulong uVar12;
  uint uVar13;
  ulong uVar14;
  byte *pbVar15;
  long in_FS_OFFSET;
  bool bVar16;
  byte local_148 [264];
  long local_40;
  
  bVar4 = 0;
  bVar1 = *param_2;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (bVar1 != 0) {
    param_1 = (byte *)strchr((char *)param_1,(uint)bVar1);
    if (param_1 != (byte *)0x0) {
      bVar2 = param_2[1];
      if (bVar2 == 0) goto LAB_00709924;
      if (param_2[2] == 0) {
        uVar6 = (uint)*param_1;
        uVar10 = (uint)bVar1 << 0x10 | (uint)bVar2;
        if (*param_1 != 0) {
          uVar13 = 0;
          do {
            pbVar9 = param_1;
            param_1 = pbVar9 + 1;
            uVar13 = uVar13 << 0x10 | uVar6;
            uVar6 = (uint)*param_1;
            if (uVar10 == uVar13) goto LAB_00709989;
          } while (uVar6 != 0);
          if (uVar10 == uVar13) {
LAB_00709989:
            param_1 = pbVar9 + -1;
            goto LAB_00709924;
          }
        }
      }
      else if (param_2[3] == 0) {
        uVar10 = (uint)*param_1;
        uVar6 = (uint)bVar2 << 0x10 | (uint)param_2[2] << 8 | (uint)bVar1 << 0x18;
        if (*param_1 != 0) {
          uVar13 = 0;
          do {
            pbVar9 = param_1;
            uVar13 = uVar13 | uVar10;
            param_1 = pbVar9 + 1;
            uVar10 = (uint)*param_1;
            uVar13 = uVar13 << 8;
            if (uVar6 == uVar13) goto LAB_007099d1;
          } while (uVar10 != 0);
          if (uVar6 == uVar13) {
LAB_007099d1:
            param_1 = pbVar9 + -2;
            goto LAB_00709924;
          }
        }
      }
      else {
        __n_00 = strlen((char *)param_2);
        sVar7 = strnlen((char *)param_1,__n_00 | 0x200);
        if (__n_00 <= sVar7) {
          iVar5 = bcmp(param_1,param_2,__n_00);
          if (iVar5 != 0) {
            if (__n_00 < 0x101) {
              __n = __n_00 - 1;
              pbVar15 = param_1 + (sVar7 - __n_00);
              pbVar9 = local_148;
              for (lVar11 = 0x20; lVar11 != 0; lVar11 = lVar11 + -1) {
                pbVar9[0] = 0;
                pbVar9[1] = 0;
                pbVar9[2] = 0;
                pbVar9[3] = 0;
                pbVar9[4] = 0;
                pbVar9[5] = 0;
                pbVar9[6] = 0;
                pbVar9[7] = 0;
                pbVar9 = pbVar9 + ((ulong)bVar4 * -2 + 1) * 8;
              }
              if (1 < __n) {
                if (__n < 4) {
                  iVar5 = 1;
                  uVar14 = 1;
                }
                else {
                  uVar14 = 1;
                  do {
                    bVar4 = param_2[uVar14];
                    cVar3 = bVar1 * -8;
                    bVar1 = param_2[uVar14 + 1];
                    local_148[(byte)(bVar4 + cVar3)] = (byte)uVar14;
                    local_148[(byte)(bVar1 + bVar4 * -8)] = (byte)uVar14 + 1;
                    iVar5 = (int)uVar14 + 2;
                    uVar14 = uVar14 + 2;
                  } while ((__n_00 - 5 & 0xfffffffffffffffe) + 3 != uVar14);
                }
                uVar8 = (long)iVar5 + 1U;
                do {
                  uVar12 = uVar8;
                  local_148[(byte)(param_2[uVar14] + param_2[uVar14 - 1] * -8)] =
                       ((char)iVar5 - (char)((long)iVar5 + 1U)) + (char)uVar12;
                  uVar8 = uVar12 + 1;
                  uVar14 = uVar12;
                } while (uVar12 < __n);
              }
              uVar14 = 0;
              bVar4 = param_2[__n_00 - 1] + param_2[__n_00 - 2] * -8;
              bVar1 = local_148[bVar4];
              local_148[bVar4] = (byte)__n;
LAB_00709890:
              if (pbVar15 < param_1) goto LAB_00709902;
LAB_00709898:
              param_1 = param_1 + __n;
              uVar8 = (ulong)local_148[(byte)(*param_1 + param_1[-1] * -8)];
              if (uVar8 == 0) goto code_r0x007098ba;
              goto LAB_007098bf;
            }
            if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
              pbVar9 = (byte *)two_way_long_needle(param_1,sVar7,param_2,__n_00);
              return pbVar9;
            }
            goto LAB_00709a28;
          }
          goto LAB_00709924;
        }
      }
    }
LAB_00709921:
    param_1 = (byte *)0x0;
  }
LAB_00709924:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
LAB_00709a28:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
code_r0x007098ba:
  if (pbVar15 < param_1) {
LAB_007098bf:
    param_1 = param_1 + -uVar8;
    if (__n <= uVar8) {
      if ((__n < 0xf) || (*(long *)(param_2 + uVar14) == *(long *)(param_1 + uVar14))) {
        iVar5 = bcmp(param_1,param_2,__n);
        if (iVar5 == 0) goto LAB_00709924;
        bVar16 = uVar14 < 8;
        uVar14 = uVar14 - 8;
        if (bVar16) {
          uVar14 = __n_00 - 9;
        }
      }
      param_1 = param_1 + (__n - bVar1);
      if (pbVar15 < param_1) {
LAB_00709902:
        sVar7 = strnlen((char *)(pbVar15 + __n_00),0x800);
        pbVar15 = pbVar15 + sVar7;
        if (pbVar15 < param_1) goto LAB_00709921;
      }
      goto LAB_00709898;
    }
    goto LAB_00709890;
  }
  goto LAB_00709898;
}


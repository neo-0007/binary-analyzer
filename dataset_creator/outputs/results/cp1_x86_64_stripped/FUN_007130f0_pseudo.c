
byte * FUN_007130f0(byte *param_1,byte *param_2)

{
  ulong uVar1;
  byte bVar2;
  byte bVar3;
  char cVar4;
  byte bVar5;
  int iVar6;
  uint uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  byte *pbVar11;
  uint uVar12;
  long lVar13;
  ulong uVar14;
  uint uVar15;
  byte *pbVar16;
  long in_FS_OFFSET;
  bool bVar17;
  byte local_148 [264];
  long local_40;
  
  bVar5 = 0;
  bVar2 = *param_2;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (bVar2 != 0) {
    param_1 = (byte *)thunk_FUN_00712710(param_1,bVar2);
    if (param_1 != (byte *)0x0) {
      bVar3 = param_2[1];
      if (bVar3 == 0) goto LAB_00713334;
      if (param_2[2] == 0) {
        uVar7 = (uint)*param_1;
        uVar12 = (uint)bVar2 << 0x10 | (uint)bVar3;
        if (*param_1 != 0) {
          uVar15 = 0;
          do {
            pbVar11 = param_1;
            param_1 = pbVar11 + 1;
            uVar15 = uVar15 << 0x10 | uVar7;
            uVar7 = (uint)*param_1;
            if (uVar12 == uVar15) goto LAB_00713399;
          } while (uVar7 != 0);
          if (uVar12 == uVar15) {
LAB_00713399:
            param_1 = pbVar11 + -1;
            goto LAB_00713334;
          }
        }
      }
      else if (param_2[3] == 0) {
        uVar12 = (uint)*param_1;
        uVar7 = (uint)bVar3 << 0x10 | (uint)param_2[2] << 8 | (uint)bVar2 << 0x18;
        if (*param_1 != 0) {
          uVar15 = 0;
          do {
            pbVar11 = param_1;
            uVar15 = uVar15 | uVar12;
            param_1 = pbVar11 + 1;
            uVar12 = (uint)*param_1;
            uVar15 = uVar15 << 8;
            if (uVar7 == uVar15) goto LAB_007133e1;
          } while (uVar12 != 0);
          if (uVar7 == uVar15) {
LAB_007133e1:
            param_1 = pbVar11 + -2;
            goto LAB_00713334;
          }
        }
      }
      else {
        uVar8 = thunk_FUN_007129d0(param_2);
        uVar9 = thunk_FUN_00712a40(param_1,uVar8 | 0x200);
        if (uVar8 <= uVar9) {
          iVar6 = thunk_FUN_00713570(param_1,param_2,uVar8);
          if (iVar6 != 0) {
            if (uVar8 < 0x101) {
              uVar1 = uVar8 - 1;
              pbVar16 = param_1 + (uVar9 - uVar8);
              pbVar11 = local_148;
              for (lVar13 = 0x20; lVar13 != 0; lVar13 = lVar13 + -1) {
                pbVar11[0] = 0;
                pbVar11[1] = 0;
                pbVar11[2] = 0;
                pbVar11[3] = 0;
                pbVar11[4] = 0;
                pbVar11[5] = 0;
                pbVar11[6] = 0;
                pbVar11[7] = 0;
                pbVar11 = pbVar11 + ((ulong)bVar5 * -2 + 1) * 8;
              }
              if (1 < uVar1) {
                if (uVar1 < 4) {
                  iVar6 = 1;
                  uVar9 = 1;
                }
                else {
                  uVar9 = 1;
                  do {
                    bVar5 = param_2[uVar9];
                    cVar4 = bVar2 * -8;
                    bVar2 = param_2[uVar9 + 1];
                    local_148[(byte)(bVar5 + cVar4)] = (byte)uVar9;
                    local_148[(byte)(bVar2 + bVar5 * -8)] = (byte)uVar9 + 1;
                    iVar6 = (int)uVar9 + 2;
                    uVar9 = uVar9 + 2;
                  } while ((uVar8 - 5 & 0xfffffffffffffffe) + 3 != uVar9);
                }
                uVar10 = (long)iVar6 + 1U;
                do {
                  uVar14 = uVar10;
                  local_148[(byte)(param_2[uVar9] + param_2[uVar9 - 1] * -8)] =
                       ((char)iVar6 - (char)((long)iVar6 + 1U)) + (char)uVar14;
                  uVar10 = uVar14 + 1;
                  uVar9 = uVar14;
                } while (uVar14 < uVar1);
              }
              uVar9 = 0;
              bVar5 = param_2[uVar8 - 1] + param_2[uVar8 - 2] * -8;
              bVar2 = local_148[bVar5];
              local_148[bVar5] = (byte)uVar1;
LAB_007132a0:
              if (pbVar16 < param_1) goto LAB_00713312;
LAB_007132a8:
              param_1 = param_1 + uVar1;
              uVar10 = (ulong)local_148[(byte)(*param_1 + param_1[-1] * -8)];
              if (uVar10 == 0) goto code_r0x007132ca;
              goto LAB_007132cf;
            }
            if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
              pbVar11 = (byte *)FUN_00712c60(param_1,uVar9,param_2,uVar8);
              return pbVar11;
            }
            goto LAB_00713438;
          }
          goto LAB_00713334;
        }
      }
    }
LAB_00713331:
    param_1 = (byte *)0x0;
  }
LAB_00713334:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
LAB_00713438:
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
code_r0x007132ca:
  if (pbVar16 < param_1) {
LAB_007132cf:
    param_1 = param_1 + -uVar10;
    if (uVar1 <= uVar10) {
      if ((uVar1 < 0xf) || (*(long *)(param_2 + uVar9) == *(long *)(param_1 + uVar9))) {
        iVar6 = thunk_FUN_00713570(param_1,param_2,uVar1);
        if (iVar6 == 0) goto LAB_00713334;
        bVar17 = uVar9 < 8;
        uVar9 = uVar9 - 8;
        if (bVar17) {
          uVar9 = uVar8 - 9;
        }
      }
      param_1 = param_1 + (uVar1 - bVar2);
      if (pbVar16 < param_1) {
LAB_00713312:
        lVar13 = thunk_FUN_00712a40(pbVar16 + uVar8,0x800);
        pbVar16 = pbVar16 + lVar13;
        if (pbVar16 < param_1) goto LAB_00713331;
      }
      goto LAB_007132a8;
    }
    goto LAB_007132a0;
  }
  goto LAB_007132a8;
}


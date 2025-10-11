
byte * FUN_00713ef0(byte *param_1,ulong param_2,byte *param_3,ulong param_4)

{
  ulong uVar1;
  byte bVar2;
  byte bVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  uint uVar7;
  ulong uVar8;
  int iVar9;
  uint uVar10;
  byte *pbVar11;
  byte *pbVar12;
  long in_FS_OFFSET;
  bool bVar13;
  byte local_148 [264];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_4 == 0) goto LAB_007140ab;
  if (param_4 == 1) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      pbVar12 = (byte *)thunk_FUN_007134f0(param_1,*param_3,param_2);
      return pbVar12;
    }
    goto LAB_007141a7;
  }
  if (param_2 < param_4) {
LAB_007140a9:
    param_1 = (byte *)0x0;
  }
  else {
    pbVar12 = param_1 + (param_2 - param_4);
    if (param_4 != 2) {
      if (param_4 < 0x101) {
        uVar1 = param_4 - 1;
        pbVar11 = local_148;
        for (lVar5 = 0x20; lVar5 != 0; lVar5 = lVar5 + -1) {
          pbVar11[0] = 0;
          pbVar11[1] = 0;
          pbVar11[2] = 0;
          pbVar11[3] = 0;
          pbVar11[4] = 0;
          pbVar11[5] = 0;
          pbVar11[6] = 0;
          pbVar11[7] = 0;
          pbVar11 = pbVar11 + 8;
        }
        if (uVar1 < 4) {
          iVar9 = 1;
          uVar8 = 1;
        }
        else {
          uVar4 = (ulong)*param_3;
          uVar8 = 1;
          do {
            bVar2 = param_3[uVar8];
            local_148[(ulong)bVar2 + uVar4 * -8 & 0xff] = (byte)uVar8;
            uVar4 = (ulong)param_3[uVar8 + 1];
            local_148[uVar4 + (ulong)bVar2 * -8 & 0xff] = (byte)uVar8 + 1;
            iVar9 = (int)uVar8 + 2;
            uVar8 = uVar8 + 2;
          } while ((param_4 - 5 & 0xfffffffffffffffe) + 3 != uVar8);
        }
        uVar4 = (long)(iVar9 + 1);
        do {
          uVar6 = uVar4;
          local_148[(byte)(param_3[uVar8] + param_3[uVar8 - 1] * -8)] =
               ((char)iVar9 - (char)(iVar9 + 1)) + (char)uVar6;
          uVar4 = uVar6 + 1;
          uVar8 = uVar6;
        } while (uVar6 < uVar1);
        uVar8 = 0;
        bVar3 = param_3[param_4 - 1] + param_3[param_4 - 2] * -8;
        bVar2 = local_148[bVar3];
        local_148[bVar3] = (byte)uVar1;
LAB_0071403a:
        if (param_1 <= pbVar12) {
LAB_00714040:
          param_1 = param_1 + uVar1;
          uVar4 = (ulong)local_148[(byte)(*param_1 + param_1[-1] * -8)];
          if (uVar4 == 0) goto code_r0x0071405f;
          goto LAB_00714064;
        }
        goto LAB_007140a9;
      }
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        pbVar12 = (byte *)FUN_00713b60();
        return pbVar12;
      }
      goto LAB_007141a7;
    }
    uVar10 = (uint)*param_3 << 0x10 | (uint)param_3[1];
    uVar7 = (uint)*param_1 << 0x10 | (uint)param_1[1];
    if ((pbVar12 < param_1 + 1) || (pbVar11 = param_1 + 1, uVar10 == uVar7)) {
LAB_0071415d:
      if (uVar10 != uVar7) goto LAB_007140a9;
    }
    else {
      do {
        param_1 = pbVar11;
        uVar7 = uVar7 << 0x10 | (uint)param_1[1];
        if (pbVar12 < param_1 + 1) goto LAB_0071415d;
        pbVar11 = param_1 + 1;
      } while (uVar10 != uVar7);
    }
  }
LAB_007140ab:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
LAB_007141a7:
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
code_r0x0071405f:
  if (pbVar12 < param_1) {
LAB_00714064:
    param_1 = param_1 + -uVar4;
    if (uVar1 <= uVar4) {
      if ((uVar1 < 0xf) || (*(long *)(param_1 + uVar8) == *(long *)(param_3 + uVar8))) {
        iVar9 = thunk_FUN_00713570(param_1,param_3,uVar1);
        if (iVar9 == 0) goto LAB_007140ab;
        bVar13 = uVar8 < 8;
        uVar8 = uVar8 - 8;
        if (bVar13) {
          uVar8 = param_4 - 9;
        }
      }
      param_1 = param_1 + (uVar1 - bVar2);
      if (pbVar12 < param_1) goto LAB_007140a9;
      goto LAB_00714040;
    }
    goto LAB_0071403a;
  }
  goto LAB_00714040;
}


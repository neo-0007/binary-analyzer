
long FUN_007cb9a0(ulong param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  ushort uVar3;
  ulong uVar4;
  byte bVar5;
  ushort uVar6;
  ulong uVar7;
  bool bVar8;
  ulong in_XMM0_Qb;
  ulong in_XMM1_Qb;
  
  lVar1 = -((long)in_XMM0_Qb >> 0x3f);
  uVar7 = in_XMM0_Qb & 0xffffffffffff;
  uVar4 = in_XMM1_Qb & 0xffffffffffff;
  lVar2 = -((long)in_XMM1_Qb >> 0x3f);
  uVar3 = (ushort)(in_XMM1_Qb >> 0x30) & 0x7fff;
  uVar6 = (ushort)(in_XMM0_Qb >> 0x30) & 0x7fff;
  if ((in_XMM0_Qb & 0x7fff000000000000) == 0) {
    if (uVar7 == 0 && param_1 == 0) {
      bVar5 = 0;
      if ((in_XMM1_Qb & 0x7fff000000000000) != 0) goto LAB_007cba1e;
      bVar8 = true;
      bVar5 = (uVar4 != 0 || param_2 != 0) * '\x02';
LAB_007cbb13:
      if (uVar4 == 0 && param_2 == 0) {
        lVar2 = 0;
        if (!bVar8) goto LAB_007cba93;
        goto LAB_007cbb4d;
      }
LAB_007cba45:
      if (!bVar8) goto LAB_007cba8a;
    }
    else {
      bVar5 = 2;
LAB_007cba1e:
      if (uVar3 != 0x7fff) {
        bVar8 = uVar7 == 0 && param_1 == 0;
        if ((in_XMM1_Qb & 0x7fff000000000000) == 0) goto LAB_007cbb13;
        goto LAB_007cba45;
      }
      if (uVar4 != 0 || param_2 != 0) goto LAB_007cbad0;
      if (uVar7 != 0 || param_1 != 0) goto LAB_007cba8a;
    }
LAB_007cbb44:
    if (lVar2 == 0) {
LAB_007cbbc9:
      lVar2 = -1;
    }
LAB_007cbb4d:
    if (bVar5 == 0) {
      return lVar2;
    }
  }
  else {
    if ((in_XMM1_Qb & 0x7fff000000000000) == 0) {
      bVar5 = (uVar4 != 0 || param_2 != 0) * '\x02';
      if (uVar6 == 0x7fff) {
LAB_007cba70:
        if (uVar7 == 0 && param_1 == 0) {
          if (uVar3 == 0x7fff) goto LAB_007cbac4;
          if ((in_XMM1_Qb & 0x7fff000000000000) != 0) goto LAB_007cba8a;
          goto LAB_007cbb60;
        }
LAB_007cbad0:
        bVar5 = bVar5 | 1;
        lVar2 = 2;
        goto LAB_007cbad8;
      }
LAB_007cbb60:
      if (uVar4 != 0 || param_2 != 0) goto LAB_007cba8a;
    }
    else {
      bVar5 = 0;
      if (uVar6 == 0x7fff) goto LAB_007cba70;
      if (uVar3 == 0x7fff) {
LAB_007cbac4:
        if (uVar4 != 0 || param_2 != 0) goto LAB_007cbad0;
      }
LAB_007cba8a:
      if (lVar1 == lVar2) {
        if (uVar3 < uVar6) {
          if (lVar2 != 0) goto LAB_007cbbc9;
          lVar2 = 1;
        }
        else {
          if (uVar6 < uVar3) goto LAB_007cbb44;
          bVar8 = uVar7 == uVar4;
          if ((uVar4 <= uVar7 && !bVar8) || ((param_2 < param_1 && (bVar8)))) goto LAB_007cba93;
          if ((uVar7 < uVar4) || ((param_1 < param_2 && (bVar8)))) {
            lVar2 = -1;
            if (lVar1 != 0) {
              lVar2 = lVar1;
            }
          }
          else {
            lVar2 = 0;
          }
        }
        goto LAB_007cbb4d;
      }
    }
LAB_007cba93:
    lVar2 = (ulong)(-(uint)(lVar1 == 0) & 2) - 1;
    if (bVar5 == 0) {
      return lVar2;
    }
  }
LAB_007cbad8:
  FUN_007cbbe0(bVar5);
  return lVar2;
}


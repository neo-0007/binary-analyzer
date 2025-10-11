
long __lttf2(ulong param_1,ulong param_2)

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
      if ((in_XMM1_Qb & 0x7fff000000000000) != 0) goto LAB_007c20de;
      bVar8 = true;
      bVar5 = (uVar4 != 0 || param_2 != 0) * '\x02';
LAB_007c21d3:
      if (uVar4 == 0 && param_2 == 0) {
        lVar2 = 0;
        if (!bVar8) goto LAB_007c2153;
        goto LAB_007c220d;
      }
LAB_007c2105:
      if (!bVar8) goto LAB_007c214a;
    }
    else {
      bVar5 = 2;
LAB_007c20de:
      if (uVar3 != 0x7fff) {
        bVar8 = uVar7 == 0 && param_1 == 0;
        if ((in_XMM1_Qb & 0x7fff000000000000) == 0) goto LAB_007c21d3;
        goto LAB_007c2105;
      }
      if (uVar4 != 0 || param_2 != 0) goto LAB_007c2190;
      if (uVar7 != 0 || param_1 != 0) goto LAB_007c214a;
    }
LAB_007c2204:
    if (lVar2 == 0) {
LAB_007c2289:
      lVar2 = -1;
    }
LAB_007c220d:
    if (bVar5 == 0) {
      return lVar2;
    }
  }
  else {
    if ((in_XMM1_Qb & 0x7fff000000000000) == 0) {
      bVar5 = (uVar4 != 0 || param_2 != 0) * '\x02';
      if (uVar6 == 0x7fff) {
LAB_007c2130:
        if (uVar7 == 0 && param_1 == 0) {
          if (uVar3 == 0x7fff) goto LAB_007c2184;
          if ((in_XMM1_Qb & 0x7fff000000000000) != 0) goto LAB_007c214a;
          goto LAB_007c2220;
        }
LAB_007c2190:
        bVar5 = bVar5 | 1;
        lVar2 = 2;
        goto LAB_007c2198;
      }
LAB_007c2220:
      if (uVar4 != 0 || param_2 != 0) goto LAB_007c214a;
    }
    else {
      bVar5 = 0;
      if (uVar6 == 0x7fff) goto LAB_007c2130;
      if (uVar3 == 0x7fff) {
LAB_007c2184:
        if (uVar4 != 0 || param_2 != 0) goto LAB_007c2190;
      }
LAB_007c214a:
      if (lVar1 == lVar2) {
        if (uVar3 < uVar6) {
          if (lVar2 != 0) goto LAB_007c2289;
          lVar2 = 1;
        }
        else {
          if (uVar6 < uVar3) goto LAB_007c2204;
          bVar8 = uVar7 == uVar4;
          if ((uVar4 <= uVar7 && !bVar8) || ((param_2 < param_1 && (bVar8)))) goto LAB_007c2153;
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
        goto LAB_007c220d;
      }
    }
LAB_007c2153:
    lVar2 = (ulong)(-(uint)(lVar1 == 0) & 2) - 1;
    if (bVar5 == 0) {
      return lVar2;
    }
  }
LAB_007c2198:
  __sfp_handle_exceptions(bVar5);
  return lVar2;
}


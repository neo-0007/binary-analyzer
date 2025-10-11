
bool __mpn_add_n(long param_1,ulong *param_2,ulong *param_3,ulong param_4)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  bool bVar9;
  bool bVar10;
  
  uVar5 = *param_2;
  uVar6 = *param_3;
  lVar1 = param_1 + -0x10 + param_4 * 8;
  uVar2 = (uint)param_4 & 3;
  if ((param_4 & 3) == 0) {
    bVar10 = false;
    lVar3 = -param_4 + 4;
    goto LAB_006e9492;
  }
  lVar3 = -param_4 + (ulong)uVar2;
  if (1 < uVar2) {
    if (uVar2 != 2) {
      bVar9 = false;
      uVar7 = uVar5;
      uVar8 = uVar6;
      while( true ) {
        uVar5 = param_2[param_4 + lVar3 + -2];
        uVar6 = param_3[param_4 + lVar3 + -2];
        bVar10 = CARRY8(uVar7,uVar8) || CARRY8(uVar7 + uVar8,(ulong)bVar9);
        *(ulong *)(lVar1 + -8 + lVar3 * 8) = uVar7 + uVar8 + (ulong)bVar9;
LAB_006e94b6:
        uVar7 = param_2[param_4 + lVar3 + -1];
        uVar8 = param_3[param_4 + lVar3 + -1];
        bVar9 = CARRY8(uVar5,uVar6) || CARRY8(uVar5 + uVar6,(ulong)bVar10);
        *(ulong *)(lVar1 + lVar3 * 8) = uVar5 + uVar6 + (ulong)bVar10;
        lVar4 = lVar3;
LAB_006e94c5:
        if (lVar4 == 0) break;
        lVar3 = lVar4 + 4;
        uVar5 = param_2[param_4 + lVar4];
        uVar6 = param_3[param_4 + lVar4];
        bVar10 = CARRY8(uVar7,uVar8) || CARRY8(uVar7 + uVar8,(ulong)bVar9);
        *(ulong *)(lVar1 + -0x18 + lVar3 * 8) = uVar7 + uVar8 + (ulong)bVar9;
LAB_006e9492:
        uVar7 = param_2[param_4 + lVar3 + -3];
        uVar8 = param_3[param_4 + lVar3 + -3];
        bVar9 = CARRY8(uVar5,uVar6) || CARRY8(uVar5 + uVar6,(ulong)bVar10);
        *(ulong *)(lVar1 + -0x10 + lVar3 * 8) = uVar5 + uVar6 + (ulong)bVar10;
      }
      *(ulong *)(lVar1 + 8) = uVar7 + uVar8 + (ulong)bVar9;
      return CARRY8(uVar7,uVar8) || CARRY8(uVar7 + uVar8,(ulong)bVar9);
    }
    bVar10 = false;
    goto LAB_006e94b6;
  }
  bVar9 = false;
  lVar4 = lVar3;
  uVar7 = uVar5;
  uVar8 = uVar6;
  goto LAB_006e94c5;
}


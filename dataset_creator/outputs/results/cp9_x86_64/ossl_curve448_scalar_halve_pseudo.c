
void ossl_curve448_scalar_halve(ulong *param_1,ulong *param_2)

{
  long lVar1;
  ulong *puVar2;
  ulong *puVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  
  uVar9 = 0;
  uVar7 = 0x2378c292ab5844f3;
  uVar5 = *param_2;
  uVar4 = (uint)uVar5;
  lVar1 = 0;
  while( true ) {
    uVar7 = uVar7 & -(ulong)(uVar4 & 1);
    uVar6 = uVar7 + uVar5;
    lVar8 = uVar9 + uVar6;
    uVar9 = (ulong)CARRY8(uVar7,uVar5) + (ulong)CARRY8(uVar9,uVar6);
    *(long *)((long)param_1 + lVar1) = lVar8;
    lVar8 = lVar1 + 8;
    if (lVar8 == 0x38) break;
    uVar5 = *(ulong *)((long)param_2 + lVar8);
    uVar7 = *(ulong *)(sc_p + lVar1 + 8);
    lVar1 = lVar8;
  }
  puVar2 = param_1;
  do {
    puVar3 = puVar2 + 1;
    *puVar2 = *puVar2 >> 1 | puVar2[1] << 0x3f;
    puVar2 = puVar3;
  } while (param_1 + 6 != puVar3);
  param_1[6] = param_1[6] >> 1 | uVar9 << 0x3f;
  return;
}


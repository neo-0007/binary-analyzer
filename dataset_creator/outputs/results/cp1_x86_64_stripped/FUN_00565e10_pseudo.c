
void FUN_00565e10(ulong *param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  ulong uVar9;
  uint uVar10;
  ulong uVar11;
  int *piVar12;
  int iVar13;
  uint uVar14;
  ulong uVar15;
  
  iVar13 = 5;
  iVar6 = 3;
  iVar4 = *(int *)(param_2 + 0xfc);
  uVar15 = *param_1 & 0xffff;
  uVar3 = *param_1 >> 0x10;
  uVar9 = param_1[1] & 0xffff;
  uVar11 = param_1[1] >> 0x10;
  piVar12 = (int *)(param_2 + 0xfc);
  do {
    uVar2 = (uint)uVar9;
    uVar1 = (uint)uVar3;
    uVar14 = (uint)uVar15;
    uVar10 = ((((uint)uVar11 >> 5 | (uint)uVar11 << 0xb) & 0xffff) - ((uVar1 & uVar2) + iVar4)) -
             (~uVar2 & uVar14) & 0xffff;
    uVar11 = (ulong)uVar10;
    uVar7 = (((uVar2 & 7) << 0xd | uVar2 >> 3) - ((uVar14 & uVar1) + piVar12[-1])) -
            (~uVar1 & uVar10);
    uVar8 = uVar7 & 0xffff;
    uVar9 = (ulong)uVar8;
    uVar5 = ((((uVar1 << 0xe | uVar1 >> 2) & 0xffff) - piVar12[-2]) - (uVar14 & uVar10)) -
            (~uVar14 & uVar8);
    uVar2 = uVar5 & 0xffff;
    uVar3 = (ulong)uVar2;
    uVar1 = ((((uVar14 & 1) << 0xf | uVar14 >> 1) - piVar12[-3]) - (uVar10 & uVar8)) -
            (~uVar10 & uVar2);
    uVar14 = uVar1 & 0xffff;
    uVar15 = (ulong)uVar14;
    iVar13 = iVar13 + -1;
    if (iVar13 == 0) {
      iVar6 = iVar6 + -1;
      if (iVar6 == 0) {
        *param_1 = uVar3 << 0x10 | uVar15;
        param_1[1] = uVar11 << 0x10 | uVar9;
        return;
      }
      uVar10 = uVar10 - *(int *)(param_2 + (ulong)(uVar7 & 0x3f) * 4);
      iVar13 = (iVar6 == 2) + 5;
      uVar11 = (ulong)(uVar10 & 0xffff);
      uVar9 = (ulong)(uVar8 - *(int *)(param_2 + (ulong)(uVar5 & 0x3f) * 4) & 0xffff);
      uVar3 = (ulong)(uVar2 - *(int *)(param_2 + (ulong)(uVar1 & 0x3f) * 4) & 0xffff);
      uVar15 = (ulong)(uVar14 - *(int *)(param_2 + (ulong)(uVar10 & 0x3f) * 4) & 0xffff);
    }
    iVar4 = piVar12[-4];
    piVar12 = piVar12 + -4;
  } while( true );
}


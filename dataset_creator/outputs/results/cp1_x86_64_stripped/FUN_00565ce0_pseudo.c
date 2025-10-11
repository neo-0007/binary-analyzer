
void FUN_00565ce0(ulong *param_1,int *param_2)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  uint uVar6;
  ulong uVar7;
  uint uVar8;
  ulong uVar9;
  int iVar10;
  uint uVar11;
  int *piVar12;
  int iVar13;
  int iVar14;
  
  iVar14 = 3;
  iVar13 = 5;
  iVar10 = *param_2;
  uVar9 = *param_1 & 0xffff;
  uVar7 = *param_1 >> 0x10;
  uVar5 = param_1[1] & 0xffff;
  uVar2 = param_1[1] >> 0x10;
  piVar12 = param_2;
  do {
    uVar1 = (uint)uVar2;
    uVar3 = (uint)uVar5;
    uVar11 = (~uVar1 & (uint)uVar7) + (uVar3 & uVar1) + iVar10 + (int)uVar9 & 0xffff;
    uVar8 = uVar11 * 2 | uVar11 >> 0xf;
    uVar11 = (uint)uVar7 + piVar12[1] + (uVar1 & uVar8) + (~uVar8 & uVar3) & 0xffff;
    uVar6 = uVar11 >> 0xe | uVar11 * 4;
    uVar3 = uVar3 + piVar12[2] + (uVar8 & uVar6) + (~uVar6 & uVar1) & 0xffff;
    uVar4 = uVar3 >> 0xd | uVar3 * 8;
    uVar1 = uVar1 + piVar12[3] + (uVar6 & uVar4) + (~uVar4 & uVar8) & 0xffff;
    uVar3 = uVar1 >> 0xb;
    uVar1 = uVar1 << 5;
    uVar11 = uVar3 | uVar1;
    iVar13 = iVar13 + -1;
    if (iVar13 == 0) {
      iVar14 = iVar14 + -1;
      if (iVar14 == 0) {
        *param_1 = (ulong)(ushort)uVar8 | (ulong)(uVar6 << 0x10);
        param_1[1] = (ulong)(ushort)uVar4 | (ulong)(uVar11 << 0x10);
        return;
      }
      uVar8 = uVar8 + param_2[uVar3 | uVar1 & 0x3f];
      iVar13 = (iVar14 == 2) + 5;
      uVar6 = uVar6 + param_2[uVar8 & 0x3f];
      uVar4 = uVar4 + param_2[uVar6 & 0x3f];
      uVar11 = uVar11 + param_2[uVar4 & 0x3f];
    }
    uVar9 = (ulong)uVar8;
    uVar7 = (ulong)uVar6;
    uVar5 = (ulong)uVar4;
    uVar2 = (ulong)uVar11;
    iVar10 = piVar12[4];
    piVar12 = piVar12 + 4;
  } while( true );
}


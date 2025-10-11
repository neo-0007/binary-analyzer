
void RC2_encrypt(ulong *data,RC2_KEY *key)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  uint uVar4;
  ulong uVar5;
  uint uVar6;
  ulong uVar7;
  uint uVar8;
  ulong uVar9;
  uint uVar10;
  uint *puVar11;
  int iVar12;
  int iVar13;
  
  iVar13 = 3;
  iVar12 = 5;
  uVar10 = key->data[0];
  uVar9 = *data & 0xffff;
  uVar7 = *data >> 0x10;
  uVar5 = data[1] & 0xffff;
  uVar3 = data[1] >> 0x10;
  puVar11 = key->data;
  do {
    uVar1 = (uint)uVar3;
    uVar2 = (uint)uVar5;
    uVar10 = (~uVar1 & (uint)uVar7) + (uVar2 & uVar1) + uVar10 + (int)uVar9 & 0xffff;
    uVar8 = uVar10 * 2 | uVar10 >> 0xf;
    uVar10 = (uint)uVar7 + puVar11[1] + (uVar1 & uVar8) + (~uVar8 & uVar2) & 0xffff;
    uVar6 = uVar10 >> 0xe | uVar10 * 4;
    uVar10 = uVar2 + puVar11[2] + (uVar8 & uVar6) + (~uVar6 & uVar1) & 0xffff;
    uVar4 = uVar10 >> 0xd | uVar10 * 8;
    uVar10 = uVar1 + puVar11[3] + (uVar6 & uVar4) + (~uVar4 & uVar8) & 0xffff;
    uVar1 = uVar10 >> 0xb;
    uVar10 = uVar10 << 5;
    uVar2 = uVar1 | uVar10;
    iVar12 = iVar12 + -1;
    if (iVar12 == 0) {
      iVar13 = iVar13 + -1;
      if (iVar13 == 0) {
        *data = (ulong)(ushort)uVar8 | (ulong)(uVar6 << 0x10);
        data[1] = (ulong)(ushort)uVar4 | (ulong)(uVar2 << 0x10);
        return;
      }
      uVar8 = uVar8 + key->data[uVar1 | uVar10 & 0x3f];
      iVar12 = (iVar13 == 2) + 5;
      uVar6 = uVar6 + key->data[uVar8 & 0x3f];
      uVar4 = uVar4 + key->data[uVar6 & 0x3f];
      uVar2 = uVar2 + key->data[uVar4 & 0x3f];
    }
    uVar9 = (ulong)uVar8;
    uVar7 = (ulong)uVar6;
    uVar5 = (ulong)uVar4;
    uVar3 = (ulong)uVar2;
    uVar10 = puVar11[4];
    puVar11 = puVar11 + 4;
  } while( true );
}


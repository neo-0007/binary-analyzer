
void RC2_decrypt(ulong *data,RC2_KEY *key)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  uint uVar9;
  ulong uVar10;
  uint *puVar11;
  int iVar12;
  uint uVar13;
  ulong uVar14;
  
  iVar12 = 5;
  iVar5 = 3;
  uVar1 = key->data[0x3f];
  uVar14 = *data & 0xffff;
  uVar3 = *data >> 0x10;
  uVar8 = data[1] & 0xffff;
  uVar10 = data[1] >> 0x10;
  puVar11 = key->data + 0x3f;
  do {
    uVar4 = (uint)uVar8;
    uVar2 = (uint)uVar3;
    uVar13 = (uint)uVar14;
    uVar9 = ((((uint)uVar10 >> 5 | (uint)uVar10 << 0xb) & 0xffff) - ((uVar2 & uVar4) + uVar1)) -
            (~uVar4 & uVar13) & 0xffff;
    uVar10 = (ulong)uVar9;
    uVar6 = (((uVar4 & 7) << 0xd | uVar4 >> 3) - ((uVar13 & uVar2) + puVar11[-1])) -
            (~uVar2 & uVar9);
    uVar7 = uVar6 & 0xffff;
    uVar8 = (ulong)uVar7;
    uVar4 = ((((uVar2 << 0xe | uVar2 >> 2) & 0xffff) - puVar11[-2]) - (uVar13 & uVar9)) -
            (~uVar13 & uVar7);
    uVar2 = uVar4 & 0xffff;
    uVar3 = (ulong)uVar2;
    uVar1 = ((((uVar13 & 1) << 0xf | uVar13 >> 1) - puVar11[-3]) - (uVar9 & uVar7)) -
            (~uVar9 & uVar2);
    uVar13 = uVar1 & 0xffff;
    uVar14 = (ulong)uVar13;
    iVar12 = iVar12 + -1;
    if (iVar12 == 0) {
      iVar5 = iVar5 + -1;
      if (iVar5 == 0) {
        *data = uVar3 << 0x10 | uVar14;
        data[1] = uVar10 << 0x10 | uVar8;
        return;
      }
      uVar9 = uVar9 - key->data[uVar6 & 0x3f];
      iVar12 = (iVar5 == 2) + 5;
      uVar10 = (ulong)(uVar9 & 0xffff);
      uVar8 = (ulong)(uVar7 - key->data[uVar4 & 0x3f] & 0xffff);
      uVar3 = (ulong)(uVar2 - key->data[uVar1 & 0x3f] & 0xffff);
      uVar14 = (ulong)(uVar13 - key->data[uVar9 & 0x3f] & 0xffff);
    }
    uVar1 = puVar11[-4];
    puVar11 = puVar11 + -4;
  } while( true );
}


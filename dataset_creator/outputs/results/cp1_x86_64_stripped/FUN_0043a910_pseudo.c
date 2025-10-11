
undefined8 FUN_0043a910(undefined8 param_1,undefined8 *param_2,undefined8 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  int iVar7;
  ulong uVar8;
  char cVar9;
  int iVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  byte bVar13;
  
  bVar13 = 0;
  iVar1 = FUN_0040a180();
  uVar5 = FUN_00409860(param_1);
  iVar2 = FUN_0040a4b0(uVar5);
  uVar5 = 0;
  if (param_2 != (undefined8 *)0x0) {
    lVar6 = FUN_004098f0(param_1);
    iVar3 = FUN_004098f0(param_1);
    puVar12 = (undefined8 *)(lVar6 + (ulong)(-iVar3 & 0xf));
    *puVar12 = 0;
    *(undefined8 *)((long)puVar12 + 0x10c) = 0;
    puVar11 = (undefined8 *)((ulong)(puVar12 + 1) & 0xfffffffffffffff8);
    for (uVar8 = (ulong)(((int)puVar12 -
                         (int)(undefined8 *)((ulong)(puVar12 + 1) & 0xfffffffffffffff8)) + 0x114U >>
                        3); uVar8 != 0; uVar8 = uVar8 - 1) {
      *puVar11 = 0;
      puVar11 = puVar11 + (ulong)bVar13 * -2 + 1;
    }
    if (1 < (long)iVar2 - 4U) {
      iVar3 = FUN_004098b0(param_1);
      *(byte *)((long)puVar12 + 0x11) =
           *(byte *)((long)puVar12 + 0x11) & 0xfd | (iVar3 == 0) * '\x02';
    }
    iVar10 = iVar1 * 8;
    iVar7 = iVar10 + -0x80;
    iVar3 = iVar10 + -0x41;
    if (-1 < iVar7) {
      iVar3 = iVar7;
    }
    iVar4 = iVar10 + -0x61;
    if (-1 < iVar7) {
      iVar4 = iVar7;
    }
    *(ushort *)(puVar12 + 2) =
         (ushort)((iVar3 >> 6 & 3U) << 10) | (short)(iVar4 >> 5) + 10U & 0xf |
         *(ushort *)(puVar12 + 2) & 0xf3f0;
    if ((iVar10 - 0xc0U & 0xffffffb8) == 0) {
      if (((long)iVar2 - 1U < 2) && (param_4 == 0)) {
        FUN_0048a8b0(param_2,iVar10,puVar12 + 4);
      }
      else {
        FUN_0048a5f0();
      }
      cVar9 = '\x01';
    }
    else {
      if (iVar1 != 0x10) {
        return 0;
      }
      uVar5 = param_2[1];
      cVar9 = '\0';
      puVar12[4] = *param_2;
      puVar12[5] = uVar5;
    }
    *(byte *)(puVar12 + 2) = *(byte *)(puVar12 + 2) & 0x7f | cVar9 << 7;
    FUN_005b0ef0();
    uVar5 = 1;
  }
  return uVar5;
}


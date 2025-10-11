
undefined8 * FUN_00789f80(void)

{
  long lVar1;
  ulong uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  undefined8 *puVar8;
  byte bVar9;
  
  lVar1 = DAT_00945868;
  uVar4 = DAT_00945858;
  bVar9 = 0;
  lVar5 = FUN_007101b0(DAT_00945868 + 8 + DAT_00945858);
  if (lVar5 == 0) {
    return (undefined8 *)0x0;
  }
  uVar2 = lVar5 + -1 + uVar4;
  puVar3 = (undefined8 *)(lVar1 + -0x9c0 + (uVar2 / uVar4) * uVar4);
  *puVar3 = 0;
  puVar3[0x137] = 0;
  puVar8 = (undefined8 *)((ulong)(puVar3 + 1) & 0xfffffffffffffff8);
  for (uVar7 = (ulong)(((int)puVar3 - (int)(undefined8 *)((ulong)(puVar3 + 1) & 0xfffffffffffffff8))
                       + 0x9c0U >> 3); uVar7 != 0; uVar7 = uVar7 - 1) {
    *puVar8 = 0;
    puVar8 = puVar8 + (ulong)bVar9 * -2 + 1;
  }
  puVar3[0x138] = lVar5;
  lVar1 = DAT_00945888 + 0xe;
  plVar6 = (long *)FUN_00711600(DAT_00945888 + 0x10,0x10,uVar2 % uVar4);
  if (plVar6 != (long *)0x0) {
    *plVar6 = lVar1;
    puVar3[1] = plVar6 + 2;
    return puVar3;
  }
  FUN_007104f0(lVar5);
  return (undefined8 *)0x0;
}


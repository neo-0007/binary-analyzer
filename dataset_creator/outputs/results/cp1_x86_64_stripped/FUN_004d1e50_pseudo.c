
uint FUN_004d1e50(undefined8 param_1)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  uVar2 = 0;
  puVar3 = &DAT_007eb140;
  do {
    puVar4 = puVar3 + 8;
    uVar1 = FUN_00422820(puVar3,param_1,8);
    uVar2 = uVar2 | (int)(uVar1 - 1 & ~uVar1) >> 0x1f;
    puVar3 = puVar4;
  } while (puVar4 != &DAT_007eb1c0);
  return uVar2 & 1;
}


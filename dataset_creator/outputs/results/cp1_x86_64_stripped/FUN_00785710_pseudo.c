
void FUN_00785710(void)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long *plVar4;
  
  plVar4 = DAT_0094ada0;
  if (DAT_0094ada0 != (long *)0x0) {
    do {
      plVar1 = (long *)*plVar4;
      FUN_007104f0(plVar4[1]);
      plVar4 = plVar1;
    } while (plVar1 != (long *)0x0);
  }
  DAT_0094ada0 = (long *)0x0;
  puVar3 = DAT_0094ada8;
  while (puVar3 != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)*puVar3;
    FUN_007104f0(puVar3[1]);
    puVar3 = puVar2;
  }
  DAT_0094ada8 = (undefined8 *)0x0;
  return;
}


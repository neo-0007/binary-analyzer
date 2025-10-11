
void FUN_00418fb0(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar1 = (undefined8 *)FUN_00417930();
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = puVar1 + 1;
    do {
      puVar3 = puVar2 + 1;
      FUN_00436430(*puVar2,FUN_00418ed0);
      *puVar2 = 0;
      puVar2 = puVar3;
    } while (puVar3 != puVar1 + 0x13);
    FUN_00422300(*puVar1);
    *puVar1 = 0;
  }
  return;
}


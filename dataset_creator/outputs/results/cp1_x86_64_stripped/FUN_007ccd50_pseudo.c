
void FUN_007ccd50(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = DAT_009463b8;
  if (DAT_009463b8 != (undefined8 *)0x0) {
    do {
      if (puVar2[2] != 0) {
        FUN_007ccdb0();
      }
      puVar1 = (undefined8 *)puVar2[3];
      FUN_007104f0(*puVar2);
      FUN_007104f0(puVar2);
      puVar2 = puVar1;
    } while (puVar1 != (undefined8 *)0x0);
  }
  return;
}


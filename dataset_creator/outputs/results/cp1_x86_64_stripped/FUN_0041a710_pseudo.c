
void FUN_0041a710(long param_1)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  
  iVar2 = FUN_00422340(&DAT_0093fc8c,FUN_0041a650);
  puVar1 = DAT_0093fc90;
  if (((iVar2 != 0) && (DAT_0093fc88 != 0)) && (DAT_0093fc90 != (undefined8 *)0x0)) {
    iVar4 = 0;
    iVar2 = FUN_004222c0(DAT_0093fc90[1]);
    if (iVar2 != 0) {
      while( true ) {
        iVar2 = FUN_00436480(*puVar1);
        if (iVar2 <= iVar4) {
          FUN_004222e0(puVar1[1]);
          return;
        }
        lVar3 = FUN_004364a0(*puVar1,iVar4);
        if (param_1 == lVar3) break;
        iVar4 = iVar4 + 1;
      }
      FUN_00435ec0(*puVar1,iVar4);
      FUN_004222e0(puVar1[1]);
      return;
    }
  }
  return;
}



bool FUN_00408dc0(undefined8 param_1)

{
  int iVar1;
  undefined8 *puVar2;
  bool bVar3;
  
  puVar2 = (undefined8 *)FUN_00425350(param_1,1);
  bVar3 = false;
  if (puVar2 != (undefined8 *)0x0) {
    iVar1 = FUN_00427bb0(param_1,&DAT_007ce244,*puVar2);
    bVar3 = iVar1 != 0;
  }
  return bVar3;
}


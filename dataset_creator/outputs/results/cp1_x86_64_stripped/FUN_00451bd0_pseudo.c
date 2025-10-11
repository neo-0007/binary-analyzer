
undefined1 * FUN_00451bd0(undefined1 *param_1)

{
  int iVar1;
  undefined1 *puVar2;
  
  iVar1 = FUN_0043b840();
  puVar2 = (undefined1 *)0x0;
  if (iVar1 != 0) {
    puVar2 = (undefined1 *)FUN_0041ad90(1,"../providers/implementations/digests/null_prov.c",0x32);
    if (puVar2 != (undefined1 *)0x0) {
      *puVar2 = *param_1;
    }
  }
  return puVar2;
}


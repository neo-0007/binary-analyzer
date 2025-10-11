
void FUN_004f50c0(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x98);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_004efd00(*puVar1);
    FUN_004ed620(puVar1[2]);
    FUN_0041ad60(puVar1[5],"../crypto/ec/ec_pmeth.c",100);
    FUN_0041ad60(puVar1,"../crypto/ec/ec_pmeth.c",0x65);
    *(undefined8 *)(param_1 + 0x98) = 0;
  }
  return;
}


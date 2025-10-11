
undefined8 * FUN_00425400(undefined8 param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  
  puVar1 = (undefined8 *)FUN_0041aec0(0x28,"../crypto/property/property.c",0xee);
  puVar3 = puVar1;
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = param_1;
    lVar2 = FUN_0054a350();
    puVar1[1] = lVar2;
    if (lVar2 == 0) {
      puVar3 = (undefined8 *)0x0;
      FUN_0041ad60(puVar1,"../crypto/property/property.c",0xf2);
    }
    else {
      lVar2 = FUN_00422240();
      puVar1[2] = lVar2;
      if (lVar2 == 0) {
        FUN_0054a370(puVar1[1]);
        FUN_0041ad60(puVar1,"../crypto/property/property.c",0xf7);
        puVar3 = (undefined8 *)0x0;
      }
    }
  }
  return puVar3;
}


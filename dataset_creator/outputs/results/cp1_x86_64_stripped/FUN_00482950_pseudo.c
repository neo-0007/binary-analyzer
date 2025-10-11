
undefined8 * FUN_00482950(undefined4 param_1,long param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  
  puVar1 = (undefined8 *)
           FUN_0041aec0(0x48,"../providers/implementations/storemgmt/file_store.c",0x81);
  if (puVar1 != (undefined8 *)0x0) {
    if (param_2 != 0) {
      lVar2 = FUN_0041c2c0(param_2,"../providers/implementations/storemgmt/file_store.c",0x82);
      puVar1[1] = lVar2;
      if (lVar2 == 0) {
        FUN_004828e0(puVar1);
        return (undefined8 *)0x0;
      }
    }
    *(undefined4 *)(puVar1 + 2) = param_1;
    *puVar1 = param_3;
  }
  return puVar1;
}


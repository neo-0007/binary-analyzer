
undefined8 * FUN_00469060(undefined8 param_1)

{
  int iVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)0x0;
  iVar1 = FUN_0043b840();
  if (iVar1 != 0) {
    puVar2 = (undefined8 *)FUN_0041aec0(0x50,"../providers/implementations/kdfs/pbkdf2.c",0x49);
    if (puVar2 == (undefined8 *)0x0) {
      FUN_0051f420();
      FUN_0051f540("../providers/implementations/kdfs/pbkdf2.c",0x4b,"kdf_pbkdf2_new");
      FUN_0051f8f0(0x39,0xc0100,0);
    }
    else {
      *puVar2 = param_1;
      FUN_00468d00(puVar2);
    }
  }
  return puVar2;
}



undefined8 * FUN_00467900(undefined8 param_1)

{
  int iVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)0x0;
  iVar1 = FUN_0043b840();
  if (iVar1 != 0) {
    puVar2 = (undefined8 *)FUN_0041aec0(0x60,"../providers/implementations/kdfs/kbkdf.c",0x72);
    if (puVar2 == (undefined8 *)0x0) {
      FUN_0051f420();
      FUN_0051f540("../providers/implementations/kdfs/kbkdf.c",0x74,"kbkdf_new");
      FUN_0051f8f0(0x39,0xc0100,0);
    }
    else {
      *puVar2 = param_1;
      puVar2[0xb] = 0x100000001;
    }
  }
  return puVar2;
}


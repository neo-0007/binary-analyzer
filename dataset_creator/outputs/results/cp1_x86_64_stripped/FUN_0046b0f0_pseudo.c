
undefined8 * FUN_0046b0f0(undefined8 param_1)

{
  int iVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)0x0;
  iVar1 = FUN_0043b840();
  if (iVar1 != 0) {
    puVar2 = (undefined8 *)FUN_0041aec0(0x58,"../providers/implementations/kdfs/sshkdf.c",0x3c);
    if (puVar2 == (undefined8 *)0x0) {
      FUN_0051f420();
      FUN_0051f540("../providers/implementations/kdfs/sshkdf.c",0x3d,"kdf_sshkdf_new");
      FUN_0051f8f0(0x39,0xc0100,0);
    }
    *puVar2 = param_1;
  }
  return puVar2;
}


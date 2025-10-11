
undefined8 * FUN_0046aeb0(undefined8 param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  puVar2 = (undefined8 *)0x0;
  iVar1 = FUN_0043b840();
  if (iVar1 != 0) {
    puVar2 = (undefined8 *)FUN_0041aec0(0x58,"../providers/implementations/kdfs/scrypt.c",0x40);
    if (puVar2 == (undefined8 *)0x0) {
      FUN_0051f420();
      FUN_0051f540("../providers/implementations/kdfs/scrypt.c",0x42,"kdf_scrypt_new");
      FUN_0051f8f0(0x39,0xc0100,0);
    }
    else {
      uVar3 = FUN_00485290(param_1);
      puVar2[6] = 0x100000;
      *puVar2 = uVar3;
      puVar2[7] = 8;
      puVar2[8] = 1;
      puVar2[9] = 0x40100000;
    }
  }
  return puVar2;
}


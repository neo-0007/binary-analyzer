
undefined8 * FUN_0047fc90(undefined8 param_1,long param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  iVar1 = FUN_0043b840();
  if (iVar1 != 0) {
    puVar2 = (undefined8 *)
             FUN_0041aec0(0xc0,"../providers/implementations/signature/rsa_sig.c",0xb5);
    if ((puVar2 == (undefined8 *)0x0) ||
       ((param_2 != 0 &&
        (param_2 = FUN_0041c2c0(param_2,"../providers/implementations/signature/rsa_sig.c",0xb7),
        param_2 == 0)))) {
      puVar4 = (undefined8 *)0x0;
      FUN_0041ad60(puVar2,"../providers/implementations/signature/rsa_sig.c",0xb8);
      FUN_0051f420();
      FUN_0051f540("../providers/implementations/signature/rsa_sig.c",0xb9,"rsa_newctx");
      FUN_0051f8f0(0x39,0xc0100,0);
    }
    else {
      uVar3 = FUN_00485290(param_1);
      *(byte *)((long)puVar2 + 0x1c) = *(byte *)((long)puVar2 + 0x1c) | 1;
      *puVar2 = uVar3;
      puVar2[1] = param_2;
      puVar2[0x16] = 0xfffffffffffffffe;
      puVar4 = puVar2;
    }
    return puVar4;
  }
  return (undefined8 *)0x0;
}


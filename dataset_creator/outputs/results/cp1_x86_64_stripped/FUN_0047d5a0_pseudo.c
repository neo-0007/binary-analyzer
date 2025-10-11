
undefined8 * FUN_0047d5a0(undefined8 param_1,long param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  iVar1 = FUN_0043b840();
  if ((iVar1 != 0) &&
     (puVar2 = (undefined8 *)
               FUN_0041aec0(400,"../providers/implementations/signature/ecdsa_sig.c",0x72),
     puVar2 != (undefined8 *)0x0)) {
    *(byte *)((long)puVar2 + 0x4a) = *(byte *)((long)puVar2 + 0x4a) | 1;
    uVar3 = FUN_00485290(param_1);
    *puVar2 = uVar3;
    if (param_2 != 0) {
      lVar4 = FUN_0041c2c0(param_2,"../providers/implementations/signature/ecdsa_sig.c",0x78);
      puVar2[1] = lVar4;
      if (lVar4 == 0) {
        FUN_0041ad60(puVar2,"../providers/implementations/signature/ecdsa_sig.c",0x79);
        FUN_0051f420();
        FUN_0051f540("../providers/implementations/signature/ecdsa_sig.c",0x7b,"ecdsa_newctx");
        FUN_0051f8f0(0x39,0xc0100,0);
        return (undefined8 *)0x0;
      }
    }
    return puVar2;
  }
  return (undefined8 *)0x0;
}


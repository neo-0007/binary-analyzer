
undefined8 * FUN_0046dfd0(undefined8 *param_1)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar3 = (undefined8 *)FUN_0041aec0(0x18,"../providers/implementations/kem/rsa_kem.c",0x6c);
  puVar4 = puVar3;
  if (puVar3 != (undefined8 *)0x0) {
    uVar1 = param_1[1];
    *puVar3 = *param_1;
    puVar3[1] = uVar1;
    puVar3[2] = param_1[2];
    if (puVar3[1] != 0) {
      iVar2 = FUN_0042bcf0();
      if (iVar2 == 0) {
        puVar4 = (undefined8 *)0x0;
        FUN_0041ad60(puVar3,"../providers/implementations/kem/rsa_kem.c",0x72);
      }
    }
  }
  return puVar4;
}


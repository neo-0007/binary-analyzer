
undefined8 * FUN_004714c0(undefined8 param_1,uint param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  uVar2 = FUN_00485290();
  iVar1 = FUN_0043b840();
  puVar4 = (undefined8 *)0x0;
  if ((iVar1 != 0) && ((param_2 & 0x87) != 0)) {
    puVar3 = (undefined8 *)
             FUN_0041aec0(0x88,"../providers/implementations/keymgmt/ec_kmgmt.c",0x3da);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = uVar2;
      *(uint *)(puVar3 + 0xf) = param_2;
      *(undefined4 *)((long)puVar3 + 0x7c) = 0;
    }
    iVar1 = FUN_00471020(puVar3,param_3);
    puVar4 = puVar3;
    if (iVar1 == 0) {
      puVar4 = (undefined8 *)0x0;
      FUN_0041ad60(puVar3,"../providers/implementations/keymgmt/ec_kmgmt.c",0x3e0);
    }
  }
  return puVar4;
}


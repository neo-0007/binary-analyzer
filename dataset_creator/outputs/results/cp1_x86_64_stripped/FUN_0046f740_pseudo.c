
undefined8 * FUN_0046f740(undefined8 param_1,uint param_2,undefined8 param_3,int param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  uVar2 = FUN_00485290();
  iVar1 = FUN_0043b840();
  puVar4 = (undefined8 *)0x0;
  if ((iVar1 != 0) && ((param_2 & 7) != 0)) {
    puVar3 = (undefined8 *)
             FUN_0041aec0(0x78,"../providers/implementations/keymgmt/dh_kmgmt.c",0x1c6);
    if (puVar3 != (undefined8 *)0x0) {
      *(uint *)(puVar3 + 2) = param_2;
      *puVar3 = uVar2;
      puVar3[3] = 0x800;
      puVar3[4] = 0xe0;
      puVar3[10] = 0;
      *(int *)(puVar3 + 0xe) = param_4;
      *(uint *)((long)puVar3 + 0x3c) = (uint)(param_4 == 0x1000);
      *(undefined4 *)(puVar3 + 7) = 0xffffffff;
      puVar3[8] = 0xffffffff00000002;
      *(undefined4 *)(puVar3 + 9) = 0;
    }
    iVar1 = FUN_0046f600(puVar3,param_3);
    puVar4 = puVar3;
    if (iVar1 == 0) {
      puVar4 = (undefined8 *)0x0;
      FUN_0041ad60(puVar3,"../providers/implementations/keymgmt/dh_kmgmt.c",0x1dc);
    }
  }
  return puVar4;
}


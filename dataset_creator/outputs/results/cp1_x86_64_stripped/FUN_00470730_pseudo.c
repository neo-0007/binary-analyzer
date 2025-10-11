
undefined8 * FUN_00470730(undefined8 param_1,uint param_2,long param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)0x0;
  uVar2 = FUN_00485290();
  iVar1 = FUN_0043b840();
  if ((iVar1 != 0) && ((param_2 & 7) != 0)) {
    puVar3 = (undefined8 *)
             FUN_0041aec0(0x68,"../providers/implementations/keymgmt/dsa_kmgmt.c",0x19a);
    if (puVar3 == (undefined8 *)0x0) {
LAB_004707d0:
      FUN_0041ad60(puVar3,"../providers/implementations/keymgmt/dsa_kmgmt.c",0x1a9);
      return (undefined8 *)0x0;
    }
    *(uint *)(puVar3 + 2) = param_2;
    *puVar3 = uVar2;
    puVar3[3] = 0x800;
    puVar3[4] = 0xe0;
    puVar3[7] = 0x2ffffffff;
    puVar3[8] = 0xffffffff;
    if (param_3 != 0) {
      iVar1 = FUN_004703c0(puVar3,param_3);
      if (iVar1 == 0) goto LAB_004707d0;
    }
  }
  return puVar3;
}


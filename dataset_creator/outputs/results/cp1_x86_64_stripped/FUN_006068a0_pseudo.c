
void FUN_006068a0(long param_1)

{
  undefined8 *puVar1;
  int iVar2;
  
  if (param_1 != 0) {
    FUN_004360b0(*(undefined8 *)(param_1 + 0x28));
    FUN_00436430(*(undefined8 *)(param_1 + 0x30),FUN_00606810);
    if (0 < *(int *)(param_1 + 0x18)) {
      iVar2 = 0;
      puVar1 = *(undefined8 **)(param_1 + 0x10);
      do {
        iVar2 = iVar2 + 1;
        FUN_005b0200(*puVar1);
        FUN_00436430(puVar1[1],FUN_0061b760);
        FUN_0061b760(puVar1[2]);
        puVar1 = puVar1 + 4;
      } while (iVar2 < *(int *)(param_1 + 0x18));
    }
    FUN_00436430(*(undefined8 *)(param_1 + 0x20),FUN_00606480);
    FUN_0041ad60(*(undefined8 *)(param_1 + 0x10),"../crypto/x509/pcy_tree.c",0x27d);
    FUN_0041ad60(param_1,"../crypto/x509/pcy_tree.c",0x27e);
    return;
  }
  return;
}


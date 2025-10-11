
void FUN_00405e60(long param_1,int param_2)

{
  int iVar1;
  
  if (*(long *)(param_1 + 8) != 0) {
    if (*(long *)(*(long *)(param_1 + 8) + 0x40) != 0) {
      iVar1 = FUN_0040b0e0(param_1,2);
      if (iVar1 == 0) {
        (**(code **)(*(long *)(param_1 + 8) + 0x40))(param_1);
      }
    }
    if ((*(long *)(param_1 + 0x20) != 0) && (0 < *(int *)(*(long *)(param_1 + 8) + 0x4c))) {
      iVar1 = FUN_0040b0e0(param_1,4);
      if ((iVar1 == 0) || (param_2 != 0)) {
        FUN_0041aef0(*(undefined8 *)(param_1 + 0x20),(long)*(int *)(*(long *)(param_1 + 8) + 0x4c),
                     "../crypto/evp/digest.c",0x25);
        *(undefined8 *)(param_1 + 0x20) = 0;
      }
    }
    return;
  }
  return;
}


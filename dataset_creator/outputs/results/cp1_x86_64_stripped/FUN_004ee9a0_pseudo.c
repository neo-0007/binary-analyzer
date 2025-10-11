
undefined8 FUN_004ee9a0(long param_1,byte *param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  if (param_1 == 0) {
    return 0;
  }
  lVar3 = *(long *)(param_1 + 0x18);
  if (lVar3 != 0) {
    lVar2 = *(long *)(param_1 + 0x20);
    if (lVar2 == 0) {
      lVar2 = FUN_004efb90();
      *(long *)(param_1 + 0x20) = lVar2;
      if (lVar2 == 0) {
        return 0;
      }
      lVar3 = *(long *)(param_1 + 0x18);
    }
    iVar1 = FUN_004f4d10(lVar3,lVar2,param_2,param_3,param_4);
    if (iVar1 != 0) {
      *(long *)(param_1 + 0x68) = *(long *)(param_1 + 0x68) + 1;
      if ((*(byte *)**(undefined8 **)(param_1 + 0x18) & 2) == 0) {
        *(uint *)(param_1 + 0x34) = *param_2 & 0xfffffffe;
        return 1;
      }
      return 1;
    }
  }
  return 0;
}


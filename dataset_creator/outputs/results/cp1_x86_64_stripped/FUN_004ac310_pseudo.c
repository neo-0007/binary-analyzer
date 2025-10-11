
undefined8 FUN_004ac310(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x48);
    FUN_004abd40(param_1,7,0,param_1);
    lVar2 = *(long *)(param_1 + 0x50);
    if (lVar2 != 0) {
      *(undefined8 *)(lVar2 + 0x48) = *(undefined8 *)(param_1 + 0x48);
    }
    if (*(long *)(param_1 + 0x48) != 0) {
      *(long *)(*(long *)(param_1 + 0x48) + 0x50) = lVar2;
    }
    *(undefined8 *)(param_1 + 0x48) = 0;
    *(undefined8 *)(param_1 + 0x50) = 0;
    return uVar1;
  }
  return 0;
}


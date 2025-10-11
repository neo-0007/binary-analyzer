
undefined1  [16] FUN_00666690(long param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  long lVar2;
  undefined1 auVar3 [16];
  
  cVar1 = FUN_006c3d30(param_1 + 0x68);
  if (cVar1 != '\0') {
    if (*(char *)(param_1 + 0xc0) != '\0') {
      *(undefined1 *)(param_1 + 0xc0) = 0;
      lVar2 = (ulong)(*(long *)(param_1 + 0x10) != *(long *)(param_1 + 8)) +
              *(long *)(param_1 + 0xb0);
      *(long *)(param_1 + 0xb0) = lVar2;
      *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_1 + 0x98);
      *(long *)(param_1 + 0x10) = lVar2;
      *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_1 + 0xb8);
    }
    auVar3 = FUN_006661c0(param_1,param_2,0,param_3);
    return auVar3;
  }
  return ZEXT816(0xffffffffffffffff);
}


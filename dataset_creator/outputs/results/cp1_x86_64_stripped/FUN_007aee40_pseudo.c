
undefined4 FUN_007aee40(int *param_1,int param_2)

{
  char cVar1;
  undefined2 uVar2;
  long lVar3;
  
  if ((param_2 == 0) ||
     ((((*param_1 == 0 || (*param_1 == 5)) && ((param_1[1] & 0xfffffffdU) == 0)) &&
      ((*(ulong *)(param_1 + 2) == 0 || ((*(ulong *)(param_1 + 2) & 0xfffffffffffffffe) == 0x2c0))))
     )) {
    lVar3 = FUN_007af600();
  }
  else {
    lVar3 = FUN_007adeb0(param_1,0);
  }
  if (lVar3 != 0) {
    cVar1 = FUN_007afde0(param_1,lVar3);
    FUN_007af9e0(lVar3);
    if (cVar1 != '\0') {
      if (param_2 == 0) {
        return 0;
      }
      uVar2 = FUN_007aefa0();
      *(undefined2 *)(param_1 + 0x11) = uVar2;
      return 0;
    }
  }
  return 0xffffffff;
}


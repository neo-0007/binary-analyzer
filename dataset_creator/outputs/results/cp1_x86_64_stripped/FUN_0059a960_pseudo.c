
int FUN_0059a960(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  int iVar3;
  
  iVar3 = 0;
  while( true ) {
    iVar1 = FUN_0059a8e0();
    if (iVar1 <= iVar3) {
      return -1;
    }
    lVar2 = FUN_0059a910(iVar3);
    iVar1 = thunk_FUN_00712780(*(undefined8 *)(lVar2 + 0x20),param_1);
    if (iVar1 == 0) break;
    iVar3 = iVar3 + 1;
  }
  return iVar3;
}


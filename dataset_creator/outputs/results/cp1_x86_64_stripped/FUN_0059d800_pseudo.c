
ulong FUN_0059d800(long param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  ulong uVar3;
  
  iVar2 = thunk_FUN_007129d0(param_2);
  uVar3 = thunk_FUN_00712ab0(param_1,param_2,(long)iVar2);
  if ((int)uVar3 == 0) {
    cVar1 = *(char *)(param_1 + iVar2);
    uVar3 = (ulong)(cVar1 != '\0' && cVar1 != '.');
  }
  return uVar3;
}


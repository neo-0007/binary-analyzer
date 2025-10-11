
bool FUN_0046e6c0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  bool bVar3;
  
  lVar2 = thunk_FUN_0041cdd0(param_2,"encoded-pub-key");
  bVar3 = true;
  if ((lVar2 != 0) && (bVar3 = false, *(int *)(lVar2 + 8) == 5)) {
    iVar1 = FUN_004d5800(param_1,*(undefined8 *)(lVar2 + 0x10),*(undefined8 *)(lVar2 + 0x18));
    return iVar1 != 0;
  }
  return bVar3;
}


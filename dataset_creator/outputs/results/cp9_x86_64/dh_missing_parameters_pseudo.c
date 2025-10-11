
bool dh_missing_parameters(long param_1)

{
  long lVar1;
  bool bVar2;
  
  lVar1 = *(long *)(param_1 + 0x20);
  bVar2 = true;
  if ((lVar1 != 0) && (*(long *)(lVar1 + 8) != 0)) {
    bVar2 = *(long *)(lVar1 + 0x18) == 0;
  }
  return bVar2;
}


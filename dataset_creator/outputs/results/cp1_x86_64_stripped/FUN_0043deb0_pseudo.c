
bool FUN_0043deb0(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  bool bVar5;
  
  bVar5 = false;
  if (param_1 != 0) {
    lVar2 = FUN_0041cdd0(param_2,"digest");
    bVar5 = true;
    if (lVar2 != 0) {
      lVar3 = FUN_0043c7e0(param_1 + 0x10);
      puVar4 = &DAT_0083e5c2;
      if (lVar3 != 0) {
        puVar4 = (undefined1 *)FUN_0040ab30(lVar3,&DAT_0083e5c2);
      }
      iVar1 = FUN_0041e1a0(lVar2,puVar4);
      bVar5 = iVar1 != 0;
    }
  }
  return bVar5;
}


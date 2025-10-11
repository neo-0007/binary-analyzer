
bool FUN_00464c60(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  char *pcVar3;
  undefined1 *puVar4;
  bool bVar5;
  
  if (param_1 == 0) {
    return false;
  }
  lVar2 = FUN_0041cdd0(param_2,"kdf-type");
  if (lVar2 != 0) {
    if (*(int *)(param_1 + 0x1c) == 0) {
      pcVar3 = "";
    }
    else {
      pcVar3 = "X942KDF-ASN1";
      if (*(int *)(param_1 + 0x1c) != 1) {
        return false;
      }
    }
    iVar1 = FUN_0041e1a0(lVar2,pcVar3);
    if (iVar1 == 0) {
      return false;
    }
  }
  lVar2 = FUN_0041cdd0(param_2,"kdf-digest");
  if (lVar2 != 0) {
    puVar4 = &DAT_0083e5c2;
    if (*(long *)(param_1 + 0x20) != 0) {
      puVar4 = (undefined1 *)FUN_0040ab30(*(long *)(param_1 + 0x20),&DAT_0083e5c2);
    }
    iVar1 = FUN_0041e1a0(lVar2,puVar4);
    if (iVar1 == 0) {
      return false;
    }
  }
  lVar2 = FUN_0041cdd0(param_2,"kdf-outlen");
  if ((lVar2 != 0) &&
     (iVar1 = thunk_FUN_0041d9c0(lVar2,*(undefined8 *)(param_1 + 0x38)), iVar1 == 0)) {
    return false;
  }
  lVar2 = FUN_0041cdd0(param_2,&DAT_007e431b);
  if ((lVar2 != 0) &&
     (iVar1 = FUN_0041e3e0(lVar2,*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30)),
     iVar1 == 0)) {
    return false;
  }
  lVar2 = FUN_0041cdd0(param_2,"cekalg");
  bVar5 = true;
  if (lVar2 != 0) {
    puVar4 = *(undefined1 **)(param_1 + 0x40);
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &DAT_0083e5c2;
    }
    iVar1 = FUN_0041e1a0(lVar2,puVar4);
    bVar5 = iVar1 != 0;
  }
  return bVar5;
}



bool FUN_004656e0(long param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  char *pcVar4;
  undefined1 *puVar5;
  
  if (param_1 == 0) {
    return false;
  }
  lVar3 = FUN_0041cdd0(param_2,"ecdh-cofactor-mode");
  if (lVar3 != 0) {
    if (*(int *)(param_1 + 0x18) == -1) {
      uVar2 = FUN_004ee6c0(*(undefined8 *)(param_1 + 8));
      iVar1 = thunk_FUN_0041d0b0(lVar3,uVar2 >> 0xc & 1);
    }
    else {
      iVar1 = thunk_FUN_0041d0b0(lVar3);
    }
    if (iVar1 == 0) {
      return false;
    }
  }
  lVar3 = FUN_0041cdd0(param_2,"kdf-type");
  if (lVar3 != 0) {
    if (*(int *)(param_1 + 0x1c) == 0) {
      pcVar4 = "";
    }
    else {
      pcVar4 = "X963KDF";
      if (*(int *)(param_1 + 0x1c) != 1) {
        return false;
      }
    }
    iVar1 = FUN_0041e1a0(lVar3,pcVar4);
    if (iVar1 == 0) {
      return false;
    }
  }
  lVar3 = FUN_0041cdd0(param_2,"kdf-digest");
  if (lVar3 != 0) {
    puVar5 = &DAT_0083e5c2;
    if (*(long *)(param_1 + 0x20) != 0) {
      puVar5 = (undefined1 *)FUN_0040ab30(*(long *)(param_1 + 0x20),&DAT_0083e5c2);
    }
    iVar1 = FUN_0041e1a0(lVar3,puVar5);
    if (iVar1 == 0) {
      return false;
    }
  }
  lVar3 = FUN_0041cdd0(param_2,"kdf-outlen");
  if ((lVar3 != 0) &&
     (iVar1 = thunk_FUN_0041d9c0(lVar3,*(undefined8 *)(param_1 + 0x38)), iVar1 == 0)) {
    return false;
  }
  lVar3 = FUN_0041cdd0(param_2,&DAT_007e431b);
  if (lVar3 != 0) {
    iVar1 = FUN_0041e3e0(lVar3,*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30));
    return iVar1 != 0;
  }
  return true;
}


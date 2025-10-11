
bool FUN_0043d740(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  int iVar4;
  undefined1 *puVar5;
  
  if (param_1 == 0) {
    return false;
  }
  lVar2 = FUN_0041cdd0(param_2);
  if (lVar2 != 0) {
    if (*(int *)(lVar2 + 8) == 1) {
      iVar1 = thunk_FUN_0041d0b0(lVar2,*(undefined4 *)(param_1 + 0x10));
      if (iVar1 == 0) {
        return false;
      }
    }
    else {
      if (*(int *)(lVar2 + 8) != 4) {
        return false;
      }
      iVar4 = 0;
      iVar1 = 1;
      puVar3 = &DAT_008eff80;
      do {
        if (*(int *)(param_1 + 0x10) == iVar1) {
          if ((&PTR_s_pkcs1_008eff88)[(long)iVar4 * 2] != (undefined *)0x0) {
            iVar1 = FUN_0041e1a0();
            if (iVar1 == 0) {
              return false;
            }
            goto LAB_0043d7d8;
          }
          break;
        }
        iVar1 = *(int *)(puVar3 + 0x10);
        puVar3 = puVar3 + 0x10;
        iVar4 = iVar4 + 1;
      } while (iVar1 != 0);
      FUN_0051f420();
      FUN_0051f540("../providers/implementations/asymciphers/rsa_enc.c",0x173,"rsa_get_ctx_params");
      FUN_0051f8f0(0x39,0xc0103,0);
    }
  }
LAB_0043d7d8:
  lVar2 = FUN_0041cdd0(param_2,"digest");
  if (lVar2 != 0) {
    puVar5 = &DAT_0083e5c2;
    if (*(long *)(param_1 + 0x18) != 0) {
      puVar5 = (undefined1 *)FUN_0040ab30(*(long *)(param_1 + 0x18),&DAT_0083e5c2);
    }
    iVar1 = FUN_0041e1a0(lVar2,puVar5);
    if (iVar1 == 0) {
      return false;
    }
  }
  lVar2 = FUN_0041cdd0(param_2,"mgf1-digest");
  if (lVar2 != 0) {
    if ((*(long *)(param_1 + 0x20) == 0) && (*(long *)(param_1 + 0x18) == 0)) {
      puVar5 = &DAT_0083e5c2;
    }
    else {
      puVar5 = (undefined1 *)FUN_0040ab30();
    }
    iVar1 = FUN_0041e1a0(lVar2,puVar5);
    if (iVar1 == 0) {
      return false;
    }
  }
  lVar2 = FUN_0041cdd0(param_2,"oaep-label");
  if ((((lVar2 == 0) ||
       (iVar1 = FUN_0041e3e0(lVar2,*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30)),
       iVar1 != 0)) &&
      ((lVar2 = FUN_0041cdd0(param_2,"tls-client-version"), lVar2 == 0 ||
       (iVar1 = thunk_FUN_0041d380(lVar2,*(undefined4 *)(param_1 + 0x38)), iVar1 != 0)))) &&
     ((lVar2 = FUN_0041cdd0(param_2,"tls-negotiated-version"), lVar2 == 0 ||
      (iVar1 = thunk_FUN_0041d380(lVar2,*(undefined4 *)(param_1 + 0x3c)), iVar1 != 0)))) {
    lVar2 = FUN_0041cdd0(param_2,"implicit-rejection");
    if (lVar2 != 0) {
      iVar1 = thunk_FUN_0041d380(lVar2,*(undefined4 *)(param_1 + 0x40));
      return iVar1 != 0;
    }
    return true;
  }
  return false;
}



bool FUN_00462bf0(long param_1,long param_2,byte param_3)

{
  uint uVar1;
  int iVar2;
  char *pcVar3;
  
  if ((param_1 == 0) || (param_2 == 0)) {
    FUN_0051f420();
    FUN_0051f540("../providers/implementations/encode_decode/encode_key2text.c",0x23e,"ecx_to_text")
    ;
    FUN_0051f8f0(0x39,0xc0102,0);
    return false;
  }
  if ((param_3 & 1) == 0) {
    if ((param_3 & 2) == 0) {
      iVar2 = FUN_004ae9e0(param_1,&DAT_0080b2df,0);
      if (iVar2 < 1) {
        return false;
      }
      return true;
    }
    if ((*(byte *)(param_2 + 0x10) & 1) == 0) {
      FUN_0051f420();
      FUN_0051f540("../providers/implementations/encode_decode/encode_key2text.c",0x259,
                   "ecx_to_text");
      FUN_0051f8f0(0x39,0xdc,0);
      return (bool)(param_3 & 1);
    }
    uVar1 = *(uint *)(param_2 + 0x60);
    if (uVar1 == 2) {
      pcVar3 = "ED25519 Public-Key";
LAB_00462ccc:
      iVar2 = FUN_004ae9e0(param_1,&DAT_0080b2df,pcVar3);
      if (iVar2 < 1) {
        return false;
      }
      goto LAB_00462ce1;
    }
    if (uVar1 < 3) {
      pcVar3 = "X448 Public-Key";
      if (uVar1 == 0) {
        pcVar3 = "X25519 Public-Key";
      }
      goto LAB_00462ccc;
    }
    pcVar3 = "ED448 Public-Key";
    if (uVar1 == 3) goto LAB_00462ccc;
    iVar2 = FUN_004ae9e0(param_1,&DAT_0080b2df,0);
    if (iVar2 < 1) {
      return false;
    }
  }
  else {
    if (*(long *)(param_2 + 0x50) == 0) {
      FUN_0051f420();
      FUN_0051f540("../providers/implementations/encode_decode/encode_key2text.c",0x244,
                   "ecx_to_text");
      FUN_0051f8f0(0x39,0xdd,0);
      return false;
    }
    uVar1 = *(uint *)(param_2 + 0x60);
    if (uVar1 == 2) {
      pcVar3 = "ED25519 Private-Key";
LAB_00462c4e:
      iVar2 = FUN_004ae9e0(param_1,&DAT_0080b2df,pcVar3);
    }
    else {
      if (uVar1 < 3) {
        pcVar3 = "X448 Private-Key";
        if (uVar1 == 0) {
          pcVar3 = "X25519 Private-Key";
        }
        goto LAB_00462c4e;
      }
      pcVar3 = "ED448 Private-Key";
      if (uVar1 == 3) goto LAB_00462c4e;
      iVar2 = FUN_004ae9e0(param_1,&DAT_0080b2df,0);
    }
    if ((iVar2 < 1) ||
       (iVar2 = FUN_00462ae0(param_1,"priv:",*(undefined8 *)(param_2 + 0x50),
                             *(undefined8 *)(param_2 + 0x58)), iVar2 == 0)) {
      return false;
    }
  }
  if ((param_3 & 2) == 0) {
    return true;
  }
LAB_00462ce1:
  iVar2 = FUN_00462ae0(param_1,&DAT_007e3f34,param_2 + 0x11,*(undefined8 *)(param_2 + 0x58));
  return iVar2 != 0;
}


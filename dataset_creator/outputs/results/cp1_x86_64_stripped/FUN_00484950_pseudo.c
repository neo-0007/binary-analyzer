
bool FUN_00484950(undefined8 param_1,undefined4 param_2,undefined8 param_3,int param_4)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  if (param_4 == 0x2a3) {
    puVar2 = &DAT_0080dbb0;
    uVar3 = 0xb;
  }
  else if (param_4 < 0x2a4) {
    if (param_4 == 0x2a1) {
      puVar2 = &DAT_0080db90;
      uVar3 = 0xb;
    }
    else if (param_4 == 0x2a2) {
      puVar2 = &DAT_0080db80;
      uVar3 = 0xb;
    }
    else if (param_4 == 0x40) {
      puVar2 = &DAT_0080dbc0;
      uVar3 = 9;
    }
    else {
      if (param_4 != 0x2a0) {
        return false;
      }
      puVar2 = &DAT_0080dba0;
      uVar3 = 0xb;
    }
  }
  else if (param_4 == 0x44a) {
    puVar2 = &DAT_0080db50;
    uVar3 = 0xb;
  }
  else if (param_4 < 1099) {
    if (param_4 != 0x448) {
      if (param_4 != 0x449) {
        return false;
      }
      puVar2 = &DAT_0080db60;
      uVar3 = 0xb;
      iVar1 = FUN_00546d60(param_1,param_2);
      goto joined_r0x004849a7;
    }
    puVar2 = &DAT_0080db70;
    uVar3 = 0xb;
  }
  else {
    if (param_4 != 1099) {
      return false;
    }
    puVar2 = &DAT_0080db40;
    uVar3 = 0xb;
  }
  iVar1 = FUN_00546d60(param_1,param_2);
joined_r0x004849a7:
  if ((iVar1 != 0) && (iVar1 = FUN_00546a10(param_1,0xffffffff,puVar2,uVar3), iVar1 != 0)) {
    iVar1 = FUN_00546da0(param_1,param_2);
    return iVar1 != 0;
  }
  return false;
}


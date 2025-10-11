
ulong FUN_005b1b50(undefined8 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  if (param_3 == 0x2a2) {
    puVar3 = &DAT_0080ded0;
    uVar4 = 0xb;
  }
  else if (param_3 < 0x2a3) {
    if (param_3 == 0x75) {
      puVar3 = &DAT_0080de48;
      uVar4 = 8;
    }
    else if (param_3 < 0x76) {
      if (param_3 == 0x40) {
        puVar3 = &DAT_0080df10;
        uVar4 = 0xb;
      }
      else if (param_3 < 0x41) {
        if (param_3 == 3) {
          puVar3 = &DAT_0080df30;
          uVar4 = 0xb;
        }
        else {
          if (param_3 != 4) {
            return 0xffffffff;
          }
          puVar3 = &DAT_0080df20;
          uVar4 = 0xb;
        }
      }
      else {
        if (param_3 != 0x5f) {
          return 0xffffffff;
        }
        puVar3 = &DAT_0080de40;
        uVar4 = 7;
      }
    }
    else if (param_3 == 0x2a0) {
      puVar3 = &DAT_0080def0;
      uVar4 = 0xb;
    }
    else {
      if (param_3 != 0x2a1) {
        if (param_3 != 0x101) {
          return 0xffffffff;
        }
        puVar3 = &DAT_0080de50;
        uVar4 = 0xb;
        iVar1 = FUN_00546d60(param_1,param_2);
        goto joined_r0x005b1beb;
      }
      puVar3 = &DAT_0080dee0;
      uVar4 = 0xb;
    }
  }
  else if (param_3 == 0x2a3) {
    puVar3 = &DAT_0080df00;
    uVar4 = 0xb;
  }
  else {
    if (5 < param_3 - 0x446U) {
      return 0xffffffff;
    }
    uVar4 = 0xb;
    switch(param_3) {
    case 0x447:
      puVar3 = &DAT_0080deb0;
      break;
    case 0x448:
      puVar3 = &DAT_0080de90;
      break;
    case 0x449:
      puVar3 = &DAT_0080de80;
      break;
    case 0x44a:
      puVar3 = &DAT_0080de70;
      break;
    case 1099:
      puVar3 = &DAT_0080de60;
      break;
    default:
      puVar3 = &DAT_0080dec0;
      uVar4 = 0xb;
    }
  }
  iVar1 = FUN_00546d60(param_1,param_2);
joined_r0x005b1beb:
  if (((iVar1 == 0) || (iVar1 = FUN_00546ce0(param_1,0xffffffff), iVar1 == 0)) ||
     (iVar1 = FUN_00546a10(param_1,0xffffffff,puVar3,uVar4), iVar1 == 0)) {
    uVar2 = 0;
  }
  else {
    iVar1 = FUN_00546da0(param_1,param_2);
    uVar2 = (ulong)(iVar1 != 0);
  }
  return uVar2;
}


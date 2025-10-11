
bool FUN_004d71b0(undefined8 param_1,long param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  
  uVar1 = 0;
  if (*(long *)(param_2 + 8) != 0) {
    uVar1 = FUN_004d8e40(param_2);
  }
  if (param_4 == 2) {
    lVar3 = *(long *)(param_2 + 0x70);
    uVar4 = *(undefined8 *)(param_2 + 0x68);
    if (lVar3 != 0) {
      iVar2 = FUN_004abce0(param_1,param_3,0x80);
      if (iVar2 == 0) {
        return false;
      }
      iVar2 = FUN_004ae9e0(param_1,"%s: (%d bit)\n","Private-Key",uVar1);
      if (iVar2 < 1) {
        return false;
      }
      goto LAB_004d7208;
    }
  }
  else {
    uVar4 = 0;
    if (param_4 != 0) {
      uVar4 = *(undefined8 *)(param_2 + 0x68);
    }
  }
  iVar2 = FUN_004ae9e0(param_1,"Public-Key: (%d bit)\n",uVar1);
  if (iVar2 < 1) {
    return false;
  }
  lVar3 = 0;
LAB_004d7208:
  iVar2 = FUN_005bc920(param_1,"priv:",lVar3,0,param_3);
  if ((iVar2 != 0) && (iVar2 = FUN_005bc920(param_1,"pub: ",uVar4,0,param_3), iVar2 != 0)) {
    iVar2 = FUN_00542570(param_1,param_2 + 8,param_3);
    return iVar2 != 0;
  }
  return false;
}


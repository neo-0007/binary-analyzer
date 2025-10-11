
bool FUN_00474250(long param_1,long param_2,ulong param_3)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  
  iVar2 = FUN_0043b840();
  if (iVar2 != 0) {
    if ((param_3 & 1) == 0) {
      return true;
    }
    lVar1 = *(long *)(param_1 + 0x18);
    if (lVar1 == 0) {
      if (*(long *)(param_2 + 0x18) != 0) {
        return false;
      }
    }
    else if (*(long *)(param_2 + 0x18) == 0) {
      return false;
    }
    if (*(long *)(param_1 + 0x20) != *(long *)(param_2 + 0x20)) {
      return false;
    }
    lVar4 = *(long *)(param_2 + 0x28);
    if (*(long *)(param_1 + 0x28) == 0) {
      if (lVar4 != 0) {
        return false;
      }
      if (lVar1 == 0) {
        return true;
      }
    }
    else {
      if (lVar4 == 0) {
        return false;
      }
      if (lVar1 == 0) goto LAB_004742ef;
    }
    iVar2 = FUN_00422820();
    if (iVar2 == 0) {
      if (*(long *)(param_1 + 0x28) == 0) {
        return true;
      }
      lVar4 = *(long *)(param_2 + 0x28);
LAB_004742ef:
      uVar3 = FUN_0040a3d0(lVar4);
      iVar2 = FUN_0040a400(*(undefined8 *)(param_1 + 0x28),uVar3);
      return iVar2 != 0;
    }
  }
  return false;
}


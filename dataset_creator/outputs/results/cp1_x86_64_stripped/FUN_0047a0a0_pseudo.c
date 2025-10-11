
bool FUN_0047a0a0(long param_1,undefined1 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined1 local_3c [12];
  
  lVar1 = *(long *)(param_1 + 0xf8);
  uVar2 = *(undefined8 *)(lVar1 + 0x18);
  local_3c[0] = param_2;
  uVar4 = FUN_0043c7e0(lVar1);
  iVar3 = FUN_00407430(uVar2,uVar4,0);
  if ((iVar3 != 0) && (iVar3 = FUN_00405f60(uVar2,local_3c,1), iVar3 != 0)) {
    iVar3 = FUN_00405f60(uVar2,lVar1 + 0x28,*(undefined8 *)(param_1 + 0xe8));
    if ((iVar3 != 0) &&
       ((param_3 == 0 || (iVar3 = FUN_00405f60(uVar2,param_3,param_4), iVar3 != 0)))) {
      iVar3 = FUN_00406ca0(uVar2,lVar1 + 0x106,0);
      if (iVar3 != 0) {
        iVar3 = FUN_00479c40(param_1,lVar1 + 0x28,lVar1 + 0x106,*(undefined8 *)(lVar1 + 0x20));
        return iVar3 != 0;
      }
    }
  }
  return false;
}


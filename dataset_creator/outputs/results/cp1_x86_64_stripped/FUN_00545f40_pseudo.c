
bool FUN_00545f40(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  long in_FS_OFFSET;
  bool bVar3;
  undefined8 local_70;
  undefined1 local_68 [56];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = FUN_00547d80();
  iVar2 = FUN_00547790(param_1);
  if (iVar2 != 0) {
    if (iVar1 == 0) {
      iVar2 = FUN_00547090(local_68,0);
      if (iVar2 != 0) {
        iVar2 = FUN_00545e30(local_68,param_2);
        if (((iVar2 == 0) || (iVar2 = FUN_00545e30(local_68,param_3), iVar2 == 0)) ||
           ((iVar2 = FUN_005472e0(local_68,&local_70), iVar2 == 0 ||
            (iVar2 = FUN_00547ad0(local_68), iVar2 == 0)))) {
          FUN_00547da0(local_68);
          bVar3 = false;
          goto LAB_00545fca;
        }
LAB_00546010:
        iVar2 = FUN_005477a0(param_1,0x30,1);
        if (((iVar2 != 0) && (iVar2 = FUN_00545da0(param_1,local_70), iVar2 != 0)) &&
           ((iVar1 != 0 ||
            ((iVar1 = FUN_00545e30(param_1,param_2), iVar1 != 0 &&
             (iVar1 = FUN_00545e30(param_1,param_3), iVar1 != 0)))))) {
          iVar1 = FUN_00547aa0(param_1);
          bVar3 = iVar1 != 0;
          goto LAB_00545fca;
        }
      }
    }
    else {
      iVar2 = FUN_00545e30(param_1,param_2);
      if (((iVar2 != 0) && (iVar2 = FUN_00545e30(param_1,param_3), iVar2 != 0)) &&
         (iVar2 = FUN_005472e0(param_1,&local_70), iVar2 != 0)) goto LAB_00546010;
    }
  }
  bVar3 = false;
LAB_00545fca:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return bVar3;
}


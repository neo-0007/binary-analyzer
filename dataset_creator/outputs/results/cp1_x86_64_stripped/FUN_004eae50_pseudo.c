
long FUN_004eae50(undefined8 *param_1,long *param_2)

{
  int iVar1;
  long lVar2;
  long in_FS_OFFSET;
  long local_70;
  undefined1 local_68 [56];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 == (long *)0x0) {
    iVar1 = FUN_00547090(local_68,0);
joined_r0x004eaf91:
    if (iVar1 != 0) {
      lVar2 = 0;
LAB_004eaeaa:
      iVar1 = FUN_00545f40(local_68,*param_1,param_1[1]);
      if ((iVar1 == 0) ||
         ((iVar1 = FUN_005472b0(local_68,&local_70), iVar1 == 0 ||
          (iVar1 = FUN_00547ad0(local_68), iVar1 == 0)))) {
        FUN_004c4ff0(lVar2);
        FUN_00547da0(local_68);
        local_70 = 0xffffffff;
      }
      else if (param_2 != (long *)0x0) {
        if (*param_2 == 0) {
          *param_2 = *(long *)(lVar2 + 8);
          *(undefined8 *)(lVar2 + 8) = 0;
          FUN_004c4ff0(lVar2);
        }
        else {
          *param_2 = *param_2 + local_70;
        }
      }
      goto LAB_004eaeff;
    }
  }
  else {
    if (*param_2 != 0) {
      iVar1 = FUN_00547570(local_68,*param_2,0xffffffffffffffff,0);
      goto joined_r0x004eaf91;
    }
    lVar2 = FUN_004c4f60();
    if ((lVar2 != 0) && (iVar1 = FUN_005475e0(local_68,lVar2,0), iVar1 != 0)) goto LAB_004eaeaa;
    FUN_004c4ff0(lVar2);
  }
  local_70 = 0xffffffff;
LAB_004eaeff:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_70;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}


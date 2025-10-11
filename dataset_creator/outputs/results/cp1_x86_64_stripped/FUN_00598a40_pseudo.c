
undefined8 FUN_00598a40(undefined8 param_1,undefined8 *param_2,long param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  undefined4 local_38;
  undefined1 local_34 [4];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = FUN_004ae9e0(param_1,"%*sSignature Algorithm: ",4,&DAT_0083e5c2);
  if (iVar1 < 1) {
LAB_00598b38:
    uVar3 = 0;
  }
  else {
    iVar1 = FUN_004a0450(param_1,*param_2);
    if (iVar1 < 1) goto LAB_00598b38;
    if (param_3 != 0) {
      iVar1 = FUN_004ae9e0(param_1,"\n%*sSignature Value:",4,&DAT_0083e5c2);
      if (iVar1 < 1) goto LAB_00598b38;
    }
    iVar1 = FUN_00423da0(*param_2);
    if (iVar1 == 0) {
LAB_00598b18:
      uVar3 = FUN_004ab7e0(param_1,&DAT_008243ea,1);
      if ((int)uVar3 != 1) goto LAB_00598b38;
      if (param_3 != 0) {
        if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
          uVar3 = FUN_00598950(param_1,param_3,8);
          return uVar3;
        }
        goto LAB_00598b90;
      }
    }
    else {
      iVar1 = FUN_00424c50(iVar1,local_34,&local_38);
      if (iVar1 == 0) goto LAB_00598b18;
      lVar2 = FUN_004a1430(0,local_38);
      if ((lVar2 == 0) || (*(code **)(lVar2 + 0xa0) == (code *)0x0)) goto LAB_00598b18;
      uVar3 = (**(code **)(lVar2 + 0xa0))(param_1,param_2,param_3,8,0);
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
LAB_00598b90:
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}



long __dynamic_cast(long *param_1,undefined8 param_2,long *param_3,long param_4)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  long *plVar4;
  long in_FS_OFFSET;
  long local_48;
  undefined8 local_40;
  undefined8 local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 != (long *)0x0) {
    plVar4 = (long *)(*(long *)(*param_1 + -0x10) + (long)param_1);
    plVar1 = *(long **)(*param_1 + -8);
    local_48 = 0;
    local_38 = 0x1000000000;
    local_40 = 0;
    if ((*(long **)(*plVar4 + -8) == plVar1) &&
       ((**(code **)(*plVar1 + 0x38))(plVar1,param_4,6,param_3,plVar4,param_2,param_1,&local_48),
       local_48 != 0)) {
      lVar3 = local_48;
      if (((uint)local_38 & 6) == 6) goto LAB_006abbd0;
      if (((uint)local_40 & local_40._4_4_ & 6) == 6) goto LAB_006abbd0;
      if (((local_40._4_4_ & 5) != 4) && ((uint)local_38 == 0)) {
        if (param_4 < 0) {
          if (param_4 != -2) {
            uVar2 = (**(code **)(*param_3 + 0x40))(param_3,param_4,local_48,param_2,param_1);
            local_38 = CONCAT44(local_38._4_4_,uVar2);
            lVar3 = local_48;
            if ((uVar2 & 6) == 6) goto LAB_006abbd0;
          }
        }
        else if (param_1 == (long *)(local_48 + param_4)) goto LAB_006abbd0;
      }
    }
  }
  lVar3 = 0;
LAB_006abbd0:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return lVar3;
}


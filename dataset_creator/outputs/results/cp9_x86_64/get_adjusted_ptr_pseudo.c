
/* get_adjusted_ptr(std::type_info const*, std::type_info const*, void**) */

void get_adjusted_ptr(type_info *param_1,type_info *param_2,void **param_3)

{
  char cVar1;
  long in_FS_OFFSET;
  undefined8 *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = (undefined8 *)*param_3;
  cVar1 = (**(code **)(*(long *)param_2 + 0x10))(param_2);
  if (cVar1 != '\0') {
    local_28 = (undefined8 *)*local_28;
  }
  cVar1 = (**(code **)(*(long *)param_1 + 0x20))(param_1,param_2,&local_28,1);
  if (cVar1 != '\0') {
    *param_3 = local_28;
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}


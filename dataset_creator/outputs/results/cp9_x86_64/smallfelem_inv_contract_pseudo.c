
void smallfelem_inv_contract(undefined8 param_1,undefined8 *param_2)

{
  long in_FS_OFFSET;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_68 = *param_2;
  local_60 = 0;
  local_50 = 0;
  local_40 = 0;
  local_30 = 0;
  local_58 = param_2[1];
  local_48 = param_2[2];
  local_38 = param_2[3];
  felem_inv(&local_68,&local_68);
  felem_contract(param_1,&local_68);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}


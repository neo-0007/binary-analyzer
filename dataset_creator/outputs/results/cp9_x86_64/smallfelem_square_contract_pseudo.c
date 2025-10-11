
void smallfelem_square_contract(undefined8 param_1)

{
  long in_FS_OFFSET;
  long local_e8;
  long local_e0;
  undefined8 local_d8;
  long local_d0;
  long local_c8;
  long local_c0;
  long local_b8;
  long local_b0;
  ulong local_a8;
  long local_a0;
  undefined8 local_98;
  long local_90;
  ulong local_88;
  long local_80;
  ulong local_78;
  long local_70;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  smallfelem_square(&local_a8);
  local_e8 = local_a8 - 0x1000000010;
  local_e0 = local_a0 + 0xfffffffff + (ulong)(0x100000000f < local_a8);
  local_d0 = local_90 + 0x1000000000;
  local_d8 = local_98;
  local_c8 = local_88 - 0xffffffff0;
  local_c0 = local_80 + 0xfffffffff + (ulong)(0xfffffffef < local_88);
  local_b8 = local_78 - 0xffffffff0;
  local_b0 = local_70 + 0xfffffffff + (ulong)(0xfffffffef < local_78);
  felem_reduce_(&local_e8,&local_a8);
  felem_contract(param_1,&local_e8);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}


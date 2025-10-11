
undefined8
prov_tls13_hkdf_expand
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8,undefined8 param_9,
          undefined8 param_10,undefined8 param_11)

{
  int iVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined8 local_890;
  undefined1 local_888 [64];
  undefined1 local_848 [2056];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = WPACKET_init_static_len(local_888,local_848,0x800,0);
  if (iVar1 != 0) {
    iVar1 = WPACKET_put_bytes__(local_888,(undefined4)param_11,2);
    if (iVar1 != 0) {
      iVar1 = WPACKET_start_sub_packet_len__(local_888,1);
      if (iVar1 != 0) {
        iVar1 = WPACKET_memcpy(local_888,param_4,param_5);
        if (iVar1 != 0) {
          iVar1 = WPACKET_memcpy(local_888,param_6,param_7);
          if (iVar1 != 0) {
            iVar1 = WPACKET_close(local_888);
            if (iVar1 != 0) {
              uVar2 = 0;
              if (param_8 != 0) {
                uVar2 = param_9;
              }
              iVar1 = WPACKET_sub_memcpy__(local_888,param_8,uVar2,1);
              if (iVar1 != 0) {
                iVar1 = WPACKET_get_total_written(local_888,&local_890);
                if (iVar1 != 0) {
                  iVar1 = WPACKET_finish(local_888);
                  if (iVar1 != 0) {
                    uVar2 = HKDF_Expand(param_1,param_2,param_3,local_848,local_890,param_10,
                                        param_11);
                    goto LAB_00464892;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  WPACKET_cleanup(local_888);
  uVar2 = 0;
LAB_00464892:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}


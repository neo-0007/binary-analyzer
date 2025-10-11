
byte check_suite_b(long param_1,int param_2,ulong *param_3)

{
  byte bVar1;
  int iVar2;
  long in_FS_OFFSET;
  undefined1 local_90 [8];
  char local_88 [88];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 != 0) {
    iVar2 = EVP_PKEY_is_a(param_1,&DAT_00826350);
    if (iVar2 != 0) {
      iVar2 = EVP_PKEY_get_group_name(param_1,local_88,0x50,local_90);
      if (iVar2 != 0) {
        iVar2 = OBJ_txt2nid(local_88);
        if (iVar2 == 0x2cb) {
          if ((param_2 == -1) || (bVar1 = 0x3b, param_2 == 0x31b)) {
            bVar1 = 0x3c;
            if ((*param_3 & 0x20000) != 0) {
              bVar1 = 0;
              *param_3 = *param_3 & 0xfffffffffffeffff;
            }
          }
          goto LAB_0058b3d5;
        }
        if (iVar2 == 0x19f) {
          if ((param_2 == -1) || (bVar1 = 0x3b, param_2 == 0x31a)) {
            bVar1 = -((*param_3 & 0x10000) == 0) & 0x3c;
          }
          goto LAB_0058b3d5;
        }
      }
      bVar1 = 0x3a;
      goto LAB_0058b3d5;
    }
  }
  bVar1 = 0x39;
LAB_0058b3d5:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

